/* Copyright Statement:
 *
 * (C) 2005-2020  MediaTek Inc. All rights reserved.
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

#ifndef __HAL_PINMUX_DEFINE_H__

#define __HAL_PINMUX_DEFINE_H__

#include "hal_platform.h"

#ifdef __cplusplus
extern "C" {
#endif /* #ifdef __cplusplus */

#ifdef HAL_GPIO_MODULE_ENABLED



#define MT7933_PIN_0_FUNC_GPIO0  0
#define MT7933_PIN_0_FUNC_SF_QPI_CK_1  1
#define MT7933_PIN_0_FUNC_SF_QPI_CK_2  2
#define MT7933_PIN_0_FUNC_SF_QPI_CK_3  3
#define MT7933_PIN_0_FUNC_SF_QPI_CK_4  4
#define MT7933_PIN_0_FUNC_SF_QPI_CK_5  5
#define MT7933_PIN_0_FUNC_SF_QPI_CK_6  6
#define MT7933_PIN_0_FUNC_SF_QPI_CK_7  7

#define MT7933_PIN_1_FUNC_GPIO1  0
#define MT7933_PIN_1_FUNC_SF_QPI_CS_1  1
#define MT7933_PIN_1_FUNC_SF_QPI_CS_2  2
#define MT7933_PIN_1_FUNC_SF_QPI_CS_3  3
#define MT7933_PIN_1_FUNC_SF_QPI_CS_4  4
#define MT7933_PIN_1_FUNC_SF_QPI_CS_5  5
#define MT7933_PIN_1_FUNC_SF_QPI_CS_6  6
#define MT7933_PIN_1_FUNC_SF_QPI_CS_7  7

#define MT7933_PIN_2_FUNC_GPIO2  0
#define MT7933_PIN_2_FUNC_SF_QPI_D0_1  1
#define MT7933_PIN_2_FUNC_SF_QPI_D0_2  2
#define MT7933_PIN_2_FUNC_SF_QPI_D0_3  3
#define MT7933_PIN_2_FUNC_SF_QPI_D0_4  4
#define MT7933_PIN_2_FUNC_SF_QPI_D0_5  5
#define MT7933_PIN_2_FUNC_SF_QPI_D0_6  6
#define MT7933_PIN_2_FUNC_SF_QPI_D0_7  7

#define MT7933_PIN_3_FUNC_GPIO3  0
#define MT7933_PIN_3_FUNC_SF_QPI_D1_1  1
#define MT7933_PIN_3_FUNC_SF_QPI_D1_2  2
#define MT7933_PIN_3_FUNC_SF_QPI_D1_3  3
#define MT7933_PIN_3_FUNC_SF_QPI_D1_4  4
#define MT7933_PIN_3_FUNC_SF_QPI_D1_5  5
#define MT7933_PIN_3_FUNC_SF_QPI_D1_6  6
#define MT7933_PIN_3_FUNC_SF_QPI_D1_7  7

#define MT7933_PIN_4_FUNC_GPIO4  0
#define MT7933_PIN_4_FUNC_SF_QPI_D2_1  1
#define MT7933_PIN_4_FUNC_SF_QPI_D2_2  2
#define MT7933_PIN_4_FUNC_SF_QPI_D2_3  3
#define MT7933_PIN_4_FUNC_SF_QPI_D2_4  4
#define MT7933_PIN_4_FUNC_SF_QPI_D2_5  5
#define MT7933_PIN_4_FUNC_SF_QPI_D2_6  6
#define MT7933_PIN_4_FUNC_SF_QPI_D2_7  7

#define MT7933_PIN_5_FUNC_GPIO5  0
#define MT7933_PIN_5_FUNC_SF_QPI_D3_1  1
#define MT7933_PIN_5_FUNC_SF_QPI_D3_2  2
#define MT7933_PIN_5_FUNC_SF_QPI_D3_3  3
#define MT7933_PIN_5_FUNC_SF_QPI_D3_4  4
#define MT7933_PIN_5_FUNC_SF_QPI_D3_5  5
#define MT7933_PIN_5_FUNC_SF_QPI_D3_6  6
#define MT7933_PIN_5_FUNC_SF_QPI_D3_7  7

