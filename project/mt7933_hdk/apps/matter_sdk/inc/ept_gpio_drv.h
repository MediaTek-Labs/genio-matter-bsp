/*
 * Do Not Modify the File.
 */
/*****************************************************************************
*
* Filename:
* ---------
*    ***.*
*
* Project:
* --------
*
* Description:
* ------------
*
* Author:
* -------
*
*============================================================================
****************************************************************************/

#ifndef _EPT_GPIO_DRV_H
#define _EPT_GPIO_DRV_H

#define MODE_0  0
#define MODE_1  1
#define MODE_2  2
#define MODE_3  3
#define MODE_4  4
#define MODE_5  5
#define MODE_6  6
#define MODE_7  7
#define MODE_NC  0

#define PULL_ENABLE    1
#define PULL_DISABLE  0
#define DIR_INPUT       0
#define DIR_OUTPUT    1
#define GPIO_PORTNULL_MODE    0
#define GPIO_PORTNULL_DIR       0
#define GPIO_PORTNULL_OUTPUT_LEVEL  0
#define GPIO_PORTNULL_PU        0
#define GPIO_PORTNULL_PD        0
#define GPIO_PORTNULL_R0        0
#define GPIO_PORTNULL_R1        0
#define GPIO_PORTNULL_PUPD    0
#define GPIO_PORTNULL_DOUT   0

