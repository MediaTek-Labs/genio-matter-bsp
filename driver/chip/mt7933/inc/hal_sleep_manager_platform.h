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

#include "hal_platform.h"
#include "common.h"

#ifndef __HAL_SLEEP_MANAGER_PLATFORM_H__
#define __HAL_SLEEP_MANAGER_PLATFORM_H__

#ifdef HAL_SLEEP_MANAGER_ENABLED


/* Lock Sleep Handle ID : 0~27 */

typedef enum {
    SLEEP_LOCK_DEEP_SLEEP,
    SLEEP_LOCK_WFI,
    SLEEP_LOCK_CM33,
    SLEEP_LOCK_SFLASH,
    SLEEP_LOCK_DMA,
    SLEEP_LOCK_SPI_SLAVE,
    SLEEP_LOCK_SPI_MASTER,
    SLEEP_LOCK_ECC,
    SLEEP_LOCK_GCPU,
    SLEEP_LOCK_UART,
    SLEEP_LOCK_CONSOLE_UART,
    SLEEP_LOCK_ADC,
    SLEEP_LOCK_PWM,
    SLEEP_LOCK_I2C,
    SLEEP_LOCK_PSRAM,
    SLEEP_LOCK_AUDIO,
    SLEEP_LOCK_DSP,
    SLEEP_LOCK_WIFI,
    SLEEP_LOCK_BT,
    SLEEP_LOCK_SDIO,
    SLEEP_LOCK_MSDC,
    SLEEP_LOCK_USB,
    SLEEP_LOCK_KP_IRRX,
    SLEEP_LOCK_GPT,
    SLEEP_LOCK_USER_START_ID,
    SLEEP_LOCK_HANDLE_MAX = 28,
    SLEEP_LOCK_CONN_BUS = SLEEP_LOCK_HANDLE_MAX,   // this is a special lock only for return from hal_sleep_manager_get_lock_status()
    SLEEP_LOCK_INVALID_ID       = 0xFF
} sleep_management_lock_request_t;

#define  SLEEP_LOCK_HANDLE_USER_MAX     (SLEEP_LOCK_HANDLE_MAX-SLEEP_LOCK_USER_START_ID)
#define  SLEEP_HANDLE_NAME_LEN          11

// Except E1, all L1, L2 belongs to MCU power domain
#define SLEEP_LOCK_GROUP_FOR_PLATFORM   BIT(SLEEP_LOCK_CM33) | BIT(SLEEP_LOCK_SPI_MASTER) | BIT(SLEEP_LOCK_ADC) | BIT(SLEEP_LOCK_ECC) | \
                                        BIT(SLEEP_LOCK_GCPU) | BIT(SLEEP_LOCK_WIFI) | BIT(SLEEP_LOCK_BT) | BIT(SLEEP_LOCK_USB) | \
                                        BIT(SLEEP_LOCK_DMA) | BIT(SLEEP_LOCK_SFLASH) | BIT(SLEEP_LOCK_SPI_SLAVE) | \
                                        BIT(SLEEP_LOCK_I2C) | BIT(SLEEP_LOCK_PWM) | BIT(SLEEP_LOCK_UART) | BIT(SLEEP_LOCK_SDIO) | \
                                        BITS(SLEEP_LOCK_USER_START_ID, SLEEP_LOCK_HANDLE_MAX-1)