#define MT7933_PIN_6_FUNC_GPIO6  0
#define MT7933_PIN_6_FUNC_SDIO_CLK  1
#define MT7933_PIN_6_FUNC_MSDC0_CLK  2
#define MT7933_PIN_6_FUNC_SPIM0_SCK  3
#define MT7933_PIN_6_FUNC_CM33_GPIO_EINT0  4
#define MT7933_PIN_6_FUNC_DEBUG_0  5
#define MT7933_PIN_6_FUNC_ANT_SEL0  6
#define MT7933_PIN_6_FUNC_BGF_EINT_10_B  7

#define MT7933_PIN_7_FUNC_GPIO7  0
#define MT7933_PIN_7_FUNC_SDIO_CMD  1
#define MT7933_PIN_7_FUNC_MSDC0_CMD  2
#define MT7933_PIN_7_FUNC_SPIM0_CS_N  3
#define MT7933_PIN_7_FUNC_CM33_GPIO_EINT1  4
#define MT7933_PIN_7_FUNC_DEBUG_1  5
#define MT7933_PIN_7_FUNC_ANT_SEL1  6
#define MT7933_PIN_7_FUNC_PINMUX_EXT_INT_N_IN  7

#define MT7933_PIN_8_FUNC_GPIO8  0
#define MT7933_PIN_8_FUNC_SDIO_DAT0  1
#define MT7933_PIN_8_FUNC_MSDC0_DATA0  2
#define MT7933_PIN_8_FUNC_SPIM0_MISO  3
#define MT7933_PIN_8_FUNC_UART0_RTS  4
#define MT7933_PIN_8_FUNC_DEBUG_2  5
#define MT7933_PIN_8_FUNC_ANT_SEL2  6
#define MT7933_PIN_8_FUNC_CM33_GPIO_EINT0  7

#define MT7933_PIN_9_FUNC_GPIO9  0
#define MT7933_PIN_9_FUNC_SDIO_DAT1  1
#define MT7933_PIN_9_FUNC_MSDC0_DATA1  2
#define MT7933_PIN_9_FUNC_SPIM0_MOSI  3
#define MT7933_PIN_9_FUNC_UART0_CTS  4
#define MT7933_PIN_9_FUNC_DEBUG_3  5
#define MT7933_PIN_9_FUNC_ANT_SEL3  6
#define MT7933_PIN_9_FUNC_CM33_GPIO_EINT1  7

#define MT7933_PIN_10_FUNC_GPIO10  0
#define MT7933_PIN_10_FUNC_SDIO_DAT2  1
#define MT7933_PIN_10_FUNC_MSDC0_DATA2  2
#define MT7933_PIN_10_FUNC_I2SIN_DAT0  3
#define MT7933_PIN_10_FUNC_UART0_RX  4
#define MT7933_PIN_10_FUNC_DEBUG_4  5
#define MT7933_PIN_10_FUNC_I2C0_SCL  6
#define MT7933_PIN_10_FUNC_CM33_GPIO_EINT2  7

#define MT7933_PIN_11_FUNC_GPIO11  0
#define MT7933_PIN_11_FUNC_SDIO_DAT3  1
#define MT7933_PIN_11_FUNC_MSDC0_DATA3  2
#define MT7933_PIN_11_FUNC_I2SO_DAT0  3
#define MT7933_PIN_11_FUNC_UART0_TX  4
#define MT7933_PIN_11_FUNC_DEBUG_5  5
#define MT7933_PIN_11_FUNC_I2C0_SDA  6
#define MT7933_PIN_11_FUNC_CM33_GPIO_EINT3  7

#define MT7933_PIN_12_FUNC_GPIO12  0
#define MT7933_PIN_12_FUNC_CONN_BGF_UART0_TXD  1
#define MT7933_PIN_12_FUNC_MSDC0_RST  2
#define MT7933_PIN_12_FUNC_CONN_BT_TXD  3
#define MT7933_PIN_12_FUNC_WIFI_TXD  4
#define MT7933_PIN_12_FUNC_DEBUG_6  5
#define MT7933_PIN_12_FUNC_ANT_SEL3  6
#define MT7933_PIN_12_FUNC_CM33_GPIO_EINT4  7