#define GPIO_PORT0_MODE   MODE_1 // 1:SF_QPI_CK : Used for SF_QPI_CK
#define GPIO_PORT1_MODE   MODE_1 // 1:SF_QPI_CS : Used for SF_QPI_CS
#define GPIO_PORT2_MODE   MODE_1 // 1:SF_QPI_D0 : Used for SF_QPI_D0
#define GPIO_PORT3_MODE   MODE_1 // 1:SF_QPI_D1 : Used for SF_QPI_D1
#define GPIO_PORT4_MODE   MODE_1 // 1:SF_QPI_D2 : Used for SF_QPI_D2
#define GPIO_PORT5_MODE   MODE_1 // 1:SF_QPI_D3 : Used for SF_QPI_D3
#define GPIO_PORT6_MODE   MODE_3 // 3:SPIM0_SCK : Used for SPIM0_SCK
#define GPIO_PORT7_MODE   MODE_3 // 3:SPIM0_CS_N : Used for SPIM0_CS_N
#define GPIO_PORT8_MODE   MODE_3 // 3:SPIM0_MISO : Used for SPIM0_MISO
#define GPIO_PORT9_MODE   MODE_3 // 3:SPIM0_MOSI : Used for SPIM0_MOSI
#define GPIO_PORT10_MODE   MODE_7 // 7:EINT2 : Used for EINT2
#define GPIO_PORT11_MODE   MODE_7 // 7:EINT3 : Used for EINT3
#define GPIO_PORT12_MODE   MODE_5 // 5:DEBUG_6 : Used for DEBUG_6
#define GPIO_PORT13_MODE   MODE_0 // 0:GPIO13 : Used for GPIO13
#define GPIO_PORT14_MODE   MODE_0 // 0:GPIO14 : Used for GPIO14
#define GPIO_PORT15_MODE   MODE_0 // 0:GPIO15 : Used for GPIO15
#define GPIO_PORT16_MODE   MODE_6 // 6:ANT_SEL7 : Used for ANT_SEL7
#define GPIO_PORT17_MODE   MODE_0 // 0:GPIO17 : Used for GPIO17
#define GPIO_PORT18_MODE   MODE_0 // 0:GPIO18 : Used for GPIO18
#define GPIO_PORT19_MODE   MODE_3 // 3:I2C1_SDA : Used for I2C1_SDA
#define GPIO_PORT20_MODE   MODE_3 // 3:I2C1_SCL : Used for I2C1_SCL
#define GPIO_PORT21_MODE   MODE_0 // 0:GPIO21 : Used for GPIO21
#define GPIO_PORT22_MODE   MODE_0 // 0:GPIO22 : Used for GPIO22
#define GPIO_PORT23_MODE   MODE_7 // 7:EINT15 : Used for EINT15
#define GPIO_PORT24_MODE   MODE_0 // 0:GPIO24 : Used for GPIO24
#define GPIO_PORT25_MODE   MODE_0 // 0:GPIO25 : Used for GPIO25
#define GPIO_PORT26_MODE   MODE_0 // 0:GPIO26 : Used for GPIO26
#define GPIO_PORT27_MODE   MODE_0 // 0:GPIO27 : Used for GPIO27
#define GPIO_PORT28_MODE   MODE_0 // 0:GPIO28 : Used for GPIO28
#define GPIO_PORT29_MODE   MODE_0 // 0:GPIO29 : Used for GPIO29
#define GPIO_PORT30_MODE   MODE_0 // 0:GPIO30 : Used for GPIO30
#define GPIO_PORT31_MODE   MODE_0 // 0:GPIO31 : Used for GPIO31
#define GPIO_PORT32_MODE   MODE_0 // 0:GPIO32 : Used for GPIO32
#define GPIO_PORT33_MODE   MODE_0 // 0:GPIO33 : Used for GPIO33
#define GPIO_PORT34_MODE   MODE_0 // 0:GPIO34 : Used for GPIO34
#define GPIO_PORT35_MODE   MODE_0 // 0:GPIO35 : Used for GPIO35
#define GPIO_PORT36_MODE   MODE_0 // 0:GPIO36 : Used for GPIO36
#define GPIO_PORT37_MODE   MODE_0 // 0:GPIO37 : Used for GPIO37
#define GPIO_PORT38_MODE   MODE_0 // 0:GPIO38 : Used for GPIO38
#define GPIO_PORT39_MODE   MODE_0 // 0:GPIO39 : Used for GPIO39
#define GPIO_PORT40_MODE   MODE_0 // 0:GPIO40 : Used for GPIO40
#define GPIO_PORT41_MODE   MODE_0 // 0:GPIO41 : Used for GPIO41
#define GPIO_PORT42_MODE   MODE_3 // 3:UART1_RX : Used for UART1_RX
#define GPIO_PORT43_MODE   MODE_0 // 0:GPIO43 : Used for GPIO43
#define GPIO_PORT44_MODE   MODE_3 // 3:UART1_TX : Used for UART1_TX
#define GPIO_PORT45_MODE   MODE_0 // 0:GPIO45 : Used for GPIO45
#define GPIO_PORT46_MODE   MODE_0 // 0:GPIO46 : Used for GPIO46
#define GPIO_PORT47_MODE   MODE_0 // 0:GPIO47 : Used for GPIO47
#define GPIO_PORT48_MODE   MODE_1 // 1:CM33_UART_RX : Used for CM33_UART_RX
#define GPIO_PORT49_MODE   MODE_0 // 0:GPIO49 : Used for GPIO49
#define GPIO_PORT50_MODE   MODE_1 // 1:CM33_UART_TX_1 : Used for CM33_UART_TX_1
#define GPIO_PORT51_MODE   MODE_0 // 0:GPIO51 : Used for GPIO51
#define GPIO_PORT52_MODE   MODE_0 // 0:GPIO52 : Used for GPIO52


