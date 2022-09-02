/* Copyright Statement:
 *
 * (C) 2005-2016  MediaTek Inc. All rights reserved.
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. ("MediaTek") and/or its licensors.
 * Without the prior written permission of MediaTek and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 * You may only use, reproduce, modify, or distribute (as applicable) MediaTek Software
 * if you have agreed to and been bound by the applicable license agreement with
 * MediaTek ("License Agreement") and been granted explicit permission to do so within
 * the License Agreement ("Permitted User").  If you are not a Permitted User,
 * please cease any access or use of MediaTek Software immediately.
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT MEDIATEK SOFTWARE RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES
 * ARE PROVIDED TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tfm_cli.h"
#include "tfm_ns_interface_iotsdk_init.h"
#include "tfm_platform_api.h"
#include "services/include/tfm_ioctl_api.h"
#include "test_framework_integ_test.h"
#include "tfm_secure_client_service_api.h"
#include "cmsis_gcc.h"
#include "mtk_ci_test.h"

/*!
 * \brief Resets the system.
 *
 * \return Returns values as specified by the \ref tfm_platform_err_t
 */
static unsigned char sp_reset(uint8_t len, char *param[])
{
    tfm_platform_system_reset();
    return 0;
}
/*!
 * \io control the system.
 *
 * \return Returns values as specified by the \ref tfm_platform_err_t
 */
static unsigned char sp_basic(uint8_t len, char *param[])
{
    int32_t err;
    psa_invec in_vec;
    psa_outvec out_vec;
    tfm_basic_request_args_t args;
    tfm_basic_request_out_t result;

    args.type = TFM_PLATFORM_IOCTL_BASIC_REQUEST_TYPE_INIT;
    args.u.basic_config.data = 0x55aa7933;

    in_vec.base = (const void *)&args;
    in_vec.len = sizeof(args);

    out_vec.base = (void *)&result;
    out_vec.len = sizeof(result);

    err = tfm_platform_ioctl((tfm_platform_ioctl_req_t) TFM_PLATFORM_IOCTL_BASIC_REQUEST,
                             &in_vec,
                             &out_vec);
    if (err != TFM_PLATFORM_ERR_SUCCESS) {
        cli_puts("Call with invalid request should fail.");
    }
    return 0;
}

int tfm_log_printf(const char *fmt, ...)
{
    va_list ap;
    int count;

    va_start(ap, fmt);
    count = vprintf(fmt, ap);
    va_end(ap);

    return count;
}

#if !defined(MTK_RELEASE_MODE)
/*!
 * \test tfm service.
 *
 * \return Returns values as specified by the \ref tfm_platform_err_t
 */
static unsigned char tfm_service_test_s(uint8_t len, char *param[])
{
    cli_puts("TFM test service partition in secure world start.");
    return (unsigned char)tfm_secure_client_run_tests();
}
#endif /* if !defined(MTK_RELEASE_MODE) */

/*!
 * \test tfm service.
 *
 * \return Returns values as specified by the \ref tfm_platform_err_t
 */
static unsigned char tfm_service_test_ns(uint8_t len, char *param[])
{
    cli_puts("TFM service parition start from non-secure world.");
    return (unsigned char)tfm_non_secure_client_run_tests();
}

/*!
 * \test exception handle flow transition
 *
 * \return No return values, this test case expects to cause platform core dump
 */
static unsigned char tfm_excep_hdl_test(uint8_t len, char *param[])
{
    if(len == 1)
    {
        if(!strcmp(param[0], "non_bank"))
        {
            cli_puts("Non banked exception handler on TFM project test\n");
            __disable_irq();
            __asm volatile("udf #255");
        }
        else if(!strcmp(param[0], "bank"))
        {
            cli_puts("Banked exception handler on TFM project test\n");
            tfm_mtk_ci_tfm_excp_handl_test();
            cli_puts("Bad state!!!\n");
        }
    }

    cli_puts("Invalid parameter!!!\n");

    return 0;
}

/*!
 * \check platform isolation configurations are expected
 *
 * \return the check result
 */
static unsigned char tfm_platform_isolation_test(uint8_t len, char *param[])
{
    cli_puts("Platform isolation test on TFM project\n");

    int32_t ret = 0;

    ret = tfm_mtk_ci_plat_iso_test();
    if(ret)
    {
        cli_puts("TFM platform isolation test fail\n");
    }
    else
    {
        cli_puts("TFM platform isolation test pass\n");
    }

    return 0;
}

cmd_t sp_cli_cmds[] = {
    { "reset", "sp reset", sp_reset, NULL },
    { "basic", "basic", sp_basic, NULL },
    { NULL, NULL, NULL, NULL }
};

cmd_t tfm_cli_cmds[] = {
	{ "sp", "sp cli commands", NULL, sp_cli_cmds},
#if !defined(MTK_RELEASE_MODE)
	{ "test_s", "test service partition in secure", tfm_service_test_s, NULL},
#endif /* if !defined(MTK_RELEASE_MODE) */
	{ "test_ns", "test service partition from non-secure", tfm_service_test_ns, NULL},
	{ "test_exp_hdl", "exception handler test for CI", tfm_excep_hdl_test, NULL},
	{ "test_plt_iso", "platform isolation check test for CI", tfm_platform_isolation_test, NULL},
    { NULL, NULL, NULL, NULL }
};