#define MT7933_PIN_13_FUNC_GPIO13  0
#define MT7933_PIN_13_FUNC_USB_IDDIG  1
#define MT7933_PIN_13_FUNC_SPIM1_SCK  2
#define MT7933_PIN_13_FUNC_I2SO_BCK  3
#define MT7933_PIN_13_FUNC_UART1_RX  4
#define MT7933_PIN_13_FUNC_DEBUG_7  5
#define MT7933_PIN_13_FUNC_ANT_SEL4  6
#define MT7933_PIN_13_FUNC_CM33_GPIO_EINT5  7

#define MT7933_PIN_14_FUNC_GPIO14  0
#define MT7933_PIN_14_FUNC_USB_DRV_VBUS  1
#define MT7933_PIN_14_FUNC_SPIM1_MOSI  2
#define MT7933_PIN_14_FUNC_I2SO_LRCK  3
#define MT7933_PIN_14_FUNC_DEBUG_8  5
#define MT7933_PIN_14_FUNC_ANT_SEL5  6
#define MT7933_PIN_14_FUNC_CM33_GPIO_EINT6  7

#define MT7933_PIN_15_FUNC_GPIO15  0
#define MT7933_PIN_15_FUNC_USB_OC  1
#define MT7933_PIN_15_FUNC_SPIM1_MISO  2
#define MT7933_PIN_15_FUNC_I2SO_MCK  3
#define MT7933_PIN_15_FUNC_I2SIN_MCK  4
#define MT7933_PIN_15_FUNC_DEBUG_9  5
#define MT7933_PIN_15_FUNC_ANT_SEL6  6
#define MT7933_PIN_15_FUNC_CM33_GPIO_EINT7  7

#define MT7933_PIN_16_FUNC_GPIO16  0
#define MT7933_PIN_16_FUNC_USB_VBUS_VALID  1
#define MT7933_PIN_16_FUNC_SPIM1_CS_N  2
#define MT7933_PIN_16_FUNC_IR_IN  3
#define MT7933_PIN_16_FUNC_I2SIN_MCK  4
#define MT7933_PIN_16_FUNC_DEBUG_10  5
#define MT7933_PIN_16_FUNC_ANT_SEL7  6
#define MT7933_PIN_16_FUNC_CM33_GPIO_EINT8  7

#define MT7933_PIN_17_FUNC_GPIO17  0
#define MT7933_PIN_17_FUNC_CONN_BGF_UART0_RXD  1
#define MT7933_PIN_17_FUNC_UART0_RX  2
#define MT7933_PIN_17_FUNC_TDMIN_MCLK  3
#define MT7933_PIN_17_FUNC_DMIC_CLK0  4
#define MT7933_PIN_17_FUNC_DEBUG_11  5
#define MT7933_PIN_17_FUNC_ANT_SEL8  6
#define MT7933_PIN_17_FUNC_CM33_GPIO_EINT9  7

#define MT7933_PIN_18_FUNC_GPIO18  0
#define MT7933_PIN_18_FUNC_CONN_BT_TXD  1
#define MT7933_PIN_18_FUNC_UART0_TX  2
#define MT7933_PIN_18_FUNC_TDMIN_BCK  3
#define MT7933_PIN_18_FUNC_DMIC_DAT0  4
#define MT7933_PIN_18_FUNC_UART1_RX  5
#define MT7933_PIN_18_FUNC_IR_IN  6
#define MT7933_PIN_18_FUNC_CM33_GPIO_EINT10  7

#define MT7933_PIN_19_FUNC_GPIO19  0
#define MT7933_PIN_19_FUNC_WIFI_TXD  1
#define MT7933_PIN_19_FUNC_UART0_RTS  2
#define MT7933_PIN_19_FUNC_I2C1_SDA  3
#define MT7933_PIN_19_FUNC_I2SIN_LRCK  4
#define MT7933_PIN_19_FUNC_UART1_TX  5
#define MT7933_PIN_19_FUNC_PTA_EXT_IF_FREQ  6
#define MT7933_PIN_19_FUNC_CM33_GPIO_EINT11  7