#define GPIO_PORT0_DIR   DIR_INPUT
#define GPIO_PORT1_DIR   DIR_INPUT
#define GPIO_PORT2_DIR   DIR_INPUT
#define GPIO_PORT3_DIR   DIR_INPUT
#define GPIO_PORT4_DIR   DIR_INPUT
#define GPIO_PORT5_DIR   DIR_INPUT
#define GPIO_PORT6_DIR   DIR_INPUT
#define GPIO_PORT7_DIR   DIR_INPUT
#define GPIO_PORT8_DIR   DIR_INPUT
#define GPIO_PORT9_DIR   DIR_INPUT
#define GPIO_PORT10_DIR   DIR_INPUT
#define GPIO_PORT11_DIR   DIR_INPUT
#define GPIO_PORT12_DIR   DIR_INPUT
#define GPIO_PORT13_DIR   DIR_OUTPUT
#define GPIO_PORT14_DIR   DIR_INPUT
#define GPIO_PORT15_DIR   DIR_OUTPUT
#define GPIO_PORT16_DIR   DIR_INPUT
#define GPIO_PORT17_DIR   DIR_OUTPUT
#define GPIO_PORT18_DIR   DIR_OUTPUT
#define GPIO_PORT19_DIR   DIR_INPUT
#define GPIO_PORT20_DIR   DIR_INPUT
#define GPIO_PORT21_DIR   DIR_OUTPUT
#define GPIO_PORT22_DIR   DIR_OUTPUT
#define GPIO_PORT23_DIR   DIR_INPUT
#define GPIO_PORT24_DIR   DIR_INPUT
#define GPIO_PORT25_DIR   DIR_OUTPUT
#define GPIO_PORT26_DIR   DIR_OUTPUT
#define GPIO_PORT27_DIR   DIR_OUTPUT
#define GPIO_PORT28_DIR   DIR_OUTPUT
#define GPIO_PORT29_DIR   DIR_OUTPUT
#define GPIO_PORT30_DIR   DIR_OUTPUT
#define GPIO_PORT31_DIR   DIR_OUTPUT
#define GPIO_PORT32_DIR   DIR_OUTPUT
#define GPIO_PORT33_DIR   DIR_OUTPUT
#define GPIO_PORT34_DIR   DIR_OUTPUT
#define GPIO_PORT35_DIR   DIR_OUTPUT
#define GPIO_PORT36_DIR   DIR_OUTPUT
#define GPIO_PORT37_DIR   DIR_OUTPUT
#define GPIO_PORT38_DIR   DIR_OUTPUT
#define GPIO_PORT39_DIR   DIR_OUTPUT
#define GPIO_PORT40_DIR   DIR_OUTPUT
#define GPIO_PORT41_DIR   DIR_OUTPUT
#define GPIO_PORT42_DIR   DIR_INPUT
#define GPIO_PORT43_DIR   DIR_OUTPUT
#define GPIO_PORT44_DIR   DIR_INPUT
#define GPIO_PORT45_DIR   DIR_OUTPUT
#define GPIO_PORT46_DIR   DIR_OUTPUT
#define GPIO_PORT47_DIR   DIR_OUTPUT
#define GPIO_PORT48_DIR   DIR_INPUT
#define GPIO_PORT49_DIR   DIR_OUTPUT
#define GPIO_PORT50_DIR   DIR_INPUT
#define GPIO_PORT51_DIR   DIR_OUTPUT
#define GPIO_PORT52_DIR   DIR_OUTPUT


#define GPIO_PORT0_OUTPUT_LEVEL   0
#define GPIO_PORT1_OUTPUT_LEVEL   0
#define GPIO_PORT2_OUTPUT_LEVEL   0
#define GPIO_PORT3_OUTPUT_LEVEL   0
#define GPIO_PORT4_OUTPUT_LEVEL   0
#define GPIO_PORT5_OUTPUT_LEVEL   0
#define GPIO_PORT6_OUTPUT_LEVEL   0
#define GPIO_PORT7_OUTPUT_LEVEL   0
#define GPIO_PORT8_OUTPUT_LEVEL   0
#define GPIO_PORT9_OUTPUT_LEVEL   0
#define GPIO_PORT10_OUTPUT_LEVEL   0
#define GPIO_PORT11_OUTPUT_LEVEL   0
#define GPIO_PORT12_OUTPUT_LEVEL   0
#define GPIO_PORT13_OUTPUT_LEVEL   0
#define GPIO_PORT14_OUTPUT_LEVEL   0
#define GPIO_PORT15_OUTPUT_LEVEL   0
#define GPIO_PORT16_OUTPUT_LEVEL   0
#define GPIO_PORT17_OUTPUT_LEVEL   0
#define GPIO_PORT18_OUTPUT_LEVEL   0
#define GPIO_PORT19_OUTPUT_LEVEL   0
#define GPIO_PORT20_OUTPUT_LEVEL   0
#define GPIO_PORT21_OUTPUT_LEVEL   0
#define GPIO_PORT22_OUTPUT_LEVEL   0
#define GPIO_PORT23_OUTPUT_LEVEL   0
#define GPIO_PORT24_OUTPUT_LEVEL   0
#define GPIO_PORT25_OUTPUT_LEVEL   0
#define GPIO_PORT26_OUTPUT_LEVEL   0
#define GPIO_PORT27_OUTPUT_LEVEL   0
#define GPIO_PORT28_OUTPUT_LEVEL   0
#define GPIO_PORT29_OUTPUT_LEVEL   0
#define GPIO_PORT30_OUTPUT_LEVEL   0
#define GPIO_PORT31_OUTPUT_LEVEL   0
#define GPIO_PORT32_OUTPUT_LEVEL   0
#define GPIO_PORT33_OUTPUT_LEVEL   0
#define GPIO_PORT34_OUTPUT_LEVEL   0
#define GPIO_PORT35_OUTPUT_LEVEL   0
#define GPIO_PORT36_OUTPUT_LEVEL   0
#define GPIO_PORT37_OUTPUT_LEVEL   0
#define GPIO_PORT38_OUTPUT_LEVEL   0
#define GPIO_PORT39_OUTPUT_LEVEL   0
#define GPIO_PORT40_OUTPUT_LEVEL   0
#define GPIO_PORT41_OUTPUT_LEVEL   0
#define GPIO_PORT42_OUTPUT_LEVEL   0
#define GPIO_PORT43_OUTPUT_LEVEL   0
#define GPIO_PORT44_OUTPUT_LEVEL   0
#define GPIO_PORT45_OUTPUT_LEVEL   0
#define GPIO_PORT46_OUTPUT_LEVEL   0
#define GPIO_PORT47_OUTPUT_LEVEL   0
#define GPIO_PORT48_OUTPUT_LEVEL   0
#define GPIO_PORT49_OUTPUT_LEVEL   0
#define GPIO_PORT50_OUTPUT_LEVEL   0
#define GPIO_PORT51_OUTPUT_LEVEL   0
#define GPIO_PORT52_OUTPUT_LEVEL   0