// The order of SYS_xxx shall follow the inverse sequence for RESTORE procedure
typedef enum {
    SLEEP_BACKUP_RESTORE_SYS_SYSRAM,
    SLEEP_BACKUP_RESTORE_SYS_FLASH,
    SLEEP_BACKUP_RESTORE_SYS_CACHE,
    SLEEP_BACKUP_RESTORE_SYS_CORE_CLOCK,
    SLEEP_BACKUP_RESTORE_SYS_CORE,
    SLEEP_BACKUP_RESTORE_SYS_PSRAM_SLP,
    SLEEP_BACKUP_RESTORE_SYS_CONNINFRA,
    SLEEP_BACKUP_RESTORE_SYS_CLOCK,
    SLEEP_BACKUP_RESTORE_SYS_SECURITY,
    SLEEP_BACKUP_RESTORE_SYS_MTCMOS,
    SLEEP_BACKUP_RESTORE_SYS_PSRAM,
    SLEEP_BACKUP_RESTORE_SYS_MAX,

    SLEEP_BACKUP_RESTORE_BEGIN = SLEEP_BACKUP_RESTORE_SYS_MAX,
    SLEEP_BACKUP_RESTORE_CONNINFRA = SLEEP_BACKUP_RESTORE_BEGIN,
    SLEEP_BACKUP_RESTORE_OS,
    SLEEP_BACKUP_RESTORE_WDT_MPU,
    SLEEP_BACKUP_RESTORE_GPIO,
    SLEEP_BACKUP_RESTORE_AUDIO,
    SLEEP_BACKUP_RESTORE_DSP,
    SLEEP_BACKUP_RESTORE_UART,
    SLEEP_BACKUP_RESTORE_I2C,
    SLEEP_BACKUP_RESTORE_PWM,
    SLEEP_BACKUP_RESTORE_BT,
    SLEEP_BACKUP_RESTORE_WIFI,
    SLEEP_BACKUP_RESTORE_SDIO,
    SLEEP_BACKUP_RESTORE_MSDC,
    SLEEP_BACKUP_RESTORE_USB,
    SLEEP_BACKUP_RESTORE_SPI_MASTER,
    SLEEP_BACKUP_RESTORE_SPI_SLAVE,
    SLEEP_BACKUP_RESTORE_IO_DEF,
    SLEEP_BACKUP_RESTORE_AUXADC,
    SLEEP_BACKUP_RESTORE_MODULE_MAX,

    SLEEP_BACKUP_RESTORE_USER = SLEEP_BACKUP_RESTORE_MODULE_MAX
} sleep_management_backup_restore_module_t;

#define SLEEP_BACKUP_RESTORE_USER_CALLBACK_MAX (3)

#define SLEEP_BACKUP_RESTORE_NUM_ENTRY (SLEEP_BACKUP_RESTORE_USER + SLEEP_BACKUP_RESTORE_USER_CALLBACK_MAX)

STATIC_ASSERT(SLEEP_BACKUP_RESTORE_NUM_ENTRY <= 32);

enum {
    MTCMOS_SRAM_STATE_DSP_0,           /* 0 */
    MTCMOS_SRAM_STATE_DSP_1,           /* 1 */
    MTCMOS_SRAM_STATE_DSP_2,           /* 2 */
    MTCMOS_SRAM_STATE_DSP_3,           /* 3 */
    MTCMOS_SRAM_STATE_DSP_POOL_0,      /* 4 */
    MTCMOS_SRAM_STATE_DSP_POOL_1,      /* 5 */
    MTCMOS_SRAM_STATE_DSP_POOL_2,      /* 6 */
    MTCMOS_SRAM_STATE_DSP_POOL_3,      /* 7 */
    MTCMOS_SRAM_STATE_AUDIO_0,         /* 8 */
    MTCMOS_SRAM_STATE_AUDIO_1,         /* 9 */
    MTCMOS_SRAM_STATE_AUDIO_2,         /* 10 */
    MTCMOS_SRAM_STATE_AUDIO_3,         /* 11 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_0,    /* 12 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_1,    /* 13 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_2,    /* 14 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_3,    /* 15 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_4,    /* 16 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_5,    /* 17 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_6,    /* 18 */
    MTCMOS_SRAM_STATE_TOP_SYSRAM_7,    /* 19 */
    MTCMOS_SRAM_STATE_SF_DMA_SPIS,     /* 20 */
    MTCMOS_SRAM_STATE_MSDC_ECC,        /* 21 */
    MTCMOS_SRAM_STATE_GCPU_0,          /* 22 */
    MTCMOS_SRAM_STATE_GCPU_1,          /* 23 */
    MTCMOS_SRAM_STATE_SDCTL,           /* 24 */
    MTCMOS_SRAM_STATE_UHS_PSRAM,       /* 25 */
    MTCMOS_SRAM_STATE_USB2,            /* 26 */
};

#define DEEP_SLEEP_GPT HAL_GPT_0

#endif /* #ifdef HAL_SLEEP_MANAGER_ENABLED */
#endif /* #ifndef __HAL_SLEEP_MANAGER_PLATFORM_H__ */