#define MT7933_PIN_20_FUNC_GPIO20  0
#define MT7933_PIN_20_FUNC_CONN_WF_MCU_AICE_TCKC  1
#define MT7933_PIN_20_FUNC_UART0_CTS  2
#define MT7933_PIN_20_FUNC_I2C1_SCL  3
#define MT7933_PIN_20_FUNC_I2SIN_BCK  4
#define MT7933_PIN_20_FUNC_DEBUG_12  5
#define MT7933_PIN_20_FUNC_PTA_EXT_IF_ACT  6
#define MT7933_PIN_20_FUNC_CM33_GPIO_EINT12  7

#define MT7933_PIN_21_FUNC_GPIO21  0
#define MT7933_PIN_21_FUNC_CONN_WF_MCU_AICE_TMSC  1
#define MT7933_PIN_21_FUNC_PTA_EXT_IF_PRI  2
#define MT7933_PIN_21_FUNC_TDMIN_LRCK  3
#define MT7933_PIN_21_FUNC_DMIC_DAT1  4
#define MT7933_PIN_21_FUNC_DEBUG_13  5
#define MT7933_PIN_21_FUNC_ANT_SEL9  6
#define MT7933_PIN_21_FUNC_CM33_GPIO_EINT13  7

#define MT7933_PIN_22_FUNC_GPIO22  0
#define MT7933_PIN_22_FUNC_CONN_BGF_MCU_AICE_TCKC  1
#define MT7933_PIN_22_FUNC_PTA_EXT_IF_WLAN_ACT  2
#define MT7933_PIN_22_FUNC_TDMIN_DI  3
#define MT7933_PIN_22_FUNC_DMIC_DAT2  4
#define MT7933_PIN_22_FUNC_DEBUG_14  5
#define MT7933_PIN_22_FUNC_ANT_SEL10  6
#define MT7933_PIN_22_FUNC_CM33_GPIO_EINT14  7

#define MT7933_PIN_23_FUNC_GPIO23  0
#define MT7933_PIN_23_FUNC_CONN_BGF_MCU_AICE_TMSC  1
#define MT7933_PIN_23_FUNC_DSP_URXD0  2
#define MT7933_PIN_23_FUNC_I2C0_SDA  3
#define MT7933_PIN_23_FUNC_DMIC_DAT3  4
#define MT7933_PIN_23_FUNC_DEBUG_15  5
#define MT7933_PIN_23_FUNC_ANT_SEL11  6
#define MT7933_PIN_23_FUNC_CM33_GPIO_EINT15  7

#define MT7933_PIN_24_FUNC_GPIO24  0
#define MT7933_PIN_24_FUNC_ADSP_JTAG_TDO  1
#define MT7933_PIN_24_FUNC_DSP_UTXD0  2
#define MT7933_PIN_24_FUNC_I2C0_SCL  3
#define MT7933_PIN_24_FUNC_DMIC_CLK1  4
#define MT7933_PIN_24_FUNC_CM33_UART_TX  5
#define MT7933_PIN_24_FUNC_ANT_SEL12  6
#define MT7933_PIN_24_FUNC_CM33_GPIO_EINT16  7

#define MT7933_PIN_25_FUNC_GPIO25  0
#define MT7933_PIN_25_FUNC_ADSP_JTAG_TCK  1
#define MT7933_PIN_25_FUNC_CM33_UART_RX  2
#define MT7933_PIN_25_FUNC_UART0_RX  3
#define MT7933_PIN_25_FUNC_SPIM0_SCK  4
#define MT7933_PIN_25_FUNC_UART1_RX  6
#define MT7933_PIN_25_FUNC_SPIS_SCK  7