#define GPIO_PORT0_PU   0
#define GPIO_PORT1_PU   0
#define GPIO_PORT2_PU   0
#define GPIO_PORT3_PU   0
#define GPIO_PORT4_PU   0
#define GPIO_PORT5_PU   0
#define GPIO_PORT6_PU   0
#define GPIO_PORT7_PU   0
#define GPIO_PORT8_PU   0
#define GPIO_PORT9_PU   0
#define GPIO_PORT10_PU   0
#define GPIO_PORT11_PU   0
#define GPIO_PORT12_PU   0
#define GPIO_PORT13_PU   0
#define GPIO_PORT14_PU   0
#define GPIO_PORT15_PU   0
#define GPIO_PORT16_PU   0
#define GPIO_PORT17_PU   0
#define GPIO_PORT18_PU   0
#define GPIO_PORT19_PU   0
#define GPIO_PORT20_PU   0
#define GPIO_PORT21_PU   0
#define GPIO_PORT22_PU   0
#define GPIO_PORT23_PU   0
#define GPIO_PORT24_PU   0
#define GPIO_PORT25_PU   0
#define GPIO_PORT26_PU   0
#define GPIO_PORT27_PU   0
#define GPIO_PORT28_PU   0
#define GPIO_PORT29_PU   0
#define GPIO_PORT30_PU   0
#define GPIO_PORT31_PU   0
#define GPIO_PORT32_PU   0
#define GPIO_PORT33_PU   0
#define GPIO_PORT34_PU   0
#define GPIO_PORT35_PU   0
#define GPIO_PORT36_PU   0
#define GPIO_PORT37_PU   0
#define GPIO_PORT38_PU   0
#define GPIO_PORT39_PU   0
#define GPIO_PORT40_PU   0
#define GPIO_PORT41_PU   0
#define GPIO_PORT42_PU   0
#define GPIO_PORT43_PU   0
#define GPIO_PORT44_PU   0
#define GPIO_PORT45_PU   0
#define GPIO_PORT46_PU   0
#define GPIO_PORT47_PU   0
#define GPIO_PORT48_PU   0
#define GPIO_PORT49_PU   0
#define GPIO_PORT50_PU   0
#define GPIO_PORT51_PU   0
#define GPIO_PORT52_PU   0