#define MT7933_PIN_26_FUNC_GPIO26  0
#define MT7933_PIN_26_FUNC_ADSP_JTAG_TRST  1
#define MT7933_PIN_26_FUNC_CM33_UART_TX  2
#define MT7933_PIN_26_FUNC_UART0_TX  3
#define MT7933_PIN_26_FUNC_SPIM0_CS_N  4
#define MT7933_PIN_26_FUNC_UART1_TX  6
#define MT7933_PIN_26_FUNC_SPIS_CS_N  7

#define MT7933_PIN_27_FUNC_GPIO27  0
#define MT7933_PIN_27_FUNC_ADSP_JTAG_TDI  1
#define MT7933_PIN_27_FUNC_CM33_UART_RTS  2
#define MT7933_PIN_27_FUNC_UART0_RTS  3
#define MT7933_PIN_27_FUNC_SPIM0_MISO  4
#define MT7933_PIN_27_FUNC_UART1_RTS  6
#define MT7933_PIN_27_FUNC_SPIS_MOSI  7

#define MT7933_PIN_28_FUNC_GPIO28  0
#define MT7933_PIN_28_FUNC_ADSP_JTAG_TMS  1
#define MT7933_PIN_28_FUNC_CM33_UART_CTS  2
#define MT7933_PIN_28_FUNC_UART0_CTS  3
#define MT7933_PIN_28_FUNC_SPIM0_MOSI  4
#define MT7933_PIN_28_FUNC_SPIS_MSIO  5
#define MT7933_PIN_28_FUNC_UART1_CTS  6
#define MT7933_PIN_28_FUNC_CM33_GPIO_EINT20  7

#define MT7933_PIN_29_FUNC_GPIO29  0
#define MT7933_PIN_29_FUNC_DSP_URXD0  1
#define MT7933_PIN_29_FUNC_ADSP_JTAG_TDO  2
#define MT7933_PIN_29_FUNC_PWM_0  3
#define MT7933_PIN_29_FUNC_PTA_EXT_IF_PRI  4
#define MT7933_PIN_29_FUNC_CONN_WF_MCU_TDO  5
#define MT7933_PIN_29_FUNC_CM33_SWCLK_TCLK  6
#define MT7933_PIN_29_FUNC_CM33_GPIO_EINT21  7

#define MT7933_PIN_30_FUNC_GPIO30  0
#define MT7933_PIN_30_FUNC_DSP_UTXD0  1
#define MT7933_PIN_30_FUNC_ADSP_JTAG_TCK  2
#define MT7933_PIN_30_FUNC_PWM_1  3
#define MT7933_PIN_30_FUNC_PTA_EXT_IF_WLAN_ACT  4
#define MT7933_PIN_30_FUNC_CONN_WF_MCU_TCK  5
#define MT7933_PIN_30_FUNC_CM33_SWDIO_TMS  6
#define MT7933_PIN_30_FUNC_CM33_GPIO_EINT22  7

#define MT7933_PIN_31_FUNC_GPIO31  0
#define MT7933_PIN_31_FUNC_USB_DRV_VBUS  1
#define MT7933_PIN_31_FUNC_ADSP_JTAG_TRST  2
#define MT7933_PIN_31_FUNC_PWM_2  3
#define MT7933_PIN_31_FUNC_PTA_EXT_IF_FREQ  4
#define MT7933_PIN_31_FUNC_CONN_WF_MCU_TDI  5
#define MT7933_PIN_31_FUNC_CM33_NTRST  6
#define MT7933_PIN_31_FUNC_CM33_GPIO_EINT23  7

#define MT7933_PIN_32_FUNC_GPIO32  0
#define MT7933_PIN_32_FUNC_USB_OC  1
#define MT7933_PIN_32_FUNC_ADSP_JTAG_TDI  2
#define MT7933_PIN_32_FUNC_PWM_3  3
#define MT7933_PIN_32_FUNC_PTA_EXT_IF_ACT  4
#define MT7933_PIN_32_FUNC_CONN_WF_MCU_TRST_B  5
#define MT7933_PIN_32_FUNC_CM33_TDI  6
#define MT7933_PIN_32_FUNC_CM33_GPIO_EINT24  7

#define MT7933_PIN_33_FUNC_GPIO33  0
#define MT7933_PIN_33_FUNC_USB_VBUS_VALID  1
#define MT7933_PIN_33_FUNC_ADSP_JTAG_TMS  2
#define MT7933_PIN_33_FUNC_PWM_4  3
#define MT7933_PIN_33_FUNC_I2C1_SDA  4
#define MT7933_PIN_33_FUNC_CONN_WF_MCU_TMS  5
#define MT7933_PIN_33_FUNC_CM33_TDO  6
#define MT7933_PIN_33_FUNC_CM33_GPIO_EINT25  7

#define MT7933_PIN_34_FUNC_GPIO34  0
#define MT7933_PIN_34_FUNC_USB_IDDIG  1
#define MT7933_PIN_34_FUNC_I2C0_SCL  2
#define MT7933_PIN_34_FUNC_PWM_5  3
#define MT7933_PIN_34_FUNC_I2C1_SCL  4
#define MT7933_PIN_34_FUNC_EXT_CK  5
#define MT7933_PIN_34_FUNC_DEBUG_0  6
#define MT7933_PIN_34_FUNC_CM33_GPIO_EINT26  7

#define MT7933_PIN_35_FUNC_GPIO35  0
#define MT7933_PIN_35_FUNC_UART0_TX  1
#define MT7933_PIN_35_FUNC_CM33_UART_RTS  2
#define MT7933_PIN_35_FUNC_PWM_6  3
#define MT7933_PIN_35_FUNC_PWM_2  4
#define MT7933_PIN_35_FUNC_CONN_BGF_MCU_TDO  5
#define MT7933_PIN_35_FUNC_DEBUG_1  6
#define MT7933_PIN_35_FUNC_CM33_GPIO_EINT27  7

#define MT7933_PIN_36_FUNC_GPIO36  0
#define MT7933_PIN_36_FUNC_DBSYS_NTRST  1
#define MT7933_PIN_36_FUNC_CM33_UART_CTS  2
#define MT7933_PIN_36_FUNC_PWM_7  3
#define MT7933_PIN_36_FUNC_PWM_3  4
#define MT7933_PIN_36_FUNC_CONN_BGF_MCU_TCK  5
#define MT7933_PIN_36_FUNC_DEBUG_2  6
#define MT7933_PIN_36_FUNC_CM33_GPIO_EINT28  7

#define MT7933_PIN_37_FUNC_GPIO37  0
#define MT7933_PIN_37_FUNC_DBSYS_SWCLK_TCLK  1
#define MT7933_PIN_37_FUNC_I2C1_SDA  2
#define MT7933_PIN_37_FUNC_PWM_8  3
#define MT7933_PIN_37_FUNC_I2C0_SDA  4
#define MT7933_PIN_37_FUNC_CONN_BGF_MCU_TDI  5
#define MT7933_PIN_37_FUNC_DEBUG_3  6
#define MT7933_PIN_37_FUNC_CM33_GPIO_EINT29  7

#define MT7933_PIN_38_FUNC_GPIO38  0
#define MT7933_PIN_38_FUNC_DBSYS_TDI  1
#define MT7933_PIN_38_FUNC_CM33_UART_TX  2
#define MT7933_PIN_38_FUNC_PWM_9  3
#define MT7933_PIN_38_FUNC_I2C0_SCL  4
#define MT7933_PIN_38_FUNC_CONN_BGF_MCU_TRST_B  5
#define MT7933_PIN_38_FUNC_I2C1_SCL  6
#define MT7933_PIN_38_FUNC_CM33_GPIO_EINT30  7

#define MT7933_PIN_39_FUNC_GPIO39  0
#define MT7933_PIN_39_FUNC_DBSYS_SWDIO_TMS  1
#define MT7933_PIN_39_FUNC_I2C0_SDA  2
#define MT7933_PIN_39_FUNC_PWM_10  3
#define MT7933_PIN_39_FUNC_DSP_URXD0  4
#define MT7933_PIN_39_FUNC_CONN_BGF_MCU_TMS  5
#define MT7933_PIN_39_FUNC_ANT_SEL0  6
#define MT7933_PIN_39_FUNC_BGF_EINT_10_B  7