#define GPIO_PORT0_PD   0
#define GPIO_PORT1_PD   0
#define GPIO_PORT2_PD   0
#define GPIO_PORT3_PD   0
#define GPIO_PORT4_PD   0
#define GPIO_PORT5_PD   0
#define GPIO_PORT6_PD   0
#define GPIO_PORT7_PD   0
#define GPIO_PORT8_PD   0
#define GPIO_PORT9_PD   0
#define GPIO_PORT10_PD   0
#define GPIO_PORT11_PD   0
#define GPIO_PORT12_PD   0
#define GPIO_PORT13_PD   0
#define GPIO_PORT14_PD   0
#define GPIO_PORT15_PD   0
#define GPIO_PORT16_PD   0
#define GPIO_PORT17_PD   0
#define GPIO_PORT18_PD   0
#define GPIO_PORT19_PD   0
#define GPIO_PORT20_PD   0
#define GPIO_PORT21_PD   0
#define GPIO_PORT22_PD   0
#define GPIO_PORT23_PD   0
#define GPIO_PORT24_PD   0
#define GPIO_PORT25_PD   0
#define GPIO_PORT26_PD   0
#define GPIO_PORT27_PD   0
#define GPIO_PORT28_PD   0
#define GPIO_PORT29_PD   0
#define GPIO_PORT30_PD   0
#define GPIO_PORT31_PD   0
#define GPIO_PORT32_PD   0
#define GPIO_PORT33_PD   0
#define GPIO_PORT34_PD   0
#define GPIO_PORT35_PD   0
#define GPIO_PORT36_PD   0
#define GPIO_PORT37_PD   0
#define GPIO_PORT38_PD   0
#define GPIO_PORT39_PD   0
#define GPIO_PORT40_PD   0
#define GPIO_PORT41_PD   0
#define GPIO_PORT42_PD   0
#define GPIO_PORT43_PD   0
#define GPIO_PORT44_PD   0
#define GPIO_PORT45_PD   0
#define GPIO_PORT46_PD   0
#define GPIO_PORT47_PD   0
#define GPIO_PORT48_PD   0
#define GPIO_PORT49_PD   0
#define GPIO_PORT50_PD   0
#define GPIO_PORT51_PD   0
#define GPIO_PORT52_PD   0