#define MT7933_PIN_40_FUNC_GPIO40  0
#define MT7933_PIN_40_FUNC_DBSYS_TDO  1
#define MT7933_PIN_40_FUNC_CM33_UART_RX  2
#define MT7933_PIN_40_FUNC_PWM_11  3
#define MT7933_PIN_40_FUNC_DSP_UTXD0  4
#define MT7933_PIN_40_FUNC_UART0_RX  5
#define MT7933_PIN_40_FUNC_ANT_SEL1  6
#define MT7933_PIN_40_FUNC_PINMUX_EXT_INT_N_IN  7

#define MT7933_PIN_41_FUNC_GPIO41  0
#define MT7933_PIN_41_FUNC_CM33_NTRST  1
#define MT7933_PIN_41_FUNC_DBSYS_NTRST  2
#define MT7933_PIN_41_FUNC_I2C0_SDA  3
#define MT7933_PIN_41_FUNC_CONN_BGF_UART0_RXD  4
#define MT7933_PIN_41_FUNC_I2C1_SDA  5
#define MT7933_PIN_41_FUNC_ANT_SEL2  6
#define MT7933_PIN_41_FUNC_CM33_GPIO_EINT0  7

#define MT7933_PIN_42_FUNC_GPIO42  0
#define MT7933_PIN_42_FUNC_CM33_SWCLK_TCLK  1
#define MT7933_PIN_42_FUNC_DBSYS_SWCLK_TCLK  2
#define MT7933_PIN_42_FUNC_UART1_RX  3
#define MT7933_PIN_42_FUNC_UART0_RX  4
#define MT7933_PIN_42_FUNC_DSP_URXD0  5
#define MT7933_PIN_42_FUNC_ANT_SEL3  6
#define MT7933_PIN_42_FUNC_CM33_GPIO_EINT1  7

#define MT7933_PIN_43_FUNC_GPIO43  0
#define MT7933_PIN_43_FUNC_CM33_TDI  1
#define MT7933_PIN_43_FUNC_DBSYS_TDI  2
#define MT7933_PIN_43_FUNC_I2C0_SCL  3
#define MT7933_PIN_43_FUNC_CONN_BGF_UART0_TXD  4
#define MT7933_PIN_43_FUNC_I2C1_SCL  5
#define MT7933_PIN_43_FUNC_ANT_SEL4  6
#define MT7933_PIN_43_FUNC_CM33_GPIO_EINT17  7

#define MT7933_PIN_44_FUNC_GPIO44  0
#define MT7933_PIN_44_FUNC_CM33_SWDIO_TMS  1
#define MT7933_PIN_44_FUNC_DBSYS_SWDIO_TMS  2
#define MT7933_PIN_44_FUNC_UART1_TX  3
#define MT7933_PIN_44_FUNC_UART0_TX  4
#define MT7933_PIN_44_FUNC_DSP_UTXD0  5
#define MT7933_PIN_44_FUNC_ANT_SEL5  6
#define MT7933_PIN_44_FUNC_CM33_GPIO_EINT18  7

#define MT7933_PIN_45_FUNC_GPIO45  0
#define MT7933_PIN_45_FUNC_CM33_TDO  1
#define MT7933_PIN_45_FUNC_DBSYS_TDO  2
#define MT7933_PIN_45_FUNC_I2C1_SDA  3
#define MT7933_PIN_45_FUNC_WIFI_TXD  4
#define MT7933_PIN_45_FUNC_PWM_0  5
#define MT7933_PIN_45_FUNC_ANT_SEL6  6
#define MT7933_PIN_45_FUNC_CM33_GPIO_EINT19  7

#define MT7933_PIN_46_FUNC_GPIO46  0
#define MT7933_PIN_46_FUNC_SPIM0_SCK  1
#define MT7933_PIN_46_FUNC_CM33_TRACE_CLK  2
#define MT7933_PIN_46_FUNC_I2C1_SCL  3
#define MT7933_PIN_46_FUNC_CONN_WF_MCU_AICE_TCKC  4
#define MT7933_PIN_46_FUNC_PWM_1  5
#define MT7933_PIN_46_FUNC_ANT_SEL7  6