// PUPD1  PD-10_50K_ohms
#define GPIO_PORT0_PUPD  1
#define GPIO_PORT0_R1  1
#define GPIO_PORT0_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT1_PUPD  0
#define GPIO_PORT1_R1  1
#define GPIO_PORT1_R0  1
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT2_PUPD  1
#define GPIO_PORT2_R1  1
#define GPIO_PORT2_R0  1
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT3_PUPD  1
#define GPIO_PORT3_R1  1
#define GPIO_PORT3_R0  1
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT4_PUPD  1
#define GPIO_PORT4_R1  1
#define GPIO_PORT4_R0  1
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT5_PUPD  1
#define GPIO_PORT5_R1  1
#define GPIO_PORT5_R0  1
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT6_PUPD  1
#define GPIO_PORT6_R1  1
#define GPIO_PORT6_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT7_PUPD  0
#define GPIO_PORT7_R1  1
#define GPIO_PORT7_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT8_PUPD  0
#define GPIO_PORT8_R1  1
#define GPIO_PORT8_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT9_PUPD  0
#define GPIO_PORT9_R1  1
#define GPIO_PORT9_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT10_PUPD  0
#define GPIO_PORT10_R1  1
#define GPIO_PORT10_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT11_PUPD  0
#define GPIO_PORT11_R1  1
#define GPIO_PORT11_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT12_PUPD  0
#define GPIO_PORT12_R1  1
#define GPIO_PORT12_R0  1
// PUPD  PU_High_Z
#define GPIO_PORT13_PUPD  0
#define GPIO_PORT13_R1  0
#define GPIO_PORT13_R0  0
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT14_PUPD  1
#define GPIO_PORT14_R1  1
#define GPIO_PORT14_R0  1
// PUPD1  PD_High_Z
#define GPIO_PORT15_PUPD  1
#define GPIO_PORT15_R1  0
#define GPIO_PORT15_R0  0
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT16_PUPD  1
#define GPIO_PORT16_R1  1
#define GPIO_PORT16_R0  1
// PUPD  PU_High_Z
#define GPIO_PORT17_PUPD  0
#define GPIO_PORT17_R1  0
#define GPIO_PORT17_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT18_PUPD  0
#define GPIO_PORT18_R1  0
#define GPIO_PORT18_R0  0
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT19_PUPD  1
#define GPIO_PORT19_R1  1
#define GPIO_PORT19_R0  1
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT20_PUPD  1
#define GPIO_PORT20_R1  1
#define GPIO_PORT20_R0  1
// PUPD  PU_High_Z
#define GPIO_PORT21_PUPD  0
#define GPIO_PORT21_R1  0
#define GPIO_PORT21_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT22_PUPD  1
#define GPIO_PORT22_R1  0
#define GPIO_PORT22_R0  0
// PUPD  PU-10_50K_ohms
#define GPIO_PORT23_PUPD  0
#define GPIO_PORT23_R1  1
#define GPIO_PORT23_R0  1
// PUPD  PU-10_50K_ohms
#define GPIO_PORT24_PUPD  0
#define GPIO_PORT24_R1  1
#define GPIO_PORT24_R0  1
// PUPD1  PD_High_Z
#define GPIO_PORT25_PUPD  1
#define GPIO_PORT25_R1  0
#define GPIO_PORT25_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT26_PUPD  0
#define GPIO_PORT26_R1  0
#define GPIO_PORT26_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT27_PUPD  0
#define GPIO_PORT27_R1  0
#define GPIO_PORT27_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT28_PUPD  0
#define GPIO_PORT28_R1  0
#define GPIO_PORT28_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT29_PUPD  0
#define GPIO_PORT29_R1  0
#define GPIO_PORT29_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT30_PUPD  1
#define GPIO_PORT30_R1  0
#define GPIO_PORT30_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT31_PUPD  1
#define GPIO_PORT31_R1  0
#define GPIO_PORT31_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT32_PUPD  1
#define GPIO_PORT32_R1  0
#define GPIO_PORT32_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT33_PUPD  1
#define GPIO_PORT33_R1  0
#define GPIO_PORT33_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT34_PUPD  0
#define GPIO_PORT34_R1  0
#define GPIO_PORT34_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT35_PUPD  1
#define GPIO_PORT35_R1  0
#define GPIO_PORT35_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT36_PUPD  1
#define GPIO_PORT36_R1  0
#define GPIO_PORT36_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT37_PUPD  1
#define GPIO_PORT37_R1  0
#define GPIO_PORT37_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT38_PUPD  1
#define GPIO_PORT38_R1  0
#define GPIO_PORT38_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT39_PUPD  1
#define GPIO_PORT39_R1  0
#define GPIO_PORT39_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT40_PUPD  0
#define GPIO_PORT40_R1  0
#define GPIO_PORT40_R0  0
// PUPD1  PD_High_Z
#define GPIO_PORT41_PUPD  1
#define GPIO_PORT41_R1  0
#define GPIO_PORT41_R0  0
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT42_PUPD  1
#define GPIO_PORT42_R1  1
#define GPIO_PORT42_R0  1
// PUPD1  PD_High_Z
#define GPIO_PORT43_PUPD  1
#define GPIO_PORT43_R1  0
#define GPIO_PORT43_R0  0
// PUPD1  PD-10_50K_ohms
#define GPIO_PORT44_PUPD  1
#define GPIO_PORT44_R1  1
#define GPIO_PORT44_R0  1
// PUPD  PU_High_Z
#define GPIO_PORT45_PUPD  0
#define GPIO_PORT45_R1  0
#define GPIO_PORT45_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT46_PUPD  0
#define GPIO_PORT46_R1  0
#define GPIO_PORT46_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT47_PUPD  0
#define GPIO_PORT47_R1  0
#define GPIO_PORT47_R0  0
// PUPD  PU-10_50K_ohms
#define GPIO_PORT48_PUPD  0
#define GPIO_PORT48_R1  1
#define GPIO_PORT48_R0  1
// PUPD  PU_High_Z
#define GPIO_PORT49_PUPD  0
#define GPIO_PORT49_R1  0
#define GPIO_PORT49_R0  0
// PUPD  PU-10_50K_ohms
#define GPIO_PORT50_PUPD  0
#define GPIO_PORT50_R1  1
#define GPIO_PORT50_R0  1
// PUPD1  PD_High_Z
#define GPIO_PORT51_PUPD  1
#define GPIO_PORT51_R1  0
#define GPIO_PORT51_R0  0
// PUPD  PU_High_Z
#define GPIO_PORT52_PUPD  0
#define GPIO_PORT52_R1  0
#define GPIO_PORT52_R0  0


#define EPT_GPIO_PIN_MASK_0   0xFFFFFFFF



#endif /* _EPT_GPIO_DRV_H */