#define MT7933_PIN_47_FUNC_GPIO47  0
#define MT7933_PIN_47_FUNC_SPIM0_CS_N  1
#define MT7933_PIN_47_FUNC_CM33_TRACE_D3  2
#define MT7933_PIN_47_FUNC_KEYPAD_KPROW_0  3
#define MT7933_PIN_47_FUNC_CONN_WF_MCU_AICE_TMSC  4
#define MT7933_PIN_47_FUNC_PWM_2  5
#define MT7933_PIN_47_FUNC_ANT_SEL8  6
#define MT7933_PIN_47_FUNC_CM33_GPIO_EINT2  7

#define MT7933_PIN_48_FUNC_GPIO48  0
#define MT7933_PIN_48_FUNC_CM33_UART_RX  1
#define MT7933_PIN_48_FUNC_CM33_TRACE_D2  2
#define MT7933_PIN_48_FUNC_KEYPAD_KPROW_1  3
#define MT7933_PIN_48_FUNC_DSP_URXD0  4
#define MT7933_PIN_48_FUNC_PWM_3  5
#define MT7933_PIN_48_FUNC_ANT_SEL9  6
#define MT7933_PIN_48_FUNC_AUDIO_DEBUG_IN_0  7

#define MT7933_PIN_49_FUNC_GPIO49  0
#define MT7933_PIN_49_FUNC_CM33_UART_TX  1
#define MT7933_PIN_49_FUNC_CM33_TRACE_D1  2
#define MT7933_PIN_49_FUNC_KEYPAD_KPROW_2  3
#define MT7933_PIN_49_FUNC_CONN_BT_TXD  4
#define MT7933_PIN_49_FUNC_PWM_4  5
#define MT7933_PIN_49_FUNC_ANT_SEL10  6
#define MT7933_PIN_49_FUNC_AUDIO_DEBUG_IN_1  7

#define MT7933_PIN_50_FUNC_GPIO50  0
#define MT7933_PIN_50_FUNC_CM33_UART_TX  1
#define MT7933_PIN_50_FUNC_CM33_TRACE_D0  2
#define MT7933_PIN_50_FUNC_KEYPAD_KPCOL_0  3
#define MT7933_PIN_50_FUNC_DSP_UTXD0  4
#define MT7933_PIN_50_FUNC_PWM_5  5
#define MT7933_PIN_50_FUNC_ANT_SEL11  6
#define MT7933_PIN_50_FUNC_AUDIO_DEBUG_IN_2  7

#define MT7933_PIN_51_FUNC_GPIO51  0
#define MT7933_PIN_51_FUNC_SPIM0_MISO  1
#define MT7933_PIN_51_FUNC_CM33_SWO  2
#define MT7933_PIN_51_FUNC_KEYPAD_KPCOL_1  3
#define MT7933_PIN_51_FUNC_CONN_BGF_MCU_AICE_TCKC  4
#define MT7933_PIN_51_FUNC_PWM_6  5
#define MT7933_PIN_51_FUNC_ANT_SEL12  6
#define MT7933_PIN_51_FUNC_AUDIO_DEBUG_IN_3  7

#define MT7933_PIN_52_FUNC_GPIO52  0
#define MT7933_PIN_52_FUNC_SPIM0_MOSI  1
#define MT7933_PIN_52_FUNC_CM33_UART_RX  2
#define MT7933_PIN_52_FUNC_KEYPAD_KPCOL_2  3
#define MT7933_PIN_52_FUNC_CONN_BGF_MCU_AICE_TMSC  4
#define MT7933_PIN_52_FUNC_PWM_7  5
#define MT7933_PIN_52_FUNC_UART1_TX 6
#define MT7933_PIN_52_FUNC_AUDIO_DEBUG_IN_4  7

#ifdef __cplusplus
}
#endif /* #ifdef __cplusplus */

#endif /* #ifdef HAL_GPIO_MODULE_ENABLED */

#endif /* #ifndef __HAL_PINMUX_DEFINE_H__ */

