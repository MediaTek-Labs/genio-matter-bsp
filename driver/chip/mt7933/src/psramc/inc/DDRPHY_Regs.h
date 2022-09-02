#ifndef __DDRPHY__REGS_H__
#define __DDRPHY__REGS_H__
#include "dramc_register.h"
//#define Channel_A_DDRPHY__BASE_ADDRESS    0x10228000
//#define Channel_B_DDRPHY__BASE_ADDRESS    0x10238000

#define DDRPHY_AO_BASE_ADDR     Channel_A_PHY_AO_BASE_VIRTUAL

#define DDRPHY_PLL1                                        (DDRPHY_AO_BASE_ADDR + 0x0000)
#define PLL1_RG_RPHYPLL_SDM_SSC_EN                         Fld(1, 2) //[2:2]
#define PLL1_RG_RPHYPLL_EN                                 Fld(1, 31) //[31:31]

#define DDRPHY_PLL2                                        (DDRPHY_AO_BASE_ADDR + 0x0004)
#define PLL2_RG_RCLRPLL_SDM_SSC_EN                         Fld(1, 2) //[2:2]
#define PLL2_RG_RCLRPLL_EN                                 Fld(1, 31) //[31:31]

#define DDRPHY_PLL3                                        (DDRPHY_AO_BASE_ADDR + 0x0008)
#define PLL3_RG_RPHYPLL_TSTOP_EN                           Fld(1, 0) //[0:0]
#define PLL3_RG_RPHYPLL_TSTOD_EN                           Fld(1, 1) //[1:1]
#define PLL3_RG_RPHYPLL_TSTFM_EN                           Fld(1, 2) //[2:2]
#define PLL3_RG_RPHYPLL_TSTCK_EN                           Fld(1, 3) //[3:3]
#define PLL3_RG_RPHYPLL_TST_EN                             Fld(1, 4) //[4:4]
#define PLL3_RG_RPHYPLL_TSTLVROD_EN                        Fld(1, 5) //[5:5]
#define PLL3_RG_RPHYPLL_TST_SEL                            Fld(4, 8) //[11:8]

#define DDRPHY_PLL4                                        (DDRPHY_AO_BASE_ADDR + 0x000C)
#define PLL4_RG_RPHYPLL_RESETB                             Fld(1, 16) //[16:16]
#define PLL4_RG_RPHYPLL_ATPG_EN                            Fld(1, 17) //[17:17]
#define PLL4_RG_RPHYPLL_MCK8X_SEL                          Fld(1, 18) //[18:18]
#define PLL4_PLL4_RFU                                      Fld(1, 19) //[19:19]
#define PLL4_RG_RPHYPLL_SER_MODE                           Fld(1, 20) //[20:20]
#define PLL4_RG_RPHYPLL_AD_MCK8X_EN                        Fld(1, 21) //[21:21]
#define PLL4_RG_RPHYPLL_ADA_MCK8X_EN                       Fld(1, 22) //[22:22]
#define PLL4_RESERVED_0X0C                                 Fld(1, 24) //[24:24]

#define DDRPHY_B0_DLL_ARPI0                                (DDRPHY_AO_BASE_ADDR + 0x0080)
#define B0_DLL_ARPI0_RG_ARMCTLPLL_CK_SEL_B0                Fld(1, 1) //[1:1]
#define B0_DLL_ARPI0_RG_ARPI_RESETB_B0                     Fld(1, 3) //[3:3]
#define B0_DLL_ARPI0_RG_ARPI_LS_EN_B0                      Fld(1, 4) //[4:4]
#define B0_DLL_ARPI0_RG_ARPI_LS_SEL_B0                     Fld(1, 5) //[5:5]
#define B0_DLL_ARPI0_RG_ARPI_MCK8X_SEL_B0                  Fld(1, 6) //[6:6]

#define DDRPHY_B0_DLL_ARPI1                                (DDRPHY_AO_BASE_ADDR + 0x0084)
#define B0_DLL_ARPI1_RG_ARPI_DQSIEN_JUMP_EN_B0             Fld(1, 11) //[11:11]
#define B0_DLL_ARPI1_RG_ARPI_DQ_JUMP_EN_B0                 Fld(1, 13) //[13:13]
#define B0_DLL_ARPI1_RG_ARPI_DQM_JUMP_EN_B0                Fld(1, 14) //[14:14]
#define B0_DLL_ARPI1_RG_ARPI_DQS_JUMP_EN_B0                Fld(1, 15) //[15:15]
#define B0_DLL_ARPI1_RG_ARPI_FB_JUMP_EN_B0                 Fld(1, 17) //[17:17]
#define B0_DLL_ARPI1_RG_ARPI_MCTL_JUMP_EN_B0               Fld(1, 19) //[19:19]
#define B0_DLL_ARPI1_RG_ARPISM_MCK_SEL_B0_REG_OPT          Fld(1, 20) //[20:20]
#define B0_DLL_ARPI1_RG_ARPISM_MCK_SEL_B0                  Fld(1, 21) //[21:21]
#define B0_DLL_ARPI1_RG_ARPI_SET_UPDN_B0                   Fld(3, 28) //[30:28]

#define DDRPHY_B0_DLL_ARPI2                                (DDRPHY_AO_BASE_ADDR + 0x0088)
#define B0_DLL_ARPI2_RG_ARDLL_PHDET_EN_B0                  Fld(1, 0) //[0:0]
#define B0_DLL_ARPI2_RG_ARPI_MPDIV_CG_B0                   Fld(1, 10) //[10:10]
#define B0_DLL_ARPI2_RG_ARPI_CG_DQSIEN_B0                  Fld(1, 11) //[11:11]
#define B0_DLL_ARPI2_RG_ARPI_CG_DQ_B0                      Fld(1, 13) //[13:13]
#define B0_DLL_ARPI2_RG_ARPI_CG_DQM_B0                     Fld(1, 14) //[14:14]
#define B0_DLL_ARPI2_RG_ARPI_CG_DQS_B0                     Fld(1, 15) //[15:15]
#define B0_DLL_ARPI2_RG_ARPI_CG_FB_B0                      Fld(1, 17) //[17:17]
#define B0_DLL_ARPI2_RG_ARPI_CG_MCTL_B0                    Fld(1, 19) //[19:19]
#define B0_DLL_ARPI2_RG_ARPI_CG_MCK_FB2DLL_B0              Fld(1, 27) //[27:27]
#define B0_DLL_ARPI2_RG_ARPI_CG_MCK_B0                     Fld(1, 31) //[31:31]

#define DDRPHY_B0_DLL_ARPI3                                (DDRPHY_AO_BASE_ADDR + 0x008C)
#define B0_DLL_ARPI3_RG_ARPI_DQSIEN_EN_B0                  Fld(1, 11) //[11:11]
#define B0_DLL_ARPI3_RG_ARPI_DQ_EN_B0                      Fld(1, 13) //[13:13]
#define B0_DLL_ARPI3_RG_ARPI_DQM_EN_B0                     Fld(1, 14) //[14:14]
#define B0_DLL_ARPI3_RG_ARPI_DQS_EN_B0                     Fld(1, 15) //[15:15]
#define B0_DLL_ARPI3_RG_ARPI_FB_EN_B0                      Fld(1, 17) //[17:17]
#define B0_DLL_ARPI3_RG_ARPI_MCTL_EN_B0                    Fld(1, 19) //[19:19]

#define DDRPHY_B0_DLL_ARPI4                                (DDRPHY_AO_BASE_ADDR + 0x0090)
#define B0_DLL_ARPI4_RG_ARPI_BYPASS_DQSIEN_B0              Fld(1, 11) //[11:11]
#define B0_DLL_ARPI4_RG_ARPI_BYPASS_DQ_B0                  Fld(1, 13) //[13:13]
#define B0_DLL_ARPI4_RG_ARPI_BYPASS_DQM_B0                 Fld(1, 14) //[14:14]
#define B0_DLL_ARPI4_RG_ARPI_BYPASS_DQS_B0                 Fld(1, 15) //[15:15]
#define B0_DLL_ARPI4_RG_ARPI_BYPASS_FB_B0                  Fld(1, 17) //[17:17]
#define B0_DLL_ARPI4_RG_ARPI_BYPASS_MCTL_B0                Fld(1, 19) //[19:19]

#define DDRPHY_B0_DLL_ARPI5                                (DDRPHY_AO_BASE_ADDR + 0x0094)
#define B0_DLL_ARPI5_RG_ARDLL_DIV_MCTL_B0                  Fld(2, 2) //[3:2]
#define B0_DLL_ARPI5_RG_ARDLL_MON_SEL_B0                   Fld(4, 4) //[7:4]
#define B0_DLL_ARPI5_RG_ARDLL_DIV_DEC_B0                   Fld(1, 8) //[8:8]
#define B0_DLL_ARPI5_B0_DLL_ARPI5_RFU                      Fld(12, 12) //[23:12]
#define B0_DLL_ARPI5_RG_ARDLL_FJ_OUT_MODE_SEL_B0           Fld(1, 25) //[25:25]
#define B0_DLL_ARPI5_RG_ARDLL_FJ_OUT_MODE_B0               Fld(1, 26) //[26:26]
#define B0_DLL_ARPI5_B0_DLL_ARPI5_RFU1                     Fld(1, 31) //[31:31]

#define DDRPHY_B0_DQ0                                      (DDRPHY_AO_BASE_ADDR + 0x0098)
#define B0_DQ0_RG_RX_ARDQ0_OFFC_B0                         Fld(4, 0) //[3:0]
#define B0_DQ0_RG_RX_ARDQ1_OFFC_B0                         Fld(4, 4) //[7:4]
#define B0_DQ0_RG_RX_ARDQ2_OFFC_B0                         Fld(4, 8) //[11:8]
#define B0_DQ0_RG_RX_ARDQ3_OFFC_B0                         Fld(4, 12) //[15:12]
#define B0_DQ0_RG_RX_ARDQ4_OFFC_B0                         Fld(4, 16) //[19:16]
#define B0_DQ0_RG_RX_ARDQ5_OFFC_B0                         Fld(4, 20) //[23:20]
#define B0_DQ0_RG_RX_ARDQ6_OFFC_B0                         Fld(4, 24) //[27:24]
#define B0_DQ0_RG_RX_ARDQ7_OFFC_B0                         Fld(4, 28) //[31:28]

#define DDRPHY_B0_DQ1                                      (DDRPHY_AO_BASE_ADDR + 0x009C)
#define B0_DQ1_RG_RX_ARDQM0_OFFC_B0                        Fld(4, 0) //[3:0]

#define DDRPHY_B0_DQ2                                      (DDRPHY_AO_BASE_ADDR + 0x00A0)
#define B0_DQ2_RG_TX_ARDQS0_ODTEN_DIS_B0                   Fld(1, 16) //[16:16]
#define B0_DQ2_RG_TX_ARDQS0_OE_DIS_B0                      Fld(1, 17) //[17:17]
#define B0_DQ2_RG_TX_ARDQM0_ODTEN_DIS_B0                   Fld(1, 18) //[18:18]
#define B0_DQ2_RG_TX_ARDQM0_OE_DIS_B0                      Fld(1, 19) //[19:19]
#define B0_DQ2_RG_TX_ARDQ_ODTEN_DIS_B0                     Fld(1, 20) //[20:20]
#define B0_DQ2_RG_TX_ARDQ_OE_DIS_B0                        Fld(1, 21) //[21:21]

#define DDRPHY_B0_DQ3                                      (DDRPHY_AO_BASE_ADDR + 0x00A4)
#define B0_DQ3_RG_ARDQ_ATPG_EN_B0                          Fld(1, 0) //[0:0]
#define B0_DQ3_RG_RX_ARDQ_SMT_EN_B0                        Fld(1, 1) //[1:1]
#define B0_DQ3_RG_TX_ARDQ_EN_B0                            Fld(1, 2) //[2:2]
#define B0_DQ3_RG_ARDQ_RESETB_B0                           Fld(1, 3) //[3:3]
#define B0_DQ3_RG_RX_ARDQS0_IN_BUFF_EN_B0                  Fld(1, 5) //[5:5]
#define B0_DQ3_RG_RX_ARDQM0_IN_BUFF_EN_B0                  Fld(1, 6) //[6:6]
#define B0_DQ3_RG_RX_ARDQ_IN_BUFF_EN_B0                    Fld(1, 7) //[7:7]
#define B0_DQ3_RG_RX_ARDQ_STBENCMP_EN_B0                   Fld(1, 10) //[10:10]
#define B0_DQ3_RG_RX_ARDQ_OFFC_EN_B0                       Fld(1, 11) //[11:11]
#define B0_DQ3_RG_RX_ARDQS0_SWAP_EN_B0                     Fld(1, 15) //[15:15]

#define DDRPHY_B0_DQ4                                      (DDRPHY_AO_BASE_ADDR + 0x00A8)
#define B0_DQ4_RG_RX_ARDQS_EYE_R_DLY_B0                    Fld(7, 0) //[6:0]
#define B0_DQ4_RG_RX_ARDQS_EYE_F_DLY_B0                    Fld(7, 8) //[14:8]
#define B0_DQ4_RG_RX_ARDQ_EYE_R_DLY_B0                     Fld(6, 16) //[21:16]
#define B0_DQ4_RG_RX_ARDQ_EYE_F_DLY_B0                     Fld(6, 24) //[29:24]

#define DDRPHY_B0_DQ5                                      (DDRPHY_AO_BASE_ADDR + 0x00AC)
#define B0_DQ5_B0_DQ5_RFU                                  Fld(8, 0) //[7:0]
#define B0_DQ5_RG_RX_ARDQ_EYE_VREF_SEL_B0                  Fld(6, 8) //[13:8]
#define B0_DQ5_RG_RX_ARDQ_VREF_EN_B0                       Fld(1, 16) //[16:16]
#define B0_DQ5_RG_RX_ARDQ_EYE_VREF_EN_B0                   Fld(1, 17) //[17:17]
#define B0_DQ5_RG_RX_ARDQ_EYE_SEL_B0                       Fld(4, 20) //[23:20]
#define B0_DQ5_RG_RX_ARDQ_EYE_EN_B0                        Fld(1, 24) //[24:24]
#define B0_DQ5_RG_RX_ARDQ_EYE_STBEN_RESETB_B0              Fld(1, 25) //[25:25]
#define B0_DQ5_RG_RX_ARDQS0_DVS_EN_B0                      Fld(1, 31) //[31:31]

#define DDRPHY_B0_DQ6                                      (DDRPHY_AO_BASE_ADDR + 0x00B0)
#define B0_DQ6_RG_RX_ARDQ_BIAS_PS_B0                       Fld(2, 0) //[1:0]
#define B0_DQ6_RG_TX_ARDQ_OE_EXT_DIS_B0                    Fld(1, 2) //[2:2]
#define B0_DQ6_RG_TX_ARDQ_ODTEN_EXT_DIS_B0                 Fld(1, 3) //[3:3]
#define B0_DQ6_RG_TX_ARDQ_SER_MODE_B0                      Fld(1, 4) //[4:4]
#define B0_DQ6_RG_RX_ARDQ_RPRE_TOG_EN_B0                   Fld(1, 5) //[5:5]
#define B0_DQ6_RG_RX_ARDQ_RES_BIAS_EN_B0                   Fld(1, 6) //[6:6]
#define B0_DQ6_RG_RX_ARDQ_OP_BIAS_SW_EN_B0                 Fld(1, 7) //[7:7]
#define B0_DQ6_RG_RX_ARDQ_LPBK_EN_B0                       Fld(1, 8) //[8:8]
#define B0_DQ6_RG_RX_ARDQ_O1_SEL_B0                        Fld(1, 9) //[9:9]
#define B0_DQ6_RG_RX_ARDQ_JM_SEL_B0                        Fld(1, 11) //[11:11]
#define B0_DQ6_RG_RX_ARDQ_BIAS_EN_B0                       Fld(1, 12) //[12:12]
#define B0_DQ6_RG_RX_ARDQ_BIAS_VREF_SEL_B0                 Fld(2, 14) //[15:14]
#define B0_DQ6_RG_RX_ARDQ_DDR4_SEL_B0                      Fld(1, 16) //[16:16]
#define B0_DQ6_RG_TX_ARDQ_DDR4_SEL_B0                      Fld(1, 17) //[17:17]
#define B0_DQ6_RG_RX_ARDQ_DDR3_SEL_B0                      Fld(1, 18) //[18:18]
#define B0_DQ6_RG_TX_ARDQ_DDR3_SEL_B0                      Fld(1, 19) //[19:19]
#define B0_DQ6_RG_RX_ARDQ_EYE_DLY_DQS_BYPASS_B0            Fld(1, 24) //[24:24]
#define B0_DQ6_RG_RX_ARDQ_EYE_OE_GATE_EN_B0                Fld(1, 28) //[28:28]
#define B0_DQ6_RG_RX_ARDQ_DMRANK_OUTSEL_B0                 Fld(1, 31) //[31:31]

#define DDRPHY_B0_DQ7                                      (DDRPHY_AO_BASE_ADDR + 0x00B4)
#define B0_DQ7_RG_TX_ARDQS0B_PULL_DN_B0                    Fld(1, 0) //[0:0]
#define B0_DQ7_RG_TX_ARDQS0B_PULL_UP_B0                    Fld(1, 1) //[1:1]
#define B0_DQ7_RG_TX_ARDQS0_PULL_DN_B0                     Fld(1, 2) //[2:2]
#define B0_DQ7_RG_TX_ARDQS0_PULL_UP_B0                     Fld(1, 3) //[3:3]
#define B0_DQ7_RG_TX_ARDQM0_PULL_DN_B0                     Fld(1, 4) //[4:4]
#define B0_DQ7_RG_TX_ARDQM0_PULL_UP_B0                     Fld(1, 5) //[5:5]
#define B0_DQ7_RG_TX_ARDQ_PULL_DN_B0                       Fld(1, 6) //[6:6]
#define B0_DQ7_RG_TX_ARDQ_PULL_UP_B0                       Fld(1, 7) //[7:7]
#define B0_DQ7_RG_TX_ARDQS0B_PULL_DN_B0_LP4Y               Fld(1, 16) //[16:16]

#define DDRPHY_B0_DQ8                                      (DDRPHY_AO_BASE_ADDR + 0x00B8)
#define B0_DQ8_RG_TX_ARDQ_EN_LP4P_B0                       Fld(1, 0) //[0:0]
#define B0_DQ8_RG_TX_ARDQ_EN_CAP_LP4P_B0                   Fld(1, 1) //[1:1]
#define B0_DQ8_RG_TX_ARDQ_CAP_DET_B0                       Fld(1, 2) //[2:2]
#define B0_DQ8_RG_TX_ARDQ_CKE_MCK4X_SEL_B0                 Fld(2, 3) //[4:3]
#define B0_DQ8_RG_ARPI_TX_CG_DQ_EN_B0                      Fld(1, 5) //[5:5]
#define B0_DQ8_RG_ARPI_TX_CG_DQM_EN_B0                     Fld(1, 6) //[6:6]
#define B0_DQ8_RG_ARPI_TX_CG_DQS_EN_B0                     Fld(1, 7) //[7:7]
#define B0_DQ8_RG_RX_ARDQS_BURST_E1_EN_B0                  Fld(1, 8) //[8:8]
#define B0_DQ8_RG_RX_ARDQS_BURST_E2_EN_B0                  Fld(1, 9) //[9:9]
#define B0_DQ8_RG_RX_ARDQS_DQSSTB_CG_EN_B0                 Fld(1, 10) //[10:10]
#define B0_DQ8_RG_RX_ARDQS_GATE_EN_MODE_B0                 Fld(1, 12) //[12:12]
#define B0_DQ8_RG_RX_ARDQS_SER_RST_MODE_B0                 Fld(1, 13) //[13:13]
#define B0_DQ8_RG_ARDLL_RESETB_B0                          Fld(1, 15) //[15:15]

#define DDRPHY_B0_DQ9                                      (DDRPHY_AO_BASE_ADDR + 0x00BC)
#define B0_DQ9_RG_RX_ARDQ_STBEN_RESETB_B0                  Fld(1, 0) //[0:0]
#define B0_DQ9_RG_RX_ARDQS0_STBEN_RESETB_B0                Fld(1, 4) //[4:4]
#define B0_DQ9_RG_RX_ARDQS0_DQSIENMODE_B0                  Fld(1, 5) //[5:5]
#define B0_DQ9_R_DMRXFIFO_STBENCMP_EN_B0                   Fld(1, 7) //[7:7]
#define B0_DQ9_R_IN_GATE_EN_LOW_OPT_B0                     Fld(8, 8) //[15:8]
#define B0_DQ9_R_DMDQSIEN_VALID_LAT_B0                     Fld(3, 16) //[18:16]
#define B0_DQ9_R_DMDQSIEN_RDSEL_LAT_B0                     Fld(3, 20) //[22:20]
#define B0_DQ9_R_DMRXDVS_VALID_LAT_B0                      Fld(3, 24) //[26:24]
#define B0_DQ9_R_DMRXDVS_RDSEL_LAT_B0                      Fld(3, 28) //[30:28]

#define DDRPHY_RFU_0X0C0                                   (DDRPHY_AO_BASE_ADDR + 0x00C0)
#define RFU_0X0C0_RESERVED_0X0C0                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X0C4                                   (DDRPHY_AO_BASE_ADDR + 0x00C4)
#define RFU_0X0C4_RESERVED_0X0C4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X0C8                                   (DDRPHY_AO_BASE_ADDR + 0x00C8)
#define RFU_0X0C8_RESERVED_0X0C8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X0CC                                   (DDRPHY_AO_BASE_ADDR + 0x00CC)
#define RFU_0X0CC_RESERVED_0X0CC                           Fld(32, 0) //[31:0]

#define DDRPHY_B0_TX_MCK                                   (DDRPHY_AO_BASE_ADDR + 0x00D0)
#define B0_TX_MCK_R_DM_TX_MCK_FRUN_B0                      Fld(10, 0) //[9:0]

#define DDRPHY_RFU_0X0D4                                   (DDRPHY_AO_BASE_ADDR + 0x00D4)
#define RFU_0X0D4_RESERVED_0X0D4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X0D8                                   (DDRPHY_AO_BASE_ADDR + 0x00D8)
#define RFU_0X0D8_RESERVED_0X0D8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X0DC                                   (DDRPHY_AO_BASE_ADDR + 0x00DC)
#define RFU_0X0DC_RESERVED_0X0DC                           Fld(32, 0) //[31:0]

#define DDRPHY_B1_DLL_ARPI0                                (DDRPHY_AO_BASE_ADDR + 0x0100)
#define B1_DLL_ARPI0_RG_ARMCTLPLL_CK_SEL_B1                Fld(1, 1) //[1:1]
#define B1_DLL_ARPI0_RG_ARPI_RESETB_B1                     Fld(1, 3) //[3:3]
#define B1_DLL_ARPI0_RG_ARPI_LS_EN_B1                      Fld(1, 4) //[4:4]
#define B1_DLL_ARPI0_RG_ARPI_LS_SEL_B1                     Fld(1, 5) //[5:5]
#define B1_DLL_ARPI0_RG_ARPI_MCK8X_SEL_B1                  Fld(1, 6) //[6:6]

#define DDRPHY_B1_DLL_ARPI1                                (DDRPHY_AO_BASE_ADDR + 0x0104)
#define B1_DLL_ARPI1_RG_ARPI_DQSIEN_JUMP_EN_B1             Fld(1, 11) //[11:11]
#define B1_DLL_ARPI1_RG_ARPI_DQ_JUMP_EN_B1                 Fld(1, 13) //[13:13]
#define B1_DLL_ARPI1_RG_ARPI_DQM_JUMP_EN_B1                Fld(1, 14) //[14:14]
#define B1_DLL_ARPI1_RG_ARPI_DQS_JUMP_EN_B1                Fld(1, 15) //[15:15]
#define B1_DLL_ARPI1_RG_ARPI_FB_JUMP_EN_B1                 Fld(1, 17) //[17:17]
#define B1_DLL_ARPI1_RG_ARPI_MCTL_JUMP_EN_B1               Fld(1, 19) //[19:19]
#define B1_DLL_ARPI1_RG_ARPISM_MCK_SEL_B1_REG_OPT          Fld(1, 20) //[20:20]
#define B1_DLL_ARPI1_RG_ARPISM_MCK_SEL_B1                  Fld(1, 21) //[21:21]
#define B1_DLL_ARPI1_RG_ARPI_SET_UPDN_B1                   Fld(3, 28) //[30:28]

#define DDRPHY_B1_DLL_ARPI2                                (DDRPHY_AO_BASE_ADDR + 0x0108)
#define B1_DLL_ARPI2_RG_ARDLL_PHDET_EN_B1                  Fld(1, 0) //[0:0]
#define B1_DLL_ARPI2_RG_ARPI_MPDIV_CG_B1                   Fld(1, 10) //[10:10]
#define B1_DLL_ARPI2_RG_ARPI_CG_DQSIEN_B1                  Fld(1, 11) //[11:11]
#define B1_DLL_ARPI2_RG_ARPI_CG_DQ_B1                      Fld(1, 13) //[13:13]
#define B1_DLL_ARPI2_RG_ARPI_CG_DQM_B1                     Fld(1, 14) //[14:14]
#define B1_DLL_ARPI2_RG_ARPI_CG_DQS_B1                     Fld(1, 15) //[15:15]
#define B1_DLL_ARPI2_RG_ARPI_CG_FB_B1                      Fld(1, 17) //[17:17]
#define B1_DLL_ARPI2_RG_ARPI_CG_MCTL_B1                    Fld(1, 19) //[19:19]
#define B1_DLL_ARPI2_RG_ARPI_CG_MCK_FB2DLL_B1              Fld(1, 27) //[27:27]
#define B1_DLL_ARPI2_RG_ARPI_CG_MCK_B1                     Fld(1, 31) //[31:31]

#define DDRPHY_B1_DLL_ARPI3                                (DDRPHY_AO_BASE_ADDR + 0x010C)
#define B1_DLL_ARPI3_RG_ARPI_DQSIEN_EN_B1                  Fld(1, 11) //[11:11]
#define B1_DLL_ARPI3_RG_ARPI_DQ_EN_B1                      Fld(1, 13) //[13:13]
#define B1_DLL_ARPI3_RG_ARPI_DQM_EN_B1                     Fld(1, 14) //[14:14]
#define B1_DLL_ARPI3_RG_ARPI_DQS_EN_B1                     Fld(1, 15) //[15:15]
#define B1_DLL_ARPI3_RG_ARPI_FB_EN_B1                      Fld(1, 17) //[17:17]
#define B1_DLL_ARPI3_RG_ARPI_MCTL_EN_B1                    Fld(1, 19) //[19:19]

#define DDRPHY_B1_DLL_ARPI4                                (DDRPHY_AO_BASE_ADDR + 0x0110)
#define B1_DLL_ARPI4_RG_ARPI_BYPASS_DQSIEN_B1              Fld(1, 11) //[11:11]
#define B1_DLL_ARPI4_RG_ARPI_BYPASS_DQ_B1                  Fld(1, 13) //[13:13]
#define B1_DLL_ARPI4_RG_ARPI_BYPASS_DQM_B1                 Fld(1, 14) //[14:14]
#define B1_DLL_ARPI4_RG_ARPI_BYPASS_DQS_B1                 Fld(1, 15) //[15:15]
#define B1_DLL_ARPI4_RG_ARPI_BYPASS_FB_B1                  Fld(1, 17) //[17:17]
#define B1_DLL_ARPI4_RG_ARPI_BYPASS_MCTL_B1                Fld(1, 19) //[19:19]

#define DDRPHY_B1_DLL_ARPI5                                (DDRPHY_AO_BASE_ADDR + 0x0114)
#define B1_DLL_ARPI5_RG_ARDLL_DIV_MCTL_B1                  Fld(2, 2) //[3:2]
#define B1_DLL_ARPI5_RG_ARDLL_MON_SEL_B1                   Fld(4, 4) //[7:4]
#define B1_DLL_ARPI5_RG_ARDLL_DIV_DEC_B1                   Fld(1, 8) //[8:8]
#define B1_DLL_ARPI5_B1_DLL_ARPI5_RFU                      Fld(12, 12) //[23:12]
#define B1_DLL_ARPI5_RG_ARDLL_FJ_OUT_MODE_SEL_B1           Fld(1, 25) //[25:25]
#define B1_DLL_ARPI5_RG_ARDLL_FJ_OUT_MODE_B1               Fld(1, 26) //[26:26]
#define B1_DLL_ARPI5_B1_DLL_ARPI5_RFU1                     Fld(1, 31) //[31:31]

#define DDRPHY_B1_DQ0                                      (DDRPHY_AO_BASE_ADDR + 0x0118)
#define B1_DQ0_RG_RX_ARDQ0_OFFC_B1                         Fld(4, 0) //[3:0]
#define B1_DQ0_RG_RX_ARDQ1_OFFC_B1                         Fld(4, 4) //[7:4]
#define B1_DQ0_RG_RX_ARDQ2_OFFC_B1                         Fld(4, 8) //[11:8]
#define B1_DQ0_RG_RX_ARDQ3_OFFC_B1                         Fld(4, 12) //[15:12]
#define B1_DQ0_RG_RX_ARDQ4_OFFC_B1                         Fld(4, 16) //[19:16]
#define B1_DQ0_RG_RX_ARDQ5_OFFC_B1                         Fld(4, 20) //[23:20]
#define B1_DQ0_RG_RX_ARDQ6_OFFC_B1                         Fld(4, 24) //[27:24]
#define B1_DQ0_RG_RX_ARDQ7_OFFC_B1                         Fld(4, 28) //[31:28]

#define DDRPHY_B1_DQ1                                      (DDRPHY_AO_BASE_ADDR + 0x011C)
#define B1_DQ1_RG_RX_ARDQM0_OFFC_B1                        Fld(4, 0) //[3:0]

#define DDRPHY_B1_DQ2                                      (DDRPHY_AO_BASE_ADDR + 0x0120)
#define B1_DQ2_RG_TX_ARDQS0_ODTEN_DIS_B1                   Fld(1, 16) //[16:16]
#define B1_DQ2_RG_TX_ARDQS0_OE_DIS_B1                      Fld(1, 17) //[17:17]
#define B1_DQ2_RG_TX_ARDQM0_ODTEN_DIS_B1                   Fld(1, 18) //[18:18]
#define B1_DQ2_RG_TX_ARDQM0_OE_DIS_B1                      Fld(1, 19) //[19:19]
#define B1_DQ2_RG_TX_ARDQ_ODTEN_DIS_B1                     Fld(1, 20) //[20:20]
#define B1_DQ2_RG_TX_ARDQ_OE_DIS_B1                        Fld(1, 21) //[21:21]

#define DDRPHY_B1_DQ3                                      (DDRPHY_AO_BASE_ADDR + 0x0124)
#define B1_DQ3_RG_ARDQ_ATPG_EN_B1                          Fld(1, 0) //[0:0]
#define B1_DQ3_RG_RX_ARDQ_SMT_EN_B1                        Fld(1, 1) //[1:1]
#define B1_DQ3_RG_TX_ARDQ_EN_B1                            Fld(1, 2) //[2:2]
#define B1_DQ3_RG_ARDQ_RESETB_B1                           Fld(1, 3) //[3:3]
#define B1_DQ3_RG_RX_ARDQS0_IN_BUFF_EN_B1                  Fld(1, 5) //[5:5]
#define B1_DQ3_RG_RX_ARDQM0_IN_BUFF_EN_B1                  Fld(1, 6) //[6:6]
#define B1_DQ3_RG_RX_ARDQ_IN_BUFF_EN_B1                    Fld(1, 7) //[7:7]
#define B1_DQ3_RG_RX_ARDQ_STBENCMP_EN_B1                   Fld(1, 10) //[10:10]
#define B1_DQ3_RG_RX_ARDQ_OFFC_EN_B1                       Fld(1, 11) //[11:11]
#define B1_DQ3_RG_RX_ARDQS0_SWAP_EN_B1                     Fld(1, 15) //[15:15]

#define DDRPHY_B1_DQ4                                      (DDRPHY_AO_BASE_ADDR + 0x0128)
#define B1_DQ4_RG_RX_ARDQS_EYE_R_DLY_B1                    Fld(7, 0) //[6:0]
#define B1_DQ4_RG_RX_ARDQS_EYE_F_DLY_B1                    Fld(7, 8) //[14:8]
#define B1_DQ4_RG_RX_ARDQ_EYE_R_DLY_B1                     Fld(6, 16) //[21:16]
#define B1_DQ4_RG_RX_ARDQ_EYE_F_DLY_B1                     Fld(6, 24) //[29:24]

#define DDRPHY_B1_DQ5                                      (DDRPHY_AO_BASE_ADDR + 0x012C)
#define B1_DQ5_B1_DQ5_RFU                                  Fld(8, 0) //[7:0]
#define B1_DQ5_RG_RX_ARDQ_EYE_VREF_SEL_B1                  Fld(6, 8) //[13:8]
#define B1_DQ5_RG_RX_ARDQ_VREF_EN_B1                       Fld(1, 16) //[16:16]
#define B1_DQ5_RG_RX_ARDQ_EYE_VREF_EN_B1                   Fld(1, 17) //[17:17]
#define B1_DQ5_RG_RX_ARDQ_EYE_SEL_B1                       Fld(4, 20) //[23:20]
#define B1_DQ5_RG_RX_ARDQ_EYE_EN_B1                        Fld(1, 24) //[24:24]
#define B1_DQ5_RG_RX_ARDQ_EYE_STBEN_RESETB_B1              Fld(1, 25) //[25:25]
#define B1_DQ5_RG_RX_ARDQS0_DVS_EN_B1                      Fld(1, 31) //[31:31]

#define DDRPHY_B1_DQ6                                      (DDRPHY_AO_BASE_ADDR + 0x0130)
#define B1_DQ6_RG_RX_ARDQ_BIAS_PS_B1                       Fld(2, 0) //[1:0]
#define B1_DQ6_RG_TX_ARDQ_OE_EXT_DIS_B1                    Fld(1, 2) //[2:2]
#define B1_DQ6_RG_TX_ARDQ_ODTEN_EXT_DIS_B1                 Fld(1, 3) //[3:3]
#define B1_DQ6_RG_TX_ARDQ_SER_MODE_B1                      Fld(1, 4) //[4:4]
#define B1_DQ6_RG_RX_ARDQ_RPRE_TOG_EN_B1                   Fld(1, 5) //[5:5]
#define B1_DQ6_RG_RX_ARDQ_RES_BIAS_EN_B1                   Fld(1, 6) //[6:6]
#define B1_DQ6_RG_RX_ARDQ_OP_BIAS_SW_EN_B1                 Fld(1, 7) //[7:7]
#define B1_DQ6_RG_RX_ARDQ_LPBK_EN_B1                       Fld(1, 8) //[8:8]
#define B1_DQ6_RG_RX_ARDQ_O1_SEL_B1                        Fld(1, 9) //[9:9]
#define B1_DQ6_RG_RX_ARDQ_JM_SEL_B1                        Fld(1, 11) //[11:11]
#define B1_DQ6_RG_RX_ARDQ_BIAS_EN_B1                       Fld(1, 12) //[12:12]
#define B1_DQ6_RG_RX_ARDQ_BIAS_VREF_SEL_B1                 Fld(2, 14) //[15:14]
#define B1_DQ6_RG_RX_ARDQ_DDR4_SEL_B1                      Fld(1, 16) //[16:16]
#define B1_DQ6_RG_TX_ARDQ_DDR4_SEL_B1                      Fld(1, 17) //[17:17]
#define B1_DQ6_RG_RX_ARDQ_DDR3_SEL_B1                      Fld(1, 18) //[18:18]
#define B1_DQ6_RG_TX_ARDQ_DDR3_SEL_B1                      Fld(1, 19) //[19:19]
#define B1_DQ6_RG_RX_ARDQ_EYE_DLY_DQS_BYPASS_B1            Fld(1, 24) //[24:24]
#define B1_DQ6_RG_RX_ARDQ_EYE_OE_GATE_EN_B1                Fld(1, 28) //[28:28]
#define B1_DQ6_RG_RX_ARDQ_DMRANK_OUTSEL_B1                 Fld(1, 31) //[31:31]

#define DDRPHY_B1_DQ7                                      (DDRPHY_AO_BASE_ADDR + 0x0134)
#define B1_DQ7_RG_TX_ARDQS0B_PULL_DN_B1                    Fld(1, 0) //[0:0]
#define B1_DQ7_RG_TX_ARDQS0B_PULL_UP_B1                    Fld(1, 1) //[1:1]
#define B1_DQ7_RG_TX_ARDQS0_PULL_DN_B1                     Fld(1, 2) //[2:2]
#define B1_DQ7_RG_TX_ARDQS0_PULL_UP_B1                     Fld(1, 3) //[3:3]
#define B1_DQ7_RG_TX_ARDQM0_PULL_DN_B1                     Fld(1, 4) //[4:4]
#define B1_DQ7_RG_TX_ARDQM0_PULL_UP_B1                     Fld(1, 5) //[5:5]
#define B1_DQ7_RG_TX_ARDQ_PULL_DN_B1                       Fld(1, 6) //[6:6]
#define B1_DQ7_RG_TX_ARDQ_PULL_UP_B1                       Fld(1, 7) //[7:7]
#define B1_DQ7_RG_TX_ARDQS0B_PULL_DN_B1_LP4Y               Fld(1, 16) //[16:16]

#define DDRPHY_B1_DQ8                                      (DDRPHY_AO_BASE_ADDR + 0x0138)
#define B1_DQ8_RG_TX_ARDQ_EN_LP4P_B1                       Fld(1, 0) //[0:0]
#define B1_DQ8_RG_TX_ARDQ_EN_CAP_LP4P_B1                   Fld(1, 1) //[1:1]
#define B1_DQ8_RG_TX_ARDQ_CAP_DET_B1                       Fld(1, 2) //[2:2]
#define B1_DQ8_RG_TX_ARDQ_CKE_MCK4X_SEL_B1                 Fld(2, 3) //[4:3]
#define B1_DQ8_RG_ARPI_TX_CG_DQ_EN_B1                      Fld(1, 5) //[5:5]
#define B1_DQ8_RG_ARPI_TX_CG_DQM_EN_B1                     Fld(1, 6) //[6:6]
#define B1_DQ8_RG_ARPI_TX_CG_DQS_EN_B1                     Fld(1, 7) //[7:7]
#define B1_DQ8_RG_RX_ARDQS_BURST_E1_EN_B1                  Fld(1, 8) //[8:8]
#define B1_DQ8_RG_RX_ARDQS_BURST_E2_EN_B1                  Fld(1, 9) //[9:9]
#define B1_DQ8_RG_RX_ARDQS_DQSSTB_CG_EN_B1                 Fld(1, 10) //[10:10]
#define B1_DQ8_RG_RX_ARDQS_GATE_EN_MODE_B1                 Fld(1, 12) //[12:12]
#define B1_DQ8_RG_RX_ARDQS_SER_RST_MODE_B1                 Fld(1, 13) //[13:13]
#define B1_DQ8_RG_ARDLL_RESETB_B1                          Fld(1, 15) //[15:15]

#define DDRPHY_B1_DQ9                                      (DDRPHY_AO_BASE_ADDR + 0x013C)
#define B1_DQ9_RG_RX_ARDQ_STBEN_RESETB_B1                  Fld(1, 0) //[0:0]
#define B1_DQ9_RG_RX_ARDQS0_STBEN_RESETB_B1                Fld(1, 4) //[4:4]
#define B1_DQ9_RG_RX_ARDQS0_DQSIENMODE_B1                  Fld(1, 5) //[5:5]
#define B1_DQ9_R_DMRXFIFO_STBENCMP_EN_B1                   Fld(1, 7) //[7:7]
#define B1_DQ9_R_IN_GATE_EN_LOW_OPT_B1                     Fld(8, 8) //[15:8]
#define B1_DQ9_R_DMDQSIEN_VALID_LAT_B1                     Fld(3, 16) //[18:16]
#define B1_DQ9_R_DMDQSIEN_RDSEL_LAT_B1                     Fld(3, 20) //[22:20]
#define B1_DQ9_R_DMRXDVS_VALID_LAT_B1                      Fld(3, 24) //[26:24]
#define B1_DQ9_R_DMRXDVS_RDSEL_LAT_B1                      Fld(3, 28) //[30:28]

#define DDRPHY_RFU_0X140                                   (DDRPHY_AO_BASE_ADDR + 0x0140)
#define RFU_0X140_RESERVED_0X140                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X144                                   (DDRPHY_AO_BASE_ADDR + 0x0144)
#define RFU_0X144_RESERVED_0X144                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X148                                   (DDRPHY_AO_BASE_ADDR + 0x0148)
#define RFU_0X148_RESERVED_0X148                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X14C                                   (DDRPHY_AO_BASE_ADDR + 0x014C)
#define RFU_0X14C_RESERVED_0X14C                           Fld(32, 0) //[31:0]

#define DDRPHY_B1_TX_MCK                                   (DDRPHY_AO_BASE_ADDR + 0x0150)
#define B1_TX_MCK_R_DM_TX_MCK_FRUN_B1                      Fld(10, 0) //[9:0]

#define DDRPHY_RFU_0X154                                   (DDRPHY_AO_BASE_ADDR + 0x0154)
#define RFU_0X154_RESERVED_0X154                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X158                                   (DDRPHY_AO_BASE_ADDR + 0x0158)
#define RFU_0X158_RESERVED_0X158                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X15C                                   (DDRPHY_AO_BASE_ADDR + 0x015C)
#define RFU_0X15C_RESERVED_0X15C                           Fld(32, 0) //[31:0]

#define DDRPHY_CA_DLL_ARPI0                                (DDRPHY_AO_BASE_ADDR + 0x0180)
#define CA_DLL_ARPI0_RG_ARMCTLPLL_CK_SEL_CA                Fld(1, 1) //[1:1]
#define CA_DLL_ARPI0_RG_ARPI_RESETB_CA                     Fld(1, 3) //[3:3]
#define CA_DLL_ARPI0_RG_ARPI_LS_EN_CA                      Fld(1, 4) //[4:4]
#define CA_DLL_ARPI0_RG_ARPI_LS_SEL_CA                     Fld(1, 5) //[5:5]
#define CA_DLL_ARPI0_RG_ARPI_MCK8X_SEL_CA                  Fld(1, 6) //[6:6]

#define DDRPHY_CA_DLL_ARPI1                                (DDRPHY_AO_BASE_ADDR + 0x0184)
#define CA_DLL_ARPI1_RG_ARPI_CLKIEN_JUMP_EN                Fld(1, 11) //[11:11]
#define CA_DLL_ARPI1_RG_ARPI_CMD_JUMP_EN                   Fld(1, 13) //[13:13]
#define CA_DLL_ARPI1_RG_ARPI_CLK_JUMP_EN                   Fld(1, 15) //[15:15]
#define CA_DLL_ARPI1_RG_ARPI_CS_JUMP_EN                    Fld(1, 16) //[16:16]
#define CA_DLL_ARPI1_RG_ARPI_FB_JUMP_EN_CA                 Fld(1, 17) //[17:17]
#define CA_DLL_ARPI1_RG_ARPI_MCTL_JUMP_EN_CA               Fld(1, 19) //[19:19]
#define CA_DLL_ARPI1_RG_ARPISM_MCK_SEL_CA_REG_OPT          Fld(1, 20) //[20:20]
#define CA_DLL_ARPI1_RG_ARPISM_MCK_SEL_CA                  Fld(1, 21) //[21:21]
#define CA_DLL_ARPI1_RG_ARPI_SET_UPDN_CA                   Fld(3, 28) //[30:28]

#define DDRPHY_CA_DLL_ARPI2                                (DDRPHY_AO_BASE_ADDR + 0x0188)
#define CA_DLL_ARPI2_RG_ARDLL_PHDET_EN_CA                  Fld(1, 0) //[0:0]
#define CA_DLL_ARPI2_RG_ARPI_MPDIV_CG_CA                   Fld(1, 10) //[10:10]
#define CA_DLL_ARPI2_RG_ARPI_CG_CLKIEN                     Fld(1, 11) //[11:11]
#define CA_DLL_ARPI2_RG_ARPI_CG_CMD                        Fld(1, 13) //[13:13]
#define CA_DLL_ARPI2_RG_ARPI_CG_CLK                        Fld(1, 15) //[15:15]
#define CA_DLL_ARPI2_RG_ARPI_CG_CS                         Fld(1, 16) //[16:16]
#define CA_DLL_ARPI2_RG_ARPI_CG_FB_CA                      Fld(1, 17) //[17:17]
#define CA_DLL_ARPI2_RG_ARPI_CG_MCTL_CA                    Fld(1, 19) //[19:19]
#define CA_DLL_ARPI2_RG_ARPI_CG_MCK_FB2DLL_CA              Fld(1, 27) //[27:27]
#define CA_DLL_ARPI2_RG_ARPI_CG_MCK_CA                     Fld(1, 31) //[31:31]

#define DDRPHY_CA_DLL_ARPI3                                (DDRPHY_AO_BASE_ADDR + 0x018C)
#define CA_DLL_ARPI3_RG_ARPI_CLKIEN_EN                     Fld(1, 11) //[11:11]
#define CA_DLL_ARPI3_RG_ARPI_CMD_EN                        Fld(1, 13) //[13:13]
#define CA_DLL_ARPI3_RG_ARPI_CLK_EN                        Fld(1, 15) //[15:15]
#define CA_DLL_ARPI3_RG_ARPI_CS_EN                         Fld(1, 16) //[16:16]
#define CA_DLL_ARPI3_RG_ARPI_FB_EN_CA                      Fld(1, 17) //[17:17]
#define CA_DLL_ARPI3_RG_ARPI_MCTL_EN_CA                    Fld(1, 19) //[19:19]

#define DDRPHY_CA_DLL_ARPI4                                (DDRPHY_AO_BASE_ADDR + 0x0190)
#define CA_DLL_ARPI4_RG_ARPI_BYPASS_CLKIEN                 Fld(1, 11) //[11:11]
#define CA_DLL_ARPI4_RG_ARPI_BYPASS_CMD                    Fld(1, 13) //[13:13]
#define CA_DLL_ARPI4_RG_ARPI_BYPASS_CLK                    Fld(1, 15) //[15:15]
#define CA_DLL_ARPI4_RG_ARPI_BYPASS_CS                     Fld(1, 16) //[16:16]
#define CA_DLL_ARPI4_RG_ARPI_BYPASS_FB_CA                  Fld(1, 17) //[17:17]
#define CA_DLL_ARPI4_RG_ARPI_BYPASS_MCTL_CA                Fld(1, 19) //[19:19]

#define DDRPHY_CA_DLL_ARPI5                                (DDRPHY_AO_BASE_ADDR + 0x0194)
#define CA_DLL_ARPI5_RG_ARDLL_DIV_MCTL_CA                  Fld(2, 2) //[3:2]
#define CA_DLL_ARPI5_RG_ARDLL_MON_SEL_CA                   Fld(4, 4) //[7:4]
#define CA_DLL_ARPI5_RG_ARDLL_DIV_DEC_CA                   Fld(1, 8) //[8:8]
#define CA_DLL_ARPI5_CA_DLL_ARPI5_RFU                      Fld(12, 12) //[23:12]
#define CA_DLL_ARPI5_RG_ARDLL_FJ_OUT_MODE_SEL_CA           Fld(1, 25) //[25:25]
#define CA_DLL_ARPI5_RG_ARDLL_FJ_OUT_MODE_CA               Fld(1, 26) //[26:26]

#define DDRPHY_CA_CMD0                                     (DDRPHY_AO_BASE_ADDR + 0x0198)
#define CA_CMD0_RG_RX_ARCA0_OFFC                           Fld(4, 0) //[3:0]
#define CA_CMD0_RG_RX_ARCA1_OFFC                           Fld(4, 4) //[7:4]
#define CA_CMD0_RG_RX_ARCA2_OFFC                           Fld(4, 8) //[11:8]
#define CA_CMD0_RG_RX_ARCA3_OFFC                           Fld(4, 12) //[15:12]
#define CA_CMD0_RG_RX_ARCA4_OFFC                           Fld(4, 16) //[19:16]
#define CA_CMD0_RG_RX_ARCA5_OFFC                           Fld(4, 20) //[23:20]

#define DDRPHY_CA_CMD1                                     (DDRPHY_AO_BASE_ADDR + 0x019C)
#define CA_CMD1_RG_RX_ARCS0_OFFC                           Fld(4, 0) //[3:0]
#define CA_CMD1_RG_RX_ARCS1_OFFC                           Fld(4, 4) //[7:4]
#define CA_CMD1_RG_RX_ARCS2_OFFC                           Fld(4, 8) //[11:8]
#define CA_CMD1_RG_RX_ARCKE0_OFFC                          Fld(4, 12) //[15:12]
#define CA_CMD1_RG_RX_ARCKE1_OFFC                          Fld(4, 16) //[19:16]
#define CA_CMD1_RG_RX_ARCKE2_OFFC                          Fld(4, 20) //[23:20]

#define DDRPHY_CA_CMD2                                     (DDRPHY_AO_BASE_ADDR + 0x01A0)
#define CA_CMD2_RG_TX_ARCLK_ODTEN_DIS                      Fld(1, 16) //[16:16]
#define CA_CMD2_RG_TX_ARCLK_OE_DIS                         Fld(1, 17) //[17:17]
#define CA_CMD2_RG_TX_ARCMD_ODTEN_DIS                      Fld(1, 20) //[20:20]
#define CA_CMD2_RG_TX_ARCMD_OE_DIS                         Fld(1, 21) //[21:21]

#define DDRPHY_CA_CMD3                                     (DDRPHY_AO_BASE_ADDR + 0x01A4)
#define CA_CMD3_RG_ARCMD_ATPG_EN                           Fld(1, 0) //[0:0]
#define CA_CMD3_RG_RX_ARCMD_SMT_EN                         Fld(1, 1) //[1:1]
#define CA_CMD3_RG_TX_ARCMD_EN                             Fld(1, 2) //[2:2]
#define CA_CMD3_RG_ARCMD_RESETB                            Fld(1, 3) //[3:3]
#define CA_CMD3_RG_RX_ARCLK_IN_BUFF_EN                     Fld(1, 5) //[5:5]
#define CA_CMD3_RG_RX_ARCMD_IN_BUFF_EN                     Fld(1, 7) //[7:7]
#define CA_CMD3_RG_RX_ARCMD_STBENCMP_EN                    Fld(1, 10) //[10:10]
#define CA_CMD3_RG_RX_ARCMD_OFFC_EN                        Fld(1, 11) //[11:11]
#define CA_CMD3_RG_RX_ARCLK_SWAP_EN                        Fld(1, 15) //[15:15]

#define DDRPHY_CA_CMD4                                     (DDRPHY_AO_BASE_ADDR + 0x01A8)
#define CA_CMD4_RG_RX_ARCLK_EYE_R_DLY                      Fld(7, 0) //[6:0]
#define CA_CMD4_RG_RX_ARCLK_EYE_F_DLY                      Fld(7, 8) //[14:8]
#define CA_CMD4_RG_RX_ARCMD_EYE_R_DLY                      Fld(6, 16) //[21:16]
#define CA_CMD4_RG_RX_ARCMD_EYE_F_DLY                      Fld(6, 24) //[29:24]

#define DDRPHY_CA_CMD5                                     (DDRPHY_AO_BASE_ADDR + 0x01AC)
#define CA_CMD5_CA_CMD5_RFU                                Fld(8, 0) //[7:0]
#define CA_CMD5_RG_RX_ARCMD_EYE_VREF_SEL                   Fld(6, 8) //[13:8]
#define CA_CMD5_RG_RX_ARCMD_VREF_EN                        Fld(1, 16) //[16:16]
#define CA_CMD5_RG_RX_ARCMD_EYE_VREF_EN                    Fld(1, 17) //[17:17]
#define CA_CMD5_RG_RX_ARCMD_EYE_SEL                        Fld(4, 20) //[23:20]
#define CA_CMD5_RG_RX_ARCMD_EYE_EN                         Fld(1, 24) //[24:24]
#define CA_CMD5_RG_RX_ARCMD_EYE_STBEN_RESETB               Fld(1, 25) //[25:25]
#define CA_CMD5_RG_RX_ARCLK_DVS_EN                         Fld(1, 31) //[31:31]

#define DDRPHY_CA_CMD6                                     (DDRPHY_AO_BASE_ADDR + 0x01B0)
#define CA_CMD6_RG_RX_ARCMD_BIAS_PS                        Fld(2, 0) //[1:0]
#define CA_CMD6_RG_TX_ARCMD_OE_EXT_DIS                     Fld(1, 2) //[2:2]
#define CA_CMD6_RG_TX_ARCMD_ODTEN_EXT_DIS                  Fld(1, 3) //[3:3]
#define CA_CMD6_RG_TX_ARCMD_SER_MODE                       Fld(1, 4) //[4:4]
#define CA_CMD6_RG_RX_ARCMD_RPRE_TOG_EN                    Fld(1, 5) //[5:5]
#define CA_CMD6_RG_RX_ARCMD_RES_BIAS_EN                    Fld(1, 6) //[6:6]
#define CA_CMD6_RG_RX_ARCMD_OP_BIAS_SW_EN                  Fld(1, 7) //[7:7]
#define CA_CMD6_RG_RX_ARCMD_LPBK_EN                        Fld(1, 8) //[8:8]
#define CA_CMD6_RG_RX_ARCMD_O1_SEL                         Fld(1, 9) //[9:9]
#define CA_CMD6_RG_RX_ARCMD_JM_SEL                         Fld(1, 11) //[11:11]
#define CA_CMD6_RG_RX_ARCMD_BIAS_EN                        Fld(1, 12) //[12:12]
#define CA_CMD6_RG_RX_ARCMD_BIAS_VREF_SEL                  Fld(2, 14) //[15:14]
#define CA_CMD6_RG_RX_ARCMD_DDR4_SEL                       Fld(1, 16) //[16:16]
#define CA_CMD6_RG_TX_ARCMD_DDR4_SEL                       Fld(1, 17) //[17:17]
#define CA_CMD6_RG_RX_ARCMD_DDR3_SEL                       Fld(1, 18) //[18:18]
#define CA_CMD6_RG_TX_ARCMD_DDR3_SEL                       Fld(1, 19) //[19:19]
#define CA_CMD6_RG_RX_ARCMD_EYE_DLY_DQS_BYPASS             Fld(1, 24) //[24:24]
#define CA_CMD6_RG_RX_ARCMD_EYE_OE_GATE_EN                 Fld(1, 28) //[28:28]
#define CA_CMD6_RG_RX_ARCMD_DMRANK_OUTSEL                  Fld(1, 31) //[31:31]

#define DDRPHY_CA_CMD7                                     (DDRPHY_AO_BASE_ADDR + 0x01B4)
#define CA_CMD7_RG_TX_ARCLKB_PULL_DN                       Fld(1, 0) //[0:0]
#define CA_CMD7_RG_TX_ARCLKB_PULL_UP                       Fld(1, 1) //[1:1]
#define CA_CMD7_RG_TX_ARCLK_PULL_DN                        Fld(1, 2) //[2:2]
#define CA_CMD7_RG_TX_ARCLK_PULL_UP                        Fld(1, 3) //[3:3]
#define CA_CMD7_RG_TX_ARCS_PULL_DN                         Fld(1, 4) //[4:4]
#define CA_CMD7_RG_TX_ARCS_PULL_UP                         Fld(1, 5) //[5:5]
#define CA_CMD7_RG_TX_ARCMD_PULL_DN                        Fld(1, 6) //[6:6]
#define CA_CMD7_RG_TX_ARCMD_PULL_UP                        Fld(1, 7) //[7:7]
#define CA_CMD7_RG_TX_ARCLKB_PULL_DN_LP4Y                  Fld(1, 16) //[16:16]

#define DDRPHY_CA_CMD8                                     (DDRPHY_AO_BASE_ADDR + 0x01B8)
#define CA_CMD8_RG_RRESETB_DRVP                            Fld(5, 0) //[4:0]
#define CA_CMD8_RG_RRESETB_DRVN                            Fld(5, 8) //[12:8]
#define CA_CMD8_RG_RX_RRESETB_SMT_EN                       Fld(1, 16) //[16:16]
#define CA_CMD8_RG_TX_RRESETB_SCAN_IN_EN                   Fld(1, 17) //[17:17]
#define CA_CMD8_RG_TX_RRESETB_DDR4_SEL                     Fld(1, 18) //[18:18]
#define CA_CMD8_RG_TX_RRESETB_DDR3_SEL                     Fld(1, 19) //[19:19]
#define CA_CMD8_RG_TX_RRESETB_PULL_DN                      Fld(1, 20) //[20:20]
#define CA_CMD8_RG_TX_RRESETB_PULL_UP                      Fld(1, 21) //[21:21]

#define DDRPHY_CA_CMD9                                     (DDRPHY_AO_BASE_ADDR + 0x01BC)
#define CA_CMD9_RG_TX_ARCMD_EN_LP4P                        Fld(1, 0) //[0:0]
#define CA_CMD9_RG_TX_ARCMD_EN_CAP_LP4P                    Fld(1, 1) //[1:1]
#define CA_CMD9_RG_TX_ARCMD_CAP_DET                        Fld(1, 2) //[2:2]
#define CA_CMD9_RG_TX_ARCMD_CKE_MCK4X_SEL                  Fld(2, 3) //[4:3]
#define CA_CMD9_RG_ARPI_TX_CG_CS_EN                        Fld(1, 5) //[5:5]
#define CA_CMD9_RG_ARPI_TX_CG_CA_EN                        Fld(1, 6) //[6:6]
#define CA_CMD9_RG_ARPI_TX_CG_CLK_EN                       Fld(1, 7) //[7:7]
#define CA_CMD9_RG_RX_ARCLK_DQSIEN_BURST_E1_EN             Fld(1, 8) //[8:8]
#define CA_CMD9_RG_RX_ARCLK_DQSIEN_BURST_E2_EN             Fld(1, 9) //[9:9]
#define CA_CMD9_RG_RX_ARCLK_DQSSTB_CG_EN                   Fld(1, 10) //[10:10]
#define CA_CMD9_RG_RX_ARCLK_GATE_EN_MODE                   Fld(1, 12) //[12:12]
#define CA_CMD9_RG_RX_ARCLK_SER_RST_MODE                   Fld(1, 13) //[13:13]
#define CA_CMD9_RG_ARDLL_RESETB_CA                         Fld(1, 15) //[15:15]
#define CA_CMD9_RG_TX_ARCMD_LP3_CKE_SEL                    Fld(1, 16) //[16:16]
#define CA_CMD9_RG_TX_ARCMD_LP4_CKE_SEL                    Fld(1, 17) //[17:17]
#define CA_CMD9_RG_TX_ARCMD_LP4X_CKE_SEL                   Fld(1, 18) //[18:18]
#define CA_CMD9_RG_TX_ARCMD_LSH_DQM_CG_EN                  Fld(1, 20) //[20:20]
#define CA_CMD9_RG_TX_ARCMD_LSH_DQS_CG_EN                  Fld(1, 21) //[21:21]
#define CA_CMD9_RG_TX_ARCMD_LSH_DQ_CG_EN                   Fld(1, 22) //[22:22]
#define CA_CMD9_RG_TX_ARCMD_OE_SUS_EN                      Fld(1, 24) //[24:24]
#define CA_CMD9_RG_TX_ARCMD_ODTEN_OE_SUS_EN                Fld(1, 25) //[25:25]

#define DDRPHY_CA_CMD10                                    (DDRPHY_AO_BASE_ADDR + 0x01C0)
#define CA_CMD10_RG_RX_ARCMD_STBEN_RESETB                  Fld(1, 0) //[0:0]
#define CA_CMD10_RG_RX_ARCLK_STBEN_RESETB                  Fld(1, 4) //[4:4]
#define CA_CMD10_RG_RX_ARCLK_DQSIENMODE                    Fld(1, 5) //[5:5]
#define CA_CMD10_R_DMRXFIFO_STBENCMP_EN_CA                 Fld(1, 7) //[7:7]
#define CA_CMD10_R_IN_GATE_EN_LOW_OPT_CA                   Fld(8, 8) //[15:8]
#define CA_CMD10_R_DMDQSIEN_VALID_LAT_CA                   Fld(3, 16) //[18:16]
#define CA_CMD10_R_DMDQSIEN_RDSEL_LAT_CA                   Fld(3, 20) //[22:20]
#define CA_CMD10_R_DMRXDVS_VALID_LAT_CA                    Fld(3, 24) //[26:24]
#define CA_CMD10_R_DMRXDVS_RDSEL_LAT_CA                    Fld(3, 28) //[30:28]

#define DDRPHY_RFU_0X1C4                                   (DDRPHY_AO_BASE_ADDR + 0x01C4)
#define RFU_0X1C4_RESERVED_0X1C4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1C8                                   (DDRPHY_AO_BASE_ADDR + 0x01C8)
#define RFU_0X1C8_RESERVED_0X1C8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1CC                                   (DDRPHY_AO_BASE_ADDR + 0x01CC)
#define RFU_0X1CC_RESERVED_0X1CC                           Fld(32, 0) //[31:0]

#define DDRPHY_CA_TX_MCK                                   (DDRPHY_AO_BASE_ADDR + 0x01D0)
#define CA_TX_MCK_R_DM_TX_MCK_FRUN_CA                      Fld(13, 0) //[12:0]
#define CA_TX_MCK_R_DMRESETB_DRVP_FRPHY                    Fld(5, 21) //[25:21]
#define CA_TX_MCK_R_DMRESETB_DRVN_FRPHY                    Fld(5, 26) //[30:26]
#define CA_TX_MCK_R_DMRESET_FRPHY_OPT                      Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X1D4                                   (DDRPHY_AO_BASE_ADDR + 0x01D4)
#define RFU_0X1D4_RESERVED_0X1D4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D8                                   (DDRPHY_AO_BASE_ADDR + 0x01D8)
#define RFU_0X1D8_RESERVED_0X1D8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1DC                                   (DDRPHY_AO_BASE_ADDR + 0x01DC)
#define RFU_0X1DC_RESERVED_0X1DC                           Fld(32, 0) //[31:0]

#define DDRPHY_MISC_EXTLB0                                 (DDRPHY_AO_BASE_ADDR + 0x0200)
#define MISC_EXTLB0_R_EXTLB_LFSR_INI_1                     Fld(16, 16) //[31:16]
#define MISC_EXTLB0_R_EXTLB_LFSR_INI_0                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB1                                 (DDRPHY_AO_BASE_ADDR + 0x0204)
#define MISC_EXTLB1_R_EXTLB_LFSR_INI_3                     Fld(16, 16) //[31:16]
#define MISC_EXTLB1_R_EXTLB_LFSR_INI_2                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB2                                 (DDRPHY_AO_BASE_ADDR + 0x0208)
#define MISC_EXTLB2_R_EXTLB_LFSR_INI_5                     Fld(16, 16) //[31:16]
#define MISC_EXTLB2_R_EXTLB_LFSR_INI_4                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB3                                 (DDRPHY_AO_BASE_ADDR + 0x020C)
#define MISC_EXTLB3_R_EXTLB_LFSR_INI_7                     Fld(16, 16) //[31:16]
#define MISC_EXTLB3_R_EXTLB_LFSR_INI_6                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB4                                 (DDRPHY_AO_BASE_ADDR + 0x0210)
#define MISC_EXTLB4_R_EXTLB_LFSR_INI_9                     Fld(16, 16) //[31:16]
#define MISC_EXTLB4_R_EXTLB_LFSR_INI_8                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB5                                 (DDRPHY_AO_BASE_ADDR + 0x0214)
#define MISC_EXTLB5_R_EXTLB_LFSR_INI_11                    Fld(16, 16) //[31:16]
#define MISC_EXTLB5_R_EXTLB_LFSR_INI_10                    Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB6                                 (DDRPHY_AO_BASE_ADDR + 0x0218)
#define MISC_EXTLB6_R_EXTLB_LFSR_INI_13                    Fld(16, 16) //[31:16]
#define MISC_EXTLB6_R_EXTLB_LFSR_INI_12                    Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB7                                 (DDRPHY_AO_BASE_ADDR + 0x021C)
#define MISC_EXTLB7_R_EXTLB_LFSR_INI_15                    Fld(16, 16) //[31:16]
#define MISC_EXTLB7_R_EXTLB_LFSR_INI_14                    Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB8                                 (DDRPHY_AO_BASE_ADDR + 0x0220)
#define MISC_EXTLB8_R_EXTLB_LFSR_INI_17                    Fld(16, 16) //[31:16]
#define MISC_EXTLB8_R_EXTLB_LFSR_INI_16                    Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB9                                 (DDRPHY_AO_BASE_ADDR + 0x0224)
#define MISC_EXTLB9_R_EXTLB_LFSR_INI_19                    Fld(16, 16) //[31:16]
#define MISC_EXTLB9_R_EXTLB_LFSR_INI_18                    Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB10                                (DDRPHY_AO_BASE_ADDR + 0x0228)
#define MISC_EXTLB10_R_EXTLB_LFSR_INI_21                   Fld(16, 16) //[31:16]
#define MISC_EXTLB10_R_EXTLB_LFSR_INI_20                   Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB11                                (DDRPHY_AO_BASE_ADDR + 0x022C)
#define MISC_EXTLB11_R_EXTLB_LFSR_INI_23                   Fld(16, 16) //[31:16]
#define MISC_EXTLB11_R_EXTLB_LFSR_INI_22                   Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB12                                (DDRPHY_AO_BASE_ADDR + 0x0230)
#define MISC_EXTLB12_R_EXTLB_LFSR_INI_25                   Fld(16, 16) //[31:16]
#define MISC_EXTLB12_R_EXTLB_LFSR_INI_24                   Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB13                                (DDRPHY_AO_BASE_ADDR + 0x0234)
#define MISC_EXTLB13_R_EXTLB_LFSR_INI_27                   Fld(16, 16) //[31:16]
#define MISC_EXTLB13_R_EXTLB_LFSR_INI_26                   Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB14                                (DDRPHY_AO_BASE_ADDR + 0x0238)
#define MISC_EXTLB14_R_EXTLB_LFSR_INI_29                   Fld(16, 16) //[31:16]
#define MISC_EXTLB14_R_EXTLB_LFSR_INI_28                   Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB15                                (DDRPHY_AO_BASE_ADDR + 0x023C)
#define MISC_EXTLB15_R_EXTLB_LFSR_INI_30                   Fld(16, 0) //[15:0]
#define MISC_EXTLB15_MISC_EXTLB15_RFU                      Fld(16, 16) //[31:16]

#define DDRPHY_MISC_EXTLB16                                (DDRPHY_AO_BASE_ADDR + 0x0240)
#define MISC_EXTLB16_R_EXTLB_ODTEN_DQS1_ON                 Fld(1, 27) //[27:27]
#define MISC_EXTLB16_R_EXTLB_ODTEN_DQM1_ON                 Fld(1, 26) //[26:26]
#define MISC_EXTLB16_R_EXTLB_ODTEN_DQB1_ON                 Fld(1, 25) //[25:25]
#define MISC_EXTLB16_R_EXTLB_ODTEN_DQS0_ON                 Fld(1, 24) //[24:24]
#define MISC_EXTLB16_R_EXTLB_ODTEN_DQM0_ON                 Fld(1, 23) //[23:23]
#define MISC_EXTLB16_R_EXTLB_ODTEN_DQB0_ON                 Fld(1, 22) //[22:22]
#define MISC_EXTLB16_R_EXTLB_OE_DQS1_ON                    Fld(1, 21) //[21:21]
#define MISC_EXTLB16_R_EXTLB_OE_DQM1_ON                    Fld(1, 20) //[20:20]
#define MISC_EXTLB16_R_EXTLB_OE_DQB1_ON                    Fld(1, 19) //[19:19]
#define MISC_EXTLB16_R_EXTLB_OE_DQS0_ON                    Fld(1, 18) //[18:18]
#define MISC_EXTLB16_R_EXTLB_OE_DQM0_ON                    Fld(1, 17) //[17:17]
#define MISC_EXTLB16_R_EXTLB_OE_DQB0_ON                    Fld(1, 16) //[16:16]
#define MISC_EXTLB16_R_EXTLB_LFSR_TAP                      Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB17                                (DDRPHY_AO_BASE_ADDR + 0x0244)
#define MISC_EXTLB17_R_EXTLB_RX_LENGTH_M1                  Fld(24, 8) //[31:8]
#define MISC_EXTLB17_R_EXTLB_TX_PRE_ON                     Fld(1, 7) //[7:7]
#define MISC_EXTLB17_R_INTLB_DRDF_CA_MUXSEL                Fld(1, 5) //[5:5]
#define MISC_EXTLB17_R_INTLB_ARCLK_MUXSEL                  Fld(1, 4) //[4:4]
#define MISC_EXTLB17_R_EXTLB_TX_EN_OTHERCH_SEL             Fld(1, 3) //[3:3]
#define MISC_EXTLB17_R_EXTLB_TX_EN                         Fld(1, 2) //[2:2]
#define MISC_EXTLB17_R_EXTLB_RX_SWRST                      Fld(1, 1) //[1:1]
#define MISC_EXTLB17_R_EXTLB                               Fld(1, 0) //[0:0]

#define DDRPHY_MISC_EXTLB18                                (DDRPHY_AO_BASE_ADDR + 0x0248)
#define MISC_EXTLB18_R_TX_EN_SRC_SEL                       Fld(1, 0) //[0:0]
#define MISC_EXTLB18_R_OTH_TX_EN_SRC_SEL                   Fld(1, 1) //[1:1]
#define MISC_EXTLB18_R_LPBK_DQ_MODE_FOR_CA                 Fld(1, 3) //[3:3]
#define MISC_EXTLB18_R_LPBK_DQ_TX_MODE                     Fld(1, 4) //[4:4]
#define MISC_EXTLB18_R_LPBK_CA_TX_MODE                     Fld(1, 5) //[5:5]
#define MISC_EXTLB18_R_LPBK_DQ_RX_MODE                     Fld(1, 8) //[8:8]
#define MISC_EXTLB18_R_LPBK_CA_RX_MODE                     Fld(1, 9) //[9:9]
#define MISC_EXTLB18_R_TX_TRIG_SRC_SEL                     Fld(4, 16) //[19:16]
#define MISC_EXTLB18_R_OTH_TX_TRIG_SRC_SEL                 Fld(4, 20) //[23:20]

#define DDRPHY_MISC_EXTLB19                                (DDRPHY_AO_BASE_ADDR + 0x024C)
#define MISC_EXTLB19_R_EXTLB_LFSR_ENABLE                   Fld(1, 0) //[0:0]
#define MISC_EXTLB19_R_EXTLB_SSO_ENABLE                    Fld(1, 1) //[1:1]
#define MISC_EXTLB19_R_EXTLB_XTALK_ENABLE                  Fld(1, 2) //[2:2]
#define MISC_EXTLB19_R_EXTLB_DBG_SEL                       Fld(5, 16) //[20:16]

#define DDRPHY_MISC_EXTLB20                                (DDRPHY_AO_BASE_ADDR + 0x0250)
#define MISC_EXTLB20_R_XTALK_TX_00_TOG_CYCLE               Fld(4, 0) //[3:0]
#define MISC_EXTLB20_R_XTALK_TX_01_TOG_CYCLE               Fld(4, 4) //[7:4]
#define MISC_EXTLB20_R_XTALK_TX_02_TOG_CYCLE               Fld(4, 8) //[11:8]
#define MISC_EXTLB20_R_XTALK_TX_03_TOG_CYCLE               Fld(4, 12) //[15:12]
#define MISC_EXTLB20_R_XTALK_TX_04_TOG_CYCLE               Fld(4, 16) //[19:16]
#define MISC_EXTLB20_R_XTALK_TX_05_TOG_CYCLE               Fld(4, 20) //[23:20]
#define MISC_EXTLB20_R_XTALK_TX_06_TOG_CYCLE               Fld(4, 24) //[27:24]
#define MISC_EXTLB20_R_XTALK_TX_07_TOG_CYCLE               Fld(4, 28) //[31:28]

#define DDRPHY_MISC_EXTLB21                                (DDRPHY_AO_BASE_ADDR + 0x0254)
#define MISC_EXTLB21_R_XTALK_TX_08_TOG_CYCLE               Fld(4, 0) //[3:0]
#define MISC_EXTLB21_R_XTALK_TX_09_TOG_CYCLE               Fld(4, 4) //[7:4]
#define MISC_EXTLB21_R_XTALK_TX_10_TOG_CYCLE               Fld(4, 8) //[11:8]
#define MISC_EXTLB21_R_XTALK_TX_11_TOG_CYCLE               Fld(4, 12) //[15:12]
#define MISC_EXTLB21_R_XTALK_TX_12_TOG_CYCLE               Fld(4, 16) //[19:16]
#define MISC_EXTLB21_R_XTALK_TX_13_TOG_CYCLE               Fld(4, 20) //[23:20]
#define MISC_EXTLB21_R_XTALK_TX_14_TOG_CYCLE               Fld(4, 24) //[27:24]
#define MISC_EXTLB21_R_XTALK_TX_15_TOG_CYCLE               Fld(4, 28) //[31:28]

#define DDRPHY_MISC_EXTLB22                                (DDRPHY_AO_BASE_ADDR + 0x0258)
#define MISC_EXTLB22_R_XTALK_TX_16_TOG_CYCLE               Fld(4, 0) //[3:0]
#define MISC_EXTLB22_R_XTALK_TX_17_TOG_CYCLE               Fld(4, 4) //[7:4]
#define MISC_EXTLB22_R_XTALK_TX_18_TOG_CYCLE               Fld(4, 8) //[11:8]
#define MISC_EXTLB22_R_XTALK_TX_19_TOG_CYCLE               Fld(4, 12) //[15:12]
#define MISC_EXTLB22_R_XTALK_TX_20_TOG_CYCLE               Fld(4, 16) //[19:16]
#define MISC_EXTLB22_R_XTALK_TX_21_TOG_CYCLE               Fld(4, 20) //[23:20]
#define MISC_EXTLB22_R_XTALK_TX_22_TOG_CYCLE               Fld(4, 24) //[27:24]
#define MISC_EXTLB22_R_XTALK_TX_23_TOG_CYCLE               Fld(4, 28) //[31:28]

#define DDRPHY_MISC_EXTLB23                                (DDRPHY_AO_BASE_ADDR + 0x025C)
#define MISC_EXTLB23_R_XTALK_TX_24_TOG_CYCLE               Fld(4, 0) //[3:0]
#define MISC_EXTLB23_R_XTALK_TX_25_TOG_CYCLE               Fld(4, 4) //[7:4]
#define MISC_EXTLB23_R_XTALK_TX_26_TOG_CYCLE               Fld(4, 8) //[11:8]
#define MISC_EXTLB23_R_XTALK_TX_27_TOG_CYCLE               Fld(4, 12) //[15:12]
#define MISC_EXTLB23_R_XTALK_TX_28_TOG_CYCLE               Fld(4, 16) //[19:16]
#define MISC_EXTLB23_R_XTALK_TX_29_TOG_CYCLE               Fld(4, 20) //[23:20]
#define MISC_EXTLB23_R_XTALK_TX_30_TOG_CYCLE               Fld(4, 24) //[27:24]
#define MISC_EXTLB23_R_XTALK_TX_31_TOG_CYCLE               Fld(4, 28) //[31:28]

#define DDRPHY_DVFS_EMI_CLK                                (DDRPHY_AO_BASE_ADDR + 0x0260)
#define DVFS_EMI_CLK_RG_DLL_SHUFFLE                        Fld(1, 24) //[24:24]
#define DVFS_EMI_CLK_RG_52M_104M_SEL                       Fld(1, 29) //[29:29]
#define DVFS_EMI_CLK_RG_GATING_EMI_NEW                     Fld(2, 30) //[31:30]

#define DDRPHY_MISC_VREF_CTRL                              (DDRPHY_AO_BASE_ADDR + 0x0264)
#define MISC_VREF_CTRL_VREF_CTRL_RFU                       Fld(15, 16) //[30:16]
#define MISC_VREF_CTRL_RG_RVREF_VREF_EN                    Fld(1, 31) //[31:31]

#define DDRPHY_MISC_IMP_CTRL0                              (DDRPHY_AO_BASE_ADDR + 0x0268)
#define MISC_IMP_CTRL0_RG_IMP_OCD_PUCMP_EN                 Fld(1, 0) //[0:0]
#define MISC_IMP_CTRL0_RG_IMP_EN                           Fld(1, 4) //[4:4]
#define MISC_IMP_CTRL0_RG_RIMP_DDR4_SEL                    Fld(1, 5) //[5:5]
#define MISC_IMP_CTRL0_RG_RIMP_DDR3_SEL                    Fld(1, 6) //[6:6]

#define DDRPHY_MISC_IMP_CTRL1                              (DDRPHY_AO_BASE_ADDR + 0x026C)
#define MISC_IMP_CTRL1_RG_RIMP_DRVP                        Fld(5, 0) //[4:0]
#define MISC_IMP_CTRL1_RG_RIMP_DRVN                        Fld(5, 8) //[12:8]
#define MISC_IMP_CTRL1_RG_RIMP_DRV05                       Fld(1, 16) //[16:16]
#define MISC_IMP_CTRL1_RG_RIMP_BIAS_EN                     Fld(1, 17) //[17:17]
#define MISC_IMP_CTRL1_RG_RIMP_ODT_EN                      Fld(1, 18) //[18:18]
#define MISC_IMP_CTRL1_RG_RIMP_PRE_EN                      Fld(1, 19) //[19:19]
#define MISC_IMP_CTRL1_RG_RIMP_VREF_EN                     Fld(1, 20) //[20:20]
#define MISC_IMP_CTRL1_RG_RIMP_SUS_ECO_OPT                 Fld(1, 31) //[31:31]

#define DDRPHY_MISC_SHU_OPT                                (DDRPHY_AO_BASE_ADDR + 0x0270)
#define MISC_SHU_OPT_R_DQB0_SHU_PHY_GATING_RESETB_SPM_EN   Fld(1, 0) //[0:0]
#define MISC_SHU_OPT_R_DQB0_SHU_PHDET_SPM_EN               Fld(2, 2) //[3:2]
#define MISC_SHU_OPT_R_DQB1_SHU_PHY_GATING_RESETB_SPM_EN   Fld(1, 8) //[8:8]
#define MISC_SHU_OPT_R_DQB1_SHU_PHDET_SPM_EN               Fld(2, 10) //[11:10]
#define MISC_SHU_OPT_R_CA_SHU_PHY_GATING_RESETB_SPM_EN     Fld(1, 16) //[16:16]
#define MISC_SHU_OPT_R_CA_SHU_PHDET_SPM_EN                 Fld(2, 18) //[19:18]

#define DDRPHY_MISC_SPM_CTRL0                              (DDRPHY_AO_BASE_ADDR + 0x0274)
#define MISC_SPM_CTRL0_PHY_SPM_CTL0                        Fld(32, 0) //[31:0]

#define DDRPHY_MISC_SPM_CTRL1                              (DDRPHY_AO_BASE_ADDR + 0x0278)
#define MISC_SPM_CTRL1_RG_ARDMSUS_10                       Fld(1, 0) //[0:0]
#define MISC_SPM_CTRL1_RG_ARDMSUS_10_B0                    Fld(1, 1) //[1:1]
#define MISC_SPM_CTRL1_RG_ARDMSUS_10_B1                    Fld(1, 2) //[2:2]
#define MISC_SPM_CTRL1_RG_ARDMSUS_10_CA                    Fld(1, 3) //[3:3]
#define MISC_SPM_CTRL1_SPM_DVFS_CONTROL_SEL                Fld(1, 16) //[16:16]
#define MISC_SPM_CTRL1_RG_DR_SHU_LEVEL                     Fld(2, 17) //[18:17]
#define MISC_SPM_CTRL1_RG_PHYPLL_SHU_EN                    Fld(1, 19) //[19:19]
#define MISC_SPM_CTRL1_RG_PHYPLL2_SHU_EN                   Fld(1, 20) //[20:20]
#define MISC_SPM_CTRL1_RG_PHYPLL_MODE_SW                   Fld(1, 21) //[21:21]
#define MISC_SPM_CTRL1_RG_PHYPLL2_MODE_SW                  Fld(1, 22) //[22:22]
#define MISC_SPM_CTRL1_RG_DR_SHORT_QUEUE                   Fld(1, 23) //[23:23]
#define MISC_SPM_CTRL1_RG_DR_SHU_EN                        Fld(1, 24) //[24:24]
#define MISC_SPM_CTRL1_RG_DDRPHY_DB_CK_CH0_EN              Fld(1, 25) //[25:25]
#define MISC_SPM_CTRL1_RG_DDRPHY_DB_CK_CH1_EN              Fld(1, 26) //[26:26]

#define DDRPHY_MISC_SPM_CTRL2                              (DDRPHY_AO_BASE_ADDR + 0x027C)
#define MISC_SPM_CTRL2_PHY_SPM_CTL2                        Fld(32, 0) //[31:0]

#define DDRPHY_MISC_SPM_CTRL3                              (DDRPHY_AO_BASE_ADDR + 0x0280)
#define MISC_SPM_CTRL3_PHY_SPM_CTL3                        Fld(32, 0) //[31:0]

#define DDRPHY_MISC_CG_CTRL0                               (DDRPHY_AO_BASE_ADDR + 0x0284)
#define MISC_CG_CTRL0_W_CHG_MEM                            Fld(1, 0) //[0:0]
#define MISC_CG_CTRL0_CLK_MEM_SEL                          Fld(2, 4) //[5:4]
#define MISC_CG_CTRL0_CLK_MEM_INV                          Fld(1, 6) //[6:6]
#define MISC_CG_CTRL0_RG_CG_EMI_OFF_DISABLE                Fld(1, 8) //[8:8]
#define MISC_CG_CTRL0_RG_CG_DRAMC_OFF_DISABLE              Fld(1, 9) //[9:9]
#define MISC_CG_CTRL0_RG_CG_PHY_OFF_DIABLE                 Fld(1, 10) //[10:10]
#define MISC_CG_CTRL0_RG_CG_COMB_OFF_DISABLE               Fld(1, 11) //[11:11]
#define MISC_CG_CTRL0_RG_CG_CMD_OFF_DISABLE                Fld(1, 12) //[12:12]
#define MISC_CG_CTRL0_RG_CG_COMB0_OFF_DISABLE              Fld(1, 13) //[13:13]
#define MISC_CG_CTRL0_RG_CG_COMB1_OFF_DISABLE              Fld(1, 14) //[14:14]
#define MISC_CG_CTRL0_RG_CG_RX_CMD_OFF_DISABLE             Fld(1, 15) //[15:15]
#define MISC_CG_CTRL0_RG_CG_RX_COMB0_OFF_DISABLE           Fld(1, 16) //[16:16]
#define MISC_CG_CTRL0_RG_CG_RX_COMB1_OFF_DISABLE           Fld(1, 17) //[17:17]
#define MISC_CG_CTRL0_RG_CG_IDLE_SYNC_EN                   Fld(1, 18) //[18:18]
#define MISC_CG_CTRL0_RG_CG_INFRA_OFF_DISABLE              Fld(1, 19) //[19:19]
#define MISC_CG_CTRL0_RG_CG_DRAMC_CHB_CK_OFF               Fld(1, 20) //[20:20]
#define MISC_CG_CTRL0_RG_DBG_OUT_SEL                       Fld(1, 21) //[21:21]
#define MISC_CG_CTRL0_RG_CG_NAO_FORCE_OFF                  Fld(1, 22) //[22:22]
#define MISC_CG_CTRL0_RG_CG_PSRAMC_CHA_CK_OFF              Fld(1, 23) //[23:23]
#define MISC_CG_CTRL0_RG_CG_NAO_FORCE_OFF_PSRAMC           Fld(1, 27) //[27:27]
#define MISC_CG_CTRL0_RG_DA_RREF_CK_SEL                    Fld(1, 28) //[28:28]
#define MISC_CG_CTRL0_RG_FREERUN_MCK_CG                    Fld(1, 29) //[29:29]
#define MISC_CG_CTRL0_RG_FREERUN_MCK_CHB_SEL               Fld(1, 30) //[30:30]
#define MISC_CG_CTRL0_RG_IDLE_SRC_SEL                      Fld(1, 31) //[31:31]

#define DDRPHY_MISC_CG_CTRL1                               (DDRPHY_AO_BASE_ADDR + 0x0288)
#define MISC_CG_CTRL1_R_DVS_DIV4_CG_CTRL                   Fld(32, 0) //[31:0]

#define DDRPHY_MISC_CG_CTRL2                               (DDRPHY_AO_BASE_ADDR + 0x028C)
#define MISC_CG_CTRL2_RG_MEM_DCM_APB_TOG                   Fld(1, 0) //[0:0]
#define MISC_CG_CTRL2_RG_MEM_DCM_APB_SEL                   Fld(5, 1) //[5:1]
#define MISC_CG_CTRL2_RG_MEM_DCM_FORCE_ON                  Fld(1, 6) //[6:6]
#define MISC_CG_CTRL2_RG_MEM_DCM_DCM_EN                    Fld(1, 7) //[7:7]
#define MISC_CG_CTRL2_RG_MEM_DCM_DBC_EN                    Fld(1, 8) //[8:8]
#define MISC_CG_CTRL2_RG_MEM_DCM_DBC_CNT                   Fld(7, 9) //[15:9]
#define MISC_CG_CTRL2_RG_MEM_DCM_FSEL                      Fld(5, 16) //[20:16]
#define MISC_CG_CTRL2_RG_MEM_DCM_IDLE_FSEL                 Fld(5, 21) //[25:21]
#define MISC_CG_CTRL2_RG_MEM_DCM_FORCE_OFF                 Fld(1, 26) //[26:26]
#define MISC_CG_CTRL2_RG_PHY_CG_OFF_DISABLE                Fld(1, 28) //[28:28]
#define MISC_CG_CTRL2_RG_PIPE0_CG_OFF_DISABLE              Fld(1, 29) //[29:29]
#define MISC_CG_CTRL2_RG_MEM_DCM_CG_OFF_DISABLE            Fld(1, 31) //[31:31]

#define DDRPHY_MISC_CG_CTRL3                               (DDRPHY_AO_BASE_ADDR + 0x0290)
#define MISC_CG_CTRL3_R_LBK_CG_CTRL                        Fld(32, 0) //[31:0]

#define DDRPHY_MISC_CG_CTRL4                               (DDRPHY_AO_BASE_ADDR + 0x0294)
#define MISC_CG_CTRL4_R_PHY_MCK_CG_CTRL                    Fld(32, 0) //[31:0]

#define DDRPHY_MISC_CG_CTRL5                               (DDRPHY_AO_BASE_ADDR + 0x0298)
#define MISC_CG_CTRL5_RESERVE                              Fld(16, 0) //[15:0]
#define MISC_CG_CTRL5_R_DQ1_DLY_DCM_EN                     Fld(1, 16) //[16:16]
#define MISC_CG_CTRL5_R_DQ0_DLY_DCM_EN                     Fld(1, 17) //[17:17]
#define MISC_CG_CTRL5_R_CA_DLY_DCM_EN                      Fld(1, 18) //[18:18]
#define MISC_CG_CTRL5_R_DQ1_PI_DCM_EN                      Fld(1, 20) //[20:20]
#define MISC_CG_CTRL5_R_DQ0_PI_DCM_EN                      Fld(1, 21) //[21:21]
#define MISC_CG_CTRL5_R_CA_PI_DCM_EN                       Fld(1, 22) //[22:22]

#define DDRPHY_MISC_CTRL0                                  (DDRPHY_AO_BASE_ADDR + 0x029C)
#define MISC_CTRL0_R_DMDQSIEN_SYNCOPT                      Fld(4, 0) //[3:0]
#define MISC_CTRL0_R_DMDQSIEN_OUTSEL                       Fld(4, 4) //[7:4]
#define MISC_CTRL0_R_DMSTBEN_SYNCOPT                       Fld(1, 8) //[8:8]
#define MISC_CTRL0_R_DMSTBEN_OUTSEL                        Fld(1, 9) //[9:9]
#define MISC_CTRL0_IMPCAL_CHAB_EN                          Fld(1, 10) //[10:10]
#define MISC_CTRL0_R_DMVALID_DLY_OPT                       Fld(1, 11) //[11:11]
#define MISC_CTRL0_R_DMVALID_NARROW_IG                     Fld(1, 12) //[12:12]
#define MISC_CTRL0_R_DMVALID_DLY                           Fld(3, 13) //[15:13]
#define MISC_CTRL0_R_DMDQSIEN_DEPTH_HALF                   Fld(1, 16) //[16:16]
#define MISC_CTRL0_R_DMRDSEL_DIV2_OPT                      Fld(1, 17) //[17:17]
#define MISC_CTRL0_IMPCAL_LP_ECO_OPT                       Fld(1, 18) //[18:18]
#define MISC_CTRL0_IMPCAL_CDC_ECO_OPT                      Fld(1, 19) //[19:19]
#define MISC_CTRL0_IMPCAL_CTL_CK_SEL                       Fld(1, 21) //[21:21]
#define MISC_CTRL0_R_DMDQSIEN_FIFO_EN                      Fld(1, 24) //[24:24]
#define MISC_CTRL0_R_DMSTBENCMP_FIFO_EN                    Fld(1, 25) //[25:25]
#define MISC_CTRL0_R_DMSTBENCMP_RK_FIFO_EN                 Fld(1, 26) //[26:26]
#define MISC_CTRL0_R_DMSHU_PHYDCM_FORCEOFF                 Fld(1, 27) //[27:27]
#define MISC_CTRL0_R_DQS0IEN_DIV4_CK_CG_CTRL               Fld(1, 28) //[28:28]
#define MISC_CTRL0_R_DQS1IEN_DIV4_CK_CG_CTRL               Fld(1, 29) //[29:29]
#define MISC_CTRL0_R_CLKIEN_DIV4_CK_CG_CTRL                Fld(1, 30) //[30:30]
#define MISC_CTRL0_R_STBENCMP_DIV4CK_EN                    Fld(1, 31) //[31:31]

#define DDRPHY_MISC_CTRL1                                  (DDRPHY_AO_BASE_ADDR + 0x02A0)
#define MISC_CTRL1_R_DMPHYRST                              Fld(1, 1) //[1:1]
#define MISC_CTRL1_R_DM_TX_ARCLK_OE                        Fld(1, 2) //[2:2]
#define MISC_CTRL1_R_DM_TX_ARCMD_OE                        Fld(1, 3) //[3:3]
#define MISC_CTRL1_R_DMMCTLPLL_CKSEL                       Fld(2, 4) //[5:4]
#define MISC_CTRL1_R_DMMUXCA                               Fld(1, 6) //[6:6]
#define MISC_CTRL1_R_DMARPIDQ_SW                           Fld(1, 7) //[7:7]
#define MISC_CTRL1_R_DMPINMUX                              Fld(2, 8) //[9:8]
#define MISC_CTRL1_R_DMARPICA_SW_UPDX                      Fld(1, 10) //[10:10]
#define MISC_CTRL1_CK_BFE_DCM_EN                           Fld(1, 11) //[11:11]
#define MISC_CTRL1_R_DMRRESETB_I_OPT                       Fld(1, 12) //[12:12]
#define MISC_CTRL1_R_DMDA_RRESETB_I                        Fld(1, 13) //[13:13]
#define MISC_CTRL1_R_DMMUXCA_SEC                           Fld(1, 14) //[14:14]
#define MISC_CTRL1_R_DMDRAMCLKEN0                          Fld(4, 16) //[19:16]
#define MISC_CTRL1_R_DMDRAMCLKEN1                          Fld(4, 20) //[23:20]
#define MISC_CTRL1_R_DMDQSIENCG_EN                         Fld(1, 24) //[24:24]
#define MISC_CTRL1_R_DMSTBENCMP_RK_OPT                     Fld(1, 25) //[25:25]
#define MISC_CTRL1_R_WL_DOWNSP                             Fld(1, 26) //[26:26]
#define MISC_CTRL1_R_DMODTDISOE_A                          Fld(1, 27) //[27:27]
#define MISC_CTRL1_R_DMODTDISOE_B                          Fld(1, 28) //[28:28]
#define MISC_CTRL1_R_DMODTDISOE_C                          Fld(1, 29) //[29:29]
#define MISC_CTRL1_R_DMDA_RRESETB_E                        Fld(1, 31) //[31:31]

#define DDRPHY_MISC_CTRL2                                  (DDRPHY_AO_BASE_ADDR + 0x02A4)
#define MISC_CTRL2_PLL_SHU_GP                              Fld(2, 0) //[1:0]

#define DDRPHY_MISC_CTRL3                                  (DDRPHY_AO_BASE_ADDR + 0x02A8)
#define MISC_CTRL3_ARPI_CG_CMD_OPT                         Fld(2, 0) //[1:0]
#define MISC_CTRL3_ARPI_CG_CLK_OPT                         Fld(2, 2) //[3:2]
#define MISC_CTRL3_ARPI_MPDIV_CG_CA_OPT                    Fld(1, 4) //[4:4]
#define MISC_CTRL3_ARPI_CG_MCK_CA_OPT                      Fld(1, 5) //[5:5]
#define MISC_CTRL3_ARPI_CG_MCTL_CA_OPT                     Fld(1, 6) //[6:6]
#define MISC_CTRL3_DDRPHY_MCK_MPDIV_CG_CA_SEL              Fld(2, 8) //[9:8]
#define MISC_CTRL3_DRAM_CLK_NEW_CA_EN_SEL                  Fld(4, 12) //[15:12]
#define MISC_CTRL3_ARPI_CG_DQ_OPT                          Fld(2, 16) //[17:16]
#define MISC_CTRL3_ARPI_CG_DQS_OPT                         Fld(2, 18) //[19:18]
#define MISC_CTRL3_ARPI_MPDIV_CG_DQ_OPT                    Fld(1, 20) //[20:20]
#define MISC_CTRL3_ARPI_CG_MCK_DQ_OPT                      Fld(1, 21) //[21:21]
#define MISC_CTRL3_ARPI_CG_MCTL_DQ_OPT                     Fld(1, 22) //[22:22]
#define MISC_CTRL3_DDRPHY_MCK_MPDIV_CG_DQ_SEL              Fld(2, 24) //[25:24]
#define MISC_CTRL3_R_DDRPHY_COMB_CG_IG                     Fld(1, 26) //[26:26]
#define MISC_CTRL3_R_DDRPHY_RX_PIPE_CG_IG                  Fld(1, 27) //[27:27]
#define MISC_CTRL3_DRAM_CLK_NEW_DQ_EN_SEL                  Fld(4, 28) //[31:28]

#define DDRPHY_MISC_CTRL4                                  (DDRPHY_AO_BASE_ADDR + 0x02AC)
#define MISC_CTRL4_RG_PW_CON_CHA_0                         Fld(32, 0) //[31:0]

#define DDRPHY_MISC_CTRL5                                  (DDRPHY_AO_BASE_ADDR + 0x02B0)
#define MISC_CTRL5_RG_PW_CON_CHA_1                         Fld(32, 0) //[31:0]

#define DDRPHY_MISC_EXTLB_RX0                              (DDRPHY_AO_BASE_ADDR + 0x02B4)
#define MISC_EXTLB_RX0_R_EXTLB_LFSR_RX_INI_1               Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX0_R_EXTLB_LFSR_RX_INI_0               Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX1                              (DDRPHY_AO_BASE_ADDR + 0x02B8)
#define MISC_EXTLB_RX1_R_EXTLB_LFSR_RX_INI_3               Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX1_R_EXTLB_LFSR_RX_INI_2               Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX2                              (DDRPHY_AO_BASE_ADDR + 0x02BC)
#define MISC_EXTLB_RX2_R_EXTLB_LFSR_RX_INI_5               Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX2_R_EXTLB_LFSR_RX_INI_4               Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX3                              (DDRPHY_AO_BASE_ADDR + 0x02C0)
#define MISC_EXTLB_RX3_R_EXTLB_LFSR_RX_INI_7               Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX3_R_EXTLB_LFSR_RX_INI_6               Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX4                              (DDRPHY_AO_BASE_ADDR + 0x02C4)
#define MISC_EXTLB_RX4_R_EXTLB_LFSR_RX_INI_9               Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX4_R_EXTLB_LFSR_RX_INI_8               Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX5                              (DDRPHY_AO_BASE_ADDR + 0x02C8)
#define MISC_EXTLB_RX5_R_EXTLB_LFSR_RX_INI_11              Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX5_R_EXTLB_LFSR_RX_INI_10              Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX6                              (DDRPHY_AO_BASE_ADDR + 0x02CC)
#define MISC_EXTLB_RX6_R_EXTLB_LFSR_RX_INI_13              Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX6_R_EXTLB_LFSR_RX_INI_12              Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX7                              (DDRPHY_AO_BASE_ADDR + 0x02D0)
#define MISC_EXTLB_RX7_R_EXTLB_LFSR_RX_INI_15              Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX7_R_EXTLB_LFSR_RX_INI_14              Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX8                              (DDRPHY_AO_BASE_ADDR + 0x02D4)
#define MISC_EXTLB_RX8_R_EXTLB_LFSR_RX_INI_17              Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX8_R_EXTLB_LFSR_RX_INI_16              Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX9                              (DDRPHY_AO_BASE_ADDR + 0x02D8)
#define MISC_EXTLB_RX9_R_EXTLB_LFSR_RX_INI_19              Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX9_R_EXTLB_LFSR_RX_INI_18              Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX10                             (DDRPHY_AO_BASE_ADDR + 0x02DC)
#define MISC_EXTLB_RX10_R_EXTLB_LFSR_RX_INI_21             Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX10_R_EXTLB_LFSR_RX_INI_20             Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX11                             (DDRPHY_AO_BASE_ADDR + 0x02E0)
#define MISC_EXTLB_RX11_R_EXTLB_LFSR_RX_INI_23             Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX11_R_EXTLB_LFSR_RX_INI_22             Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX12                             (DDRPHY_AO_BASE_ADDR + 0x02E4)
#define MISC_EXTLB_RX12_R_EXTLB_LFSR_RX_INI_25             Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX12_R_EXTLB_LFSR_RX_INI_24             Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX13                             (DDRPHY_AO_BASE_ADDR + 0x02E8)
#define MISC_EXTLB_RX13_R_EXTLB_LFSR_RX_INI_27             Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX13_R_EXTLB_LFSR_RX_INI_26             Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX14                             (DDRPHY_AO_BASE_ADDR + 0x02EC)
#define MISC_EXTLB_RX14_R_EXTLB_LFSR_RX_INI_29             Fld(16, 16) //[31:16]
#define MISC_EXTLB_RX14_R_EXTLB_LFSR_RX_INI_28             Fld(16, 0) //[15:0]

#define DDRPHY_MISC_EXTLB_RX15                             (DDRPHY_AO_BASE_ADDR + 0x02F0)
#define MISC_EXTLB_RX15_R_EXTLB_LFSR_RX_INI_30             Fld(16, 0) //[15:0]
#define MISC_EXTLB_RX15_MISC_EXTLB_RX15_RFU                Fld(16, 16) //[31:16]

#define DDRPHY_MISC_EXTLB_RX16                             (DDRPHY_AO_BASE_ADDR + 0x02F4)
#define MISC_EXTLB_RX16_R_EXTLB_RX_GATE_DELSEL_DQB0        Fld(7, 0) //[6:0]
#define MISC_EXTLB_RX16_R_EXTLB_RX_GATE_DELSEL_DQB1        Fld(7, 8) //[14:8]
#define MISC_EXTLB_RX16_R_EXTLB_RX_GATE_DELSEL_CA          Fld(7, 16) //[22:16]

#define DDRPHY_MISC_EXTLB_RX17                             (DDRPHY_AO_BASE_ADDR + 0x02F8)
#define MISC_EXTLB_RX17_R_XTALK_RX_00_TOG_CYCLE            Fld(4, 0) //[3:0]
#define MISC_EXTLB_RX17_R_XTALK_RX_01_TOG_CYCLE            Fld(4, 4) //[7:4]
#define MISC_EXTLB_RX17_R_XTALK_RX_02_TOG_CYCLE            Fld(4, 8) //[11:8]
#define MISC_EXTLB_RX17_R_XTALK_RX_03_TOG_CYCLE            Fld(4, 12) //[15:12]
#define MISC_EXTLB_RX17_R_XTALK_RX_04_TOG_CYCLE            Fld(4, 16) //[19:16]
#define MISC_EXTLB_RX17_R_XTALK_RX_05_TOG_CYCLE            Fld(4, 20) //[23:20]
#define MISC_EXTLB_RX17_R_XTALK_RX_06_TOG_CYCLE            Fld(4, 24) //[27:24]
#define MISC_EXTLB_RX17_R_XTALK_RX_07_TOG_CYCLE            Fld(4, 28) //[31:28]

#define DDRPHY_MISC_EXTLB_RX18                             (DDRPHY_AO_BASE_ADDR + 0x02FC)
#define MISC_EXTLB_RX18_R_XTALK_RX_08_TOG_CYCLE            Fld(4, 0) //[3:0]
#define MISC_EXTLB_RX18_R_XTALK_RX_09_TOG_CYCLE            Fld(4, 4) //[7:4]
#define MISC_EXTLB_RX18_R_XTALK_RX_10_TOG_CYCLE            Fld(4, 8) //[11:8]
#define MISC_EXTLB_RX18_R_XTALK_RX_11_TOG_CYCLE            Fld(4, 12) //[15:12]
#define MISC_EXTLB_RX18_R_XTALK_RX_12_TOG_CYCLE            Fld(4, 16) //[19:16]
#define MISC_EXTLB_RX18_R_XTALK_RX_13_TOG_CYCLE            Fld(4, 20) //[23:20]
#define MISC_EXTLB_RX18_R_XTALK_RX_14_TOG_CYCLE            Fld(4, 24) //[27:24]
#define MISC_EXTLB_RX18_R_XTALK_RX_15_TOG_CYCLE            Fld(4, 28) //[31:28]

#define DDRPHY_MISC_EXTLB_RX19                             (DDRPHY_AO_BASE_ADDR + 0x0300)
#define MISC_EXTLB_RX19_R_XTALK_RX_16_TOG_CYCLE            Fld(4, 0) //[3:0]
#define MISC_EXTLB_RX19_R_XTALK_RX_17_TOG_CYCLE            Fld(4, 4) //[7:4]
#define MISC_EXTLB_RX19_R_XTALK_RX_18_TOG_CYCLE            Fld(4, 8) //[11:8]
#define MISC_EXTLB_RX19_R_XTALK_RX_19_TOG_CYCLE            Fld(4, 12) //[15:12]
#define MISC_EXTLB_RX19_R_XTALK_RX_20_TOG_CYCLE            Fld(4, 16) //[19:16]
#define MISC_EXTLB_RX19_R_XTALK_RX_21_TOG_CYCLE            Fld(4, 20) //[23:20]
#define MISC_EXTLB_RX19_R_XTALK_RX_22_TOG_CYCLE            Fld(4, 24) //[27:24]
#define MISC_EXTLB_RX19_R_XTALK_RX_23_TOG_CYCLE            Fld(4, 28) //[31:28]

#define DDRPHY_MISC_EXTLB_RX20                             (DDRPHY_AO_BASE_ADDR + 0x0304)
#define MISC_EXTLB_RX20_R_XTALK_RX_24_TOG_CYCLE            Fld(4, 0) //[3:0]
#define MISC_EXTLB_RX20_R_XTALK_RX_25_TOG_CYCLE            Fld(4, 4) //[7:4]
#define MISC_EXTLB_RX20_R_XTALK_RX_26_TOG_CYCLE            Fld(4, 8) //[11:8]
#define MISC_EXTLB_RX20_R_XTALK_RX_27_TOG_CYCLE            Fld(4, 12) //[15:12]
#define MISC_EXTLB_RX20_R_XTALK_RX_28_TOG_CYCLE            Fld(4, 16) //[19:16]
#define MISC_EXTLB_RX20_R_XTALK_RX_29_TOG_CYCLE            Fld(4, 20) //[23:20]
#define MISC_EXTLB_RX20_R_XTALK_RX_30_TOG_CYCLE            Fld(4, 24) //[27:24]
#define MISC_EXTLB_RX20_R_XTALK_RX_31_TOG_CYCLE            Fld(4, 28) //[31:28]

#define DDRPHY_CKMUX_SEL                                   (DDRPHY_AO_BASE_ADDR + 0x0308)
#define CKMUX_SEL_R_PHYCTRLMUX                             Fld(1, 0) //[0:0]
#define CKMUX_SEL_R_PHYCTRLDCM                             Fld(1, 1) //[1:1]
#define CKMUX_SEL_FB_CK_MUX                                Fld(2, 16) //[17:16]
#define CKMUX_SEL_FMEM_CK_MUX                              Fld(2, 18) //[19:18]

#define DDRPHY_MISC_RXDVS2_PSRAM                           (DDRPHY_AO_BASE_ADDR + 0x030C)
#define MISC_RXDVS2_PSRAM_R_DMRXDVS_DEPTH_HALF_PSRAM       Fld(1, 0) //[0:0]

#define DDRPHY_MISC_CG_CTRL4_PSRAM                         (DDRPHY_AO_BASE_ADDR + 0x0310)
#define MISC_CG_CTRL4_PSRAM_R_PHY_MCK_CG_CTRL_PSRAM        Fld(32, 0) //[31:0]

#define DDRPHY_MISC_CTRL0_PSRAM                            (DDRPHY_AO_BASE_ADDR + 0x0314)
#define MISC_CTRL0_PSRAM_R_DMDQSIEN_SYNCOPT_PSRAM          Fld(4, 0) //[3:0]
#define MISC_CTRL0_PSRAM_R_DMDQSIEN_OUTSEL_PSRAM           Fld(4, 4) //[7:4]
#define MISC_CTRL0_PSRAM_R_DMSTBEN_SYNCOPT_PSRAM           Fld(1, 8) //[8:8]
#define MISC_CTRL0_PSRAM_R_DMSTBEN_OUTSEL_PSRAM            Fld(1, 9) //[9:9]
#define MISC_CTRL0_PSRAM_IMPCAL_CHAB_EN_PSRAM              Fld(1, 10) //[10:10]
#define MISC_CTRL0_PSRAM_R_DMVALID_DLY_OPT_PSRAM           Fld(1, 11) //[11:11]
#define MISC_CTRL0_PSRAM_R_DMVALID_NARROW_IG_PSRAM         Fld(1, 12) //[12:12]
#define MISC_CTRL0_PSRAM_R_DMVALID_DLY_PSRAM               Fld(3, 13) //[15:13]
#define MISC_CTRL0_PSRAM_R_DMDQSIEN_DEPTH_HALF_PSRAM       Fld(1, 16) //[16:16]
#define MISC_CTRL0_PSRAM_R_DMRDSEL_DIV2_OPT_PSRAM          Fld(1, 17) //[17:17]
#define MISC_CTRL0_PSRAM_IMPCAL_LP_ECO_OPT_PSRAM           Fld(1, 18) //[18:18]
#define MISC_CTRL0_PSRAM_IMPCAL_CDC_ECO_OPT_PSRAM          Fld(1, 19) //[19:19]
#define MISC_CTRL0_PSRAM_IMPCAL_CTL_CK_SEL_PSRAM           Fld(1, 21) //[21:21]
#define MISC_CTRL0_PSRAM_R_DMDQSIEN_FIFO_EN_PSRAM          Fld(1, 24) //[24:24]
#define MISC_CTRL0_PSRAM_R_DMSTBENCMP_FIFO_EN_PSRAM        Fld(1, 25) //[25:25]
#define MISC_CTRL0_PSRAM_R_DMSTBENCMP_RK_FIFO_EN_PSRAM     Fld(1, 26) //[26:26]
#define MISC_CTRL0_PSRAM_R_DMSHU_PHYDCM_FORCEOFF_PSRAM     Fld(1, 27) //[27:27]
#define MISC_CTRL0_PSRAM_R_DQS0IEN_DIV4_CK_CG_CTRL_PSRAM   Fld(1, 28) //[28:28]
#define MISC_CTRL0_PSRAM_R_DQS1IEN_DIV4_CK_CG_CTRL_PSRAM   Fld(1, 29) //[29:29]
#define MISC_CTRL0_PSRAM_R_CLKIEN_DIV4_CK_CG_CTRL_PSRAM    Fld(1, 30) //[30:30]
#define MISC_CTRL0_PSRAM_R_STBENCMP_DIV4CK_EN_PSRAM        Fld(1, 31) //[31:31]

#define DDRPHY_MISC_CTRL1_PSRAM                            (DDRPHY_AO_BASE_ADDR + 0x0318)
#define MISC_CTRL1_PSRAM_R_DMPHYRST_PSRAM                  Fld(1, 1) //[1:1]
#define MISC_CTRL1_PSRAM_R_DM_TX_ARCLK_OE_PSRAM            Fld(1, 2) //[2:2]
#define MISC_CTRL1_PSRAM_R_DM_TX_ARCMD_OE_PSRAM            Fld(1, 3) //[3:3]
#define MISC_CTRL1_PSRAM_R_DMMCTLPLL_CKSEL_PSRAM           Fld(2, 4) //[5:4]
#define MISC_CTRL1_PSRAM_R_DMMUXCA_PSRAM                   Fld(1, 6) //[6:6]
#define MISC_CTRL1_PSRAM_R_DMARPIDQ_SW_PSRAM               Fld(1, 7) //[7:7]
#define MISC_CTRL1_PSRAM_R_DMPINMUX_PSRAM                  Fld(2, 8) //[9:8]
#define MISC_CTRL1_PSRAM_R_DMARPICA_SW_UPDX_PSRAM          Fld(1, 10) //[10:10]
#define MISC_CTRL1_PSRAM_CK_BFE_DCM_EN_PSRAM               Fld(1, 11) //[11:11]
#define MISC_CTRL1_PSRAM_R_DMRRESETB_I_OPT_PSRAM           Fld(1, 12) //[12:12]
#define MISC_CTRL1_PSRAM_R_DMDA_RRESETB_I_PSRAM            Fld(1, 13) //[13:13]
#define MISC_CTRL1_PSRAM_R_DMMUXCA_SEC_PSRAM               Fld(1, 14) //[14:14]
#define MISC_CTRL1_PSRAM_R_DMDRAMCLKEN0_PSRAM              Fld(4, 16) //[19:16]
#define MISC_CTRL1_PSRAM_R_DMDRAMCLKEN1_PSRAM              Fld(4, 20) //[23:20]
#define MISC_CTRL1_PSRAM_R_DMDQSIENCG_EN_PSRAM             Fld(1, 24) //[24:24]
#define MISC_CTRL1_PSRAM_R_DMSTBENCMP_RK_OPT_PSRAM         Fld(1, 25) //[25:25]
#define MISC_CTRL1_PSRAM_R_WL_DOWNSP_PSRAM                 Fld(1, 26) //[26:26]
#define MISC_CTRL1_PSRAM_R_DMODTDISOE_A_PSRAM              Fld(1, 27) //[27:27]
#define MISC_CTRL1_PSRAM_R_DMODTDISOE_B_PSRAM              Fld(1, 28) //[28:28]
#define MISC_CTRL1_PSRAM_R_DMODTDISOE_C_PSRAM              Fld(1, 29) //[29:29]
#define MISC_CTRL1_PSRAM_R_DMDA_RRESETB_E_PSRAM            Fld(1, 31) //[31:31]

#define DDRPHY_MISC_CTRL3_PSRAM                            (DDRPHY_AO_BASE_ADDR + 0x031C)
#define MISC_CTRL3_PSRAM_ARPI_CG_CMD_OPT_PSRAM             Fld(2, 0) //[1:0]
#define MISC_CTRL3_PSRAM_ARPI_CG_CLK_OPT_PSRAM             Fld(2, 2) //[3:2]
#define MISC_CTRL3_PSRAM_ARPI_MPDIV_CG_CA_OPT_PSRAM        Fld(1, 4) //[4:4]
#define MISC_CTRL3_PSRAM_ARPI_CG_MCK_CA_OPT_PSRAM          Fld(1, 5) //[5:5]
#define MISC_CTRL3_PSRAM_ARPI_CG_MCTL_CA_OPT_PSRAM         Fld(1, 6) //[6:6]
#define MISC_CTRL3_PSRAM_DDRPHY_MCK_MPDIV_CG_CA_SEL_PSRAM  Fld(2, 8) //[9:8]
#define MISC_CTRL3_PSRAM_DRAM_CLK_NEW_CA_EN_SEL_PSRAM      Fld(4, 12) //[15:12]
#define MISC_CTRL3_PSRAM_ARPI_CG_DQ_OPT_PSRAM              Fld(2, 16) //[17:16]
#define MISC_CTRL3_PSRAM_ARPI_CG_DQS_OPT_PSRAM             Fld(2, 18) //[19:18]
#define MISC_CTRL3_PSRAM_ARPI_MPDIV_CG_DQ_OPT_PSRAM        Fld(1, 20) //[20:20]
#define MISC_CTRL3_PSRAM_ARPI_CG_MCK_DQ_OPT_PSRAM          Fld(1, 21) //[21:21]
#define MISC_CTRL3_PSRAM_ARPI_CG_MCTL_DQ_OPT_PSRAM         Fld(1, 22) //[22:22]
#define MISC_CTRL3_PSRAM_DDRPHY_MCK_MPDIV_CG_DQ_SEL_PSRAM  Fld(2, 24) //[25:24]
#define MISC_CTRL3_PSRAM_R_DDRPHY_COMB_CG_IG_PSRAM         Fld(1, 26) //[26:26]
#define MISC_CTRL3_PSRAM_R_DDRPHY_RX_PIPE_CG_IG_PSRAM      Fld(1, 27) //[27:27]
#define MISC_CTRL3_PSRAM_DRAM_CLK_NEW_DQ_EN_SEL_PSRAM      Fld(4, 28) //[31:28]

#define DDRPHY_CA_DLL_ARPI2_PSRAM                          (DDRPHY_AO_BASE_ADDR + 0x0320)
#define CA_DLL_ARPI2_PSRAM_RG_ARDLL_PHDET_EN_CA_PSRAM      Fld(1, 0) //[0:0]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_MPDIV_CG_CA_PSRAM       Fld(1, 10) //[10:10]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_CLKIEN_PSRAM         Fld(1, 11) //[11:11]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_CMD_PSRAM            Fld(1, 13) //[13:13]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_CLK_PSRAM            Fld(1, 15) //[15:15]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_CS_PSRAM             Fld(1, 16) //[16:16]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_FB_CA_PSRAM          Fld(1, 17) //[17:17]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_MCTL_CA_PSRAM        Fld(1, 19) //[19:19]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_MCK_FB2DLL_CA_PSRAM  Fld(1, 27) //[27:27]
#define CA_DLL_ARPI2_PSRAM_RG_ARPI_CG_MCK_CA_PSRAM         Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_CA_CMD7_PSRAM                          (DDRPHY_AO_BASE_ADDR + 0x0324)
#define SHU1_CA_CMD7_PSRAM_R_DMRANKRXDVS_CA_PSRAM          Fld(4, 0) //[3:0]
#define SHU1_CA_CMD7_PSRAM_R_DMRXDVS_PBYTE_FLAG_OPT_CA_PSRAM Fld(1, 12) //[12:12]
#define SHU1_CA_CMD7_PSRAM_R_DMRODTEN_CA_PSRAM             Fld(1, 15) //[15:15]
#define SHU1_CA_CMD7_PSRAM_R_DMARPI_CG_FB2DLL_DCM_EN_CA_PSRAM Fld(1, 16) //[16:16]
#define SHU1_CA_CMD7_PSRAM_R_DMTX_ARPI_CG_CMD_NEW_PSRAM    Fld(1, 17) //[17:17]
#define SHU1_CA_CMD7_PSRAM_R_DMTX_ARPI_CG_CLK_NEW_PSRAM    Fld(1, 18) //[18:18]
#define SHU1_CA_CMD7_PSRAM_R_DMTX_ARPI_CG_CS_NEW_PSRAM     Fld(1, 19) //[19:19]
#define SHU1_CA_CMD7_PSRAM_R_LP4Y_SDN_MODE_CLK_PSRAM       Fld(1, 20) //[20:20]
#define SHU1_CA_CMD7_PSRAM_R_DMRXRANK_CMD_EN_PSRAM         Fld(1, 24) //[24:24]
#define SHU1_CA_CMD7_PSRAM_R_DMRXRANK_CMD_LAT_PSRAM        Fld(3, 25) //[27:25]
#define SHU1_CA_CMD7_PSRAM_R_DMRXRANK_CLK_EN_PSRAM         Fld(1, 28) //[28:28]
#define SHU1_CA_CMD7_PSRAM_R_DMRXRANK_CLK_LAT_PSRAM        Fld(3, 29) //[31:29]

#define DDRPHY_SHU1_CA_CMD8_PSRAM                          (DDRPHY_AO_BASE_ADDR + 0x0328)
#define SHU1_CA_CMD8_PSRAM_R_DMRXDVS_UPD_FORCE_CYC_CA_PSRAM Fld(15, 0) //[14:0]
#define SHU1_CA_CMD8_PSRAM_R_DMRXDVS_UPD_FORCE_EN_CA_PSRAM Fld(1, 15) //[15:15]
#define SHU1_CA_CMD8_PSRAM_R_DMRANK_RXDLY_PIPE_CG_IG_CA_PSRAM Fld(1, 19) //[19:19]
#define SHU1_CA_CMD8_PSRAM_R_RMRODTEN_CG_IG_CA_PSRAM       Fld(1, 20) //[20:20]
#define SHU1_CA_CMD8_PSRAM_R_RMRX_TOPHY_CG_IG_CA_PSRAM     Fld(1, 21) //[21:21]
#define SHU1_CA_CMD8_PSRAM_R_DMRXDVS_RDSEL_PIPE_CG_IG_CA_PSRAM Fld(1, 22) //[22:22]
#define SHU1_CA_CMD8_PSRAM_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_CA_PSRAM Fld(1, 23) //[23:23]
#define SHU1_CA_CMD8_PSRAM_R_DMRXDLY_CG_IG_CA_PSRAM        Fld(1, 24) //[24:24]
#define SHU1_CA_CMD8_PSRAM_R_DMSTBEN_SYNC_CG_IG_CA_PSRAM   Fld(1, 25) //[25:25]
#define SHU1_CA_CMD8_PSRAM_R_DMDQSIEN_FLAG_SYNC_CG_IG_CA_PSRAM Fld(1, 26) //[26:26]
#define SHU1_CA_CMD8_PSRAM_R_DMDQSIEN_FLAG_PIPE_CG_IG_CA_PSRAM Fld(1, 27) //[27:27]
#define SHU1_CA_CMD8_PSRAM_R_DMDQSIEN_RDSEL_PIPE_CG_IG_CA_PSRAM Fld(1, 28) //[28:28]
#define SHU1_CA_CMD8_PSRAM_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_CA_PSRAM Fld(1, 29) //[29:29]
#define SHU1_CA_CMD8_PSRAM_R_DMRANK_PIPE_CG_IG_CA_PSRAM    Fld(1, 30) //[30:30]
#define SHU1_CA_CMD8_PSRAM_R_DMRANK_CHG_PIPE_CG_IG_CA_PSRAM Fld(1, 31) //[31:31]

#define DDRPHY_B0_DLL_ARPI2_PSRAM                          (DDRPHY_AO_BASE_ADDR + 0x032C)
#define B0_DLL_ARPI2_PSRAM_RG_ARDLL_PHDET_EN_B0_PSRAM      Fld(1, 0) //[0:0]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_MPDIV_CG_B0_PSRAM       Fld(1, 10) //[10:10]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_DQSIEN_B0_PSRAM      Fld(1, 11) //[11:11]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_DQ_B0_PSRAM          Fld(1, 13) //[13:13]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_DQM_B0_PSRAM         Fld(1, 14) //[14:14]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_DQS_B0_PSRAM         Fld(1, 15) //[15:15]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_FB_B0_PSRAM          Fld(1, 17) //[17:17]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_MCTL_B0_PSRAM        Fld(1, 19) //[19:19]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_MCK_FB2DLL_B0_PSRAM  Fld(1, 27) //[27:27]
#define B0_DLL_ARPI2_PSRAM_RG_ARPI_CG_MCK_B0_PSRAM         Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B0_DQ7_PSRAM                           (DDRPHY_AO_BASE_ADDR + 0x0330)
#define SHU1_B0_DQ7_PSRAM_R_DMRANKRXDVS_B0_PSRAM           Fld(4, 0) //[3:0]
#define SHU1_B0_DQ7_PSRAM_MIDPI_ENABLE_PSRAM               Fld(1, 4) //[4:4]
#define SHU1_B0_DQ7_PSRAM_MIDPI_DIV4_ENABLE_PSRAM          Fld(1, 5) //[5:5]
#define SHU1_B0_DQ7_PSRAM_R_DMDQMDBI_EYE_SHU_B0_PSRAM      Fld(1, 6) //[6:6]
#define SHU1_B0_DQ7_PSRAM_R_DMDQMDBI_SHU_B0_PSRAM          Fld(1, 7) //[7:7]
#define SHU1_B0_DQ7_PSRAM_R_DMRXDVS_DQM_FLAGSEL_B0_PSRAM   Fld(4, 8) //[11:8]
#define SHU1_B0_DQ7_PSRAM_R_DMRXDVS_PBYTE_FLAG_OPT_B0_PSRAM Fld(1, 12) //[12:12]
#define SHU1_B0_DQ7_PSRAM_R_DMRXDVS_PBYTE_DQM_EN_B0_PSRAM  Fld(1, 13) //[13:13]
#define SHU1_B0_DQ7_PSRAM_R_DMRXTRACK_DQM_EN_B0_PSRAM      Fld(1, 14) //[14:14]
#define SHU1_B0_DQ7_PSRAM_R_DMRODTEN_B0_PSRAM              Fld(1, 15) //[15:15]
#define SHU1_B0_DQ7_PSRAM_R_DMARPI_CG_FB2DLL_DCM_EN_B0_PSRAM Fld(1, 16) //[16:16]
#define SHU1_B0_DQ7_PSRAM_R_DMTX_ARPI_CG_DQ_NEW_B0_PSRAM   Fld(1, 17) //[17:17]
#define SHU1_B0_DQ7_PSRAM_R_DMTX_ARPI_CG_DQS_NEW_B0_PSRAM  Fld(1, 18) //[18:18]
#define SHU1_B0_DQ7_PSRAM_R_DMTX_ARPI_CG_DQM_NEW_B0_PSRAM  Fld(1, 19) //[19:19]
#define SHU1_B0_DQ7_PSRAM_R_LP4Y_SDN_MODE_DQS0_PSRAM       Fld(1, 20) //[20:20]
#define SHU1_B0_DQ7_PSRAM_R_DMRXRANK_DQ_EN_B0_PSRAM        Fld(1, 24) //[24:24]
#define SHU1_B0_DQ7_PSRAM_R_DMRXRANK_DQ_LAT_B0_PSRAM       Fld(3, 25) //[27:25]
#define SHU1_B0_DQ7_PSRAM_R_DMRXRANK_DQS_EN_B0_PSRAM       Fld(1, 28) //[28:28]
#define SHU1_B0_DQ7_PSRAM_R_DMRXRANK_DQS_LAT_B0_PSRAM      Fld(3, 29) //[31:29]

#define DDRPHY_SHU1_B0_DQ8_PSRAM                           (DDRPHY_AO_BASE_ADDR + 0x0334)
#define SHU1_B0_DQ8_PSRAM_R_DMRXDVS_UPD_FORCE_CYC_B0_PSRAM Fld(15, 0) //[14:0]
#define SHU1_B0_DQ8_PSRAM_R_DMRXDVS_UPD_FORCE_EN_B0_PSRAM  Fld(1, 15) //[15:15]
#define SHU1_B0_DQ8_PSRAM_R_DMRANK_RXDLY_PIPE_CG_IG_B0_PSRAM Fld(1, 19) //[19:19]
#define SHU1_B0_DQ8_PSRAM_R_RMRODTEN_CG_IG_B0_PSRAM        Fld(1, 20) //[20:20]
#define SHU1_B0_DQ8_PSRAM_R_RMRX_TOPHY_CG_IG_B0_PSRAM      Fld(1, 21) //[21:21]
#define SHU1_B0_DQ8_PSRAM_R_DMRXDVS_RDSEL_PIPE_CG_IG_B0_PSRAM Fld(1, 22) //[22:22]
#define SHU1_B0_DQ8_PSRAM_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B0_PSRAM Fld(1, 23) //[23:23]
#define SHU1_B0_DQ8_PSRAM_R_DMRXDLY_CG_IG_B0_PSRAM         Fld(1, 24) //[24:24]
#define SHU1_B0_DQ8_PSRAM_R_DMSTBEN_SYNC_CG_IG_B0_PSRAM    Fld(1, 25) //[25:25]
#define SHU1_B0_DQ8_PSRAM_R_DMDQSIEN_FLAG_SYNC_CG_IG_B0_PSRAM Fld(1, 26) //[26:26]
#define SHU1_B0_DQ8_PSRAM_R_DMDQSIEN_FLAG_PIPE_CG_IG_B0_PSRAM Fld(1, 27) //[27:27]
#define SHU1_B0_DQ8_PSRAM_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B0_PSRAM Fld(1, 28) //[28:28]
#define SHU1_B0_DQ8_PSRAM_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B0_PSRAM Fld(1, 29) //[29:29]
#define SHU1_B0_DQ8_PSRAM_R_DMRANK_PIPE_CG_IG_B0_PSRAM     Fld(1, 30) //[30:30]
#define SHU1_B0_DQ8_PSRAM_R_DMRANK_CHG_PIPE_CG_IG_B0_PSRAM Fld(1, 31) //[31:31]

#define DDRPHY_B0_DQ9_PSRAM                                (DDRPHY_AO_BASE_ADDR + 0x0338)
#define B0_DQ9_PSRAM_RG_RX_ARDQ_STBEN_RESETB_B0_PSRAM      Fld(1, 0) //[0:0]
#define B0_DQ9_PSRAM_RG_RX_ARDQS0_STBEN_RESETB_B0_PSRAM    Fld(1, 4) //[4:4]
#define B0_DQ9_PSRAM_RG_RX_ARDQS0_DQSIENMODE_B0_PSRAM      Fld(1, 5) //[5:5]
#define B0_DQ9_PSRAM_R_DMRXFIFO_STBENCMP_EN_B0_PSRAM       Fld(1, 7) //[7:7]
#define B0_DQ9_PSRAM_R_IN_GATE_EN_LOW_OPT_B0_PSRAM         Fld(8, 8) //[15:8]
#define B0_DQ9_PSRAM_R_DMDQSIEN_VALID_LAT_B0_PSRAM         Fld(3, 16) //[18:16]
#define B0_DQ9_PSRAM_R_DMDQSIEN_RDSEL_LAT_B0_PSRAM         Fld(3, 20) //[22:20]
#define B0_DQ9_PSRAM_R_DMRXDVS_VALID_LAT_B0_PSRAM          Fld(3, 24) //[26:24]
#define B0_DQ9_PSRAM_R_DMRXDVS_RDSEL_LAT_B0_PSRAM          Fld(3, 28) //[30:28]

#define DDRPHY_RFU_0X33C                                   (DDRPHY_AO_BASE_ADDR + 0x033C)
#define RFU_0X33C_RESERVED_0X33C                           Fld(32, 0) //[31:0]

#define DDRPHY_PSRAM_RX_CTRL0                              (DDRPHY_AO_BASE_ADDR + 0x0400)
#define PSRAM_RX_CTRL0_RSTBCNT_LATCH_OPT                   Fld(3, 0) //[2:0]
#define PSRAM_RX_CTRL0_PHYGLUE_FRUN                        Fld(1, 31) //[31:31]

#define DDRPHY_PSRAM_DQSIEN_CTRL0                          (DDRPHY_AO_BASE_ADDR + 0x0404)
#define PSRAM_DQSIEN_CTRL0_DQSIEN_DQSSTB_MODE              Fld(2, 0) //[1:0]
#define PSRAM_DQSIEN_CTRL0_DQSIEN_7UI_EN                   Fld(1, 4) //[4:4]
#define PSRAM_DQSIEN_CTRL0_DQSIEN_BURST_MODE               Fld(1, 8) //[8:8]
#define PSRAM_DQSIEN_CTRL0_DQSIEN_SELPH_FRUN               Fld(1, 9) //[9:9]
#define PSRAM_DQSIEN_CTRL0_DQSINCTL_PRE_SEL                Fld(1, 12) //[12:12]
#define PSRAM_DQSIEN_CTRL0_DQSINCTL_RK0                    Fld(4, 16) //[19:16]
#define PSRAM_DQSIEN_CTRL0_DMSTBLAT                        Fld(4, 20) //[23:20]

#define DDRPHY_PSRAM_STBCAL_CTRL0                          (DDRPHY_AO_BASE_ADDR + 0x0408)
#define PSRAM_STBCAL_CTRL0_STB_PI_TRACK_EN                 Fld(1, 0) //[0:0]
#define PSRAM_STBCAL_CTRL0_STB_UI_TRACK_EN                 Fld(1, 1) //[1:1]
#define PSRAM_STBCAL_CTRL0_STB_PIDLYCG_IG                  Fld(1, 2) //[2:2]
#define PSRAM_STBCAL_CTRL0_STB_UIDLYCG_IG                  Fld(1, 3) //[3:3]
#define PSRAM_STBCAL_CTRL0_PICHGBLOCK_NORD                 Fld(1, 4) //[4:4]
#define PSRAM_STBCAL_CTRL0_DIS_PI_TRACK_AS_NOT_RD          Fld(1, 5) //[5:5]
#define PSRAM_STBCAL_CTRL0_STB_SHIFT_DTCOUT_IG             Fld(1, 6) //[6:6]
#define PSRAM_STBCAL_CTRL0_STB_FLAGCLR_OPT                 Fld(1, 7) //[7:7]
#define PSRAM_STBCAL_CTRL0_STB_DLLFRZ_IG                   Fld(1, 8) //[8:8]
#define PSRAM_STBCAL_CTRL0_DQSG_MODE                       Fld(1, 9) //[9:9]
#define PSRAM_STBCAL_CTRL0_SREF_DQSGUPD                    Fld(1, 10) //[10:10]
#define PSRAM_STBCAL_CTRL0_DQSIEN_PICG_MODE                Fld(1, 11) //[11:11]
#define PSRAM_STBCAL_CTRL0_PICGEN                          Fld(1, 12) //[12:12]
#define PSRAM_STBCAL_CTRL0_PICGLAT                         Fld(3, 13) //[15:13]
#define PSRAM_STBCAL_CTRL0_DQSIENCG_CHG_EN                 Fld(1, 16) //[16:16]
#define PSRAM_STBCAL_CTRL0_DQSIENCG_NORMAL_EN              Fld(1, 17) //[17:17]
#define PSRAM_STBCAL_CTRL0_STB_GERR_B01                    Fld(1, 18) //[18:18]
#define PSRAM_STBCAL_CTRL0_STBCNT_SHU_RST_EN               Fld(1, 19) //[19:19]
#define PSRAM_STBCAL_CTRL0_STB_PICG_EARLY_1T_EN            Fld(1, 20) //[20:20]
#define PSRAM_STBCAL_CTRL0_STB_STBENRST_EARLY_1T_EN        Fld(1, 21) //[21:21]
#define PSRAM_STBCAL_CTRL0_RKCHGMASKDIS                    Fld(1, 22) //[22:22]
#define PSRAM_STBCAL_CTRL0_PHYVALID_IG                     Fld(1, 23) //[23:23]
#define PSRAM_STBCAL_CTRL0_STBDLYOUT_OPT                   Fld(1, 24) //[24:24]
#define PSRAM_STBCAL_CTRL0_STBSTATE_OPT                    Fld(1, 25) //[25:25]
#define PSRAM_STBCAL_CTRL0_REFUICHG                        Fld(1, 26) //[26:26]
#define PSRAM_STBCAL_CTRL0_RKUICHG_EN                      Fld(1, 27) //[27:27]
#define PSRAM_STBCAL_CTRL0_CG_RKEN                         Fld(1, 28) //[28:28]
#define PSRAM_STBCAL_CTRL0_STBDLELAST_FILTER               Fld(1, 29) //[29:29]
#define PSRAM_STBCAL_CTRL0_DQSGCNT_BYP_REF                 Fld(1, 30) //[30:30]
#define PSRAM_STBCAL_CTRL0_STBUPDSTOP                      Fld(1, 31) //[31:31]

#define DDRPHY_PSRAM_STBCAL_CTRL1                          (DDRPHY_AO_BASE_ADDR + 0x040C)
#define PSRAM_STBCAL_CTRL1_PIMASK_RKCHG_OPT                Fld(1, 0) //[0:0]
#define PSRAM_STBCAL_CTRL1_PIMASK_RKCHG_EXT                Fld(3, 1) //[3:1]
#define PSRAM_STBCAL_CTRL1_STBDLELAST_OPT                  Fld(1, 4) //[4:4]
#define PSRAM_STBCAL_CTRL1_STBCNT_MODESEL                  Fld(1, 6) //[6:6]
#define PSRAM_STBCAL_CTRL1_STB_UPDMASK_EN                  Fld(1, 7) //[7:7]
#define PSRAM_STBCAL_CTRL1_STB_UPDMASKCYC                  Fld(4, 8) //[11:8]
#define PSRAM_STBCAL_CTRL1_STBDLELAST_PULSE                Fld(4, 12) //[15:12]
#define PSRAM_STBCAL_CTRL1_STBCAL_FILTER                   Fld(16, 16) //[31:16]

#define DDRPHY_PSRAM_STBCAL_CTRL2                          (DDRPHY_AO_BASE_ADDR + 0x0410)
#define PSRAM_STBCAL_CTRL2_DQSIENLLMT                      Fld(7, 0) //[6:0]
#define PSRAM_STBCAL_CTRL2_DQSIENLLMTEN                    Fld(1, 8) //[8:8]
#define PSRAM_STBCAL_CTRL2_DQSIENHLMT                      Fld(7, 16) //[22:16]
#define PSRAM_STBCAL_CTRL2_DQSIENHLMTEN                    Fld(1, 24) //[24:24]

#define DDRPHY_PSRAM_STBCAL_CTRL3                          (DDRPHY_AO_BASE_ADDR + 0x0414)
#define PSRAM_STBCAL_CTRL3_STB_DBG_STATUS                  Fld(4, 0) //[3:0]
#define PSRAM_STBCAL_CTRL3_STB_GERRSTOP                    Fld(1, 4) //[4:4]
#define PSRAM_STBCAL_CTRL3_STB_GERR_RST                    Fld(1, 5) //[5:5]
#define PSRAM_STBCAL_CTRL3_STBCNT_SW_RST                   Fld(1, 8) //[8:8]
#define PSRAM_STBCAL_CTRL3_DQSGCNTEN                       Fld(1, 12) //[12:12]
#define PSRAM_STBCAL_CTRL3_DQSG_CNT_RST                    Fld(1, 13) //[13:13]
#define PSRAM_STBCAL_CTRL3_STBENCMPEN                      Fld(1, 16) //[16:16]
#define PSRAM_STBCAL_CTRL3_DAT_SYNC_MASK                   Fld(1, 17) //[17:17]
#define PSRAM_STBCAL_CTRL3_GT_SYNC_MASK_FOR_PHY            Fld(1, 31) //[31:31]

#define DDRPHY_PSRAM_DQSIEN_DLY_CTRL0                      (DDRPHY_AO_BASE_ADDR + 0x0418)
#define PSRAM_DQSIEN_DLY_CTRL0_DQSIEN_PI_RK0_B0            Fld(7, 0) //[6:0]
#define PSRAM_DQSIEN_DLY_CTRL0_DQSIEN_UI_RK0_B0            Fld(8, 16) //[23:16]

#define DDRPHY_PSRAM_DQSIEN_CG_CTRL0                       (DDRPHY_AO_BASE_ADDR + 0x041C)
#define PSRAM_DQSIEN_CG_CTRL0_DQSIEN_PICG_HEAD_EXT_LAT     Fld(3, 0) //[2:0]
#define PSRAM_DQSIEN_CG_CTRL0_DQSIEN_PICG_TAIL_EXT_LAT     Fld(3, 4) //[6:4]

#define DDRPHY_PSRAM_RODT_CTRL0                            (DDRPHY_AO_BASE_ADDR + 0x0420)
#define PSRAM_RODT_CTRL0_RODTEN                            Fld(1, 0) //[0:0]
#define PSRAM_RODT_CTRL0_RODTENSTB_TRACK_EN                Fld(1, 1) //[1:1]
#define PSRAM_RODT_CTRL0_RODTENSTB_SELPH_MODE              Fld(1, 2) //[2:2]
#define PSRAM_RODT_CTRL0_RODTENSTB_TRACK_UDFLWCTRL         Fld(1, 3) //[3:3]
#define PSRAM_RODT_CTRL0_RODTEN_SELPH_FRUN                 Fld(1, 4) //[4:4]
#define PSRAM_RODT_CTRL0_RODTENSTB_SELPH_CG_IG             Fld(1, 5) //[5:5]
#define PSRAM_RODT_CTRL0_RODTENSTB_SELPH_BY_BITTIME        Fld(1, 6) //[6:6]
#define PSRAM_RODT_CTRL0_RODTENSTB__UI_OFFSET              Fld(4, 8) //[11:8]
#define PSRAM_RODT_CTRL0_RODTENSTB_MCK_OFFSET              Fld(4, 12) //[15:12]
#define PSRAM_RODT_CTRL0_RODTENSTB_EXT                     Fld(16, 16) //[31:16]

#define DDRPHY_PSRAM_RODT_CTRL1                            (DDRPHY_AO_BASE_ADDR + 0x0424)
#define PSRAM_RODT_CTRL1_RODTENCGEN_TAIL                   Fld(3, 0) //[2:0]
#define PSRAM_RODT_CTRL1_RODTENCGEN_HEAD                   Fld(3, 4) //[6:4]
#define PSRAM_RODT_CTRL1_FIXRODT                           Fld(1, 8) //[8:8]
#define PSRAM_RODT_CTRL1_RODTDLY_LAT_OPT                   Fld(2, 12) //[13:12]

#define DDRPHY_PSRAM_RODT_DLY_CTRL0                        (DDRPHY_AO_BASE_ADDR + 0x0428)
#define PSRAM_RODT_DLY_CTRL0_RODTEN_UI_P0_B0_RK0           Fld(8, 0) //[7:0]

#define DDRPHY_PSRAM_APHY_RX_CTRL0                         (DDRPHY_AO_BASE_ADDR + 0x042C)
#define PSRAM_APHY_RX_CTRL0_RX_IN_GATE_EN                  Fld(1, 0) //[0:0]
#define PSRAM_APHY_RX_CTRL0_RX_IN_GATE_EN_PRE_OFFSET       Fld(2, 1) //[2:1]
#define PSRAM_APHY_RX_CTRL0_RX_APHY_CTRL_DCM_OPT           Fld(1, 4) //[4:4]
#define PSRAM_APHY_RX_CTRL0_DIS_IN_GATE_EN                 Fld(4, 8) //[11:8]
#define PSRAM_APHY_RX_CTRL0_FIX_IN_GATE_EN                 Fld(4, 12) //[15:12]
#define PSRAM_APHY_RX_CTRL0_RX_IN_GATE_EN_TAIL             Fld(3, 16) //[18:16]
#define PSRAM_APHY_RX_CTRL0_RX_IN_GATE_EN_HEAD             Fld(3, 20) //[22:20]

#define DDRPHY_PSRAM_APHY_RX_CTRL1                         (DDRPHY_AO_BASE_ADDR + 0x0430)
#define PSRAM_APHY_RX_CTRL1_RX_IN_BUFF_EN                  Fld(1, 0) //[0:0]
#define PSRAM_APHY_RX_CTRL1_DIS_IN_BUFF_EN                 Fld(4, 8) //[11:8]
#define PSRAM_APHY_RX_CTRL1_FIX_IN_BUFF_EN                 Fld(4, 12) //[15:12]
#define PSRAM_APHY_RX_CTRL1_RX_IN_BUFF_EN_TAIL             Fld(3, 16) //[18:16]
#define PSRAM_APHY_RX_CTRL1_RX_IN_BUFF_EN_HEAD             Fld(3, 20) //[22:20]

#define DDRPHY_PSRAM_EYESCAN                               (DDRPHY_AO_BASE_ADDR + 0x0440)
#define PSRAM_EYESCAN_REG_SW_RST                             Fld(1, 0) //[0:0]
#define PSRAM_EYESCAN_RG_RX_EYE_SCAN_EN                      Fld(1, 1) //[1:1]
#define PSRAM_EYESCAN_RG_RX_MIOCK_JIT_EN                     Fld(1, 2) //[2:2]
#define PSRAM_EYESCAN_EYESCAN_DQS_SYNC_EN                    Fld(1, 10) //[10:10]
#define PSRAM_EYESCAN_DQSERRCNT_DIS                          Fld(1, 14) //[14:14]

#define DDRPHY_PSRAM_APHY_PICG_CTRL0                       (DDRPHY_AO_BASE_ADDR + 0x0450)
#define PSRAM_APHY_PICG_CTRL0_DQSIENCG_EN                  Fld(1, 0) //[0:0]
#define PSRAM_APHY_PICG_CTRL0_OPT2_CG_DQSIEN               Fld(1, 1) //[1:1]
#define PSRAM_APHY_PICG_CTRL0_OPT2_CG_DQ                   Fld(1, 2) //[2:2]
#define PSRAM_APHY_PICG_CTRL0_OPT2_CG_DQS                  Fld(1, 3) //[3:3]
#define PSRAM_APHY_PICG_CTRL0_OPT2_CG_DQM                  Fld(1, 4) //[4:4]
#define PSRAM_APHY_PICG_CTRL0_OPT2_CG_MCK                  Fld(1, 5) //[5:5]
#define PSRAM_APHY_PICG_CTRL0_OPT2_MPDIV_CG                Fld(1, 6) //[6:6]
#define PSRAM_APHY_PICG_CTRL0_ARPI_MPDIV_CG_DQ_OPT         Fld(1, 7) //[7:7]
#define PSRAM_APHY_PICG_CTRL0_ARPI_CG_MCTL_DQ_OPT          Fld(1, 8) //[8:8]
#define PSRAM_APHY_PICG_CTRL0_ARPI_CG_MCK_DQ_OPT           Fld(1, 9) //[9:9]
#define PSRAM_APHY_PICG_CTRL0_ARPI_CG_DQ_OPT               Fld(2, 10) //[11:10]
#define PSRAM_APHY_PICG_CTRL0_ARPI_CG_DQS_OPT              Fld(2, 12) //[13:12]
#define PSRAM_APHY_PICG_CTRL0_TX_ARPI_CG_DQ_NEW_B0         Fld(1, 16) //[16:16]
#define PSRAM_APHY_PICG_CTRL0_TX_ARPI_CG_DQS_NEW_B0        Fld(1, 17) //[17:17]
#define PSRAM_APHY_PICG_CTRL0_TX_ARPI_CG_DQM_NEW_B0        Fld(1, 18) //[18:18]

#define DDRPHY_PSRAM_APHY_PICG_CTRL1                       (DDRPHY_AO_BASE_ADDR + 0x0454)
#define PSRAM_APHY_PICG_CTRL1_CLKIENCG_EN                  Fld(1, 0) //[0:0]
#define PSRAM_APHY_PICG_CTRL1_OPT2_CG_CLKIEN               Fld(1, 1) //[1:1]
#define PSRAM_APHY_PICG_CTRL1_OPT2_CG_CMD                  Fld(1, 2) //[2:2]
#define PSRAM_APHY_PICG_CTRL1_OPT2_CG_CLK                  Fld(1, 3) //[3:3]
#define PSRAM_APHY_PICG_CTRL1_OPT2_CG_CS                   Fld(1, 4) //[4:4]
#define PSRAM_APHY_PICG_CTRL1_ARPI_MPDIV_CG_CA_OPT         Fld(1, 7) //[7:7]
#define PSRAM_APHY_PICG_CTRL1_ARPI_CG_MCTL_CA_OPT          Fld(1, 8) //[8:8]
#define PSRAM_APHY_PICG_CTRL1_ARPI_CG_MCK_CA_OPT           Fld(1, 9) //[9:9]
#define PSRAM_APHY_PICG_CTRL1_ARPI_CG_CMD_OPT              Fld(2, 10) //[11:10]
#define PSRAM_APHY_PICG_CTRL1_ARPI_CG_CLK_OPT              Fld(2, 12) //[13:12]
#define PSRAM_APHY_PICG_CTRL1_TX_ARPI_CG_CMD_NEW           Fld(1, 16) //[16:16]
#define PSRAM_APHY_PICG_CTRL1_TX_ARPI_CG_CS_NEW            Fld(1, 17) //[17:17]

#define DDRPHY_PSRAM_RDAT                                  (DDRPHY_AO_BASE_ADDR + 0x0500)
#define PSRAM_RDAT_DATLAT                                  Fld(5, 0) //[4:0]
#define PSRAM_RDAT_DATLAT_DSEL                             Fld(5, 8) //[12:8]
#define PSRAM_RDAT_DATLAT_DSEL_PHY                         Fld(5, 16) //[20:16]

#define DDRPHY_MISC_IMP_CHB_B0_DRV                         (DDRPHY_AO_BASE_ADDR + 0x0504)
#define MISC_IMP_CHB_B0_DRV_RG_TX_BRDQ_DRVN_B0             Fld(5, 0) //[4:0]
#define MISC_IMP_CHB_B0_DRV_RG_TX_BRDQ_DRVP_B0             Fld(5, 8) //[12:8]
#define MISC_IMP_CHB_B0_DRV_RG_TX_BRDQS0_DRVN_B0           Fld(5, 16) //[20:16]
#define MISC_IMP_CHB_B0_DRV_RG_TX_BRDQS0_DRVP_B0           Fld(5, 24) //[28:24]

#define DDRPHY_MISC_IMP_CHB_B0_ODT                         (DDRPHY_AO_BASE_ADDR + 0x0508)
#define MISC_IMP_CHB_B0_ODT_RG_TX_BRDQ_ODTN_B0             Fld(5, 0) //[4:0]
#define MISC_IMP_CHB_B0_ODT_RG_TX_BRDQ_ODTP_B0             Fld(5, 8) //[12:8]
#define MISC_IMP_CHB_B0_ODT_RG_TX_BRDQS0_ODTN_B0           Fld(5, 16) //[20:16]
#define MISC_IMP_CHB_B0_ODT_RG_TX_BRDQS0_ODTP_B0           Fld(5, 24) //[28:24]

#define DDRPHY_MISC_STBERR_RK0_R                           (DDRPHY_AO_BASE_ADDR + 0x0510)
#define MISC_STBERR_RK0_R_STBERR_RK0_R                     Fld(16, 0) //[15:0]
#define MISC_STBERR_RK0_R_STBENERR_ALL                     Fld(1, 16) //[16:16]
#define MISC_STBERR_RK0_R_RX_ARDQ0_FIFO_STBEN_ERR_PSRAM    Fld(1, 22) //[22:22]
#define MISC_STBERR_RK0_R_RX_ARDQ4_FIFO_STBEN_ERR_PSRAM    Fld(1, 23) //[23:23]
#define MISC_STBERR_RK0_R_RX_ARDQ0_FIFO_STBEN_ERR_B0       Fld(1, 24) //[24:24]
#define MISC_STBERR_RK0_R_RX_ARDQ4_FIFO_STBEN_ERR_B0       Fld(1, 25) //[25:25]
#define MISC_STBERR_RK0_R_RX_ARDQ0_FIFO_STBEN_ERR_B1       Fld(1, 26) //[26:26]
#define MISC_STBERR_RK0_R_RX_ARDQ4_FIFO_STBEN_ERR_B1       Fld(1, 27) //[27:27]
#define MISC_STBERR_RK0_R_RX_ARCA0_FIFO_STBEN_ERR          Fld(1, 28) //[28:28]
#define MISC_STBERR_RK0_R_RX_ARCA4_FIFO_STBEN_ERR          Fld(1, 29) //[29:29]
#define MISC_STBERR_RK0_R_DA_RPHYPLLGP_CK_SEL              Fld(1, 31) //[31:31]

#define DDRPHY_MISC_STBERR_RK0_F                           (DDRPHY_AO_BASE_ADDR + 0x0514)
#define MISC_STBERR_RK0_F_STBERR_RK0_F                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_STBERR_RK1_R                           (DDRPHY_AO_BASE_ADDR + 0x0518)
#define MISC_STBERR_RK1_R_STBERR_RK1_R                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_STBERR_RK1_F                           (DDRPHY_AO_BASE_ADDR + 0x051C)
#define MISC_STBERR_RK1_F_STBERR_RK1_F                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_STBERR_RK2_R                           (DDRPHY_AO_BASE_ADDR + 0x0520)
#define MISC_STBERR_RK2_R_STBERR_RK2_R                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_STBERR_RK2_F                           (DDRPHY_AO_BASE_ADDR + 0x0524)
#define MISC_STBERR_RK2_F_STBERR_RK2_F                     Fld(16, 0) //[15:0]

#define DDRPHY_MISC_RXDVS0                                 (DDRPHY_AO_BASE_ADDR + 0x05E0)
#define MISC_RXDVS0_R_RX_DLY_TRACK_RO_SEL                  Fld(3, 0) //[2:0]
#define MISC_RXDVS0_R_DA_DQX_R_DLY_RO_SEL                  Fld(4, 8) //[11:8]
#define MISC_RXDVS0_R_DA_CAX_R_DLY_RO_SEL                  Fld(4, 12) //[15:12]

#define DDRPHY_MISC_RXDVS2                                 (DDRPHY_AO_BASE_ADDR + 0x05E8)
#define MISC_RXDVS2_R_DMRXDVS_DEPTH_HALF                   Fld(1, 0) //[0:0]
#define MISC_RXDVS2_R_DMRXDVS_SHUFFLE_CTRL_CG_IG           Fld(1, 8) //[8:8]
#define MISC_RXDVS2_R_DMRXDVS_DBG_MON_EN                   Fld(1, 16) //[16:16]
#define MISC_RXDVS2_R_DMRXDVS_DBG_MON_CLR                  Fld(1, 17) //[17:17]
#define MISC_RXDVS2_R_DMRXDVS_DBG_PAUSE_EN                 Fld(1, 18) //[18:18]

#define DDRPHY_RFU_0X5EC                                   (DDRPHY_AO_BASE_ADDR + 0x05EC)
#define RFU_0X5EC_RESERVED_0X5EC                           Fld(32, 0) //[31:0]

#define DDRPHY_B0_RXDVS0                                   (DDRPHY_AO_BASE_ADDR + 0x05F0)
#define B0_RXDVS0_R_RX_RANKINSEL_B0                        Fld(1, 0) //[0:0]
#define B0_RXDVS0_B0_RXDVS0_RFU                            Fld(3, 1) //[3:1]
#define B0_RXDVS0_R_RX_RANKINCTL_B0                        Fld(4, 4) //[7:4]
#define B0_RXDVS0_R_DVS_SW_UP_B0                           Fld(1, 8) //[8:8]
#define B0_RXDVS0_R_DMRXDVS_DQIENPRE_OPT_B0                Fld(1, 9) //[9:9]
#define B0_RXDVS0_R_DMRXDVS_PBYTESTUCK_RST_B0              Fld(1, 10) //[10:10]
#define B0_RXDVS0_R_DMRXDVS_PBYTESTUCK_IG_B0               Fld(1, 11) //[11:11]
#define B0_RXDVS0_R_DMRXDVS_DQIENPOST_OPT_B0               Fld(2, 12) //[13:12]
#define B0_RXDVS0_R_RX_DLY_RANK_ERR_ST_CLR_B0              Fld(3, 16) //[18:16]
#define B0_RXDVS0_R_DMRXDVS_CNTCMP_OPT_B0                  Fld(1, 19) //[19:19]
#define B0_RXDVS0_R_RX_DLY_RK_OPT_B0                       Fld(2, 20) //[21:20]
#define B0_RXDVS0_R_HWRESTORE_ENA_B0                       Fld(1, 22) //[22:22]
#define B0_RXDVS0_R_HWSAVE_MODE_ENA_B0                     Fld(1, 24) //[24:24]
#define B0_RXDVS0_R_RX_DLY_DVS_MODE_SYNC_DIS_B0            Fld(1, 26) //[26:26]
#define B0_RXDVS0_R_RX_DLY_TRACK_BYPASS_MODESYNC_B0        Fld(1, 27) //[27:27]
#define B0_RXDVS0_R_RX_DLY_TRACK_CG_EN_B0                  Fld(1, 28) //[28:28]
#define B0_RXDVS0_R_RX_DLY_TRACK_SPM_CTRL_B0               Fld(1, 29) //[29:29]
#define B0_RXDVS0_R_RX_DLY_TRACK_CLR_B0                    Fld(1, 30) //[30:30]
#define B0_RXDVS0_R_RX_DLY_TRACK_ENA_B0                    Fld(1, 31) //[31:31]

#define DDRPHY_B0_RXDVS1                                   (DDRPHY_AO_BASE_ADDR + 0x05F4)
#define B0_RXDVS1_B0_RXDVS1_RFU                            Fld(16, 0) //[15:0]
#define B0_RXDVS1_R_DMRXDVS_UPD_CLR_ACK_B0                 Fld(1, 16) //[16:16]
#define B0_RXDVS1_R_DMRXDVS_UPD_CLR_NORD_B0                Fld(1, 17) //[17:17]

#define DDRPHY_RFU_0X5F8                                   (DDRPHY_AO_BASE_ADDR + 0x05F8)
#define RFU_0X5F8_RESERVED_0X5F8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X5FC                                   (DDRPHY_AO_BASE_ADDR + 0x05FC)
#define RFU_0X5FC_RESERVED_0X5FC                           Fld(32, 0) //[31:0]

#define DDRPHY_R0_B0_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0600)
#define R0_B0_RXDVS0_R_RK0_B0_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R0_B0_RXDVS0_R_RK0_B0_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R0_B0_RXDVS0_R_RK0_B0_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R0_B0_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0604)
#define R0_B0_RXDVS1_R_RK0_B0_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R0_B0_RXDVS1_R_RK0_B0_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R0_B0_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0608)
#define R0_B0_RXDVS2_R_RK0_RX_DLY_FAL_DQS_SCALE_B0         Fld(2, 16) //[17:16]
#define R0_B0_RXDVS2_R_RK0_RX_DLY_FAL_DQ_SCALE_B0          Fld(2, 18) //[19:18]
#define R0_B0_RXDVS2_R_RK0_RX_DLY_FAL_TRACK_GATE_ENA_B0    Fld(1, 23) //[23:23]
#define R0_B0_RXDVS2_R_RK0_RX_DLY_RIS_DQS_SCALE_B0         Fld(2, 24) //[25:24]
#define R0_B0_RXDVS2_R_RK0_RX_DLY_RIS_DQ_SCALE_B0          Fld(2, 26) //[27:26]
#define R0_B0_RXDVS2_R_RK0_RX_DLY_RIS_TRACK_GATE_ENA_B0    Fld(1, 28) //[28:28]
#define R0_B0_RXDVS2_R_RK0_DVS_FDLY_MODE_B0                Fld(1, 29) //[29:29]
#define R0_B0_RXDVS2_R_RK0_DVS_MODE_B0                     Fld(2, 30) //[31:30]

#define DDRPHY_R0_B0_RXDVS7                                (DDRPHY_AO_BASE_ADDR + 0x061C)
#define R0_B0_RXDVS7_RG_RK0_ARDQ_MIN_DLY_B0                Fld(6, 0) //[5:0]
#define R0_B0_RXDVS7_RG_RK0_ARDQ_MIN_DLY_B0_RFU            Fld(2, 6) //[7:6]
#define R0_B0_RXDVS7_RG_RK0_ARDQ_MAX_DLY_B0                Fld(6, 8) //[13:8]
#define R0_B0_RXDVS7_RG_RK0_ARDQ_MAX_DLY_B0_RFU            Fld(2, 14) //[15:14]
#define R0_B0_RXDVS7_RG_RK0_ARDQS0_MIN_DLY_B0              Fld(7, 16) //[22:16]
#define R0_B0_RXDVS7_RG_RK0_ARDQS0_MIN_DLY_B0_RFU          Fld(1, 23) //[23:23]
#define R0_B0_RXDVS7_RG_RK0_ARDQS0_MAX_DLY_B0              Fld(7, 24) //[30:24]
#define R0_B0_RXDVS7_RG_RK0_ARDQS0_MAX_DLY_B0_RFU          Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X620                                   (DDRPHY_AO_BASE_ADDR + 0x0620)
#define RFU_0X620_RESERVED_0X620                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X624                                   (DDRPHY_AO_BASE_ADDR + 0x0624)
#define RFU_0X624_RESERVED_0X624                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X628                                   (DDRPHY_AO_BASE_ADDR + 0x0628)
#define RFU_0X628_RESERVED_0X628                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X62C                                   (DDRPHY_AO_BASE_ADDR + 0x062C)
#define RFU_0X62C_RESERVED_0X62C                           Fld(32, 0) //[31:0]

#define DDRPHY_B1_RXDVS0                                   (DDRPHY_AO_BASE_ADDR + 0x0670)
#define B1_RXDVS0_R_RX_RANKINSEL_B1                        Fld(1, 0) //[0:0]
#define B1_RXDVS0_B1_RXDVS0_RFU                            Fld(3, 1) //[3:1]
#define B1_RXDVS0_R_RX_RANKINCTL_B1                        Fld(4, 4) //[7:4]
#define B1_RXDVS0_R_DVS_SW_UP_B1                           Fld(1, 8) //[8:8]
#define B1_RXDVS0_R_DMRXDVS_DQIENPRE_OPT_B1                Fld(1, 9) //[9:9]
#define B1_RXDVS0_R_DMRXDVS_PBYTESTUCK_RST_B1              Fld(1, 10) //[10:10]
#define B1_RXDVS0_R_DMRXDVS_PBYTESTUCK_IG_B1               Fld(1, 11) //[11:11]
#define B1_RXDVS0_R_DMRXDVS_DQIENPOST_OPT_B1               Fld(2, 12) //[13:12]
#define B1_RXDVS0_R_RX_DLY_RANK_ERR_ST_CLR_B1              Fld(3, 16) //[18:16]
#define B1_RXDVS0_R_DMRXDVS_CNTCMP_OPT_B1                  Fld(1, 19) //[19:19]
#define B1_RXDVS0_R_RX_DLY_RK_OPT_B1                       Fld(2, 20) //[21:20]
#define B1_RXDVS0_R_HWRESTORE_ENA_B1                       Fld(1, 22) //[22:22]
#define B1_RXDVS0_R_HWSAVE_MODE_ENA_B1                     Fld(1, 24) //[24:24]
#define B1_RXDVS0_R_RX_DLY_DVS_MODE_SYNC_DIS_B1            Fld(1, 26) //[26:26]
#define B1_RXDVS0_R_RX_DLY_TRACK_BYPASS_MODESYNC_B1        Fld(1, 27) //[27:27]
#define B1_RXDVS0_R_RX_DLY_TRACK_CG_EN_B1                  Fld(1, 28) //[28:28]
#define B1_RXDVS0_R_RX_DLY_TRACK_SPM_CTRL_B1               Fld(1, 29) //[29:29]
#define B1_RXDVS0_R_RX_DLY_TRACK_CLR_B1                    Fld(1, 30) //[30:30]
#define B1_RXDVS0_R_RX_DLY_TRACK_ENA_B1                    Fld(1, 31) //[31:31]

#define DDRPHY_B1_RXDVS1                                   (DDRPHY_AO_BASE_ADDR + 0x0674)
#define B1_RXDVS1_B1_RXDVS1_RFU                            Fld(16, 0) //[15:0]
#define B1_RXDVS1_R_DMRXDVS_UPD_CLR_ACK_B1                 Fld(1, 16) //[16:16]
#define B1_RXDVS1_R_DMRXDVS_UPD_CLR_NORD_B1                Fld(1, 17) //[17:17]

#define DDRPHY_RFU_0X678                                   (DDRPHY_AO_BASE_ADDR + 0x0678)
#define RFU_0X678_RESERVED_0X678                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X67C                                   (DDRPHY_AO_BASE_ADDR + 0x067C)
#define RFU_0X67C_RESERVED_0X67C                           Fld(32, 0) //[31:0]

#define DDRPHY_R0_B1_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0680)
#define R0_B1_RXDVS0_R_RK0_B1_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R0_B1_RXDVS0_R_RK0_B1_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R0_B1_RXDVS0_R_RK0_B1_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R0_B1_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0684)
#define R0_B1_RXDVS1_R_RK0_B1_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R0_B1_RXDVS1_R_RK0_B1_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R0_B1_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0688)
#define R0_B1_RXDVS2_R_RK0_RX_DLY_FAL_DQS_SCALE_B1         Fld(2, 16) //[17:16]
#define R0_B1_RXDVS2_R_RK0_RX_DLY_FAL_DQ_SCALE_B1          Fld(2, 18) //[19:18]
#define R0_B1_RXDVS2_R_RK0_RX_DLY_FAL_TRACK_GATE_ENA_B1    Fld(1, 23) //[23:23]
#define R0_B1_RXDVS2_R_RK0_RX_DLY_RIS_DQS_SCALE_B1         Fld(2, 24) //[25:24]
#define R0_B1_RXDVS2_R_RK0_RX_DLY_RIS_DQ_SCALE_B1          Fld(2, 26) //[27:26]
#define R0_B1_RXDVS2_R_RK0_RX_DLY_RIS_TRACK_GATE_ENA_B1    Fld(1, 28) //[28:28]
#define R0_B1_RXDVS2_R_RK0_DVS_FDLY_MODE_B1                Fld(1, 29) //[29:29]
#define R0_B1_RXDVS2_R_RK0_DVS_MODE_B1                     Fld(2, 30) //[31:30]

#define DDRPHY_R0_B1_RXDVS7                                (DDRPHY_AO_BASE_ADDR + 0x069C)
#define R0_B1_RXDVS7_RG_RK0_ARDQ_MIN_DLY_B1                Fld(6, 0) //[5:0]
#define R0_B1_RXDVS7_RG_RK0_ARDQ_MIN_DLY_B1_RFU            Fld(2, 6) //[7:6]
#define R0_B1_RXDVS7_RG_RK0_ARDQ_MAX_DLY_B1                Fld(6, 8) //[13:8]
#define R0_B1_RXDVS7_RG_RK0_ARDQ_MAX_DLY_B1_RFU            Fld(2, 14) //[15:14]
#define R0_B1_RXDVS7_RG_RK0_ARDQS0_MIN_DLY_B1              Fld(7, 16) //[22:16]
#define R0_B1_RXDVS7_RG_RK0_ARDQS0_MIN_DLY_B1_RFU          Fld(1, 23) //[23:23]
#define R0_B1_RXDVS7_RG_RK0_ARDQS0_MAX_DLY_B1              Fld(7, 24) //[30:24]
#define R0_B1_RXDVS7_RG_RK0_ARDQS0_MAX_DLY_B1_RFU          Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X6A0                                   (DDRPHY_AO_BASE_ADDR + 0x06A0)
#define RFU_0X6A0_RESERVED_0X6A0                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X6A4                                   (DDRPHY_AO_BASE_ADDR + 0x06A4)
#define RFU_0X6A4_RESERVED_0X6A4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X6A8                                   (DDRPHY_AO_BASE_ADDR + 0x06A8)
#define RFU_0X6A8_RESERVED_0X6A8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X6AC                                   (DDRPHY_AO_BASE_ADDR + 0x06AC)
#define RFU_0X6AC_RESERVED_0X6AC                           Fld(32, 0) //[31:0]

#define DDRPHY_CA_RXDVS0                                   (DDRPHY_AO_BASE_ADDR + 0x06F0)
#define CA_RXDVS0_R_RX_RANKINSEL_CA                        Fld(1, 0) //[0:0]
#define CA_RXDVS0_CA_RXDVS0_RFU                            Fld(3, 1) //[3:1]
#define CA_RXDVS0_R_RX_RANKINCTL_CA                        Fld(4, 4) //[7:4]
#define CA_RXDVS0_R_DVS_SW_UP_CA                           Fld(1, 8) //[8:8]
#define CA_RXDVS0_R_DMRXDVS_DQIENPRE_OPT_CA                Fld(1, 9) //[9:9]
#define CA_RXDVS0_R_DMRXDVS_PBYTESTUCK_RST_CA              Fld(1, 10) //[10:10]
#define CA_RXDVS0_R_DMRXDVS_PBYTESTUCK_IG_CA               Fld(1, 11) //[11:11]
#define CA_RXDVS0_R_DMRXDVS_DQIENPOST_OPT_CA               Fld(2, 12) //[13:12]
#define CA_RXDVS0_R_RX_DLY_RANK_ERR_ST_CLR_CA              Fld(3, 16) //[18:16]
#define CA_RXDVS0_R_DMRXDVS_CNTCMP_OPT_CA                  Fld(1, 19) //[19:19]
#define CA_RXDVS0_R_RX_DLY_RK_OPT_CA                       Fld(2, 20) //[21:20]
#define CA_RXDVS0_R_HWRESTORE_ENA_CA                       Fld(1, 22) //[22:22]
#define CA_RXDVS0_R_HWSAVE_MODE_ENA_CA                     Fld(1, 24) //[24:24]
#define CA_RXDVS0_R_RX_DLY_DVS_MODE_SYNC_DIS_CA            Fld(1, 26) //[26:26]
#define CA_RXDVS0_R_RX_DLY_TRACK_BYPASS_MODESYNC_CA        Fld(1, 27) //[27:27]
#define CA_RXDVS0_R_RX_DLY_TRACK_CG_EN_CA                  Fld(1, 28) //[28:28]
#define CA_RXDVS0_R_RX_DLY_TRACK_SPM_CTRL_CA               Fld(1, 29) //[29:29]
#define CA_RXDVS0_R_RX_DLY_TRACK_CLR_CA                    Fld(1, 30) //[30:30]
#define CA_RXDVS0_R_RX_DLY_TRACK_ENA_CA                    Fld(1, 31) //[31:31]

#define DDRPHY_CA_RXDVS1                                   (DDRPHY_AO_BASE_ADDR + 0x06F4)
#define CA_RXDVS1_CA_RXDVS1_RFU                            Fld(16, 0) //[15:0]
#define CA_RXDVS1_R_DMRXDVS_UPD_CLR_ACK_CA                 Fld(1, 16) //[16:16]
#define CA_RXDVS1_R_DMRXDVS_UPD_CLR_NORD_CA                Fld(1, 17) //[17:17]

#define DDRPHY_RFU_0X6F8                                   (DDRPHY_AO_BASE_ADDR + 0x06F8)
#define RFU_0X6F8_RESERVED_0X6F8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X6FC                                   (DDRPHY_AO_BASE_ADDR + 0x06FC)
#define RFU_0X6FC_RESERVED_0X6FC                           Fld(32, 0) //[31:0]

#define DDRPHY_R0_CA_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0700)
#define R0_CA_RXDVS0_R_RK0_CA_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R0_CA_RXDVS0_R_RK0_CA_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R0_CA_RXDVS0_R_RK0_CA_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R0_CA_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0704)
#define R0_CA_RXDVS1_R_RK0_CA_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R0_CA_RXDVS1_R_RK0_CA_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R0_CA_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0708)
#define R0_CA_RXDVS2_R_RK0_RX_DLY_FAL_DQS_SCALE_CA         Fld(2, 16) //[17:16]
#define R0_CA_RXDVS2_R_RK0_RX_DLY_FAL_DQ_SCALE_CA          Fld(2, 18) //[19:18]
#define R0_CA_RXDVS2_R_RK0_RX_DLY_FAL_TRACK_GATE_ENA_CA    Fld(1, 23) //[23:23]
#define R0_CA_RXDVS2_R_RK0_RX_DLY_RIS_DQS_SCALE_CA         Fld(2, 24) //[25:24]
#define R0_CA_RXDVS2_R_RK0_RX_DLY_RIS_DQ_SCALE_CA          Fld(2, 26) //[27:26]
#define R0_CA_RXDVS2_R_RK0_RX_DLY_RIS_TRACK_GATE_ENA_CA    Fld(1, 28) //[28:28]
#define R0_CA_RXDVS2_R_RK0_DVS_FDLY_MODE_CA                Fld(1, 29) //[29:29]
#define R0_CA_RXDVS2_R_RK0_DVS_MODE_CA                     Fld(2, 30) //[31:30]

#define DDRPHY_R0_CA_RXDVS9                                (DDRPHY_AO_BASE_ADDR + 0x0724)
#define R0_CA_RXDVS9_RG_RK0_ARCMD_MIN_DLY                  Fld(6, 0) //[5:0]
#define R0_CA_RXDVS9_RG_RK0_ARCMD_MIN_DLY_RFU              Fld(2, 6) //[7:6]
#define R0_CA_RXDVS9_RG_RK0_ARCMD_MAX_DLY                  Fld(6, 8) //[13:8]
#define R0_CA_RXDVS9_RG_RK0_ARCMD_MAX_DLY_RFU              Fld(2, 14) //[15:14]
#define R0_CA_RXDVS9_RG_RK0_ARCLK_MIN_DLY                  Fld(7, 16) //[22:16]
#define R0_CA_RXDVS9_RG_RK0_ARCLK_MIN_DLY_RFU              Fld(1, 23) //[23:23]
#define R0_CA_RXDVS9_RG_RK0_ARCLK_MAX_DLY                  Fld(7, 24) //[30:24]
#define R0_CA_RXDVS9_RG_RK0_ARCLK_MAX_DLY_RFU              Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X728                                   (DDRPHY_AO_BASE_ADDR + 0x0728)
#define RFU_0X728_RESERVED_0X728                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X72C                                   (DDRPHY_AO_BASE_ADDR + 0x072C)
#define RFU_0X72C_RESERVED_0X72C                           Fld(32, 0) //[31:0]

#define DDRPHY_R1_B0_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0800)
#define R1_B0_RXDVS0_R_RK1_B0_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R1_B0_RXDVS0_R_RK1_B0_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R1_B0_RXDVS0_R_RK1_B0_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R1_B0_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0804)
#define R1_B0_RXDVS1_R_RK1_B0_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R1_B0_RXDVS1_R_RK1_B0_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R1_B0_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0808)
#define R1_B0_RXDVS2_R_RK1_RX_DLY_FAL_DQS_SCALE_B0         Fld(2, 16) //[17:16]
#define R1_B0_RXDVS2_R_RK1_RX_DLY_FAL_DQ_SCALE_B0          Fld(2, 18) //[19:18]
#define R1_B0_RXDVS2_R_RK1_RX_DLY_FAL_TRACK_GATE_ENA_B0    Fld(1, 23) //[23:23]
#define R1_B0_RXDVS2_R_RK1_RX_DLY_RIS_DQS_SCALE_B0         Fld(2, 24) //[25:24]
#define R1_B0_RXDVS2_R_RK1_RX_DLY_RIS_DQ_SCALE_B0          Fld(2, 26) //[27:26]
#define R1_B0_RXDVS2_R_RK1_RX_DLY_RIS_TRACK_GATE_ENA_B0    Fld(1, 28) //[28:28]
#define R1_B0_RXDVS2_R_RK1_DVS_FDLY_MODE_B0                Fld(1, 29) //[29:29]
#define R1_B0_RXDVS2_R_RK1_DVS_MODE_B0                     Fld(2, 30) //[31:30]

#define DDRPHY_R1_B0_RXDVS7                                (DDRPHY_AO_BASE_ADDR + 0x081C)
#define R1_B0_RXDVS7_RG_RK1_ARDQ_MIN_DLY_B0                Fld(6, 0) //[5:0]
#define R1_B0_RXDVS7_RG_RK1_ARDQ_MIN_DLY_B0_RFU            Fld(2, 6) //[7:6]
#define R1_B0_RXDVS7_RG_RK1_ARDQ_MAX_DLY_B0                Fld(6, 8) //[13:8]
#define R1_B0_RXDVS7_RG_RK1_ARDQ_MAX_DLY_B0_RFU            Fld(2, 14) //[15:14]
#define R1_B0_RXDVS7_RG_RK1_ARDQS0_MIN_DLY_B0              Fld(7, 16) //[22:16]
#define R1_B0_RXDVS7_RG_RK1_ARDQS0_MIN_DLY_B0_RFU          Fld(1, 23) //[23:23]
#define R1_B0_RXDVS7_RG_RK1_ARDQS0_MAX_DLY_B0              Fld(7, 24) //[30:24]
#define R1_B0_RXDVS7_RG_RK1_ARDQS0_MAX_DLY_B0_RFU          Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X820                                   (DDRPHY_AO_BASE_ADDR + 0x0820)
#define RFU_0X820_RESERVED_0X820                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X824                                   (DDRPHY_AO_BASE_ADDR + 0x0824)
#define RFU_0X824_RESERVED_0X824                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X828                                   (DDRPHY_AO_BASE_ADDR + 0x0828)
#define RFU_0X828_RESERVED_0X828                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X82C                                   (DDRPHY_AO_BASE_ADDR + 0x082C)
#define RFU_0X82C_RESERVED_0X82C                           Fld(32, 0) //[31:0]

#define DDRPHY_R1_B1_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0880)
#define R1_B1_RXDVS0_R_RK1_B1_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R1_B1_RXDVS0_R_RK1_B1_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R1_B1_RXDVS0_R_RK1_B1_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R1_B1_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0884)
#define R1_B1_RXDVS1_R_RK1_B1_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R1_B1_RXDVS1_R_RK1_B1_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R1_B1_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0888)
#define R1_B1_RXDVS2_R_RK1_RX_DLY_FAL_DQS_SCALE_B1         Fld(2, 16) //[17:16]
#define R1_B1_RXDVS2_R_RK1_RX_DLY_FAL_DQ_SCALE_B1          Fld(2, 18) //[19:18]
#define R1_B1_RXDVS2_R_RK1_RX_DLY_FAL_TRACK_GATE_ENA_B1    Fld(1, 23) //[23:23]
#define R1_B1_RXDVS2_R_RK1_RX_DLY_RIS_DQS_SCALE_B1         Fld(2, 24) //[25:24]
#define R1_B1_RXDVS2_R_RK1_RX_DLY_RIS_DQ_SCALE_B1          Fld(2, 26) //[27:26]
#define R1_B1_RXDVS2_R_RK1_RX_DLY_RIS_TRACK_GATE_ENA_B1    Fld(1, 28) //[28:28]
#define R1_B1_RXDVS2_R_RK1_DVS_FDLY_MODE_B1                Fld(1, 29) //[29:29]
#define R1_B1_RXDVS2_R_RK1_DVS_MODE_B1                     Fld(2, 30) //[31:30]

#define DDRPHY_R1_B1_RXDVS7                                (DDRPHY_AO_BASE_ADDR + 0x089C)
#define R1_B1_RXDVS7_RG_RK1_ARDQ_MIN_DLY_B1                Fld(6, 0) //[5:0]
#define R1_B1_RXDVS7_RG_RK1_ARDQ_MIN_DLY_B1_RFU            Fld(2, 6) //[7:6]
#define R1_B1_RXDVS7_RG_RK1_ARDQ_MAX_DLY_B1                Fld(6, 8) //[13:8]
#define R1_B1_RXDVS7_RG_RK1_ARDQ_MAX_DLY_B1_RFU            Fld(2, 14) //[15:14]
#define R1_B1_RXDVS7_RG_RK1_ARDQS0_MIN_DLY_B1              Fld(7, 16) //[22:16]
#define R1_B1_RXDVS7_RG_RK1_ARDQS0_MIN_DLY_B1_RFU          Fld(1, 23) //[23:23]
#define R1_B1_RXDVS7_RG_RK1_ARDQS0_MAX_DLY_B1              Fld(7, 24) //[30:24]
#define R1_B1_RXDVS7_RG_RK1_ARDQS0_MAX_DLY_B1_RFU          Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X8A0                                   (DDRPHY_AO_BASE_ADDR + 0x08A0)
#define RFU_0X8A0_RESERVED_0X8A0                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X8A4                                   (DDRPHY_AO_BASE_ADDR + 0x08A4)
#define RFU_0X8A4_RESERVED_0X8A4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X8A8                                   (DDRPHY_AO_BASE_ADDR + 0x08A8)
#define RFU_0X8A8_RESERVED_0X8A8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X8AC                                   (DDRPHY_AO_BASE_ADDR + 0x08AC)
#define RFU_0X8AC_RESERVED_0X8AC                           Fld(32, 0) //[31:0]

#define DDRPHY_R1_CA_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0900)
#define R1_CA_RXDVS0_R_RK1_CA_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R1_CA_RXDVS0_R_RK1_CA_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R1_CA_RXDVS0_R_RK1_CA_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R1_CA_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0904)
#define R1_CA_RXDVS1_R_RK1_CA_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R1_CA_RXDVS1_R_RK1_CA_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R1_CA_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0908)
#define R1_CA_RXDVS2_R_RK1_RX_DLY_FAL_DQS_SCALE_CA         Fld(2, 16) //[17:16]
#define R1_CA_RXDVS2_R_RK1_RX_DLY_FAL_DQ_SCALE_CA          Fld(2, 18) //[19:18]
#define R1_CA_RXDVS2_R_RK1_RX_DLY_FAL_TRACK_GATE_ENA_CA    Fld(1, 23) //[23:23]
#define R1_CA_RXDVS2_R_RK1_RX_DLY_RIS_DQS_SCALE_CA         Fld(2, 24) //[25:24]
#define R1_CA_RXDVS2_R_RK1_RX_DLY_RIS_DQ_SCALE_CA          Fld(2, 26) //[27:26]
#define R1_CA_RXDVS2_R_RK1_RX_DLY_RIS_TRACK_GATE_ENA_CA    Fld(1, 28) //[28:28]
#define R1_CA_RXDVS2_R_RK1_DVS_FDLY_MODE_CA                Fld(1, 29) //[29:29]
#define R1_CA_RXDVS2_R_RK1_DVS_MODE_CA                     Fld(2, 30) //[31:30]

#define DDRPHY_R1_CA_RXDVS9                                (DDRPHY_AO_BASE_ADDR + 0x0924)
#define R1_CA_RXDVS9_RG_RK1_ARCMD_MIN_DLY                  Fld(6, 0) //[5:0]
#define R1_CA_RXDVS9_RG_RK1_ARCMD_MIN_DLY_RFU              Fld(2, 6) //[7:6]
#define R1_CA_RXDVS9_RG_RK1_ARCMD_MAX_DLY                  Fld(6, 8) //[13:8]
#define R1_CA_RXDVS9_RG_RK1_ARCMD_MAX_DLY_RFU              Fld(2, 14) //[15:14]
#define R1_CA_RXDVS9_RG_RK1_ARCLK_MIN_DLY                  Fld(7, 16) //[22:16]
#define R1_CA_RXDVS9_RG_RK1_ARCLK_MIN_DLY_RFU              Fld(1, 23) //[23:23]
#define R1_CA_RXDVS9_RG_RK1_ARCLK_MAX_DLY                  Fld(7, 24) //[30:24]
#define R1_CA_RXDVS9_RG_RK1_ARCLK_MAX_DLY_RFU              Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0X928                                   (DDRPHY_AO_BASE_ADDR + 0x0928)
#define RFU_0X928_RESERVED_0X928                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X92C                                   (DDRPHY_AO_BASE_ADDR + 0x092C)
#define RFU_0X92C_RESERVED_0X92C                           Fld(32, 0) //[31:0]

#define DDRPHY_R2_B0_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0A00)
#define R2_B0_RXDVS0_R_RK2_B0_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R2_B0_RXDVS0_R_RK2_B0_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R2_B0_RXDVS0_R_RK2_B0_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R2_B0_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0A04)
#define R2_B0_RXDVS1_R_RK2_B0_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R2_B0_RXDVS1_R_RK2_B0_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R2_B0_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0A08)
#define R2_B0_RXDVS2_R_RK2_RX_DLY_FAL_DQS_SCALE_B0         Fld(2, 16) //[17:16]
#define R2_B0_RXDVS2_R_RK2_RX_DLY_FAL_DQ_SCALE_B0          Fld(2, 18) //[19:18]
#define R2_B0_RXDVS2_R_RK2_RX_DLY_FAL_TRACK_GATE_ENA_B0    Fld(1, 23) //[23:23]
#define R2_B0_RXDVS2_R_RK2_RX_DLY_RIS_DQS_SCALE_B0         Fld(2, 24) //[25:24]
#define R2_B0_RXDVS2_R_RK2_RX_DLY_RIS_DQ_SCALE_B0          Fld(2, 26) //[27:26]
#define R2_B0_RXDVS2_R_RK2_RX_DLY_RIS_TRACK_GATE_ENA_B0    Fld(1, 28) //[28:28]
#define R2_B0_RXDVS2_R_RK2_DVS_FDLY_MODE_B0                Fld(1, 29) //[29:29]
#define R2_B0_RXDVS2_R_RK2_DVS_MODE_B0                     Fld(2, 30) //[31:30]

#define DDRPHY_R2_B0_RXDVS7                                (DDRPHY_AO_BASE_ADDR + 0x0A1C)
#define R2_B0_RXDVS7_RG_RK2_ARDQ_MIN_DLY_B0                Fld(6, 0) //[5:0]
#define R2_B0_RXDVS7_RG_RK2_ARDQ_MIN_DLY_B0_RFU            Fld(2, 6) //[7:6]
#define R2_B0_RXDVS7_RG_RK2_ARDQ_MAX_DLY_B0                Fld(6, 8) //[13:8]
#define R2_B0_RXDVS7_RG_RK2_ARDQ_MAX_DLY_B0_RFU            Fld(2, 14) //[15:14]
#define R2_B0_RXDVS7_RG_RK2_ARDQS0_MIN_DLY_B0              Fld(7, 16) //[22:16]
#define R2_B0_RXDVS7_RG_RK2_ARDQS0_MIN_DLY_B0_RFU          Fld(1, 23) //[23:23]
#define R2_B0_RXDVS7_RG_RK2_ARDQS0_MAX_DLY_B0              Fld(7, 24) //[30:24]
#define R2_B0_RXDVS7_RG_RK2_ARDQS0_MAX_DLY_B0_RFU          Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0XA20                                   (DDRPHY_AO_BASE_ADDR + 0x0A20)
#define RFU_0XA20_RESERVED_0XA20                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XA24                                   (DDRPHY_AO_BASE_ADDR + 0x0A24)
#define RFU_0XA24_RESERVED_0XA24                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XA28                                   (DDRPHY_AO_BASE_ADDR + 0x0A28)
#define RFU_0XA28_RESERVED_0XA28                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XA2C                                   (DDRPHY_AO_BASE_ADDR + 0x0A2C)
#define RFU_0XA2C_RESERVED_0XA2C                           Fld(32, 0) //[31:0]

#define DDRPHY_R2_B1_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0A80)
#define R2_B1_RXDVS0_R_RK2_B1_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R2_B1_RXDVS0_R_RK2_B1_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R2_B1_RXDVS0_R_RK2_B1_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R2_B1_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0A84)
#define R2_B1_RXDVS1_R_RK2_B1_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R2_B1_RXDVS1_R_RK2_B1_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R2_B1_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0A88)
#define R2_B1_RXDVS2_R_RK2_RX_DLY_FAL_DQS_SCALE_B1         Fld(2, 16) //[17:16]
#define R2_B1_RXDVS2_R_RK2_RX_DLY_FAL_DQ_SCALE_B1          Fld(2, 18) //[19:18]
#define R2_B1_RXDVS2_R_RK2_RX_DLY_FAL_TRACK_GATE_ENA_B1    Fld(1, 23) //[23:23]
#define R2_B1_RXDVS2_R_RK2_RX_DLY_RIS_DQS_SCALE_B1         Fld(2, 24) //[25:24]
#define R2_B1_RXDVS2_R_RK2_RX_DLY_RIS_DQ_SCALE_B1          Fld(2, 26) //[27:26]
#define R2_B1_RXDVS2_R_RK2_RX_DLY_RIS_TRACK_GATE_ENA_B1    Fld(1, 28) //[28:28]
#define R2_B1_RXDVS2_R_RK2_DVS_FDLY_MODE_B1                Fld(1, 29) //[29:29]
#define R2_B1_RXDVS2_R_RK2_DVS_MODE_B1                     Fld(2, 30) //[31:30]

#define DDRPHY_R2_B1_RXDVS7                                (DDRPHY_AO_BASE_ADDR + 0x0A9C)
#define R2_B1_RXDVS7_RG_RK2_ARDQ_MIN_DLY_B1                Fld(6, 0) //[5:0]
#define R2_B1_RXDVS7_RG_RK2_ARDQ_MIN_DLY_B1_RFU            Fld(2, 6) //[7:6]
#define R2_B1_RXDVS7_RG_RK2_ARDQ_MAX_DLY_B1                Fld(6, 8) //[13:8]
#define R2_B1_RXDVS7_RG_RK2_ARDQ_MAX_DLY_B1_RFU            Fld(2, 14) //[15:14]
#define R2_B1_RXDVS7_RG_RK2_ARDQS0_MIN_DLY_B1              Fld(7, 16) //[22:16]
#define R2_B1_RXDVS7_RG_RK2_ARDQS0_MIN_DLY_B1_RFU          Fld(1, 23) //[23:23]
#define R2_B1_RXDVS7_RG_RK2_ARDQS0_MAX_DLY_B1              Fld(7, 24) //[30:24]
#define R2_B1_RXDVS7_RG_RK2_ARDQS0_MAX_DLY_B1_RFU          Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0XAA0                                   (DDRPHY_AO_BASE_ADDR + 0x0AA0)
#define RFU_0XAA0_RESERVED_0XAA0                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XAA4                                   (DDRPHY_AO_BASE_ADDR + 0x0AA4)
#define RFU_0XAA4_RESERVED_0XAA4                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XAA8                                   (DDRPHY_AO_BASE_ADDR + 0x0AA8)
#define RFU_0XAA8_RESERVED_0XAA8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XAAC                                   (DDRPHY_AO_BASE_ADDR + 0x0AAC)
#define RFU_0XAAC_RESERVED_0XAAC                           Fld(32, 0) //[31:0]

#define DDRPHY_R2_CA_RXDVS0                                (DDRPHY_AO_BASE_ADDR + 0x0B00)
#define R2_CA_RXDVS0_R_RK2_CA_DVS_LEAD_LAG_CNT_CLR         Fld(1, 26) //[26:26]
#define R2_CA_RXDVS0_R_RK2_CA_DVS_SW_CNT_CLR               Fld(1, 27) //[27:27]
#define R2_CA_RXDVS0_R_RK2_CA_DVS_SW_CNT_ENA               Fld(1, 31) //[31:31]

#define DDRPHY_R2_CA_RXDVS1                                (DDRPHY_AO_BASE_ADDR + 0x0B04)
#define R2_CA_RXDVS1_R_RK2_CA_DVS_TH_LAG                   Fld(16, 0) //[15:0]
#define R2_CA_RXDVS1_R_RK2_CA_DVS_TH_LEAD                  Fld(16, 16) //[31:16]

#define DDRPHY_R2_CA_RXDVS2                                (DDRPHY_AO_BASE_ADDR + 0x0B08)
#define R2_CA_RXDVS2_R_RK2_RX_DLY_FAL_DQS_SCALE_CA         Fld(2, 16) //[17:16]
#define R2_CA_RXDVS2_R_RK2_RX_DLY_FAL_DQ_SCALE_CA          Fld(2, 18) //[19:18]
#define R2_CA_RXDVS2_R_RK2_RX_DLY_FAL_TRACK_GATE_ENA_CA    Fld(1, 23) //[23:23]
#define R2_CA_RXDVS2_R_RK2_RX_DLY_RIS_DQS_SCALE_CA         Fld(2, 24) //[25:24]
#define R2_CA_RXDVS2_R_RK2_RX_DLY_RIS_DQ_SCALE_CA          Fld(2, 26) //[27:26]
#define R2_CA_RXDVS2_R_RK2_RX_DLY_RIS_TRACK_GATE_ENA_CA    Fld(1, 28) //[28:28]
#define R2_CA_RXDVS2_R_RK2_DVS_FDLY_MODE_CA                Fld(1, 29) //[29:29]
#define R2_CA_RXDVS2_R_RK2_DVS_MODE_CA                     Fld(2, 30) //[31:30]

#define DDRPHY_R2_CA_RXDVS9                                (DDRPHY_AO_BASE_ADDR + 0x0B24)
#define R2_CA_RXDVS9_RG_RK2_ARCMD_MIN_DLY                  Fld(6, 0) //[5:0]
#define R2_CA_RXDVS9_RG_RK2_ARCMD_MIN_DLY_RFU              Fld(2, 6) //[7:6]
#define R2_CA_RXDVS9_RG_RK2_ARCMD_MAX_DLY                  Fld(6, 8) //[13:8]
#define R2_CA_RXDVS9_RG_RK2_ARCMD_MAX_DLY_RFU              Fld(2, 14) //[15:14]
#define R2_CA_RXDVS9_RG_RK2_ARCLK_MIN_DLY                  Fld(7, 16) //[22:16]
#define R2_CA_RXDVS9_RG_RK2_ARCLK_MIN_DLY_RFU              Fld(1, 23) //[23:23]
#define R2_CA_RXDVS9_RG_RK2_ARCLK_MAX_DLY                  Fld(7, 24) //[30:24]
#define R2_CA_RXDVS9_RG_RK2_ARCLK_MAX_DLY_RFU              Fld(1, 31) //[31:31]

#define DDRPHY_RFU_0XB28                                   (DDRPHY_AO_BASE_ADDR + 0x0B28)
#define RFU_0XB28_RESERVED_0XB28                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XB2C                                   (DDRPHY_AO_BASE_ADDR + 0x0B2C)
#define RFU_0XB2C_RESERVED_0XB2C                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_PLL0                                   (DDRPHY_AO_BASE_ADDR + 0x0D80)
#define SHU1_PLL0_RG_RPHYPLL_TOP_REV                       Fld(16, 0) //[15:0]
#define SHU1_PLL0_RG_RPHYPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU1_PLL1                                   (DDRPHY_AO_BASE_ADDR + 0x0D84)
#define SHU1_PLL1_RG_RPHYPLLGP_CK_SEL                      Fld(1, 0) //[0:0]
#define SHU1_PLL1_SHU1_PLL1_RFU                            Fld(3, 1) //[3:1]
#define SHU1_PLL1_R_SHU_AUTO_PLL_MUX                       Fld(1, 4) //[4:4]
#define SHU1_PLL1_RESERVED_0XD84                           Fld(27, 5) //[31:5]

#define DDRPHY_SHU1_PLL2                                   (DDRPHY_AO_BASE_ADDR + 0x0D88)
#define SHU1_PLL2_RG_RCLRPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU1_PLL3                                   (DDRPHY_AO_BASE_ADDR + 0x0D8C)
#define SHU1_PLL3_RESERVED_0XD8C                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_PLL4                                   (DDRPHY_AO_BASE_ADDR + 0x0D90)
#define SHU1_PLL4_RG_RPHYPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU1_PLL4_RG_RPHYPLL_FS                            Fld(2, 18) //[19:18]
#define SHU1_PLL4_RG_RPHYPLL_BW                            Fld(3, 20) //[22:20]
#define SHU1_PLL4_RG_RPHYPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU1_PLL4_RG_RPHYPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU1_PLL4_RG_RPHYPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU1_PLL4_RG_RPHYPLL_BR                            Fld(1, 30) //[30:30]
#define SHU1_PLL4_RG_RPHYPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_PLL5                                   (DDRPHY_AO_BASE_ADDR + 0x0D94)
#define SHU1_PLL5_RG_RPHYPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU1_PLL5_RG_RPHYPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU1_PLL5_RG_RPHYPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU1_PLL6                                   (DDRPHY_AO_BASE_ADDR + 0x0D98)
#define SHU1_PLL6_RG_RCLRPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU1_PLL6_RG_RCLRPLL_FS                            Fld(2, 18) //[19:18]
#define SHU1_PLL6_RG_RCLRPLL_BW                            Fld(3, 20) //[22:20]
#define SHU1_PLL6_RG_RCLRPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU1_PLL6_RG_RCLRPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU1_PLL6_RG_RCLRPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU1_PLL6_RG_RCLRPLL_BR                            Fld(1, 30) //[30:30]
#define SHU1_PLL6_RG_RCLRPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_PLL7                                   (DDRPHY_AO_BASE_ADDR + 0x0D9C)
#define SHU1_PLL7_RG_RCLRPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU1_PLL7_RG_RCLRPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU1_PLL7_RG_RCLRPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU1_PLL8                                   (DDRPHY_AO_BASE_ADDR + 0x0DA0)
#define SHU1_PLL8_RG_RPHYPLL_POSDIV                        Fld(3, 0) //[2:0]
#define SHU1_PLL8_RG_RPHYPLL_PREDIV                        Fld(2, 18) //[19:18]

#define DDRPHY_SHU1_PLL9                                   (DDRPHY_AO_BASE_ADDR + 0x0DA4)
#define SHU1_PLL9_RG_RPHYPLL_RST_DLY                       Fld(2, 8) //[9:8]
#define SHU1_PLL9_RG_RPHYPLL_LVROD_EN                      Fld(1, 12) //[12:12]
#define SHU1_PLL9_RG_RPHYPLL_MONREF_EN                     Fld(1, 13) //[13:13]
#define SHU1_PLL9_RG_RPHYPLL_MONVC_EN                      Fld(2, 14) //[15:14]
#define SHU1_PLL9_RG_RPHYPLL_MONCK_EN                      Fld(1, 16) //[16:16]

#define DDRPHY_SHU1_PLL10                                  (DDRPHY_AO_BASE_ADDR + 0x0DA8)
#define SHU1_PLL10_RG_RCLRPLL_POSDIV                       Fld(3, 0) //[2:0]
#define SHU1_PLL10_RG_RCLRPLL_PREDIV                       Fld(2, 18) //[19:18]

#define DDRPHY_SHU1_PLL11                                  (DDRPHY_AO_BASE_ADDR + 0x0DAC)
#define SHU1_PLL11_RG_RCLRPLL_RST_DLY                      Fld(2, 8) //[9:8]
#define SHU1_PLL11_RG_RCLRPLL_LVROD_EN                     Fld(1, 12) //[12:12]
#define SHU1_PLL11_RG_RCLRPLL_MONREF_EN                    Fld(1, 13) //[13:13]
#define SHU1_PLL11_RG_RCLRPLL_MONVC_EN                     Fld(2, 14) //[15:14]
#define SHU1_PLL11_RG_RCLRPLL_MONCK_EN                     Fld(1, 16) //[16:16]

#define DDRPHY_SHU1_PLL12                                  (DDRPHY_AO_BASE_ADDR + 0x0DB0)
#define SHU1_PLL12_RG_RCLRPLL_EXT_PODIV                    Fld(6, 0) //[5:0]
#define SHU1_PLL12_RG_RCLRPLL_BYPASS                       Fld(1, 6) //[6:6]
#define SHU1_PLL12_RG_RCLRPLL_EXTPODIV_EN                  Fld(1, 7) //[7:7]
#define SHU1_PLL12_RG_RCLRPLL_EXT_FBDIV                    Fld(6, 8) //[13:8]
#define SHU1_PLL12_RG_RCLRPLL_EXTFBDIV_EN                  Fld(1, 15) //[15:15]
#define SHU1_PLL12_RG_RPHYPLL_EXT_FBDIV                    Fld(6, 16) //[21:16]
#define SHU1_PLL12_RG_RPHYPLL_EXTFBDIV_EN                  Fld(1, 22) //[22:22]

#define DDRPHY_SHU1_PLL13                                  (DDRPHY_AO_BASE_ADDR + 0x0DB4)
#define SHU1_PLL13_RG_RCLRPLL_FB_DL                        Fld(6, 0) //[5:0]
#define SHU1_PLL13_RG_RCLRPLL_REF_DL                       Fld(6, 8) //[13:8]
#define SHU1_PLL13_RG_RPHYPLL_FB_DL                        Fld(6, 16) //[21:16]
#define SHU1_PLL13_RG_RPHYPLL_REF_DL                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_PLL14                                  (DDRPHY_AO_BASE_ADDR + 0x0DB8)
#define SHU1_PLL14_RG_RPHYPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU1_PLL14_RG_RPHYPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU1_PLL14_RG_RPHYPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU1_PLL15                                  (DDRPHY_AO_BASE_ADDR + 0x0DBC)
#define SHU1_PLL15_RG_RPHYPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU1_PLL15_RG_RPHYPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU1_PLL20                                  (DDRPHY_AO_BASE_ADDR + 0x0DD0)
#define SHU1_PLL20_RG_RCLRPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU1_PLL20_RG_RCLRPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU1_PLL20_RG_RCLRPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU1_PLL21                                  (DDRPHY_AO_BASE_ADDR + 0x0DD4)
#define SHU1_PLL21_RG_RCLRPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU1_PLL21_RG_RCLRPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU1_B0_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x0C00)
#define SHU1_B0_DQ0_RG_TX_ARDQS0_PRE_EN_B0                 Fld(1, 4) //[4:4]
#define SHU1_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0               Fld(3, 8) //[10:8]
#define SHU1_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0_BIT0          Fld(1, 8) //[8:8]
#define SHU1_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0_BIT1          Fld(1, 9) //[9:9]
#define SHU1_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0_BIT2          Fld(1, 10) //[10:10]
#define SHU1_B0_DQ0_RG_TX_ARDQS0_DRVN_PRE_B0               Fld(3, 12) //[14:12]
#define SHU1_B0_DQ0_RG_TX_ARDQ_PRE_EN_B0                   Fld(1, 20) //[20:20]
#define SHU1_B0_DQ0_RG_TX_ARDQ_DRVP_PRE_B0                 Fld(3, 24) //[26:24]
#define SHU1_B0_DQ0_RG_TX_ARDQ_DRVN_PRE_B0                 Fld(3, 28) //[30:28]
#define SHU1_B0_DQ0_R_LP4Y_WDN_MODE_DQS0                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B0_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x0C04)
#define SHU1_B0_DQ1_RG_TX_ARDQ_DRVP_B0                     Fld(5, 0) //[4:0]
#define SHU1_B0_DQ1_RG_TX_ARDQ_DRVN_B0                     Fld(5, 8) //[12:8]
#define SHU1_B0_DQ1_RG_TX_ARDQ_ODTP_B0                     Fld(5, 16) //[20:16]
#define SHU1_B0_DQ1_RG_TX_ARDQ_ODTN_B0                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU1_B0_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x0C08)
#define SHU1_B0_DQ2_RG_TX_ARDQS0_DRVP_B0                   Fld(5, 0) //[4:0]
#define SHU1_B0_DQ2_RG_TX_ARDQS0_DRVN_B0                   Fld(5, 8) //[12:8]
#define SHU1_B0_DQ2_RG_TX_ARDQS0_ODTP_B0                   Fld(5, 16) //[20:16]
#define SHU1_B0_DQ2_RG_TX_ARDQS0_ODTN_B0                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU1_B0_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x0C0C)
#define SHU1_B0_DQ3_RG_TX_ARDQS0_PU_B0                     Fld(2, 0) //[1:0]
#define SHU1_B0_DQ3_RG_TX_ARDQS0_PU_PRE_B0                 Fld(2, 2) //[3:2]
#define SHU1_B0_DQ3_RG_TX_ARDQS0_PDB_B0                    Fld(2, 4) //[5:4]
#define SHU1_B0_DQ3_RG_TX_ARDQS0_PDB_PRE_B0                Fld(2, 6) //[7:6]
#define SHU1_B0_DQ3_RG_TX_ARDQ_PU_B0                       Fld(2, 8) //[9:8]
#define SHU1_B0_DQ3_RG_TX_ARDQ_PU_PRE_B0                   Fld(2, 10) //[11:10]
#define SHU1_B0_DQ3_RG_TX_ARDQ_PDB_B0                      Fld(2, 12) //[13:12]
#define SHU1_B0_DQ3_RG_TX_ARDQ_PDB_PRE_B0                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU1_B0_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x0C10)
#define SHU1_B0_DQ4_RG_ARPI_AA_MCK_DL_B0                   Fld(6, 0) //[5:0]
#define SHU1_B0_DQ4_RG_ARPI_AA_MCK_FB_DL_B0                Fld(6, 8) //[13:8]
#define SHU1_B0_DQ4_RG_ARPI_DA_MCK_FB_DL_B0                Fld(6, 16) //[21:16]

#define DDRPHY_SHU1_B0_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x0C14)
#define SHU1_B0_DQ5_RG_RX_ARDQ_VREF_SEL_B0                 Fld(6, 0) //[5:0]
#define SHU1_B0_DQ5_RG_RX_ARDQ_VREF_BYPASS_B0              Fld(1, 6) //[6:6]
#define SHU1_B0_DQ5_RG_ARPI_FB_B0                          Fld(6, 8) //[13:8]
#define SHU1_B0_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B0             Fld(3, 16) //[18:16]
#define SHU1_B0_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B0           Fld(1, 19) //[19:19]
#define SHU1_B0_DQ5_RG_RX_ARDQS0_DVS_DLY_B0                Fld(3, 20) //[22:20]
#define SHU1_B0_DQ5_RG_ARPI_MCTL_B0                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_B0_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x0C18)
#define SHU1_B0_DQ6_RG_ARPI_OFFSET_DQSIEN_B0               Fld(6, 0) //[5:0]
#define SHU1_B0_DQ6_RG_ARPI_MIDPI_CAP_SEL_B0               Fld(2, 22) //[23:22]
#define SHU1_B0_DQ6_RG_ARPI_MIDPI_VTH_SEL_B0               Fld(2, 24) //[25:24]
#define SHU1_B0_DQ6_RG_ARPI_MIDPI_EN_B0                    Fld(1, 26) //[26:26]
#define SHU1_B0_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B0             Fld(1, 27) //[27:27]
#define SHU1_B0_DQ6_RG_ARPI_CAP_SEL_B0                     Fld(2, 28) //[29:28]
#define SHU1_B0_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B0_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x0C1C)
#define SHU1_B0_DQ7_R_DMRANKRXDVS_B0                       Fld(4, 0) //[3:0]
#define SHU1_B0_DQ7_MIDPI_ENABLE                           Fld(1, 4) //[4:4]
#define SHU1_B0_DQ7_MIDPI_DIV4_ENABLE                      Fld(1, 5) //[5:5]
#define SHU1_B0_DQ7_R_DMDQMDBI_EYE_SHU_B0                  Fld(1, 6) //[6:6]
#define SHU1_B0_DQ7_R_DMDQMDBI_SHU_B0                      Fld(1, 7) //[7:7]
#define SHU1_B0_DQ7_R_DMRXDVS_DQM_FLAGSEL_B0               Fld(4, 8) //[11:8]
#define SHU1_B0_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B0            Fld(1, 12) //[12:12]
#define SHU1_B0_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B0              Fld(1, 13) //[13:13]
#define SHU1_B0_DQ7_R_DMRXTRACK_DQM_EN_B0                  Fld(1, 14) //[14:14]
#define SHU1_B0_DQ7_R_DMRODTEN_B0                          Fld(1, 15) //[15:15]
#define SHU1_B0_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B0           Fld(1, 16) //[16:16]
#define SHU1_B0_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B0               Fld(1, 17) //[17:17]
#define SHU1_B0_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B0              Fld(1, 18) //[18:18]
#define SHU1_B0_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B0              Fld(1, 19) //[19:19]
#define SHU1_B0_DQ7_R_LP4Y_SDN_MODE_DQS0                   Fld(1, 20) //[20:20]
#define SHU1_B0_DQ7_R_DMRXRANK_DQ_EN_B0                    Fld(1, 24) //[24:24]
#define SHU1_B0_DQ7_R_DMRXRANK_DQ_LAT_B0                   Fld(3, 25) //[27:25]
#define SHU1_B0_DQ7_R_DMRXRANK_DQS_EN_B0                   Fld(1, 28) //[28:28]
#define SHU1_B0_DQ7_R_DMRXRANK_DQS_LAT_B0                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU1_B0_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x0C20)
#define SHU1_B0_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B0             Fld(15, 0) //[14:0]
#define SHU1_B0_DQ8_R_DMRXDVS_UPD_FORCE_EN_B0              Fld(1, 15) //[15:15]
#define SHU1_B0_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B0           Fld(1, 19) //[19:19]
#define SHU1_B0_DQ8_R_RMRODTEN_CG_IG_B0                    Fld(1, 20) //[20:20]
#define SHU1_B0_DQ8_R_RMRX_TOPHY_CG_IG_B0                  Fld(1, 21) //[21:21]
#define SHU1_B0_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B0          Fld(1, 22) //[22:22]
#define SHU1_B0_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B0      Fld(1, 23) //[23:23]
#define SHU1_B0_DQ8_R_DMRXDLY_CG_IG_B0                     Fld(1, 24) //[24:24]
#define SHU1_B0_DQ8_R_DMSTBEN_SYNC_CG_IG_B0                Fld(1, 25) //[25:25]
#define SHU1_B0_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B0          Fld(1, 26) //[26:26]
#define SHU1_B0_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B0          Fld(1, 27) //[27:27]
#define SHU1_B0_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B0         Fld(1, 28) //[28:28]
#define SHU1_B0_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B0     Fld(1, 29) //[29:29]
#define SHU1_B0_DQ8_R_DMRANK_PIPE_CG_IG_B0                 Fld(1, 30) //[30:30]
#define SHU1_B0_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B0_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x0C24)
#define SHU1_B0_DQ9_RG_ARPI_RESERVE_B0                     Fld(22, 0) //[21:0]

#define DDRPHY_SHU1_B0_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x0C28)
#define SHU1_B0_DQ10_RESERVED_0XC28                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B0_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x0C2C)
#define SHU1_B0_DQ11_RESERVED_0XC2C                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B0_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x0C30)
#define SHU1_B0_DQ12_RESERVED_0XC30                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B0_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x0C34)
#define SHU1_B0_DLL0_RG_ARPISM_MCK_SEL_B0_SHU              Fld(1, 0) //[0:0]
#define SHU1_B0_DLL0_B0_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU1_B0_DLL0_RG_ARDLL_FAST_PSJP_B0                 Fld(1, 4) //[4:4]
#define SHU1_B0_DLL0_RG_ARDLL_PHDIV_B0                     Fld(1, 9) //[9:9]
#define SHU1_B0_DLL0_RG_ARDLL_PHJUMP_EN_B0                 Fld(1, 10) //[10:10]
#define SHU1_B0_DLL0_RG_ARDLL_P_GAIN_B0                    Fld(4, 12) //[15:12]
#define SHU1_B0_DLL0_RG_ARDLL_IDLECNT_B0                   Fld(4, 16) //[19:16]
#define SHU1_B0_DLL0_RG_ARDLL_GAIN_B0                      Fld(4, 20) //[23:20]
#define SHU1_B0_DLL0_RG_ARDLL_PHDET_IN_SWAP_B0             Fld(1, 30) //[30:30]
#define SHU1_B0_DLL0_RG_ARDLL_PHDET_OUT_SEL_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B0_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x0C38)
#define SHU1_B0_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B0             Fld(1, 0) //[0:0]
#define SHU1_B0_DLL1_RG_ARDLL_PS_EN_B0                     Fld(1, 1) //[1:1]
#define SHU1_B0_DLL1_RG_ARDLL_PD_CK_SEL_B0                 Fld(1, 2) //[2:2]
#define SHU1_B0_DLL1_RG_ARDQ_REV_B0                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU1_B1_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x0C80)
#define SHU1_B1_DQ0_RG_TX_ARDQS0_PRE_EN_B1                 Fld(1, 4) //[4:4]
#define SHU1_B1_DQ0_RG_TX_ARDQS0_DRVP_PRE_B1               Fld(3, 8) //[10:8]
#define SHU1_B1_DQ0_RG_TX_ARDQS0_DRVN_PRE_B1               Fld(3, 12) //[14:12]
#define SHU1_B1_DQ0_RG_TX_ARDQ_PRE_EN_B1                   Fld(1, 20) //[20:20]
#define SHU1_B1_DQ0_RG_TX_ARDQ_DRVP_PRE_B1                 Fld(3, 24) //[26:24]
#define SHU1_B1_DQ0_RG_TX_ARDQ_DRVN_PRE_B1                 Fld(3, 28) //[30:28]
#define SHU1_B1_DQ0_R_LP4Y_WDN_MODE_DQS1                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B1_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x0C84)
#define SHU1_B1_DQ1_RG_TX_ARDQ_DRVP_B1                     Fld(5, 0) //[4:0]
#define SHU1_B1_DQ1_RG_TX_ARDQ_DRVN_B1                     Fld(5, 8) //[12:8]
#define SHU1_B1_DQ1_RG_TX_ARDQ_ODTP_B1                     Fld(5, 16) //[20:16]
#define SHU1_B1_DQ1_RG_TX_ARDQ_ODTN_B1                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU1_B1_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x0C88)
#define SHU1_B1_DQ2_RG_TX_ARDQS0_DRVP_B1                   Fld(5, 0) //[4:0]
#define SHU1_B1_DQ2_RG_TX_ARDQS0_DRVN_B1                   Fld(5, 8) //[12:8]
#define SHU1_B1_DQ2_RG_TX_ARDQS0_ODTP_B1                   Fld(5, 16) //[20:16]
#define SHU1_B1_DQ2_RG_TX_ARDQS0_ODTN_B1                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU1_B1_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x0C8C)
#define SHU1_B1_DQ3_RG_TX_ARDQS0_PU_B1                     Fld(2, 0) //[1:0]
#define SHU1_B1_DQ3_RG_TX_ARDQS0_PU_PRE_B1                 Fld(2, 2) //[3:2]
#define SHU1_B1_DQ3_RG_TX_ARDQS0_PDB_B1                    Fld(2, 4) //[5:4]
#define SHU1_B1_DQ3_RG_TX_ARDQS0_PDB_PRE_B1                Fld(2, 6) //[7:6]
#define SHU1_B1_DQ3_RG_TX_ARDQ_PU_B1                       Fld(2, 8) //[9:8]
#define SHU1_B1_DQ3_RG_TX_ARDQ_PU_PRE_B1                   Fld(2, 10) //[11:10]
#define SHU1_B1_DQ3_RG_TX_ARDQ_PDB_B1                      Fld(2, 12) //[13:12]
#define SHU1_B1_DQ3_RG_TX_ARDQ_PDB_PRE_B1                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU1_B1_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x0C90)
#define SHU1_B1_DQ4_RG_ARPI_AA_MCK_DL_B1                   Fld(6, 0) //[5:0]
#define SHU1_B1_DQ4_RG_ARPI_AA_MCK_FB_DL_B1                Fld(6, 8) //[13:8]
#define SHU1_B1_DQ4_RG_ARPI_DA_MCK_FB_DL_B1                Fld(6, 16) //[21:16]

#define DDRPHY_SHU1_B1_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x0C94)
#define SHU1_B1_DQ5_RG_RX_ARDQ_VREF_SEL_B1                 Fld(6, 0) //[5:0]
#define SHU1_B1_DQ5_RG_RX_ARDQ_VREF_BYPASS_B1              Fld(1, 6) //[6:6]
#define SHU1_B1_DQ5_RG_ARPI_FB_B1                          Fld(6, 8) //[13:8]
#define SHU1_B1_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B1             Fld(3, 16) //[18:16]
#define SHU1_B1_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B1           Fld(1, 19) //[19:19]
#define SHU1_B1_DQ5_RG_RX_ARDQS0_DVS_DLY_B1                Fld(3, 20) //[22:20]
#define SHU1_B1_DQ5_RG_ARPI_MCTL_B1                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_B1_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x0C98)
#define SHU1_B1_DQ6_RG_ARPI_OFFSET_DQSIEN_B1               Fld(6, 0) //[5:0]
#define SHU1_B1_DQ6_RG_ARPI_RESERVE_B1                     Fld(16, 6) //[21:6]
#define SHU1_B1_DQ6_RG_ARPI_MIDPI_CAP_SEL_B1               Fld(2, 22) //[23:22]
#define SHU1_B1_DQ6_RG_ARPI_MIDPI_VTH_SEL_B1               Fld(2, 24) //[25:24]
#define SHU1_B1_DQ6_RG_ARPI_MIDPI_EN_B1                    Fld(1, 26) //[26:26]
#define SHU1_B1_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B1             Fld(1, 27) //[27:27]
#define SHU1_B1_DQ6_RG_ARPI_CAP_SEL_B1                     Fld(2, 28) //[29:28]
#define SHU1_B1_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B1_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x0C9C)
#define SHU1_B1_DQ7_R_DMRANKRXDVS_B1                       Fld(4, 0) //[3:0]
#define SHU1_B1_DQ7_R_DMDQMDBI_EYE_SHU_B1                  Fld(1, 6) //[6:6]
#define SHU1_B1_DQ7_R_DMDQMDBI_SHU_B1                      Fld(1, 7) //[7:7]
#define SHU1_B1_DQ7_R_DMRXDVS_DQM_FLAGSEL_B1               Fld(4, 8) //[11:8]
#define SHU1_B1_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B1            Fld(1, 12) //[12:12]
#define SHU1_B1_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B1              Fld(1, 13) //[13:13]
#define SHU1_B1_DQ7_R_DMRXTRACK_DQM_EN_B1                  Fld(1, 14) //[14:14]
#define SHU1_B1_DQ7_R_DMRODTEN_B1                          Fld(1, 15) //[15:15]
#define SHU1_B1_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B1           Fld(1, 16) //[16:16]
#define SHU1_B1_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B1               Fld(1, 17) //[17:17]
#define SHU1_B1_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B1              Fld(1, 18) //[18:18]
#define SHU1_B1_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B1              Fld(1, 19) //[19:19]
#define SHU1_B1_DQ7_R_LP4Y_SDN_MODE_DQS1                   Fld(1, 20) //[20:20]
#define SHU1_B1_DQ7_R_DMRXRANK_DQ_EN_B1                    Fld(1, 24) //[24:24]
#define SHU1_B1_DQ7_R_DMRXRANK_DQ_LAT_B1                   Fld(3, 25) //[27:25]
#define SHU1_B1_DQ7_R_DMRXRANK_DQS_EN_B1                   Fld(1, 28) //[28:28]
#define SHU1_B1_DQ7_R_DMRXRANK_DQS_LAT_B1                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU1_B1_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x0CA0)
#define SHU1_B1_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B1             Fld(15, 0) //[14:0]
#define SHU1_B1_DQ8_R_DMRXDVS_UPD_FORCE_EN_B1              Fld(1, 15) //[15:15]
#define SHU1_B1_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B1           Fld(1, 19) //[19:19]
#define SHU1_B1_DQ8_R_RMRODTEN_CG_IG_B1                    Fld(1, 20) //[20:20]
#define SHU1_B1_DQ8_R_RMRX_TOPHY_CG_IG_B1                  Fld(1, 21) //[21:21]
#define SHU1_B1_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B1          Fld(1, 22) //[22:22]
#define SHU1_B1_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B1      Fld(1, 23) //[23:23]
#define SHU1_B1_DQ8_R_DMRXDLY_CG_IG_B1                     Fld(1, 24) //[24:24]
#define SHU1_B1_DQ8_R_DMSTBEN_SYNC_CG_IG_B1                Fld(1, 25) //[25:25]
#define SHU1_B1_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B1          Fld(1, 26) //[26:26]
#define SHU1_B1_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B1          Fld(1, 27) //[27:27]
#define SHU1_B1_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B1         Fld(1, 28) //[28:28]
#define SHU1_B1_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B1     Fld(1, 29) //[29:29]
#define SHU1_B1_DQ8_R_DMRANK_PIPE_CG_IG_B1                 Fld(1, 30) //[30:30]
#define SHU1_B1_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B1_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x0CA4)
#define SHU1_B1_DQ9_RESERVED_0XCA4                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B1_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x0CA8)
#define SHU1_B1_DQ10_RESERVED_0XCA8                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B1_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x0CAC)
#define SHU1_B1_DQ11_RESERVED_0XCAC                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B1_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x0CB0)
#define SHU1_B1_DQ12_RESERVED_0XCB0                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_B1_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x0CB4)
#define SHU1_B1_DLL0_RG_ARPISM_MCK_SEL_B1_SHU              Fld(1, 0) //[0:0]
#define SHU1_B1_DLL0_B1_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU1_B1_DLL0_RG_ARDLL_FAST_PSJP_B1                 Fld(1, 4) //[4:4]
#define SHU1_B1_DLL0_RG_ARDLL_PHDIV_B1                     Fld(1, 9) //[9:9]
#define SHU1_B1_DLL0_RG_ARDLL_PHJUMP_EN_B1                 Fld(1, 10) //[10:10]
#define SHU1_B1_DLL0_RG_ARDLL_P_GAIN_B1                    Fld(4, 12) //[15:12]
#define SHU1_B1_DLL0_RG_ARDLL_IDLECNT_B1                   Fld(4, 16) //[19:16]
#define SHU1_B1_DLL0_RG_ARDLL_GAIN_B1                      Fld(4, 20) //[23:20]
#define SHU1_B1_DLL0_RG_ARDLL_PHDET_IN_SWAP_B1             Fld(1, 30) //[30:30]
#define SHU1_B1_DLL0_RG_ARDLL_PHDET_OUT_SEL_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_B1_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x0CB8)
#define SHU1_B1_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B1             Fld(1, 0) //[0:0]
#define SHU1_B1_DLL1_RG_ARDLL_PS_EN_B1                     Fld(1, 1) //[1:1]
#define SHU1_B1_DLL1_RG_ARDLL_PD_CK_SEL_B1                 Fld(1, 2) //[2:2]
#define SHU1_B1_DLL1_RG_ARDQ_REV_B1                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU1_CA_CMD0                                (DDRPHY_AO_BASE_ADDR + 0x0D00)
#define SHU1_CA_CMD0_RG_TX_ARCLK_PRE_EN                    Fld(1, 4) //[4:4]
#define SHU1_CA_CMD0_RG_TX_ARCLK_DRVP_PRE                  Fld(3, 8) //[10:8]
#define SHU1_CA_CMD0_RG_TX_ARCLK_DRVP_PRE_BIT0             Fld(1, 8) //[10:8]
#define SHU1_CA_CMD0_RG_TX_ARCLK_DRVP_PRE_BIT1             Fld(1, 9) //[10:8]
#define SHU1_CA_CMD0_RG_TX_ARCLK_DRVP_PRE_BIT2             Fld(1, 10) //[10:8]
#define SHU1_CA_CMD0_RG_TX_ARCLK_DRVN_PRE                  Fld(3, 12) //[14:12]
#define SHU1_CA_CMD0_RG_CGEN_FMEM_CK_CG_DLL                Fld(1, 17) //[17:17]
#define SHU1_CA_CMD0_RG_FB_CK_MUX                          Fld(2, 18) //[19:18]
#define SHU1_CA_CMD0_RG_TX_ARCMD_PRE_EN                    Fld(1, 20) //[20:20]
#define SHU1_CA_CMD0_RG_TX_ARCMD_DRVP_PRE                  Fld(3, 24) //[26:24]
#define SHU1_CA_CMD0_RG_TX_ARCMD_DRVN_PRE                  Fld(3, 28) //[30:28]
#define SHU1_CA_CMD0_R_LP4Y_WDN_MODE_CLK                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_CA_CMD1                                (DDRPHY_AO_BASE_ADDR + 0x0D04)
#define SHU1_CA_CMD1_RG_TX_ARCMD_DRVP                      Fld(5, 0) //[4:0]
#define SHU1_CA_CMD1_RG_TX_ARCMD_DRVN                      Fld(5, 8) //[12:8]
#define SHU1_CA_CMD1_RG_TX_ARCMD_ODTP                      Fld(5, 16) //[20:16]
#define SHU1_CA_CMD1_RG_TX_ARCMD_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU1_CA_CMD2                                (DDRPHY_AO_BASE_ADDR + 0x0D08)
#define SHU1_CA_CMD2_RG_TX_ARCLK_DRVP                      Fld(5, 0) //[4:0]
#define SHU1_CA_CMD2_RG_TX_ARCLK_DRVN                      Fld(5, 8) //[12:8]
#define SHU1_CA_CMD2_RG_TX_ARCLK_ODTP                      Fld(5, 16) //[20:16]
#define SHU1_CA_CMD2_RG_TX_ARCLK_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU1_CA_CMD3                                (DDRPHY_AO_BASE_ADDR + 0x0D0C)
#define SHU1_CA_CMD3_RG_TX_ARCLK_PU                        Fld(2, 0) //[1:0]
#define SHU1_CA_CMD3_RG_TX_ARCLK_PU_PRE                    Fld(2, 2) //[3:2]
#define SHU1_CA_CMD3_RG_TX_ARCLK_PDB                       Fld(2, 4) //[5:4]
#define SHU1_CA_CMD3_RG_TX_ARCLK_PDB_PRE                   Fld(2, 6) //[7:6]
#define SHU1_CA_CMD3_RG_TX_ARCMD_PU                        Fld(2, 8) //[9:8]
#define SHU1_CA_CMD3_RG_TX_ARCMD_PU_PRE                    Fld(2, 10) //[11:10]
#define SHU1_CA_CMD3_RG_TX_ARCMD_PDB                       Fld(2, 12) //[13:12]
#define SHU1_CA_CMD3_RG_TX_ARCMD_PDB_PRE                   Fld(2, 14) //[15:14]

#define DDRPHY_SHU1_CA_CMD4                                (DDRPHY_AO_BASE_ADDR + 0x0D10)
#define SHU1_CA_CMD4_RG_ARPI_AA_MCK_DL_CA                  Fld(6, 0) //[5:0]
#define SHU1_CA_CMD4_RG_ARPI_AA_MCK_FB_DL_CA               Fld(6, 8) //[13:8]
#define SHU1_CA_CMD4_RG_ARPI_DA_MCK_FB_DL_CA               Fld(6, 16) //[21:16]

#define DDRPHY_SHU1_CA_CMD5                                (DDRPHY_AO_BASE_ADDR + 0x0D14)
#define SHU1_CA_CMD5_RG_RX_ARCMD_VREF_SEL                  Fld(6, 0) //[5:0]
#define SHU1_CA_CMD5_RG_RX_ARCMD_VREF_BYPASS               Fld(1, 6) //[6:6]
#define SHU1_CA_CMD5_RG_ARPI_FB_CA                         Fld(6, 8) //[13:8]
#define SHU1_CA_CMD5_RG_RX_ARCLK_DQSIEN_DLY                Fld(3, 16) //[18:16]
#define SHU1_CA_CMD5_DA_RX_ARCLK_DQSIEN_RB_DLY             Fld(1, 19) //[19:19]
#define SHU1_CA_CMD5_RG_RX_ARCLK_DVS_DLY                   Fld(3, 20) //[22:20]
#define SHU1_CA_CMD5_RG_ARPI_MCTL_CA                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_CA_CMD6                                (DDRPHY_AO_BASE_ADDR + 0x0D18)
#define SHU1_CA_CMD6_RG_ARPI_OFFSET_CLKIEN                 Fld(6, 0) //[5:0]
#define SHU1_CA_CMD6_RG_ARPI_RESERVE_CA                    Fld(16, 6) //[21:6]
#define SHU1_CA_CMD6_RG_ARPI_MIDPI_CAP_SEL_CA              Fld(2, 22) //[23:22]
#define SHU1_CA_CMD6_RG_ARPI_MIDPI_VTH_SEL_CA              Fld(2, 24) //[25:24]
#define SHU1_CA_CMD6_RG_ARPI_MIDPI_EN_CA                   Fld(1, 26) //[26:26]
#define SHU1_CA_CMD6_RG_ARPI_MIDPI_CKDIV4_EN_CA            Fld(1, 27) //[27:27]
#define SHU1_CA_CMD6_RG_ARPI_CAP_SEL_CA                    Fld(2, 28) //[29:28]
#define SHU1_CA_CMD6_RG_ARPI_MIDPI_BYPASS_EN_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_CA_CMD7                                (DDRPHY_AO_BASE_ADDR + 0x0D1C)
#define SHU1_CA_CMD7_R_DMRANKRXDVS_CA                      Fld(4, 0) //[3:0]
#define SHU1_CA_CMD7_R_DMRXDVS_PBYTE_FLAG_OPT_CA           Fld(1, 12) //[12:12]
#define SHU1_CA_CMD7_R_DMRODTEN_CA                         Fld(1, 15) //[15:15]
#define SHU1_CA_CMD7_R_DMARPI_CG_FB2DLL_DCM_EN_CA          Fld(1, 16) //[16:16]
#define SHU1_CA_CMD7_R_DMTX_ARPI_CG_CMD_NEW                Fld(1, 17) //[17:17]
#define SHU1_CA_CMD7_R_DMTX_ARPI_CG_CLK_NEW                Fld(1, 18) //[18:18]
#define SHU1_CA_CMD7_R_DMTX_ARPI_CG_CS_NEW                 Fld(1, 19) //[19:19]
#define SHU1_CA_CMD7_R_LP4Y_SDN_MODE_CLK                   Fld(1, 20) //[20:20]
#define SHU1_CA_CMD7_R_DMRXRANK_CMD_EN                     Fld(1, 24) //[24:24]
#define SHU1_CA_CMD7_R_DMRXRANK_CMD_LAT                    Fld(3, 25) //[27:25]
#define SHU1_CA_CMD7_R_DMRXRANK_CLK_EN                     Fld(1, 28) //[28:28]
#define SHU1_CA_CMD7_R_DMRXRANK_CLK_LAT                    Fld(3, 29) //[31:29]

#define DDRPHY_SHU1_CA_CMD8                                (DDRPHY_AO_BASE_ADDR + 0x0D20)
#define SHU1_CA_CMD8_R_DMRXDVS_UPD_FORCE_CYC_CA            Fld(15, 0) //[14:0]
#define SHU1_CA_CMD8_R_DMRXDVS_UPD_FORCE_EN_CA             Fld(1, 15) //[15:15]
#define SHU1_CA_CMD8_R_DMRANK_RXDLY_PIPE_CG_IG_CA          Fld(1, 19) //[19:19]
#define SHU1_CA_CMD8_R_RMRODTEN_CG_IG_CA                   Fld(1, 20) //[20:20]
#define SHU1_CA_CMD8_R_RMRX_TOPHY_CG_IG_CA                 Fld(1, 21) //[21:21]
#define SHU1_CA_CMD8_R_DMRXDVS_RDSEL_PIPE_CG_IG_CA         Fld(1, 22) //[22:22]
#define SHU1_CA_CMD8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_CA     Fld(1, 23) //[23:23]
#define SHU1_CA_CMD8_R_DMRXDLY_CG_IG_CA                    Fld(1, 24) //[24:24]
#define SHU1_CA_CMD8_R_DMSTBEN_SYNC_CG_IG_CA               Fld(1, 25) //[25:25]
#define SHU1_CA_CMD8_R_DMDQSIEN_FLAG_SYNC_CG_IG_CA         Fld(1, 26) //[26:26]
#define SHU1_CA_CMD8_R_DMDQSIEN_FLAG_PIPE_CG_IG_CA         Fld(1, 27) //[27:27]
#define SHU1_CA_CMD8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_CA        Fld(1, 28) //[28:28]
#define SHU1_CA_CMD8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_CA    Fld(1, 29) //[29:29]
#define SHU1_CA_CMD8_R_DMRANK_PIPE_CG_IG_CA                Fld(1, 30) //[30:30]
#define SHU1_CA_CMD8_R_DMRANK_CHG_PIPE_CG_IG_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_CA_CMD9                                (DDRPHY_AO_BASE_ADDR + 0x0D24)
#define SHU1_CA_CMD9_RESERVED_0XD24                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_CA_CMD10                               (DDRPHY_AO_BASE_ADDR + 0x0D28)
#define SHU1_CA_CMD10_RESERVED_0XD28                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_CA_CMD11                               (DDRPHY_AO_BASE_ADDR + 0x0D2C)
#define SHU1_CA_CMD11_RG_RIMP_REV                          Fld(8, 0) //[7:0]
#define SHU1_CA_CMD11_RG_RIMP_VREF_SEL                     Fld(6, 8) //[13:8]
#define SHU1_CA_CMD11_RG_TX_ARCKE_DRVP                     Fld(5, 17) //[21:17]
#define SHU1_CA_CMD11_RG_TX_ARCKE_DRVN                     Fld(5, 22) //[26:22]

#define DDRPHY_SHU1_CA_CMD12                               (DDRPHY_AO_BASE_ADDR + 0x0D30)
#define SHU1_CA_CMD12_RESERVED_0XD30                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_CA_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x0D34)
#define SHU1_CA_DLL0_RG_ARPISM_MCK_SEL_CA_SHU              Fld(1, 0) //[0:0]
#define SHU1_CA_DLL0_CA_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU1_CA_DLL0_RG_ARDLL_FAST_PSJP_CA                 Fld(1, 4) //[4:4]
#define SHU1_CA_DLL0_RG_ARDLL_PHDIV_CA                     Fld(1, 9) //[9:9]
#define SHU1_CA_DLL0_RG_ARDLL_PHJUMP_EN_CA                 Fld(1, 10) //[10:10]
#define SHU1_CA_DLL0_RG_ARDLL_P_GAIN_CA                    Fld(4, 12) //[15:12]
#define SHU1_CA_DLL0_RG_ARDLL_IDLECNT_CA                   Fld(4, 16) //[19:16]
#define SHU1_CA_DLL0_RG_ARDLL_GAIN_CA                      Fld(4, 20) //[23:20]
#define SHU1_CA_DLL0_RG_ARDLL_PHDET_IN_SWAP_CA             Fld(1, 30) //[30:30]
#define SHU1_CA_DLL0_RG_ARDLL_PHDET_OUT_SEL_CA             Fld(1, 31) //[31:31]

#define DDRPHY_SHU1_CA_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x0D38)
#define SHU1_CA_DLL1_RG_ARDLL_FASTPJ_CK_SEL_CA             Fld(1, 0) //[0:0]
#define SHU1_CA_DLL1_RG_ARDLL_PS_EN_CA                     Fld(1, 1) //[1:1]
#define SHU1_CA_DLL1_RG_ARDLL_PD_CK_SEL_CA                 Fld(1, 2) //[2:2]
#define SHU1_CA_DLL1_RG_ARCMD_REV                          Fld(24, 8) //[31:8]

#define DDRPHY_SHU1_MISC0                                  (DDRPHY_AO_BASE_ADDR + 0x0DF0)
#define SHU1_MISC0_RG_RVREF_SEL_DQ                         Fld(6, 16) //[21:16]
#define SHU1_MISC0_RG_RVREF_DDR4_SEL                       Fld(1, 22) //[22:22]
#define SHU1_MISC0_RG_RVREF_DDR3_SEL                       Fld(1, 23) //[23:23]
#define SHU1_MISC0_RG_RVREF_SEL_CMD                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x0E00)
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU1_R0_B0_DQ0_RK0_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R0_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x0E04)
#define SHU1_R0_B0_DQ1_RK0_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU1_R0_B0_DQ1_RK0_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU1_R0_B0_DQ1_RK0_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU1_R0_B0_DQ1_RK0_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU1_R0_B0_DQ1_RK0_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R0_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x0E08)
#define SHU1_R0_B0_DQ2_RK0_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R0_B0_DQ2_RK0_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R0_B0_DQ2_RK0_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R0_B0_DQ2_RK0_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x0E0C)
#define SHU1_R0_B0_DQ3_RK0_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R0_B0_DQ3_RK0_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R0_B0_DQ3_RK0_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R0_B0_DQ3_RK0_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x0E10)
#define SHU1_R0_B0_DQ4_RK0_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R0_B0_DQ4_RK0_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R0_B0_DQ4_RK0_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R0_B0_DQ4_RK0_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x0E14)
#define SHU1_R0_B0_DQ5_RK0_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R0_B0_DQ5_RK0_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R0_B0_DQ5_RK0_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R0_B0_DQ5_RK0_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x0E18)
#define SHU1_R0_B0_DQ6_RK0_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU1_R0_B0_DQ6_RK0_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU1_R0_B0_DQ6_RK0_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU1_R0_B0_DQ6_RK0_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R0_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x0E1C)
#define SHU1_R0_B0_DQ7_RK0_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU1_R0_B0_DQ7_RK0_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU1_R0_B0_DQ7_RK0_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0XE20                                   (DDRPHY_AO_BASE_ADDR + 0x0E20)
#define RFU_0XE20_RESERVED_0XE20                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XE24                                   (DDRPHY_AO_BASE_ADDR + 0x0E24)
#define RFU_0XE24_RESERVED_0XE24                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XE28                                   (DDRPHY_AO_BASE_ADDR + 0x0E28)
#define RFU_0XE28_RESERVED_0XE28                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XE2C                                   (DDRPHY_AO_BASE_ADDR + 0x0E2C)
#define RFU_0XE2C_RESERVED_0XE2C                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R0_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x0E50)
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU1_R0_B1_DQ0_RK0_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R0_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x0E54)
#define SHU1_R0_B1_DQ1_RK0_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU1_R0_B1_DQ1_RK0_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU1_R0_B1_DQ1_RK0_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU1_R0_B1_DQ1_RK0_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU1_R0_B1_DQ1_RK0_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R0_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x0E58)
#define SHU1_R0_B1_DQ2_RK0_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R0_B1_DQ2_RK0_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R0_B1_DQ2_RK0_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R0_B1_DQ2_RK0_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x0E5C)
#define SHU1_R0_B1_DQ3_RK0_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R0_B1_DQ3_RK0_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R0_B1_DQ3_RK0_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R0_B1_DQ3_RK0_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x0E60)
#define SHU1_R0_B1_DQ4_RK0_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R0_B1_DQ4_RK0_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R0_B1_DQ4_RK0_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R0_B1_DQ4_RK0_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x0E64)
#define SHU1_R0_B1_DQ5_RK0_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R0_B1_DQ5_RK0_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R0_B1_DQ5_RK0_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R0_B1_DQ5_RK0_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x0E68)
#define SHU1_R0_B1_DQ6_RK0_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU1_R0_B1_DQ6_RK0_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU1_R0_B1_DQ6_RK0_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU1_R0_B1_DQ6_RK0_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R0_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x0E6C)
#define SHU1_R0_B1_DQ7_RK0_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU1_R0_B1_DQ7_RK0_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU1_R0_B1_DQ7_RK0_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0XE70                                   (DDRPHY_AO_BASE_ADDR + 0x0E70)
#define RFU_0XE70_RESERVED_0XE70                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XE74                                   (DDRPHY_AO_BASE_ADDR + 0x0E74)
#define RFU_0XE74_RESERVED_0XE74                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XE78                                   (DDRPHY_AO_BASE_ADDR + 0x0E78)
#define RFU_0XE78_RESERVED_0XE78                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XE7C                                   (DDRPHY_AO_BASE_ADDR + 0x0E7C)
#define RFU_0XE7C_RESERVED_0XE7C                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R0_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x0EA0)
#define SHU1_R0_CA_CMD0_RK0_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU1_R0_CA_CMD0_RK0_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R0_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x0EA4)
#define SHU1_R0_CA_CMD1_RK0_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU1_R0_CA_CMD1_RK0_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R0_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x0EA8)
#define SHU1_R0_CA_CMD2_RG_RK0_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD2_RG_RK0_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD2_RG_RK0_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R0_CA_CMD2_RG_RK0_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x0EAC)
#define SHU1_R0_CA_CMD3_RG_RK0_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD3_RG_RK0_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD3_RG_RK0_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R0_CA_CMD3_RG_RK0_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x0EB0)
#define SHU1_R0_CA_CMD4_RG_RK0_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD4_RG_RK0_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD4_RG_RK0_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R0_CA_CMD4_RG_RK0_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x0EB4)
#define SHU1_R0_CA_CMD5_RG_RK0_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD5_RG_RK0_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD5_RG_RK0_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU1_R0_CA_CMD5_RG_RK0_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x0EB8)
#define SHU1_R0_CA_CMD6_RG_RK0_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD6_RG_RK0_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD6_RG_RK0_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R0_CA_CMD6_RG_RK0_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x0EBC)
#define SHU1_R0_CA_CMD7_RG_RK0_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD7_RG_RK0_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD7_RG_RK0_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R0_CA_CMD7_RG_RK0_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R0_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x0EC0)
#define SHU1_R0_CA_CMD8_RG_RK0_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU1_R0_CA_CMD8_RG_RK0_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R0_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x0EC4)
#define SHU1_R0_CA_CMD9_RG_RK0_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU1_R0_CA_CMD9_RG_RK0_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU1_R0_CA_CMD9_RG_RK0_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0XEC8                                   (DDRPHY_AO_BASE_ADDR + 0x0EC8)
#define RFU_0XEC8_RESERVED_0XEC8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XECC                                   (DDRPHY_AO_BASE_ADDR + 0x0ECC)
#define RFU_0XECC_RESERVED_0XECC                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R1_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x0F00)
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU1_R1_B0_DQ0_RK1_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R1_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x0F04)
#define SHU1_R1_B0_DQ1_RK1_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU1_R1_B0_DQ1_RK1_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU1_R1_B0_DQ1_RK1_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU1_R1_B0_DQ1_RK1_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU1_R1_B0_DQ1_RK1_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R1_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x0F08)
#define SHU1_R1_B0_DQ2_RK1_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R1_B0_DQ2_RK1_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R1_B0_DQ2_RK1_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R1_B0_DQ2_RK1_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x0F0C)
#define SHU1_R1_B0_DQ3_RK1_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R1_B0_DQ3_RK1_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R1_B0_DQ3_RK1_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R1_B0_DQ3_RK1_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x0F10)
#define SHU1_R1_B0_DQ4_RK1_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R1_B0_DQ4_RK1_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R1_B0_DQ4_RK1_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R1_B0_DQ4_RK1_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x0F14)
#define SHU1_R1_B0_DQ5_RK1_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R1_B0_DQ5_RK1_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R1_B0_DQ5_RK1_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R1_B0_DQ5_RK1_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x0F18)
#define SHU1_R1_B0_DQ6_RK1_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU1_R1_B0_DQ6_RK1_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU1_R1_B0_DQ6_RK1_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU1_R1_B0_DQ6_RK1_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R1_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x0F1C)
#define SHU1_R1_B0_DQ7_RK1_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU1_R1_B0_DQ7_RK1_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU1_R1_B0_DQ7_RK1_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0XF20                                   (DDRPHY_AO_BASE_ADDR + 0x0F20)
#define RFU_0XF20_RESERVED_0XF20                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XF24                                   (DDRPHY_AO_BASE_ADDR + 0x0F24)
#define RFU_0XF24_RESERVED_0XF24                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XF28                                   (DDRPHY_AO_BASE_ADDR + 0x0F28)
#define RFU_0XF28_RESERVED_0XF28                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XF2C                                   (DDRPHY_AO_BASE_ADDR + 0x0F2C)
#define RFU_0XF2C_RESERVED_0XF2C                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R1_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x0F50)
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU1_R1_B1_DQ0_RK1_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R1_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x0F54)
#define SHU1_R1_B1_DQ1_RK1_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU1_R1_B1_DQ1_RK1_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU1_R1_B1_DQ1_RK1_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU1_R1_B1_DQ1_RK1_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU1_R1_B1_DQ1_RK1_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R1_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x0F58)
#define SHU1_R1_B1_DQ2_RK1_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R1_B1_DQ2_RK1_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R1_B1_DQ2_RK1_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R1_B1_DQ2_RK1_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x0F5C)
#define SHU1_R1_B1_DQ3_RK1_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R1_B1_DQ3_RK1_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R1_B1_DQ3_RK1_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R1_B1_DQ3_RK1_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x0F60)
#define SHU1_R1_B1_DQ4_RK1_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R1_B1_DQ4_RK1_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R1_B1_DQ4_RK1_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R1_B1_DQ4_RK1_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x0F64)
#define SHU1_R1_B1_DQ5_RK1_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R1_B1_DQ5_RK1_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R1_B1_DQ5_RK1_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R1_B1_DQ5_RK1_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x0F68)
#define SHU1_R1_B1_DQ6_RK1_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU1_R1_B1_DQ6_RK1_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU1_R1_B1_DQ6_RK1_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU1_R1_B1_DQ6_RK1_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R1_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x0F6C)
#define SHU1_R1_B1_DQ7_RK1_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU1_R1_B1_DQ7_RK1_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU1_R1_B1_DQ7_RK1_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0XF70                                   (DDRPHY_AO_BASE_ADDR + 0x0F70)
#define RFU_0XF70_RESERVED_0XF70                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XF74                                   (DDRPHY_AO_BASE_ADDR + 0x0F74)
#define RFU_0XF74_RESERVED_0XF74                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XF78                                   (DDRPHY_AO_BASE_ADDR + 0x0F78)
#define RFU_0XF78_RESERVED_0XF78                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XF7C                                   (DDRPHY_AO_BASE_ADDR + 0x0F7C)
#define RFU_0XF7C_RESERVED_0XF7C                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R1_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x0FA0)
#define SHU1_R1_CA_CMD0_RK1_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU1_R1_CA_CMD0_RK1_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R1_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x0FA4)
#define SHU1_R1_CA_CMD1_RK1_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU1_R1_CA_CMD1_RK1_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R1_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x0FA8)
#define SHU1_R1_CA_CMD2_RG_RK1_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD2_RG_RK1_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD2_RG_RK1_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R1_CA_CMD2_RG_RK1_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x0FAC)
#define SHU1_R1_CA_CMD3_RG_RK1_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD3_RG_RK1_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD3_RG_RK1_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R1_CA_CMD3_RG_RK1_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x0FB0)
#define SHU1_R1_CA_CMD4_RG_RK1_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD4_RG_RK1_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD4_RG_RK1_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R1_CA_CMD4_RG_RK1_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x0FB4)
#define SHU1_R1_CA_CMD5_RG_RK1_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD5_RG_RK1_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD5_RG_RK1_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU1_R1_CA_CMD5_RG_RK1_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x0FB8)
#define SHU1_R1_CA_CMD6_RG_RK1_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD6_RG_RK1_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD6_RG_RK1_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R1_CA_CMD6_RG_RK1_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x0FBC)
#define SHU1_R1_CA_CMD7_RG_RK1_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD7_RG_RK1_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD7_RG_RK1_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R1_CA_CMD7_RG_RK1_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R1_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x0FC0)
#define SHU1_R1_CA_CMD8_RG_RK1_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU1_R1_CA_CMD8_RG_RK1_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R1_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x0FC4)
#define SHU1_R1_CA_CMD9_RG_RK1_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU1_R1_CA_CMD9_RG_RK1_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU1_R1_CA_CMD9_RG_RK1_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0XFC8                                   (DDRPHY_AO_BASE_ADDR + 0x0FC8)
#define RFU_0XFC8_RESERVED_0XFC8                           Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0XFCC                                   (DDRPHY_AO_BASE_ADDR + 0x0FCC)
#define RFU_0XFCC_RESERVED_0XFCC                           Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R2_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1000)
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU1_R2_B0_DQ0_RK2_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R2_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1004)
#define SHU1_R2_B0_DQ1_RK2_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU1_R2_B0_DQ1_RK2_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU1_R2_B0_DQ1_RK2_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU1_R2_B0_DQ1_RK2_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU1_R2_B0_DQ1_RK2_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R2_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1008)
#define SHU1_R2_B0_DQ2_RK2_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R2_B0_DQ2_RK2_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R2_B0_DQ2_RK2_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R2_B0_DQ2_RK2_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x100C)
#define SHU1_R2_B0_DQ3_RK2_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R2_B0_DQ3_RK2_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R2_B0_DQ3_RK2_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R2_B0_DQ3_RK2_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1010)
#define SHU1_R2_B0_DQ4_RK2_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R2_B0_DQ4_RK2_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R2_B0_DQ4_RK2_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R2_B0_DQ4_RK2_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1014)
#define SHU1_R2_B0_DQ5_RK2_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU1_R2_B0_DQ5_RK2_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU1_R2_B0_DQ5_RK2_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU1_R2_B0_DQ5_RK2_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1018)
#define SHU1_R2_B0_DQ6_RK2_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU1_R2_B0_DQ6_RK2_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU1_R2_B0_DQ6_RK2_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU1_R2_B0_DQ6_RK2_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R2_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x101C)
#define SHU1_R2_B0_DQ7_RK2_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU1_R2_B0_DQ7_RK2_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU1_R2_B0_DQ7_RK2_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1020                                  (DDRPHY_AO_BASE_ADDR + 0x1020)
#define RFU_0X1020_RESERVED_0X1020                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1024                                  (DDRPHY_AO_BASE_ADDR + 0x1024)
#define RFU_0X1024_RESERVED_0X1024                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1028                                  (DDRPHY_AO_BASE_ADDR + 0x1028)
#define RFU_0X1028_RESERVED_0X1028                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X102C                                  (DDRPHY_AO_BASE_ADDR + 0x102C)
#define RFU_0X102C_RESERVED_0X102C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R2_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1050)
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU1_R2_B1_DQ0_RK2_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R2_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1054)
#define SHU1_R2_B1_DQ1_RK2_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU1_R2_B1_DQ1_RK2_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU1_R2_B1_DQ1_RK2_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R2_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1058)
#define SHU1_R2_B1_DQ2_RK2_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R2_B1_DQ2_RK2_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R2_B1_DQ2_RK2_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R2_B1_DQ2_RK2_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x105C)
#define SHU1_R2_B1_DQ3_RK2_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R2_B1_DQ3_RK2_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R2_B1_DQ3_RK2_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R2_B1_DQ3_RK2_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1060)
#define SHU1_R2_B1_DQ4_RK2_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R2_B1_DQ4_RK2_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R2_B1_DQ4_RK2_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R2_B1_DQ4_RK2_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1064)
#define SHU1_R2_B1_DQ5_RK2_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU1_R2_B1_DQ5_RK2_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU1_R2_B1_DQ5_RK2_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU1_R2_B1_DQ5_RK2_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1068)
#define SHU1_R2_B1_DQ6_RK2_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU1_R2_B1_DQ6_RK2_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU1_R2_B1_DQ6_RK2_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU1_R2_B1_DQ6_RK2_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R2_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x106C)
#define SHU1_R2_B1_DQ7_RK2_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU1_R2_B1_DQ7_RK2_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU1_R2_B1_DQ7_RK2_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1070                                  (DDRPHY_AO_BASE_ADDR + 0x1070)
#define RFU_0X1070_RESERVED_0X1070                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1074                                  (DDRPHY_AO_BASE_ADDR + 0x1074)
#define RFU_0X1074_RESERVED_0X1074                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1078                                  (DDRPHY_AO_BASE_ADDR + 0x1078)
#define RFU_0X1078_RESERVED_0X1078                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X107C                                  (DDRPHY_AO_BASE_ADDR + 0x107C)
#define RFU_0X107C_RESERVED_0X107C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU1_R2_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x10A0)
#define SHU1_R2_CA_CMD0_RK2_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU1_R2_CA_CMD0_RK2_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R2_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x10A4)
#define SHU1_R2_CA_CMD1_RK2_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU1_R2_CA_CMD1_RK2_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU1_R2_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x10A8)
#define SHU1_R2_CA_CMD2_RG_RK2_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD2_RG_RK2_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD2_RG_RK2_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R2_CA_CMD2_RG_RK2_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x10AC)
#define SHU1_R2_CA_CMD3_RG_RK2_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD3_RG_RK2_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD3_RG_RK2_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R2_CA_CMD3_RG_RK2_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x10B0)
#define SHU1_R2_CA_CMD4_RG_RK2_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD4_RG_RK2_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD4_RG_RK2_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R2_CA_CMD4_RG_RK2_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x10B4)
#define SHU1_R2_CA_CMD5_RG_RK2_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD5_RG_RK2_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD5_RG_RK2_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU1_R2_CA_CMD5_RG_RK2_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x10B8)
#define SHU1_R2_CA_CMD6_RG_RK2_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD6_RG_RK2_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD6_RG_RK2_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R2_CA_CMD6_RG_RK2_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x10BC)
#define SHU1_R2_CA_CMD7_RG_RK2_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD7_RG_RK2_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD7_RG_RK2_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU1_R2_CA_CMD7_RG_RK2_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU1_R2_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x10C0)
#define SHU1_R2_CA_CMD8_RG_RK2_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU1_R2_CA_CMD8_RG_RK2_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU1_R2_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x10C4)
#define SHU1_R2_CA_CMD9_RG_RK2_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU1_R2_CA_CMD9_RG_RK2_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU1_R2_CA_CMD9_RG_RK2_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X10C8                                  (DDRPHY_AO_BASE_ADDR + 0x10C8)
#define RFU_0X10C8_RESERVED_0X10C8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X10CC                                  (DDRPHY_AO_BASE_ADDR + 0x10CC)
#define RFU_0X10CC_RESERVED_0X10CC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_PLL0                                   (DDRPHY_AO_BASE_ADDR + 0x1280)
#define SHU2_PLL0_RG_RPHYPLL_TOP_REV                       Fld(16, 0) //[15:0]
#define SHU2_PLL0_RG_RPHYPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU2_PLL1                                   (DDRPHY_AO_BASE_ADDR + 0x1284)
#define SHU2_PLL1_RG_RPHYPLLGP_CK_SEL                      Fld(1, 0) //[0:0]
#define SHU2_PLL1_SHU2_PLL1_RFU                            Fld(3, 1) //[3:1]
#define SHU2_PLL1_R_SHU_AUTO_PLL_MUX                       Fld(1, 4) //[4:4]
#define SHU2_PLL1_RESERVED_0X1284                          Fld(27, 5) //[31:5]

#define DDRPHY_SHU2_PLL2                                   (DDRPHY_AO_BASE_ADDR + 0x1288)
#define SHU2_PLL2_RG_RCLRPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU2_PLL3                                   (DDRPHY_AO_BASE_ADDR + 0x128C)
#define SHU2_PLL3_RESERVED_0X128C                          Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_PLL4                                   (DDRPHY_AO_BASE_ADDR + 0x1290)
#define SHU2_PLL4_RG_RPHYPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU2_PLL4_RG_RPHYPLL_FS                            Fld(2, 18) //[19:18]
#define SHU2_PLL4_RG_RPHYPLL_BW                            Fld(3, 20) //[22:20]
#define SHU2_PLL4_RG_RPHYPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU2_PLL4_RG_RPHYPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU2_PLL4_RG_RPHYPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU2_PLL4_RG_RPHYPLL_BR                            Fld(1, 30) //[30:30]
#define SHU2_PLL4_RG_RPHYPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_PLL5                                   (DDRPHY_AO_BASE_ADDR + 0x1294)
#define SHU2_PLL5_RG_RPHYPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU2_PLL5_RG_RPHYPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU2_PLL5_RG_RPHYPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU2_PLL6                                   (DDRPHY_AO_BASE_ADDR + 0x1298)
#define SHU2_PLL6_RG_RCLRPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU2_PLL6_RG_RCLRPLL_FS                            Fld(2, 18) //[19:18]
#define SHU2_PLL6_RG_RCLRPLL_BW                            Fld(3, 20) //[22:20]
#define SHU2_PLL6_RG_RCLRPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU2_PLL6_RG_RCLRPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU2_PLL6_RG_RCLRPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU2_PLL6_RG_RCLRPLL_BR                            Fld(1, 30) //[30:30]
#define SHU2_PLL6_RG_RCLRPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_PLL7                                   (DDRPHY_AO_BASE_ADDR + 0x129C)
#define SHU2_PLL7_RG_RCLRPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU2_PLL7_RG_RCLRPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU2_PLL7_RG_RCLRPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU2_PLL8                                   (DDRPHY_AO_BASE_ADDR + 0x12A0)
#define SHU2_PLL8_RG_RPHYPLL_POSDIV                        Fld(3, 0) //[2:0]
#define SHU2_PLL8_RG_RPHYPLL_PREDIV                        Fld(2, 18) //[19:18]

#define DDRPHY_SHU2_PLL9                                   (DDRPHY_AO_BASE_ADDR + 0x12A4)
#define SHU2_PLL9_RG_RPHYPLL_RST_DLY                       Fld(2, 8) //[9:8]
#define SHU2_PLL9_RG_RPHYPLL_LVROD_EN                      Fld(1, 12) //[12:12]
#define SHU2_PLL9_RG_RPHYPLL_MONREF_EN                     Fld(1, 13) //[13:13]
#define SHU2_PLL9_RG_RPHYPLL_MONVC_EN                      Fld(2, 14) //[15:14]
#define SHU2_PLL9_RG_RPHYPLL_MONCK_EN                      Fld(1, 16) //[16:16]

#define DDRPHY_SHU2_PLL10                                  (DDRPHY_AO_BASE_ADDR + 0x12A8)
#define SHU2_PLL10_RG_RCLRPLL_POSDIV                       Fld(3, 0) //[2:0]
#define SHU2_PLL10_RG_RCLRPLL_PREDIV                       Fld(2, 18) //[19:18]

#define DDRPHY_SHU2_PLL11                                  (DDRPHY_AO_BASE_ADDR + 0x12AC)
#define SHU2_PLL11_RG_RCLRPLL_RST_DLY                      Fld(2, 8) //[9:8]
#define SHU2_PLL11_RG_RCLRPLL_LVROD_EN                     Fld(1, 12) //[12:12]
#define SHU2_PLL11_RG_RCLRPLL_MONREF_EN                    Fld(1, 13) //[13:13]
#define SHU2_PLL11_RG_RCLRPLL_MONVC_EN                     Fld(2, 14) //[15:14]
#define SHU2_PLL11_RG_RCLRPLL_MONCK_EN                     Fld(1, 16) //[16:16]

#define DDRPHY_SHU2_PLL12                                  (DDRPHY_AO_BASE_ADDR + 0x12B0)
#define SHU2_PLL12_RG_RCLRPLL_EXT_PODIV                    Fld(6, 0) //[5:0]
#define SHU2_PLL12_RG_RCLRPLL_BYPASS                       Fld(1, 6) //[6:6]
#define SHU2_PLL12_RG_RCLRPLL_EXTPODIV_EN                  Fld(1, 7) //[7:7]
#define SHU2_PLL12_RG_RCLRPLL_EXT_FBDIV                    Fld(6, 8) //[13:8]
#define SHU2_PLL12_RG_RCLRPLL_EXTFBDIV_EN                  Fld(1, 15) //[15:15]
#define SHU2_PLL12_RG_RPHYPLL_EXT_FBDIV                    Fld(6, 16) //[21:16]
#define SHU2_PLL12_RG_RPHYPLL_EXTFBDIV_EN                  Fld(1, 22) //[22:22]

#define DDRPHY_SHU2_PLL13                                  (DDRPHY_AO_BASE_ADDR + 0x12B4)
#define SHU2_PLL13_RG_RCLRPLL_FB_DL                        Fld(6, 0) //[5:0]
#define SHU2_PLL13_RG_RCLRPLL_REF_DL                       Fld(6, 8) //[13:8]
#define SHU2_PLL13_RG_RPHYPLL_FB_DL                        Fld(6, 16) //[21:16]
#define SHU2_PLL13_RG_RPHYPLL_REF_DL                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_PLL14                                  (DDRPHY_AO_BASE_ADDR + 0x12B8)
#define SHU2_PLL14_RG_RPHYPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU2_PLL14_RG_RPHYPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU2_PLL14_RG_RPHYPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU2_PLL15                                  (DDRPHY_AO_BASE_ADDR + 0x12BC)
#define SHU2_PLL15_RG_RPHYPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU2_PLL15_RG_RPHYPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU2_PLL20                                  (DDRPHY_AO_BASE_ADDR + 0x12D0)
#define SHU2_PLL20_RG_RCLRPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU2_PLL20_RG_RCLRPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU2_PLL20_RG_RCLRPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU2_PLL21                                  (DDRPHY_AO_BASE_ADDR + 0x12D4)
#define SHU2_PLL21_RG_RCLRPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU2_PLL21_RG_RCLRPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU2_B0_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x1100)
#define SHU2_B0_DQ0_RG_TX_ARDQS0_PRE_EN_B0                 Fld(1, 4) //[4:4]
#define SHU2_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0               Fld(3, 8) //[10:8]
#define SHU2_B0_DQ0_RG_TX_ARDQS0_DRVN_PRE_B0               Fld(3, 12) //[14:12]
#define SHU2_B0_DQ0_RG_TX_ARDQ_PRE_EN_B0                   Fld(1, 20) //[20:20]
#define SHU2_B0_DQ0_RG_TX_ARDQ_DRVP_PRE_B0                 Fld(3, 24) //[26:24]
#define SHU2_B0_DQ0_RG_TX_ARDQ_DRVN_PRE_B0                 Fld(3, 28) //[30:28]
#define SHU2_B0_DQ0_R_LP4Y_WDN_MODE_DQS0                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B0_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x1104)
#define SHU2_B0_DQ1_RG_TX_ARDQ_DRVP_B0                     Fld(5, 0) //[4:0]
#define SHU2_B0_DQ1_RG_TX_ARDQ_DRVN_B0                     Fld(5, 8) //[12:8]
#define SHU2_B0_DQ1_RG_TX_ARDQ_ODTP_B0                     Fld(5, 16) //[20:16]
#define SHU2_B0_DQ1_RG_TX_ARDQ_ODTN_B0                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU2_B0_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x1108)
#define SHU2_B0_DQ2_RG_TX_ARDQS0_DRVP_B0                   Fld(5, 0) //[4:0]
#define SHU2_B0_DQ2_RG_TX_ARDQS0_DRVN_B0                   Fld(5, 8) //[12:8]
#define SHU2_B0_DQ2_RG_TX_ARDQS0_ODTP_B0                   Fld(5, 16) //[20:16]
#define SHU2_B0_DQ2_RG_TX_ARDQS0_ODTN_B0                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU2_B0_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x110C)
#define SHU2_B0_DQ3_RG_TX_ARDQS0_PU_B0                     Fld(2, 0) //[1:0]
#define SHU2_B0_DQ3_RG_TX_ARDQS0_PU_PRE_B0                 Fld(2, 2) //[3:2]
#define SHU2_B0_DQ3_RG_TX_ARDQS0_PDB_B0                    Fld(2, 4) //[5:4]
#define SHU2_B0_DQ3_RG_TX_ARDQS0_PDB_PRE_B0                Fld(2, 6) //[7:6]
#define SHU2_B0_DQ3_RG_TX_ARDQ_PU_B0                       Fld(2, 8) //[9:8]
#define SHU2_B0_DQ3_RG_TX_ARDQ_PU_PRE_B0                   Fld(2, 10) //[11:10]
#define SHU2_B0_DQ3_RG_TX_ARDQ_PDB_B0                      Fld(2, 12) //[13:12]
#define SHU2_B0_DQ3_RG_TX_ARDQ_PDB_PRE_B0                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU2_B0_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x1110)
#define SHU2_B0_DQ4_RG_ARPI_AA_MCK_DL_B0                   Fld(6, 0) //[5:0]
#define SHU2_B0_DQ4_RG_ARPI_AA_MCK_FB_DL_B0                Fld(6, 8) //[13:8]
#define SHU2_B0_DQ4_RG_ARPI_DA_MCK_FB_DL_B0                Fld(6, 16) //[21:16]

#define DDRPHY_SHU2_B0_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x1114)
#define SHU2_B0_DQ5_RG_RX_ARDQ_VREF_SEL_B0                 Fld(6, 0) //[5:0]
#define SHU2_B0_DQ5_RG_RX_ARDQ_VREF_BYPASS_B0              Fld(1, 6) //[6:6]
#define SHU2_B0_DQ5_RG_ARPI_FB_B0                          Fld(6, 8) //[13:8]
#define SHU2_B0_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B0             Fld(3, 16) //[18:16]
#define SHU2_B0_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B0           Fld(1, 19) //[19:19]
#define SHU2_B0_DQ5_RG_RX_ARDQS0_DVS_DLY_B0                Fld(3, 20) //[22:20]
#define SHU2_B0_DQ5_RG_ARPI_MCTL_B0                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_B0_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x1118)
#define SHU2_B0_DQ6_RG_ARPI_OFFSET_DQSIEN_B0               Fld(6, 0) //[5:0]
#define SHU2_B0_DQ6_RG_ARPI_MIDPI_CAP_SEL_B0               Fld(2, 22) //[23:22]
#define SHU2_B0_DQ6_RG_ARPI_MIDPI_VTH_SEL_B0               Fld(2, 24) //[25:24]
#define SHU2_B0_DQ6_RG_ARPI_MIDPI_EN_B0                    Fld(1, 26) //[26:26]
#define SHU2_B0_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B0             Fld(1, 27) //[27:27]
#define SHU2_B0_DQ6_RG_ARPI_CAP_SEL_B0                     Fld(2, 28) //[29:28]
#define SHU2_B0_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B0_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x111C)
#define SHU2_B0_DQ7_R_DMRANKRXDVS_B0                       Fld(4, 0) //[3:0]
#define SHU2_B0_DQ7_MIDPI_ENABLE                           Fld(1, 4) //[4:4]
#define SHU2_B0_DQ7_MIDPI_DIV4_ENABLE                      Fld(1, 5) //[5:5]
#define SHU2_B0_DQ7_R_DMDQMDBI_EYE_SHU_B0                  Fld(1, 6) //[6:6]
#define SHU2_B0_DQ7_R_DMDQMDBI_SHU_B0                      Fld(1, 7) //[7:7]
#define SHU2_B0_DQ7_R_DMRXDVS_DQM_FLAGSEL_B0               Fld(4, 8) //[11:8]
#define SHU2_B0_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B0            Fld(1, 12) //[12:12]
#define SHU2_B0_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B0              Fld(1, 13) //[13:13]
#define SHU2_B0_DQ7_R_DMRXTRACK_DQM_EN_B0                  Fld(1, 14) //[14:14]
#define SHU2_B0_DQ7_R_DMRODTEN_B0                          Fld(1, 15) //[15:15]
#define SHU2_B0_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B0           Fld(1, 16) //[16:16]
#define SHU2_B0_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B0               Fld(1, 17) //[17:17]
#define SHU2_B0_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B0              Fld(1, 18) //[18:18]
#define SHU2_B0_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B0              Fld(1, 19) //[19:19]
#define SHU2_B0_DQ7_R_LP4Y_SDN_MODE_DQS0                   Fld(1, 20) //[20:20]
#define SHU2_B0_DQ7_R_DMRXRANK_DQ_EN_B0                    Fld(1, 24) //[24:24]
#define SHU2_B0_DQ7_R_DMRXRANK_DQ_LAT_B0                   Fld(3, 25) //[27:25]
#define SHU2_B0_DQ7_R_DMRXRANK_DQS_EN_B0                   Fld(1, 28) //[28:28]
#define SHU2_B0_DQ7_R_DMRXRANK_DQS_LAT_B0                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU2_B0_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x1120)
#define SHU2_B0_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B0             Fld(15, 0) //[14:0]
#define SHU2_B0_DQ8_R_DMRXDVS_UPD_FORCE_EN_B0              Fld(1, 15) //[15:15]
#define SHU2_B0_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B0           Fld(1, 19) //[19:19]
#define SHU2_B0_DQ8_R_RMRODTEN_CG_IG_B0                    Fld(1, 20) //[20:20]
#define SHU2_B0_DQ8_R_RMRX_TOPHY_CG_IG_B0                  Fld(1, 21) //[21:21]
#define SHU2_B0_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B0          Fld(1, 22) //[22:22]
#define SHU2_B0_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B0      Fld(1, 23) //[23:23]
#define SHU2_B0_DQ8_R_DMRXDLY_CG_IG_B0                     Fld(1, 24) //[24:24]
#define SHU2_B0_DQ8_R_DMSTBEN_SYNC_CG_IG_B0                Fld(1, 25) //[25:25]
#define SHU2_B0_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B0          Fld(1, 26) //[26:26]
#define SHU2_B0_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B0          Fld(1, 27) //[27:27]
#define SHU2_B0_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B0         Fld(1, 28) //[28:28]
#define SHU2_B0_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B0     Fld(1, 29) //[29:29]
#define SHU2_B0_DQ8_R_DMRANK_PIPE_CG_IG_B0                 Fld(1, 30) //[30:30]
#define SHU2_B0_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B0_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x1124)
#define SHU2_B0_DQ9_RG_ARPI_RESERVE_B0                     Fld(22, 0) //[21:0]

#define DDRPHY_SHU2_B0_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x1128)
#define SHU2_B0_DQ10_RESERVED_0X1128                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B0_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x112C)
#define SHU2_B0_DQ11_RESERVED_0X112C                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B0_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x1130)
#define SHU2_B0_DQ12_RESERVED_0X1130                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B0_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1134)
#define SHU2_B0_DLL0_RG_ARPISM_MCK_SEL_B0_SHU              Fld(1, 0) //[0:0]
#define SHU2_B0_DLL0_B0_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU2_B0_DLL0_RG_ARDLL_FAST_PSJP_B0                 Fld(1, 4) //[4:4]
#define SHU2_B0_DLL0_RG_ARDLL_PHDIV_B0                     Fld(1, 9) //[9:9]
#define SHU2_B0_DLL0_RG_ARDLL_PHJUMP_EN_B0                 Fld(1, 10) //[10:10]
#define SHU2_B0_DLL0_RG_ARDLL_P_GAIN_B0                    Fld(4, 12) //[15:12]
#define SHU2_B0_DLL0_RG_ARDLL_IDLECNT_B0                   Fld(4, 16) //[19:16]
#define SHU2_B0_DLL0_RG_ARDLL_GAIN_B0                      Fld(4, 20) //[23:20]
#define SHU2_B0_DLL0_RG_ARDLL_PHDET_IN_SWAP_B0             Fld(1, 30) //[30:30]
#define SHU2_B0_DLL0_RG_ARDLL_PHDET_OUT_SEL_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B0_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1138)
#define SHU2_B0_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B0             Fld(1, 0) //[0:0]
#define SHU2_B0_DLL1_RG_ARDLL_PS_EN_B0                     Fld(1, 1) //[1:1]
#define SHU2_B0_DLL1_RG_ARDLL_PD_CK_SEL_B0                 Fld(1, 2) //[2:2]
#define SHU2_B0_DLL1_RG_ARDQ_REV_B0                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU2_B1_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x1180)
#define SHU2_B1_DQ0_RG_TX_ARDQS0_PRE_EN_B1                 Fld(1, 4) //[4:4]
#define SHU2_B1_DQ0_RG_TX_ARDQS0_DRVP_PRE_B1               Fld(3, 8) //[10:8]
#define SHU2_B1_DQ0_RG_TX_ARDQS0_DRVN_PRE_B1               Fld(3, 12) //[14:12]
#define SHU2_B1_DQ0_RG_TX_ARDQ_PRE_EN_B1                   Fld(1, 20) //[20:20]
#define SHU2_B1_DQ0_RG_TX_ARDQ_DRVP_PRE_B1                 Fld(3, 24) //[26:24]
#define SHU2_B1_DQ0_RG_TX_ARDQ_DRVN_PRE_B1                 Fld(3, 28) //[30:28]
#define SHU2_B1_DQ0_R_LP4Y_WDN_MODE_DQS1                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B1_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x1184)
#define SHU2_B1_DQ1_RG_TX_ARDQ_DRVP_B1                     Fld(5, 0) //[4:0]
#define SHU2_B1_DQ1_RG_TX_ARDQ_DRVN_B1                     Fld(5, 8) //[12:8]
#define SHU2_B1_DQ1_RG_TX_ARDQ_ODTP_B1                     Fld(5, 16) //[20:16]
#define SHU2_B1_DQ1_RG_TX_ARDQ_ODTN_B1                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU2_B1_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x1188)
#define SHU2_B1_DQ2_RG_TX_ARDQS0_DRVP_B1                   Fld(5, 0) //[4:0]
#define SHU2_B1_DQ2_RG_TX_ARDQS0_DRVN_B1                   Fld(5, 8) //[12:8]
#define SHU2_B1_DQ2_RG_TX_ARDQS0_ODTP_B1                   Fld(5, 16) //[20:16]
#define SHU2_B1_DQ2_RG_TX_ARDQS0_ODTN_B1                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU2_B1_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x118C)
#define SHU2_B1_DQ3_RG_TX_ARDQS0_PU_B1                     Fld(2, 0) //[1:0]
#define SHU2_B1_DQ3_RG_TX_ARDQS0_PU_PRE_B1                 Fld(2, 2) //[3:2]
#define SHU2_B1_DQ3_RG_TX_ARDQS0_PDB_B1                    Fld(2, 4) //[5:4]
#define SHU2_B1_DQ3_RG_TX_ARDQS0_PDB_PRE_B1                Fld(2, 6) //[7:6]
#define SHU2_B1_DQ3_RG_TX_ARDQ_PU_B1                       Fld(2, 8) //[9:8]
#define SHU2_B1_DQ3_RG_TX_ARDQ_PU_PRE_B1                   Fld(2, 10) //[11:10]
#define SHU2_B1_DQ3_RG_TX_ARDQ_PDB_B1                      Fld(2, 12) //[13:12]
#define SHU2_B1_DQ3_RG_TX_ARDQ_PDB_PRE_B1                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU2_B1_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x1190)
#define SHU2_B1_DQ4_RG_ARPI_AA_MCK_DL_B1                   Fld(6, 0) //[5:0]
#define SHU2_B1_DQ4_RG_ARPI_AA_MCK_FB_DL_B1                Fld(6, 8) //[13:8]
#define SHU2_B1_DQ4_RG_ARPI_DA_MCK_FB_DL_B1                Fld(6, 16) //[21:16]

#define DDRPHY_SHU2_B1_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x1194)
#define SHU2_B1_DQ5_RG_RX_ARDQ_VREF_SEL_B1                 Fld(6, 0) //[5:0]
#define SHU2_B1_DQ5_RG_RX_ARDQ_VREF_BYPASS_B1              Fld(1, 6) //[6:6]
#define SHU2_B1_DQ5_RG_ARPI_FB_B1                          Fld(6, 8) //[13:8]
#define SHU2_B1_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B1             Fld(3, 16) //[18:16]
#define SHU2_B1_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B1           Fld(1, 19) //[19:19]
#define SHU2_B1_DQ5_RG_RX_ARDQS0_DVS_DLY_B1                Fld(3, 20) //[22:20]
#define SHU2_B1_DQ5_RG_ARPI_MCTL_B1                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_B1_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x1198)
#define SHU2_B1_DQ6_RG_ARPI_OFFSET_DQSIEN_B1               Fld(6, 0) //[5:0]
#define SHU2_B1_DQ6_RG_ARPI_RESERVE_B1                     Fld(16, 6) //[21:6]
#define SHU2_B1_DQ6_RG_ARPI_MIDPI_CAP_SEL_B1               Fld(2, 22) //[23:22]
#define SHU2_B1_DQ6_RG_ARPI_MIDPI_VTH_SEL_B1               Fld(2, 24) //[25:24]
#define SHU2_B1_DQ6_RG_ARPI_MIDPI_EN_B1                    Fld(1, 26) //[26:26]
#define SHU2_B1_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B1             Fld(1, 27) //[27:27]
#define SHU2_B1_DQ6_RG_ARPI_CAP_SEL_B1                     Fld(2, 28) //[29:28]
#define SHU2_B1_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B1_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x119C)
#define SHU2_B1_DQ7_R_DMRANKRXDVS_B1                       Fld(4, 0) //[3:0]
#define SHU2_B1_DQ7_R_DMDQMDBI_EYE_SHU_B1                  Fld(1, 6) //[6:6]
#define SHU2_B1_DQ7_R_DMDQMDBI_SHU_B1                      Fld(1, 7) //[7:7]
#define SHU2_B1_DQ7_R_DMRXDVS_DQM_FLAGSEL_B1               Fld(4, 8) //[11:8]
#define SHU2_B1_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B1            Fld(1, 12) //[12:12]
#define SHU2_B1_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B1              Fld(1, 13) //[13:13]
#define SHU2_B1_DQ7_R_DMRXTRACK_DQM_EN_B1                  Fld(1, 14) //[14:14]
#define SHU2_B1_DQ7_R_DMRODTEN_B1                          Fld(1, 15) //[15:15]
#define SHU2_B1_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B1           Fld(1, 16) //[16:16]
#define SHU2_B1_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B1               Fld(1, 17) //[17:17]
#define SHU2_B1_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B1              Fld(1, 18) //[18:18]
#define SHU2_B1_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B1              Fld(1, 19) //[19:19]
#define SHU2_B1_DQ7_R_LP4Y_SDN_MODE_DQS1                   Fld(1, 20) //[20:20]
#define SHU2_B1_DQ7_R_DMRXRANK_DQ_EN_B1                    Fld(1, 24) //[24:24]
#define SHU2_B1_DQ7_R_DMRXRANK_DQ_LAT_B1                   Fld(3, 25) //[27:25]
#define SHU2_B1_DQ7_R_DMRXRANK_DQS_EN_B1                   Fld(1, 28) //[28:28]
#define SHU2_B1_DQ7_R_DMRXRANK_DQS_LAT_B1                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU2_B1_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x11A0)
#define SHU2_B1_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B1             Fld(15, 0) //[14:0]
#define SHU2_B1_DQ8_R_DMRXDVS_UPD_FORCE_EN_B1              Fld(1, 15) //[15:15]
#define SHU2_B1_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B1           Fld(1, 19) //[19:19]
#define SHU2_B1_DQ8_R_RMRODTEN_CG_IG_B1                    Fld(1, 20) //[20:20]
#define SHU2_B1_DQ8_R_RMRX_TOPHY_CG_IG_B1                  Fld(1, 21) //[21:21]
#define SHU2_B1_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B1          Fld(1, 22) //[22:22]
#define SHU2_B1_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B1      Fld(1, 23) //[23:23]
#define SHU2_B1_DQ8_R_DMRXDLY_CG_IG_B1                     Fld(1, 24) //[24:24]
#define SHU2_B1_DQ8_R_DMSTBEN_SYNC_CG_IG_B1                Fld(1, 25) //[25:25]
#define SHU2_B1_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B1          Fld(1, 26) //[26:26]
#define SHU2_B1_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B1          Fld(1, 27) //[27:27]
#define SHU2_B1_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B1         Fld(1, 28) //[28:28]
#define SHU2_B1_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B1     Fld(1, 29) //[29:29]
#define SHU2_B1_DQ8_R_DMRANK_PIPE_CG_IG_B1                 Fld(1, 30) //[30:30]
#define SHU2_B1_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B1_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x11A4)
#define SHU2_B1_DQ9_RESERVED_0X11A4                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B1_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x11A8)
#define SHU2_B1_DQ10_RESERVED_0X11A8                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B1_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x11AC)
#define SHU2_B1_DQ11_RESERVED_0X11AC                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B1_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x11B0)
#define SHU2_B1_DQ12_RESERVED_0X11B0                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_B1_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x11B4)
#define SHU2_B1_DLL0_RG_ARPISM_MCK_SEL_B1_SHU              Fld(1, 0) //[0:0]
#define SHU2_B1_DLL0_B1_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU2_B1_DLL0_RG_ARDLL_FAST_PSJP_B1                 Fld(1, 4) //[4:4]
#define SHU2_B1_DLL0_RG_ARDLL_PHDIV_B1                     Fld(1, 9) //[9:9]
#define SHU2_B1_DLL0_RG_ARDLL_PHJUMP_EN_B1                 Fld(1, 10) //[10:10]
#define SHU2_B1_DLL0_RG_ARDLL_P_GAIN_B1                    Fld(4, 12) //[15:12]
#define SHU2_B1_DLL0_RG_ARDLL_IDLECNT_B1                   Fld(4, 16) //[19:16]
#define SHU2_B1_DLL0_RG_ARDLL_GAIN_B1                      Fld(4, 20) //[23:20]
#define SHU2_B1_DLL0_RG_ARDLL_PHDET_IN_SWAP_B1             Fld(1, 30) //[30:30]
#define SHU2_B1_DLL0_RG_ARDLL_PHDET_OUT_SEL_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_B1_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x11B8)
#define SHU2_B1_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B1             Fld(1, 0) //[0:0]
#define SHU2_B1_DLL1_RG_ARDLL_PS_EN_B1                     Fld(1, 1) //[1:1]
#define SHU2_B1_DLL1_RG_ARDLL_PD_CK_SEL_B1                 Fld(1, 2) //[2:2]
#define SHU2_B1_DLL1_RG_ARDQ_REV_B1                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU2_CA_CMD0                                (DDRPHY_AO_BASE_ADDR + 0x1200)
#define SHU2_CA_CMD0_RG_TX_ARCLK_PRE_EN                    Fld(1, 4) //[4:4]
#define SHU2_CA_CMD0_RG_TX_ARCLK_DRVP_PRE                  Fld(3, 8) //[10:8]
#define SHU2_CA_CMD0_RG_TX_ARCLK_DRVN_PRE                  Fld(3, 12) //[14:12]
#define SHU2_CA_CMD0_RG_CGEN_FMEM_CK_CG_DLL                Fld(1, 17) //[17:17]
#define SHU2_CA_CMD0_RG_FB_CK_MUX                          Fld(2, 18) //[19:18]
#define SHU2_CA_CMD0_RG_TX_ARCMD_PRE_EN                    Fld(1, 20) //[20:20]
#define SHU2_CA_CMD0_RG_TX_ARCMD_DRVP_PRE                  Fld(3, 24) //[26:24]
#define SHU2_CA_CMD0_RG_TX_ARCMD_DRVN_PRE                  Fld(3, 28) //[30:28]
#define SHU2_CA_CMD0_R_LP4Y_WDN_MODE_CLK                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_CA_CMD1                                (DDRPHY_AO_BASE_ADDR + 0x1204)
#define SHU2_CA_CMD1_RG_TX_ARCMD_DRVP                      Fld(5, 0) //[4:0]
#define SHU2_CA_CMD1_RG_TX_ARCMD_DRVN                      Fld(5, 8) //[12:8]
#define SHU2_CA_CMD1_RG_TX_ARCMD_ODTP                      Fld(5, 16) //[20:16]
#define SHU2_CA_CMD1_RG_TX_ARCMD_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU2_CA_CMD2                                (DDRPHY_AO_BASE_ADDR + 0x1208)
#define SHU2_CA_CMD2_RG_TX_ARCLK_DRVP                      Fld(5, 0) //[4:0]
#define SHU2_CA_CMD2_RG_TX_ARCLK_DRVN                      Fld(5, 8) //[12:8]
#define SHU2_CA_CMD2_RG_TX_ARCLK_ODTP                      Fld(5, 16) //[20:16]
#define SHU2_CA_CMD2_RG_TX_ARCLK_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU2_CA_CMD3                                (DDRPHY_AO_BASE_ADDR + 0x120C)
#define SHU2_CA_CMD3_RG_TX_ARCLK_PU                        Fld(2, 0) //[1:0]
#define SHU2_CA_CMD3_RG_TX_ARCLK_PU_PRE                    Fld(2, 2) //[3:2]
#define SHU2_CA_CMD3_RG_TX_ARCLK_PDB                       Fld(2, 4) //[5:4]
#define SHU2_CA_CMD3_RG_TX_ARCLK_PDB_PRE                   Fld(2, 6) //[7:6]
#define SHU2_CA_CMD3_RG_TX_ARCMD_PU                        Fld(2, 8) //[9:8]
#define SHU2_CA_CMD3_RG_TX_ARCMD_PU_PRE                    Fld(2, 10) //[11:10]
#define SHU2_CA_CMD3_RG_TX_ARCMD_PDB                       Fld(2, 12) //[13:12]
#define SHU2_CA_CMD3_RG_TX_ARCMD_PDB_PRE                   Fld(2, 14) //[15:14]

#define DDRPHY_SHU2_CA_CMD4                                (DDRPHY_AO_BASE_ADDR + 0x1210)
#define SHU2_CA_CMD4_RG_ARPI_AA_MCK_DL_CA                  Fld(6, 0) //[5:0]
#define SHU2_CA_CMD4_RG_ARPI_AA_MCK_FB_DL_CA               Fld(6, 8) //[13:8]
#define SHU2_CA_CMD4_RG_ARPI_DA_MCK_FB_DL_CA               Fld(6, 16) //[21:16]

#define DDRPHY_SHU2_CA_CMD5                                (DDRPHY_AO_BASE_ADDR + 0x1214)
#define SHU2_CA_CMD5_RG_RX_ARCMD_VREF_SEL                  Fld(6, 0) //[5:0]
#define SHU2_CA_CMD5_RG_RX_ARCMD_VREF_BYPASS               Fld(1, 6) //[6:6]
#define SHU2_CA_CMD5_RG_ARPI_FB_CA                         Fld(6, 8) //[13:8]
#define SHU2_CA_CMD5_RG_RX_ARCLK_DQSIEN_DLY                Fld(3, 16) //[18:16]
#define SHU2_CA_CMD5_DA_RX_ARCLK_DQSIEN_RB_DLY             Fld(1, 19) //[19:19]
#define SHU2_CA_CMD5_RG_RX_ARCLK_DVS_DLY                   Fld(3, 20) //[22:20]
#define SHU2_CA_CMD5_RG_ARPI_MCTL_CA                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_CA_CMD6                                (DDRPHY_AO_BASE_ADDR + 0x1218)
#define SHU2_CA_CMD6_RG_ARPI_OFFSET_CLKIEN                 Fld(6, 0) //[5:0]
#define SHU2_CA_CMD6_RG_ARPI_RESERVE_CA                    Fld(16, 6) //[21:6]
#define SHU2_CA_CMD6_RG_ARPI_MIDPI_CAP_SEL_CA              Fld(2, 22) //[23:22]
#define SHU2_CA_CMD6_RG_ARPI_MIDPI_VTH_SEL_CA              Fld(2, 24) //[25:24]
#define SHU2_CA_CMD6_RG_ARPI_MIDPI_EN_CA                   Fld(1, 26) //[26:26]
#define SHU2_CA_CMD6_RG_ARPI_MIDPI_CKDIV4_EN_CA            Fld(1, 27) //[27:27]
#define SHU2_CA_CMD6_RG_ARPI_CAP_SEL_CA                    Fld(2, 28) //[29:28]
#define SHU2_CA_CMD6_RG_ARPI_MIDPI_BYPASS_EN_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_CA_CMD7                                (DDRPHY_AO_BASE_ADDR + 0x121C)
#define SHU2_CA_CMD7_R_DMRANKRXDVS_CA                      Fld(4, 0) //[3:0]
#define SHU2_CA_CMD7_R_DMRXDVS_PBYTE_FLAG_OPT_CA           Fld(1, 12) //[12:12]
#define SHU2_CA_CMD7_R_DMRODTEN_CA                         Fld(1, 15) //[15:15]
#define SHU2_CA_CMD7_R_DMARPI_CG_FB2DLL_DCM_EN_CA          Fld(1, 16) //[16:16]
#define SHU2_CA_CMD7_R_DMTX_ARPI_CG_CMD_NEW                Fld(1, 17) //[17:17]
#define SHU2_CA_CMD7_R_DMTX_ARPI_CG_CLK_NEW                Fld(1, 18) //[18:18]
#define SHU2_CA_CMD7_R_DMTX_ARPI_CG_CS_NEW                 Fld(1, 19) //[19:19]
#define SHU2_CA_CMD7_R_LP4Y_SDN_MODE_CLK                   Fld(1, 20) //[20:20]
#define SHU2_CA_CMD7_R_DMRXRANK_CMD_EN                     Fld(1, 24) //[24:24]
#define SHU2_CA_CMD7_R_DMRXRANK_CMD_LAT                    Fld(3, 25) //[27:25]
#define SHU2_CA_CMD7_R_DMRXRANK_CLK_EN                     Fld(1, 28) //[28:28]
#define SHU2_CA_CMD7_R_DMRXRANK_CLK_LAT                    Fld(3, 29) //[31:29]

#define DDRPHY_SHU2_CA_CMD8                                (DDRPHY_AO_BASE_ADDR + 0x1220)
#define SHU2_CA_CMD8_R_DMRXDVS_UPD_FORCE_CYC_CA            Fld(15, 0) //[14:0]
#define SHU2_CA_CMD8_R_DMRXDVS_UPD_FORCE_EN_CA             Fld(1, 15) //[15:15]
#define SHU2_CA_CMD8_R_DMRANK_RXDLY_PIPE_CG_IG_CA          Fld(1, 19) //[19:19]
#define SHU2_CA_CMD8_R_RMRODTEN_CG_IG_CA                   Fld(1, 20) //[20:20]
#define SHU2_CA_CMD8_R_RMRX_TOPHY_CG_IG_CA                 Fld(1, 21) //[21:21]
#define SHU2_CA_CMD8_R_DMRXDVS_RDSEL_PIPE_CG_IG_CA         Fld(1, 22) //[22:22]
#define SHU2_CA_CMD8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_CA     Fld(1, 23) //[23:23]
#define SHU2_CA_CMD8_R_DMRXDLY_CG_IG_CA                    Fld(1, 24) //[24:24]
#define SHU2_CA_CMD8_R_DMSTBEN_SYNC_CG_IG_CA               Fld(1, 25) //[25:25]
#define SHU2_CA_CMD8_R_DMDQSIEN_FLAG_SYNC_CG_IG_CA         Fld(1, 26) //[26:26]
#define SHU2_CA_CMD8_R_DMDQSIEN_FLAG_PIPE_CG_IG_CA         Fld(1, 27) //[27:27]
#define SHU2_CA_CMD8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_CA        Fld(1, 28) //[28:28]
#define SHU2_CA_CMD8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_CA    Fld(1, 29) //[29:29]
#define SHU2_CA_CMD8_R_DMRANK_PIPE_CG_IG_CA                Fld(1, 30) //[30:30]
#define SHU2_CA_CMD8_R_DMRANK_CHG_PIPE_CG_IG_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_CA_CMD9                                (DDRPHY_AO_BASE_ADDR + 0x1224)
#define SHU2_CA_CMD9_RESERVED_0X1224                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_CA_CMD10                               (DDRPHY_AO_BASE_ADDR + 0x1228)
#define SHU2_CA_CMD10_RESERVED_0X1228                      Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_CA_CMD11                               (DDRPHY_AO_BASE_ADDR + 0x122C)
#define SHU2_CA_CMD11_RG_RIMP_REV                          Fld(8, 0) //[7:0]
#define SHU2_CA_CMD11_RG_RIMP_VREF_SEL                     Fld(6, 8) //[13:8]
#define SHU2_CA_CMD11_RG_TX_ARCKE_DRVP                     Fld(5, 17) //[21:17]
#define SHU2_CA_CMD11_RG_TX_ARCKE_DRVN                     Fld(5, 22) //[26:22]

#define DDRPHY_SHU2_CA_CMD12                               (DDRPHY_AO_BASE_ADDR + 0x1230)
#define SHU2_CA_CMD12_RESERVED_0X1230                      Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_CA_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1234)
#define SHU2_CA_DLL0_RG_ARPISM_MCK_SEL_CA_SHU              Fld(1, 0) //[0:0]
#define SHU2_CA_DLL0_CA_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU2_CA_DLL0_RG_ARDLL_FAST_PSJP_CA                 Fld(1, 4) //[4:4]
#define SHU2_CA_DLL0_RG_ARDLL_PHDIV_CA                     Fld(1, 9) //[9:9]
#define SHU2_CA_DLL0_RG_ARDLL_PHJUMP_EN_CA                 Fld(1, 10) //[10:10]
#define SHU2_CA_DLL0_RG_ARDLL_P_GAIN_CA                    Fld(4, 12) //[15:12]
#define SHU2_CA_DLL0_RG_ARDLL_IDLECNT_CA                   Fld(4, 16) //[19:16]
#define SHU2_CA_DLL0_RG_ARDLL_GAIN_CA                      Fld(4, 20) //[23:20]
#define SHU2_CA_DLL0_RG_ARDLL_PHDET_IN_SWAP_CA             Fld(1, 30) //[30:30]
#define SHU2_CA_DLL0_RG_ARDLL_PHDET_OUT_SEL_CA             Fld(1, 31) //[31:31]

#define DDRPHY_SHU2_CA_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1238)
#define SHU2_CA_DLL1_RG_ARDLL_FASTPJ_CK_SEL_CA             Fld(1, 0) //[0:0]
#define SHU2_CA_DLL1_RG_ARDLL_PS_EN_CA                     Fld(1, 1) //[1:1]
#define SHU2_CA_DLL1_RG_ARDLL_PD_CK_SEL_CA                 Fld(1, 2) //[2:2]
#define SHU2_CA_DLL1_RG_ARCMD_REV                          Fld(24, 8) //[31:8]

#define DDRPHY_SHU2_MISC0                                  (DDRPHY_AO_BASE_ADDR + 0x12F0)
#define SHU2_MISC0_RG_RVREF_SEL_DQ                         Fld(6, 16) //[21:16]
#define SHU2_MISC0_RG_RVREF_DDR4_SEL                       Fld(1, 22) //[22:22]
#define SHU2_MISC0_RG_RVREF_DDR3_SEL                       Fld(1, 23) //[23:23]
#define SHU2_MISC0_RG_RVREF_SEL_CMD                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1300)
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU2_R0_B0_DQ0_RK0_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R0_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1304)
#define SHU2_R0_B0_DQ1_RK0_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU2_R0_B0_DQ1_RK0_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU2_R0_B0_DQ1_RK0_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU2_R0_B0_DQ1_RK0_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU2_R0_B0_DQ1_RK0_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R0_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1308)
#define SHU2_R0_B0_DQ2_RK0_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R0_B0_DQ2_RK0_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R0_B0_DQ2_RK0_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R0_B0_DQ2_RK0_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x130C)
#define SHU2_R0_B0_DQ3_RK0_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R0_B0_DQ3_RK0_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R0_B0_DQ3_RK0_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R0_B0_DQ3_RK0_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1310)
#define SHU2_R0_B0_DQ4_RK0_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R0_B0_DQ4_RK0_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R0_B0_DQ4_RK0_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R0_B0_DQ4_RK0_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1314)
#define SHU2_R0_B0_DQ5_RK0_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R0_B0_DQ5_RK0_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R0_B0_DQ5_RK0_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R0_B0_DQ5_RK0_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1318)
#define SHU2_R0_B0_DQ6_RK0_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU2_R0_B0_DQ6_RK0_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU2_R0_B0_DQ6_RK0_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU2_R0_B0_DQ6_RK0_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R0_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x131C)
#define SHU2_R0_B0_DQ7_RK0_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU2_R0_B0_DQ7_RK0_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU2_R0_B0_DQ7_RK0_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1320                                  (DDRPHY_AO_BASE_ADDR + 0x1320)
#define RFU_0X1320_RESERVED_0X1320                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1324                                  (DDRPHY_AO_BASE_ADDR + 0x1324)
#define RFU_0X1324_RESERVED_0X1324                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1328                                  (DDRPHY_AO_BASE_ADDR + 0x1328)
#define RFU_0X1328_RESERVED_0X1328                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X132C                                  (DDRPHY_AO_BASE_ADDR + 0x132C)
#define RFU_0X132C_RESERVED_0X132C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R0_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1350)
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU2_R0_B1_DQ0_RK0_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R0_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1354)
#define SHU2_R0_B1_DQ1_RK0_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU2_R0_B1_DQ1_RK0_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU2_R0_B1_DQ1_RK0_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU2_R0_B1_DQ1_RK0_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU2_R0_B1_DQ1_RK0_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R0_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1358)
#define SHU2_R0_B1_DQ2_RK0_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R0_B1_DQ2_RK0_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R0_B1_DQ2_RK0_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R0_B1_DQ2_RK0_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x135C)
#define SHU2_R0_B1_DQ3_RK0_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R0_B1_DQ3_RK0_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R0_B1_DQ3_RK0_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R0_B1_DQ3_RK0_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1360)
#define SHU2_R0_B1_DQ4_RK0_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R0_B1_DQ4_RK0_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R0_B1_DQ4_RK0_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R0_B1_DQ4_RK0_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1364)
#define SHU2_R0_B1_DQ5_RK0_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R0_B1_DQ5_RK0_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R0_B1_DQ5_RK0_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R0_B1_DQ5_RK0_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1368)
#define SHU2_R0_B1_DQ6_RK0_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU2_R0_B1_DQ6_RK0_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU2_R0_B1_DQ6_RK0_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU2_R0_B1_DQ6_RK0_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R0_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x136C)
#define SHU2_R0_B1_DQ7_RK0_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU2_R0_B1_DQ7_RK0_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU2_R0_B1_DQ7_RK0_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1370                                  (DDRPHY_AO_BASE_ADDR + 0x1370)
#define RFU_0X1370_RESERVED_0X1370                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1374                                  (DDRPHY_AO_BASE_ADDR + 0x1374)
#define RFU_0X1374_RESERVED_0X1374                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1378                                  (DDRPHY_AO_BASE_ADDR + 0x1378)
#define RFU_0X1378_RESERVED_0X1378                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X137C                                  (DDRPHY_AO_BASE_ADDR + 0x137C)
#define RFU_0X137C_RESERVED_0X137C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R0_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x13A0)
#define SHU2_R0_CA_CMD0_RK0_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU2_R0_CA_CMD0_RK0_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R0_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x13A4)
#define SHU2_R0_CA_CMD1_RK0_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU2_R0_CA_CMD1_RK0_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R0_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x13A8)
#define SHU2_R0_CA_CMD2_RG_RK0_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD2_RG_RK0_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD2_RG_RK0_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R0_CA_CMD2_RG_RK0_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x13AC)
#define SHU2_R0_CA_CMD3_RG_RK0_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD3_RG_RK0_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD3_RG_RK0_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R0_CA_CMD3_RG_RK0_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x13B0)
#define SHU2_R0_CA_CMD4_RG_RK0_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD4_RG_RK0_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD4_RG_RK0_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R0_CA_CMD4_RG_RK0_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x13B4)
#define SHU2_R0_CA_CMD5_RG_RK0_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD5_RG_RK0_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD5_RG_RK0_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU2_R0_CA_CMD5_RG_RK0_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x13B8)
#define SHU2_R0_CA_CMD6_RG_RK0_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD6_RG_RK0_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD6_RG_RK0_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R0_CA_CMD6_RG_RK0_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x13BC)
#define SHU2_R0_CA_CMD7_RG_RK0_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD7_RG_RK0_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD7_RG_RK0_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R0_CA_CMD7_RG_RK0_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R0_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x13C0)
#define SHU2_R0_CA_CMD8_RG_RK0_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU2_R0_CA_CMD8_RG_RK0_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R0_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x13C4)
#define SHU2_R0_CA_CMD9_RG_RK0_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU2_R0_CA_CMD9_RG_RK0_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU2_R0_CA_CMD9_RG_RK0_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X13C8                                  (DDRPHY_AO_BASE_ADDR + 0x13C8)
#define RFU_0X13C8_RESERVED_0X13C8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X13CC                                  (DDRPHY_AO_BASE_ADDR + 0x13CC)
#define RFU_0X13CC_RESERVED_0X13CC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R1_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1400)
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU2_R1_B0_DQ0_RK1_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R1_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1404)
#define SHU2_R1_B0_DQ1_RK1_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU2_R1_B0_DQ1_RK1_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU2_R1_B0_DQ1_RK1_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU2_R1_B0_DQ1_RK1_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU2_R1_B0_DQ1_RK1_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R1_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1408)
#define SHU2_R1_B0_DQ2_RK1_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R1_B0_DQ2_RK1_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R1_B0_DQ2_RK1_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R1_B0_DQ2_RK1_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x140C)
#define SHU2_R1_B0_DQ3_RK1_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R1_B0_DQ3_RK1_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R1_B0_DQ3_RK1_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R1_B0_DQ3_RK1_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1410)
#define SHU2_R1_B0_DQ4_RK1_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R1_B0_DQ4_RK1_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R1_B0_DQ4_RK1_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R1_B0_DQ4_RK1_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1414)
#define SHU2_R1_B0_DQ5_RK1_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R1_B0_DQ5_RK1_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R1_B0_DQ5_RK1_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R1_B0_DQ5_RK1_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1418)
#define SHU2_R1_B0_DQ6_RK1_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU2_R1_B0_DQ6_RK1_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU2_R1_B0_DQ6_RK1_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU2_R1_B0_DQ6_RK1_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R1_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x141C)
#define SHU2_R1_B0_DQ7_RK1_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU2_R1_B0_DQ7_RK1_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU2_R1_B0_DQ7_RK1_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1420                                  (DDRPHY_AO_BASE_ADDR + 0x1420)
#define RFU_0X1420_RESERVED_0X1420                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1424                                  (DDRPHY_AO_BASE_ADDR + 0x1424)
#define RFU_0X1424_RESERVED_0X1424                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1428                                  (DDRPHY_AO_BASE_ADDR + 0x1428)
#define RFU_0X1428_RESERVED_0X1428                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X142C                                  (DDRPHY_AO_BASE_ADDR + 0x142C)
#define RFU_0X142C_RESERVED_0X142C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R1_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1450)
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU2_R1_B1_DQ0_RK1_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R1_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1454)
#define SHU2_R1_B1_DQ1_RK1_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU2_R1_B1_DQ1_RK1_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU2_R1_B1_DQ1_RK1_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU2_R1_B1_DQ1_RK1_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU2_R1_B1_DQ1_RK1_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R1_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1458)
#define SHU2_R1_B1_DQ2_RK1_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R1_B1_DQ2_RK1_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R1_B1_DQ2_RK1_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R1_B1_DQ2_RK1_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x145C)
#define SHU2_R1_B1_DQ3_RK1_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R1_B1_DQ3_RK1_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R1_B1_DQ3_RK1_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R1_B1_DQ3_RK1_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1460)
#define SHU2_R1_B1_DQ4_RK1_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R1_B1_DQ4_RK1_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R1_B1_DQ4_RK1_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R1_B1_DQ4_RK1_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1464)
#define SHU2_R1_B1_DQ5_RK1_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R1_B1_DQ5_RK1_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R1_B1_DQ5_RK1_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R1_B1_DQ5_RK1_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1468)
#define SHU2_R1_B1_DQ6_RK1_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU2_R1_B1_DQ6_RK1_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU2_R1_B1_DQ6_RK1_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU2_R1_B1_DQ6_RK1_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R1_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x146C)
#define SHU2_R1_B1_DQ7_RK1_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU2_R1_B1_DQ7_RK1_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU2_R1_B1_DQ7_RK1_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1470                                  (DDRPHY_AO_BASE_ADDR + 0x1470)
#define RFU_0X1470_RESERVED_0X1470                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1474                                  (DDRPHY_AO_BASE_ADDR + 0x1474)
#define RFU_0X1474_RESERVED_0X1474                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1478                                  (DDRPHY_AO_BASE_ADDR + 0x1478)
#define RFU_0X1478_RESERVED_0X1478                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X147C                                  (DDRPHY_AO_BASE_ADDR + 0x147C)
#define RFU_0X147C_RESERVED_0X147C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R1_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x14A0)
#define SHU2_R1_CA_CMD0_RK1_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU2_R1_CA_CMD0_RK1_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R1_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x14A4)
#define SHU2_R1_CA_CMD1_RK1_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU2_R1_CA_CMD1_RK1_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R1_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x14A8)
#define SHU2_R1_CA_CMD2_RG_RK1_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD2_RG_RK1_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD2_RG_RK1_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R1_CA_CMD2_RG_RK1_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x14AC)
#define SHU2_R1_CA_CMD3_RG_RK1_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD3_RG_RK1_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD3_RG_RK1_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R1_CA_CMD3_RG_RK1_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x14B0)
#define SHU2_R1_CA_CMD4_RG_RK1_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD4_RG_RK1_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD4_RG_RK1_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R1_CA_CMD4_RG_RK1_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x14B4)
#define SHU2_R1_CA_CMD5_RG_RK1_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD5_RG_RK1_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD5_RG_RK1_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU2_R1_CA_CMD5_RG_RK1_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x14B8)
#define SHU2_R1_CA_CMD6_RG_RK1_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD6_RG_RK1_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD6_RG_RK1_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R1_CA_CMD6_RG_RK1_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x14BC)
#define SHU2_R1_CA_CMD7_RG_RK1_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD7_RG_RK1_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD7_RG_RK1_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R1_CA_CMD7_RG_RK1_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R1_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x14C0)
#define SHU2_R1_CA_CMD8_RG_RK1_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU2_R1_CA_CMD8_RG_RK1_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R1_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x14C4)
#define SHU2_R1_CA_CMD9_RG_RK1_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU2_R1_CA_CMD9_RG_RK1_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU2_R1_CA_CMD9_RG_RK1_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X14C8                                  (DDRPHY_AO_BASE_ADDR + 0x14C8)
#define RFU_0X14C8_RESERVED_0X14C8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X14CC                                  (DDRPHY_AO_BASE_ADDR + 0x14CC)
#define RFU_0X14CC_RESERVED_0X14CC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R2_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1500)
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU2_R2_B0_DQ0_RK2_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R2_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1504)
#define SHU2_R2_B0_DQ1_RK2_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU2_R2_B0_DQ1_RK2_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU2_R2_B0_DQ1_RK2_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU2_R2_B0_DQ1_RK2_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU2_R2_B0_DQ1_RK2_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R2_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1508)
#define SHU2_R2_B0_DQ2_RK2_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R2_B0_DQ2_RK2_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R2_B0_DQ2_RK2_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R2_B0_DQ2_RK2_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x150C)
#define SHU2_R2_B0_DQ3_RK2_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R2_B0_DQ3_RK2_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R2_B0_DQ3_RK2_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R2_B0_DQ3_RK2_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1510)
#define SHU2_R2_B0_DQ4_RK2_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R2_B0_DQ4_RK2_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R2_B0_DQ4_RK2_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R2_B0_DQ4_RK2_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1514)
#define SHU2_R2_B0_DQ5_RK2_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU2_R2_B0_DQ5_RK2_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU2_R2_B0_DQ5_RK2_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU2_R2_B0_DQ5_RK2_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1518)
#define SHU2_R2_B0_DQ6_RK2_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU2_R2_B0_DQ6_RK2_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU2_R2_B0_DQ6_RK2_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU2_R2_B0_DQ6_RK2_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R2_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x151C)
#define SHU2_R2_B0_DQ7_RK2_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU2_R2_B0_DQ7_RK2_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU2_R2_B0_DQ7_RK2_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1520                                  (DDRPHY_AO_BASE_ADDR + 0x1520)
#define RFU_0X1520_RESERVED_0X1520                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1524                                  (DDRPHY_AO_BASE_ADDR + 0x1524)
#define RFU_0X1524_RESERVED_0X1524                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1528                                  (DDRPHY_AO_BASE_ADDR + 0x1528)
#define RFU_0X1528_RESERVED_0X1528                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X152C                                  (DDRPHY_AO_BASE_ADDR + 0x152C)
#define RFU_0X152C_RESERVED_0X152C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R2_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1550)
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU2_R2_B1_DQ0_RK2_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R2_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1554)
#define SHU2_R2_B1_DQ1_RK2_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU2_R2_B1_DQ1_RK2_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU2_R2_B1_DQ1_RK2_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU2_R2_B1_DQ1_RK2_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU2_R2_B1_DQ1_RK2_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R2_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1558)
#define SHU2_R2_B1_DQ2_RK2_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R2_B1_DQ2_RK2_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R2_B1_DQ2_RK2_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R2_B1_DQ2_RK2_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x155C)
#define SHU2_R2_B1_DQ3_RK2_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R2_B1_DQ3_RK2_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R2_B1_DQ3_RK2_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R2_B1_DQ3_RK2_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1560)
#define SHU2_R2_B1_DQ4_RK2_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R2_B1_DQ4_RK2_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R2_B1_DQ4_RK2_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R2_B1_DQ4_RK2_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1564)
#define SHU2_R2_B1_DQ5_RK2_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU2_R2_B1_DQ5_RK2_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU2_R2_B1_DQ5_RK2_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU2_R2_B1_DQ5_RK2_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1568)
#define SHU2_R2_B1_DQ6_RK2_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU2_R2_B1_DQ6_RK2_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU2_R2_B1_DQ6_RK2_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU2_R2_B1_DQ6_RK2_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R2_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x156C)
#define SHU2_R2_B1_DQ7_RK2_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU2_R2_B1_DQ7_RK2_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU2_R2_B1_DQ7_RK2_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1570                                  (DDRPHY_AO_BASE_ADDR + 0x1570)
#define RFU_0X1570_RESERVED_0X1570                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1574                                  (DDRPHY_AO_BASE_ADDR + 0x1574)
#define RFU_0X1574_RESERVED_0X1574                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1578                                  (DDRPHY_AO_BASE_ADDR + 0x1578)
#define RFU_0X1578_RESERVED_0X1578                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X157C                                  (DDRPHY_AO_BASE_ADDR + 0x157C)
#define RFU_0X157C_RESERVED_0X157C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU2_R2_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x15A0)
#define SHU2_R2_CA_CMD0_RK2_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU2_R2_CA_CMD0_RK2_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R2_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x15A4)
#define SHU2_R2_CA_CMD1_RK2_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU2_R2_CA_CMD1_RK2_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU2_R2_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x15A8)
#define SHU2_R2_CA_CMD2_RG_RK2_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD2_RG_RK2_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD2_RG_RK2_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R2_CA_CMD2_RG_RK2_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x15AC)
#define SHU2_R2_CA_CMD3_RG_RK2_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD3_RG_RK2_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD3_RG_RK2_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R2_CA_CMD3_RG_RK2_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x15B0)
#define SHU2_R2_CA_CMD4_RG_RK2_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD4_RG_RK2_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD4_RG_RK2_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R2_CA_CMD4_RG_RK2_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x15B4)
#define SHU2_R2_CA_CMD5_RG_RK2_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD5_RG_RK2_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD5_RG_RK2_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU2_R2_CA_CMD5_RG_RK2_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x15B8)
#define SHU2_R2_CA_CMD6_RG_RK2_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD6_RG_RK2_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD6_RG_RK2_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R2_CA_CMD6_RG_RK2_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x15BC)
#define SHU2_R2_CA_CMD7_RG_RK2_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD7_RG_RK2_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD7_RG_RK2_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU2_R2_CA_CMD7_RG_RK2_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU2_R2_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x15C0)
#define SHU2_R2_CA_CMD8_RG_RK2_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU2_R2_CA_CMD8_RG_RK2_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU2_R2_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x15C4)
#define SHU2_R2_CA_CMD9_RG_RK2_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU2_R2_CA_CMD9_RG_RK2_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU2_R2_CA_CMD9_RG_RK2_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X15C8                                  (DDRPHY_AO_BASE_ADDR + 0x15C8)
#define RFU_0X15C8_RESERVED_0X15C8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X15CC                                  (DDRPHY_AO_BASE_ADDR + 0x15CC)
#define RFU_0X15CC_RESERVED_0X15CC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_PLL0                                   (DDRPHY_AO_BASE_ADDR + 0x1780)
#define SHU3_PLL0_RG_RPHYPLL_TOP_REV                       Fld(16, 0) //[15:0]
#define SHU3_PLL0_RG_RPHYPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU3_PLL1                                   (DDRPHY_AO_BASE_ADDR + 0x1784)
#define SHU3_PLL1_RG_RPHYPLLGP_CK_SEL                      Fld(1, 0) //[0:0]
#define SHU3_PLL1_SHU3_PLL1_RFU                            Fld(3, 1) //[3:1]
#define SHU3_PLL1_R_SHU_AUTO_PLL_MUX                       Fld(1, 4) //[4:4]
#define SHU3_PLL1_RESERVED_0X1784                          Fld(27, 5) //[31:5]

#define DDRPHY_SHU3_PLL2                                   (DDRPHY_AO_BASE_ADDR + 0x1788)
#define SHU3_PLL2_RG_RCLRPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU3_PLL3                                   (DDRPHY_AO_BASE_ADDR + 0x178C)
#define SHU3_PLL3_RESERVED_0X178C                          Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_PLL4                                   (DDRPHY_AO_BASE_ADDR + 0x1790)
#define SHU3_PLL4_RG_RPHYPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU3_PLL4_RG_RPHYPLL_FS                            Fld(2, 18) //[19:18]
#define SHU3_PLL4_RG_RPHYPLL_BW                            Fld(3, 20) //[22:20]
#define SHU3_PLL4_RG_RPHYPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU3_PLL4_RG_RPHYPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU3_PLL4_RG_RPHYPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU3_PLL4_RG_RPHYPLL_BR                            Fld(1, 30) //[30:30]
#define SHU3_PLL4_RG_RPHYPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_PLL5                                   (DDRPHY_AO_BASE_ADDR + 0x1794)
#define SHU3_PLL5_RG_RPHYPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU3_PLL5_RG_RPHYPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU3_PLL5_RG_RPHYPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU3_PLL6                                   (DDRPHY_AO_BASE_ADDR + 0x1798)
#define SHU3_PLL6_RG_RCLRPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU3_PLL6_RG_RCLRPLL_FS                            Fld(2, 18) //[19:18]
#define SHU3_PLL6_RG_RCLRPLL_BW                            Fld(3, 20) //[22:20]
#define SHU3_PLL6_RG_RCLRPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU3_PLL6_RG_RCLRPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU3_PLL6_RG_RCLRPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU3_PLL6_RG_RCLRPLL_BR                            Fld(1, 30) //[30:30]
#define SHU3_PLL6_RG_RCLRPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_PLL7                                   (DDRPHY_AO_BASE_ADDR + 0x179C)
#define SHU3_PLL7_RG_RCLRPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU3_PLL7_RG_RCLRPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU3_PLL7_RG_RCLRPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU3_PLL8                                   (DDRPHY_AO_BASE_ADDR + 0x17A0)
#define SHU3_PLL8_RG_RPHYPLL_POSDIV                        Fld(3, 0) //[2:0]
#define SHU3_PLL8_RG_RPHYPLL_PREDIV                        Fld(2, 18) //[19:18]

#define DDRPHY_SHU3_PLL9                                   (DDRPHY_AO_BASE_ADDR + 0x17A4)
#define SHU3_PLL9_RG_RPHYPLL_RST_DLY                       Fld(2, 8) //[9:8]
#define SHU3_PLL9_RG_RPHYPLL_LVROD_EN                      Fld(1, 12) //[12:12]
#define SHU3_PLL9_RG_RPHYPLL_MONREF_EN                     Fld(1, 13) //[13:13]
#define SHU3_PLL9_RG_RPHYPLL_MONVC_EN                      Fld(2, 14) //[15:14]
#define SHU3_PLL9_RG_RPHYPLL_MONCK_EN                      Fld(1, 16) //[16:16]

#define DDRPHY_SHU3_PLL10                                  (DDRPHY_AO_BASE_ADDR + 0x17A8)
#define SHU3_PLL10_RG_RCLRPLL_POSDIV                       Fld(3, 0) //[2:0]
#define SHU3_PLL10_RG_RCLRPLL_PREDIV                       Fld(2, 18) //[19:18]

#define DDRPHY_SHU3_PLL11                                  (DDRPHY_AO_BASE_ADDR + 0x17AC)
#define SHU3_PLL11_RG_RCLRPLL_RST_DLY                      Fld(2, 8) //[9:8]
#define SHU3_PLL11_RG_RCLRPLL_LVROD_EN                     Fld(1, 12) //[12:12]
#define SHU3_PLL11_RG_RCLRPLL_MONREF_EN                    Fld(1, 13) //[13:13]
#define SHU3_PLL11_RG_RCLRPLL_MONVC_EN                     Fld(2, 14) //[15:14]
#define SHU3_PLL11_RG_RCLRPLL_MONCK_EN                     Fld(1, 16) //[16:16]

#define DDRPHY_SHU3_PLL12                                  (DDRPHY_AO_BASE_ADDR + 0x17B0)
#define SHU3_PLL12_RG_RCLRPLL_EXT_PODIV                    Fld(6, 0) //[5:0]
#define SHU3_PLL12_RG_RCLRPLL_BYPASS                       Fld(1, 6) //[6:6]
#define SHU3_PLL12_RG_RCLRPLL_EXTPODIV_EN                  Fld(1, 7) //[7:7]
#define SHU3_PLL12_RG_RCLRPLL_EXT_FBDIV                    Fld(6, 8) //[13:8]
#define SHU3_PLL12_RG_RCLRPLL_EXTFBDIV_EN                  Fld(1, 15) //[15:15]
#define SHU3_PLL12_RG_RPHYPLL_EXT_FBDIV                    Fld(6, 16) //[21:16]
#define SHU3_PLL12_RG_RPHYPLL_EXTFBDIV_EN                  Fld(1, 22) //[22:22]

#define DDRPHY_SHU3_PLL13                                  (DDRPHY_AO_BASE_ADDR + 0x17B4)
#define SHU3_PLL13_RG_RCLRPLL_FB_DL                        Fld(6, 0) //[5:0]
#define SHU3_PLL13_RG_RCLRPLL_REF_DL                       Fld(6, 8) //[13:8]
#define SHU3_PLL13_RG_RPHYPLL_FB_DL                        Fld(6, 16) //[21:16]
#define SHU3_PLL13_RG_RPHYPLL_REF_DL                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_PLL14                                  (DDRPHY_AO_BASE_ADDR + 0x17B8)
#define SHU3_PLL14_RG_RPHYPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU3_PLL14_RG_RPHYPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU3_PLL14_RG_RPHYPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU3_PLL15                                  (DDRPHY_AO_BASE_ADDR + 0x17BC)
#define SHU3_PLL15_RG_RPHYPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU3_PLL15_RG_RPHYPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU3_PLL20                                  (DDRPHY_AO_BASE_ADDR + 0x17D0)
#define SHU3_PLL20_RG_RCLRPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU3_PLL20_RG_RCLRPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU3_PLL20_RG_RCLRPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU3_PLL21                                  (DDRPHY_AO_BASE_ADDR + 0x17D4)
#define SHU3_PLL21_RG_RCLRPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU3_PLL21_RG_RCLRPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU3_B0_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x1600)
#define SHU3_B0_DQ0_RG_TX_ARDQS0_PRE_EN_B0                 Fld(1, 4) //[4:4]
#define SHU3_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0               Fld(3, 8) //[10:8]
#define SHU3_B0_DQ0_RG_TX_ARDQS0_DRVN_PRE_B0               Fld(3, 12) //[14:12]
#define SHU3_B0_DQ0_RG_TX_ARDQ_PRE_EN_B0                   Fld(1, 20) //[20:20]
#define SHU3_B0_DQ0_RG_TX_ARDQ_DRVP_PRE_B0                 Fld(3, 24) //[26:24]
#define SHU3_B0_DQ0_RG_TX_ARDQ_DRVN_PRE_B0                 Fld(3, 28) //[30:28]
#define SHU3_B0_DQ0_R_LP4Y_WDN_MODE_DQS0                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B0_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x1604)
#define SHU3_B0_DQ1_RG_TX_ARDQ_DRVP_B0                     Fld(5, 0) //[4:0]
#define SHU3_B0_DQ1_RG_TX_ARDQ_DRVN_B0                     Fld(5, 8) //[12:8]
#define SHU3_B0_DQ1_RG_TX_ARDQ_ODTP_B0                     Fld(5, 16) //[20:16]
#define SHU3_B0_DQ1_RG_TX_ARDQ_ODTN_B0                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU3_B0_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x1608)
#define SHU3_B0_DQ2_RG_TX_ARDQS0_DRVP_B0                   Fld(5, 0) //[4:0]
#define SHU3_B0_DQ2_RG_TX_ARDQS0_DRVN_B0                   Fld(5, 8) //[12:8]
#define SHU3_B0_DQ2_RG_TX_ARDQS0_ODTP_B0                   Fld(5, 16) //[20:16]
#define SHU3_B0_DQ2_RG_TX_ARDQS0_ODTN_B0                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU3_B0_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x160C)
#define SHU3_B0_DQ3_RG_TX_ARDQS0_PU_B0                     Fld(2, 0) //[1:0]
#define SHU3_B0_DQ3_RG_TX_ARDQS0_PU_PRE_B0                 Fld(2, 2) //[3:2]
#define SHU3_B0_DQ3_RG_TX_ARDQS0_PDB_B0                    Fld(2, 4) //[5:4]
#define SHU3_B0_DQ3_RG_TX_ARDQS0_PDB_PRE_B0                Fld(2, 6) //[7:6]
#define SHU3_B0_DQ3_RG_TX_ARDQ_PU_B0                       Fld(2, 8) //[9:8]
#define SHU3_B0_DQ3_RG_TX_ARDQ_PU_PRE_B0                   Fld(2, 10) //[11:10]
#define SHU3_B0_DQ3_RG_TX_ARDQ_PDB_B0                      Fld(2, 12) //[13:12]
#define SHU3_B0_DQ3_RG_TX_ARDQ_PDB_PRE_B0                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU3_B0_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x1610)
#define SHU3_B0_DQ4_RG_ARPI_AA_MCK_DL_B0                   Fld(6, 0) //[5:0]
#define SHU3_B0_DQ4_RG_ARPI_AA_MCK_FB_DL_B0                Fld(6, 8) //[13:8]
#define SHU3_B0_DQ4_RG_ARPI_DA_MCK_FB_DL_B0                Fld(6, 16) //[21:16]

#define DDRPHY_SHU3_B0_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x1614)
#define SHU3_B0_DQ5_RG_RX_ARDQ_VREF_SEL_B0                 Fld(6, 0) //[5:0]
#define SHU3_B0_DQ5_RG_RX_ARDQ_VREF_BYPASS_B0              Fld(1, 6) //[6:6]
#define SHU3_B0_DQ5_RG_ARPI_FB_B0                          Fld(6, 8) //[13:8]
#define SHU3_B0_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B0             Fld(3, 16) //[18:16]
#define SHU3_B0_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B0           Fld(1, 19) //[19:19]
#define SHU3_B0_DQ5_RG_RX_ARDQS0_DVS_DLY_B0                Fld(3, 20) //[22:20]
#define SHU3_B0_DQ5_RG_ARPI_MCTL_B0                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_B0_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x1618)
#define SHU3_B0_DQ6_RG_ARPI_OFFSET_DQSIEN_B0               Fld(6, 0) //[5:0]
#define SHU3_B0_DQ6_RG_ARPI_MIDPI_CAP_SEL_B0               Fld(2, 22) //[23:22]
#define SHU3_B0_DQ6_RG_ARPI_MIDPI_VTH_SEL_B0               Fld(2, 24) //[25:24]
#define SHU3_B0_DQ6_RG_ARPI_MIDPI_EN_B0                    Fld(1, 26) //[26:26]
#define SHU3_B0_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B0             Fld(1, 27) //[27:27]
#define SHU3_B0_DQ6_RG_ARPI_CAP_SEL_B0                     Fld(2, 28) //[29:28]
#define SHU3_B0_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B0_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x161C)
#define SHU3_B0_DQ7_R_DMRANKRXDVS_B0                       Fld(4, 0) //[3:0]
#define SHU3_B0_DQ7_MIDPI_ENABLE                           Fld(1, 4) //[4:4]
#define SHU3_B0_DQ7_MIDPI_DIV4_ENABLE                      Fld(1, 5) //[5:5]
#define SHU3_B0_DQ7_R_DMDQMDBI_EYE_SHU_B0                  Fld(1, 6) //[6:6]
#define SHU3_B0_DQ7_R_DMDQMDBI_SHU_B0                      Fld(1, 7) //[7:7]
#define SHU3_B0_DQ7_R_DMRXDVS_DQM_FLAGSEL_B0               Fld(4, 8) //[11:8]
#define SHU3_B0_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B0            Fld(1, 12) //[12:12]
#define SHU3_B0_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B0              Fld(1, 13) //[13:13]
#define SHU3_B0_DQ7_R_DMRXTRACK_DQM_EN_B0                  Fld(1, 14) //[14:14]
#define SHU3_B0_DQ7_R_DMRODTEN_B0                          Fld(1, 15) //[15:15]
#define SHU3_B0_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B0           Fld(1, 16) //[16:16]
#define SHU3_B0_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B0               Fld(1, 17) //[17:17]
#define SHU3_B0_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B0              Fld(1, 18) //[18:18]
#define SHU3_B0_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B0              Fld(1, 19) //[19:19]
#define SHU3_B0_DQ7_R_LP4Y_SDN_MODE_DQS0                   Fld(1, 20) //[20:20]
#define SHU3_B0_DQ7_R_DMRXRANK_DQ_EN_B0                    Fld(1, 24) //[24:24]
#define SHU3_B0_DQ7_R_DMRXRANK_DQ_LAT_B0                   Fld(3, 25) //[27:25]
#define SHU3_B0_DQ7_R_DMRXRANK_DQS_EN_B0                   Fld(1, 28) //[28:28]
#define SHU3_B0_DQ7_R_DMRXRANK_DQS_LAT_B0                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU3_B0_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x1620)
#define SHU3_B0_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B0             Fld(15, 0) //[14:0]
#define SHU3_B0_DQ8_R_DMRXDVS_UPD_FORCE_EN_B0              Fld(1, 15) //[15:15]
#define SHU3_B0_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B0           Fld(1, 19) //[19:19]
#define SHU3_B0_DQ8_R_RMRODTEN_CG_IG_B0                    Fld(1, 20) //[20:20]
#define SHU3_B0_DQ8_R_RMRX_TOPHY_CG_IG_B0                  Fld(1, 21) //[21:21]
#define SHU3_B0_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B0          Fld(1, 22) //[22:22]
#define SHU3_B0_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B0      Fld(1, 23) //[23:23]
#define SHU3_B0_DQ8_R_DMRXDLY_CG_IG_B0                     Fld(1, 24) //[24:24]
#define SHU3_B0_DQ8_R_DMSTBEN_SYNC_CG_IG_B0                Fld(1, 25) //[25:25]
#define SHU3_B0_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B0          Fld(1, 26) //[26:26]
#define SHU3_B0_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B0          Fld(1, 27) //[27:27]
#define SHU3_B0_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B0         Fld(1, 28) //[28:28]
#define SHU3_B0_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B0     Fld(1, 29) //[29:29]
#define SHU3_B0_DQ8_R_DMRANK_PIPE_CG_IG_B0                 Fld(1, 30) //[30:30]
#define SHU3_B0_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B0_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x1624)
#define SHU3_B0_DQ9_RG_ARPI_RESERVE_B0                     Fld(22, 0) //[21:0]

#define DDRPHY_SHU3_B0_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x1628)
#define SHU3_B0_DQ10_RESERVED_0X1628                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B0_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x162C)
#define SHU3_B0_DQ11_RESERVED_0X162C                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B0_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x1630)
#define SHU3_B0_DQ12_RESERVED_0X1630                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B0_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1634)
#define SHU3_B0_DLL0_RG_ARPISM_MCK_SEL_B0_SHU              Fld(1, 0) //[0:0]
#define SHU3_B0_DLL0_B0_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU3_B0_DLL0_RG_ARDLL_FAST_PSJP_B0                 Fld(1, 4) //[4:4]
#define SHU3_B0_DLL0_RG_ARDLL_PHDIV_B0                     Fld(1, 9) //[9:9]
#define SHU3_B0_DLL0_RG_ARDLL_PHJUMP_EN_B0                 Fld(1, 10) //[10:10]
#define SHU3_B0_DLL0_RG_ARDLL_P_GAIN_B0                    Fld(4, 12) //[15:12]
#define SHU3_B0_DLL0_RG_ARDLL_IDLECNT_B0                   Fld(4, 16) //[19:16]
#define SHU3_B0_DLL0_RG_ARDLL_GAIN_B0                      Fld(4, 20) //[23:20]
#define SHU3_B0_DLL0_RG_ARDLL_PHDET_IN_SWAP_B0             Fld(1, 30) //[30:30]
#define SHU3_B0_DLL0_RG_ARDLL_PHDET_OUT_SEL_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B0_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1638)
#define SHU3_B0_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B0             Fld(1, 0) //[0:0]
#define SHU3_B0_DLL1_RG_ARDLL_PS_EN_B0                     Fld(1, 1) //[1:1]
#define SHU3_B0_DLL1_RG_ARDLL_PD_CK_SEL_B0                 Fld(1, 2) //[2:2]
#define SHU3_B0_DLL1_RG_ARDQ_REV_B0                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU3_B1_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x1680)
#define SHU3_B1_DQ0_RG_TX_ARDQS0_PRE_EN_B1                 Fld(1, 4) //[4:4]
#define SHU3_B1_DQ0_RG_TX_ARDQS0_DRVP_PRE_B1               Fld(3, 8) //[10:8]
#define SHU3_B1_DQ0_RG_TX_ARDQS0_DRVN_PRE_B1               Fld(3, 12) //[14:12]
#define SHU3_B1_DQ0_RG_TX_ARDQ_PRE_EN_B1                   Fld(1, 20) //[20:20]
#define SHU3_B1_DQ0_RG_TX_ARDQ_DRVP_PRE_B1                 Fld(3, 24) //[26:24]
#define SHU3_B1_DQ0_RG_TX_ARDQ_DRVN_PRE_B1                 Fld(3, 28) //[30:28]
#define SHU3_B1_DQ0_R_LP4Y_WDN_MODE_DQS1                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B1_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x1684)
#define SHU3_B1_DQ1_RG_TX_ARDQ_DRVP_B1                     Fld(5, 0) //[4:0]
#define SHU3_B1_DQ1_RG_TX_ARDQ_DRVN_B1                     Fld(5, 8) //[12:8]
#define SHU3_B1_DQ1_RG_TX_ARDQ_ODTP_B1                     Fld(5, 16) //[20:16]
#define SHU3_B1_DQ1_RG_TX_ARDQ_ODTN_B1                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU3_B1_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x1688)
#define SHU3_B1_DQ2_RG_TX_ARDQS0_DRVP_B1                   Fld(5, 0) //[4:0]
#define SHU3_B1_DQ2_RG_TX_ARDQS0_DRVN_B1                   Fld(5, 8) //[12:8]
#define SHU3_B1_DQ2_RG_TX_ARDQS0_ODTP_B1                   Fld(5, 16) //[20:16]
#define SHU3_B1_DQ2_RG_TX_ARDQS0_ODTN_B1                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU3_B1_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x168C)
#define SHU3_B1_DQ3_RG_TX_ARDQS0_PU_B1                     Fld(2, 0) //[1:0]
#define SHU3_B1_DQ3_RG_TX_ARDQS0_PU_PRE_B1                 Fld(2, 2) //[3:2]
#define SHU3_B1_DQ3_RG_TX_ARDQS0_PDB_B1                    Fld(2, 4) //[5:4]
#define SHU3_B1_DQ3_RG_TX_ARDQS0_PDB_PRE_B1                Fld(2, 6) //[7:6]
#define SHU3_B1_DQ3_RG_TX_ARDQ_PU_B1                       Fld(2, 8) //[9:8]
#define SHU3_B1_DQ3_RG_TX_ARDQ_PU_PRE_B1                   Fld(2, 10) //[11:10]
#define SHU3_B1_DQ3_RG_TX_ARDQ_PDB_B1                      Fld(2, 12) //[13:12]
#define SHU3_B1_DQ3_RG_TX_ARDQ_PDB_PRE_B1                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU3_B1_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x1690)
#define SHU3_B1_DQ4_RG_ARPI_AA_MCK_DL_B1                   Fld(6, 0) //[5:0]
#define SHU3_B1_DQ4_RG_ARPI_AA_MCK_FB_DL_B1                Fld(6, 8) //[13:8]
#define SHU3_B1_DQ4_RG_ARPI_DA_MCK_FB_DL_B1                Fld(6, 16) //[21:16]

#define DDRPHY_SHU3_B1_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x1694)
#define SHU3_B1_DQ5_RG_RX_ARDQ_VREF_SEL_B1                 Fld(6, 0) //[5:0]
#define SHU3_B1_DQ5_RG_RX_ARDQ_VREF_BYPASS_B1              Fld(1, 6) //[6:6]
#define SHU3_B1_DQ5_RG_ARPI_FB_B1                          Fld(6, 8) //[13:8]
#define SHU3_B1_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B1             Fld(3, 16) //[18:16]
#define SHU3_B1_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B1           Fld(1, 19) //[19:19]
#define SHU3_B1_DQ5_RG_RX_ARDQS0_DVS_DLY_B1                Fld(3, 20) //[22:20]
#define SHU3_B1_DQ5_RG_ARPI_MCTL_B1                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_B1_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x1698)
#define SHU3_B1_DQ6_RG_ARPI_OFFSET_DQSIEN_B1               Fld(6, 0) //[5:0]
#define SHU3_B1_DQ6_RG_ARPI_RESERVE_B1                     Fld(16, 6) //[21:6]
#define SHU3_B1_DQ6_RG_ARPI_MIDPI_CAP_SEL_B1               Fld(2, 22) //[23:22]
#define SHU3_B1_DQ6_RG_ARPI_MIDPI_VTH_SEL_B1               Fld(2, 24) //[25:24]
#define SHU3_B1_DQ6_RG_ARPI_MIDPI_EN_B1                    Fld(1, 26) //[26:26]
#define SHU3_B1_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B1             Fld(1, 27) //[27:27]
#define SHU3_B1_DQ6_RG_ARPI_CAP_SEL_B1                     Fld(2, 28) //[29:28]
#define SHU3_B1_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B1_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x169C)
#define SHU3_B1_DQ7_R_DMRANKRXDVS_B1                       Fld(4, 0) //[3:0]
#define SHU3_B1_DQ7_R_DMDQMDBI_EYE_SHU_B1                  Fld(1, 6) //[6:6]
#define SHU3_B1_DQ7_R_DMDQMDBI_SHU_B1                      Fld(1, 7) //[7:7]
#define SHU3_B1_DQ7_R_DMRXDVS_DQM_FLAGSEL_B1               Fld(4, 8) //[11:8]
#define SHU3_B1_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B1            Fld(1, 12) //[12:12]
#define SHU3_B1_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B1              Fld(1, 13) //[13:13]
#define SHU3_B1_DQ7_R_DMRXTRACK_DQM_EN_B1                  Fld(1, 14) //[14:14]
#define SHU3_B1_DQ7_R_DMRODTEN_B1                          Fld(1, 15) //[15:15]
#define SHU3_B1_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B1           Fld(1, 16) //[16:16]
#define SHU3_B1_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B1               Fld(1, 17) //[17:17]
#define SHU3_B1_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B1              Fld(1, 18) //[18:18]
#define SHU3_B1_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B1              Fld(1, 19) //[19:19]
#define SHU3_B1_DQ7_R_LP4Y_SDN_MODE_DQS1                   Fld(1, 20) //[20:20]
#define SHU3_B1_DQ7_R_DMRXRANK_DQ_EN_B1                    Fld(1, 24) //[24:24]
#define SHU3_B1_DQ7_R_DMRXRANK_DQ_LAT_B1                   Fld(3, 25) //[27:25]
#define SHU3_B1_DQ7_R_DMRXRANK_DQS_EN_B1                   Fld(1, 28) //[28:28]
#define SHU3_B1_DQ7_R_DMRXRANK_DQS_LAT_B1                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU3_B1_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x16A0)
#define SHU3_B1_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B1             Fld(15, 0) //[14:0]
#define SHU3_B1_DQ8_R_DMRXDVS_UPD_FORCE_EN_B1              Fld(1, 15) //[15:15]
#define SHU3_B1_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B1           Fld(1, 19) //[19:19]
#define SHU3_B1_DQ8_R_RMRODTEN_CG_IG_B1                    Fld(1, 20) //[20:20]
#define SHU3_B1_DQ8_R_RMRX_TOPHY_CG_IG_B1                  Fld(1, 21) //[21:21]
#define SHU3_B1_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B1          Fld(1, 22) //[22:22]
#define SHU3_B1_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B1      Fld(1, 23) //[23:23]
#define SHU3_B1_DQ8_R_DMRXDLY_CG_IG_B1                     Fld(1, 24) //[24:24]
#define SHU3_B1_DQ8_R_DMSTBEN_SYNC_CG_IG_B1                Fld(1, 25) //[25:25]
#define SHU3_B1_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B1          Fld(1, 26) //[26:26]
#define SHU3_B1_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B1          Fld(1, 27) //[27:27]
#define SHU3_B1_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B1         Fld(1, 28) //[28:28]
#define SHU3_B1_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B1     Fld(1, 29) //[29:29]
#define SHU3_B1_DQ8_R_DMRANK_PIPE_CG_IG_B1                 Fld(1, 30) //[30:30]
#define SHU3_B1_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B1_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x16A4)
#define SHU3_B1_DQ9_RESERVED_0X16A4                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B1_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x16A8)
#define SHU3_B1_DQ10_RESERVED_0X16A8                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B1_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x16AC)
#define SHU3_B1_DQ11_RESERVED_0X16AC                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B1_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x16B0)
#define SHU3_B1_DQ12_RESERVED_0X16B0                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_B1_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x16B4)
#define SHU3_B1_DLL0_RG_ARPISM_MCK_SEL_B1_SHU              Fld(1, 0) //[0:0]
#define SHU3_B1_DLL0_B1_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU3_B1_DLL0_RG_ARDLL_FAST_PSJP_B1                 Fld(1, 4) //[4:4]
#define SHU3_B1_DLL0_RG_ARDLL_PHDIV_B1                     Fld(1, 9) //[9:9]
#define SHU3_B1_DLL0_RG_ARDLL_PHJUMP_EN_B1                 Fld(1, 10) //[10:10]
#define SHU3_B1_DLL0_RG_ARDLL_P_GAIN_B1                    Fld(4, 12) //[15:12]
#define SHU3_B1_DLL0_RG_ARDLL_IDLECNT_B1                   Fld(4, 16) //[19:16]
#define SHU3_B1_DLL0_RG_ARDLL_GAIN_B1                      Fld(4, 20) //[23:20]
#define SHU3_B1_DLL0_RG_ARDLL_PHDET_IN_SWAP_B1             Fld(1, 30) //[30:30]
#define SHU3_B1_DLL0_RG_ARDLL_PHDET_OUT_SEL_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_B1_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x16B8)
#define SHU3_B1_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B1             Fld(1, 0) //[0:0]
#define SHU3_B1_DLL1_RG_ARDLL_PS_EN_B1                     Fld(1, 1) //[1:1]
#define SHU3_B1_DLL1_RG_ARDLL_PD_CK_SEL_B1                 Fld(1, 2) //[2:2]
#define SHU3_B1_DLL1_RG_ARDQ_REV_B1                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU3_CA_CMD0                                (DDRPHY_AO_BASE_ADDR + 0x1700)
#define SHU3_CA_CMD0_RG_TX_ARCLK_PRE_EN                    Fld(1, 4) //[4:4]
#define SHU3_CA_CMD0_RG_TX_ARCLK_DRVP_PRE                  Fld(3, 8) //[10:8]
#define SHU3_CA_CMD0_RG_TX_ARCLK_DRVN_PRE                  Fld(3, 12) //[14:12]
#define SHU3_CA_CMD0_RG_CGEN_FMEM_CK_CG_DLL                Fld(1, 17) //[17:17]
#define SHU3_CA_CMD0_RG_FB_CK_MUX                          Fld(2, 18) //[19:18]
#define SHU3_CA_CMD0_RG_TX_ARCMD_PRE_EN                    Fld(1, 20) //[20:20]
#define SHU3_CA_CMD0_RG_TX_ARCMD_DRVP_PRE                  Fld(3, 24) //[26:24]
#define SHU3_CA_CMD0_RG_TX_ARCMD_DRVN_PRE                  Fld(3, 28) //[30:28]
#define SHU3_CA_CMD0_R_LP4Y_WDN_MODE_CLK                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_CA_CMD1                                (DDRPHY_AO_BASE_ADDR + 0x1704)
#define SHU3_CA_CMD1_RG_TX_ARCMD_DRVP                      Fld(5, 0) //[4:0]
#define SHU3_CA_CMD1_RG_TX_ARCMD_DRVN                      Fld(5, 8) //[12:8]
#define SHU3_CA_CMD1_RG_TX_ARCMD_ODTP                      Fld(5, 16) //[20:16]
#define SHU3_CA_CMD1_RG_TX_ARCMD_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU3_CA_CMD2                                (DDRPHY_AO_BASE_ADDR + 0x1708)
#define SHU3_CA_CMD2_RG_TX_ARCLK_DRVP                      Fld(5, 0) //[4:0]
#define SHU3_CA_CMD2_RG_TX_ARCLK_DRVN                      Fld(5, 8) //[12:8]
#define SHU3_CA_CMD2_RG_TX_ARCLK_ODTP                      Fld(5, 16) //[20:16]
#define SHU3_CA_CMD2_RG_TX_ARCLK_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU3_CA_CMD3                                (DDRPHY_AO_BASE_ADDR + 0x170C)
#define SHU3_CA_CMD3_RG_TX_ARCLK_PU                        Fld(2, 0) //[1:0]
#define SHU3_CA_CMD3_RG_TX_ARCLK_PU_PRE                    Fld(2, 2) //[3:2]
#define SHU3_CA_CMD3_RG_TX_ARCLK_PDB                       Fld(2, 4) //[5:4]
#define SHU3_CA_CMD3_RG_TX_ARCLK_PDB_PRE                   Fld(2, 6) //[7:6]
#define SHU3_CA_CMD3_RG_TX_ARCMD_PU                        Fld(2, 8) //[9:8]
#define SHU3_CA_CMD3_RG_TX_ARCMD_PU_PRE                    Fld(2, 10) //[11:10]
#define SHU3_CA_CMD3_RG_TX_ARCMD_PDB                       Fld(2, 12) //[13:12]
#define SHU3_CA_CMD3_RG_TX_ARCMD_PDB_PRE                   Fld(2, 14) //[15:14]

#define DDRPHY_SHU3_CA_CMD4                                (DDRPHY_AO_BASE_ADDR + 0x1710)
#define SHU3_CA_CMD4_RG_ARPI_AA_MCK_DL_CA                  Fld(6, 0) //[5:0]
#define SHU3_CA_CMD4_RG_ARPI_AA_MCK_FB_DL_CA               Fld(6, 8) //[13:8]
#define SHU3_CA_CMD4_RG_ARPI_DA_MCK_FB_DL_CA               Fld(6, 16) //[21:16]

#define DDRPHY_SHU3_CA_CMD5                                (DDRPHY_AO_BASE_ADDR + 0x1714)
#define SHU3_CA_CMD5_RG_RX_ARCMD_VREF_SEL                  Fld(6, 0) //[5:0]
#define SHU3_CA_CMD5_RG_RX_ARCMD_VREF_BYPASS               Fld(1, 6) //[6:6]
#define SHU3_CA_CMD5_RG_ARPI_FB_CA                         Fld(6, 8) //[13:8]
#define SHU3_CA_CMD5_RG_RX_ARCLK_DQSIEN_DLY                Fld(3, 16) //[18:16]
#define SHU3_CA_CMD5_DA_RX_ARCLK_DQSIEN_RB_DLY             Fld(1, 19) //[19:19]
#define SHU3_CA_CMD5_RG_RX_ARCLK_DVS_DLY                   Fld(3, 20) //[22:20]
#define SHU3_CA_CMD5_RG_ARPI_MCTL_CA                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_CA_CMD6                                (DDRPHY_AO_BASE_ADDR + 0x1718)
#define SHU3_CA_CMD6_RG_ARPI_OFFSET_CLKIEN                 Fld(6, 0) //[5:0]
#define SHU3_CA_CMD6_RG_ARPI_RESERVE_CA                    Fld(16, 6) //[21:6]
#define SHU3_CA_CMD6_RG_ARPI_MIDPI_CAP_SEL_CA              Fld(2, 22) //[23:22]
#define SHU3_CA_CMD6_RG_ARPI_MIDPI_VTH_SEL_CA              Fld(2, 24) //[25:24]
#define SHU3_CA_CMD6_RG_ARPI_MIDPI_EN_CA                   Fld(1, 26) //[26:26]
#define SHU3_CA_CMD6_RG_ARPI_MIDPI_CKDIV4_EN_CA            Fld(1, 27) //[27:27]
#define SHU3_CA_CMD6_RG_ARPI_CAP_SEL_CA                    Fld(2, 28) //[29:28]
#define SHU3_CA_CMD6_RG_ARPI_MIDPI_BYPASS_EN_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_CA_CMD7                                (DDRPHY_AO_BASE_ADDR + 0x171C)
#define SHU3_CA_CMD7_R_DMRANKRXDVS_CA                      Fld(4, 0) //[3:0]
#define SHU3_CA_CMD7_R_DMRXDVS_PBYTE_FLAG_OPT_CA           Fld(1, 12) //[12:12]
#define SHU3_CA_CMD7_R_DMRODTEN_CA                         Fld(1, 15) //[15:15]
#define SHU3_CA_CMD7_R_DMARPI_CG_FB2DLL_DCM_EN_CA          Fld(1, 16) //[16:16]
#define SHU3_CA_CMD7_R_DMTX_ARPI_CG_CMD_NEW                Fld(1, 17) //[17:17]
#define SHU3_CA_CMD7_R_DMTX_ARPI_CG_CLK_NEW                Fld(1, 18) //[18:18]
#define SHU3_CA_CMD7_R_DMTX_ARPI_CG_CS_NEW                 Fld(1, 19) //[19:19]
#define SHU3_CA_CMD7_R_LP4Y_SDN_MODE_CLK                   Fld(1, 20) //[20:20]
#define SHU3_CA_CMD7_R_DMRXRANK_CMD_EN                     Fld(1, 24) //[24:24]
#define SHU3_CA_CMD7_R_DMRXRANK_CMD_LAT                    Fld(3, 25) //[27:25]
#define SHU3_CA_CMD7_R_DMRXRANK_CLK_EN                     Fld(1, 28) //[28:28]
#define SHU3_CA_CMD7_R_DMRXRANK_CLK_LAT                    Fld(3, 29) //[31:29]

#define DDRPHY_SHU3_CA_CMD8                                (DDRPHY_AO_BASE_ADDR + 0x1720)
#define SHU3_CA_CMD8_R_DMRXDVS_UPD_FORCE_CYC_CA            Fld(15, 0) //[14:0]
#define SHU3_CA_CMD8_R_DMRXDVS_UPD_FORCE_EN_CA             Fld(1, 15) //[15:15]
#define SHU3_CA_CMD8_R_DMRANK_RXDLY_PIPE_CG_IG_CA          Fld(1, 19) //[19:19]
#define SHU3_CA_CMD8_R_RMRODTEN_CG_IG_CA                   Fld(1, 20) //[20:20]
#define SHU3_CA_CMD8_R_RMRX_TOPHY_CG_IG_CA                 Fld(1, 21) //[21:21]
#define SHU3_CA_CMD8_R_DMRXDVS_RDSEL_PIPE_CG_IG_CA         Fld(1, 22) //[22:22]
#define SHU3_CA_CMD8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_CA     Fld(1, 23) //[23:23]
#define SHU3_CA_CMD8_R_DMRXDLY_CG_IG_CA                    Fld(1, 24) //[24:24]
#define SHU3_CA_CMD8_R_DMSTBEN_SYNC_CG_IG_CA               Fld(1, 25) //[25:25]
#define SHU3_CA_CMD8_R_DMDQSIEN_FLAG_SYNC_CG_IG_CA         Fld(1, 26) //[26:26]
#define SHU3_CA_CMD8_R_DMDQSIEN_FLAG_PIPE_CG_IG_CA         Fld(1, 27) //[27:27]
#define SHU3_CA_CMD8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_CA        Fld(1, 28) //[28:28]
#define SHU3_CA_CMD8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_CA    Fld(1, 29) //[29:29]
#define SHU3_CA_CMD8_R_DMRANK_PIPE_CG_IG_CA                Fld(1, 30) //[30:30]
#define SHU3_CA_CMD8_R_DMRANK_CHG_PIPE_CG_IG_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_CA_CMD9                                (DDRPHY_AO_BASE_ADDR + 0x1724)
#define SHU3_CA_CMD9_RESERVED_0X1724                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_CA_CMD10                               (DDRPHY_AO_BASE_ADDR + 0x1728)
#define SHU3_CA_CMD10_RESERVED_0X1728                      Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_CA_CMD11                               (DDRPHY_AO_BASE_ADDR + 0x172C)
#define SHU3_CA_CMD11_RG_RIMP_REV                          Fld(8, 0) //[7:0]
#define SHU3_CA_CMD11_RG_RIMP_VREF_SEL                     Fld(6, 8) //[13:8]
#define SHU3_CA_CMD11_RG_TX_ARCKE_DRVP                     Fld(5, 17) //[21:17]
#define SHU3_CA_CMD11_RG_TX_ARCKE_DRVN                     Fld(5, 22) //[26:22]

#define DDRPHY_SHU3_CA_CMD12                               (DDRPHY_AO_BASE_ADDR + 0x1730)
#define SHU3_CA_CMD12_RESERVED_0X1730                      Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_CA_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1734)
#define SHU3_CA_DLL0_RG_ARPISM_MCK_SEL_CA_SHU              Fld(1, 0) //[0:0]
#define SHU3_CA_DLL0_CA_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU3_CA_DLL0_RG_ARDLL_FAST_PSJP_CA                 Fld(1, 4) //[4:4]
#define SHU3_CA_DLL0_RG_ARDLL_PHDIV_CA                     Fld(1, 9) //[9:9]
#define SHU3_CA_DLL0_RG_ARDLL_PHJUMP_EN_CA                 Fld(1, 10) //[10:10]
#define SHU3_CA_DLL0_RG_ARDLL_P_GAIN_CA                    Fld(4, 12) //[15:12]
#define SHU3_CA_DLL0_RG_ARDLL_IDLECNT_CA                   Fld(4, 16) //[19:16]
#define SHU3_CA_DLL0_RG_ARDLL_GAIN_CA                      Fld(4, 20) //[23:20]
#define SHU3_CA_DLL0_RG_ARDLL_PHDET_IN_SWAP_CA             Fld(1, 30) //[30:30]
#define SHU3_CA_DLL0_RG_ARDLL_PHDET_OUT_SEL_CA             Fld(1, 31) //[31:31]

#define DDRPHY_SHU3_CA_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1738)
#define SHU3_CA_DLL1_RG_ARDLL_FASTPJ_CK_SEL_CA             Fld(1, 0) //[0:0]
#define SHU3_CA_DLL1_RG_ARDLL_PS_EN_CA                     Fld(1, 1) //[1:1]
#define SHU3_CA_DLL1_RG_ARDLL_PD_CK_SEL_CA                 Fld(1, 2) //[2:2]
#define SHU3_CA_DLL1_RG_ARCMD_REV                          Fld(24, 8) //[31:8]

#define DDRPHY_SHU3_MISC0                                  (DDRPHY_AO_BASE_ADDR + 0x17F0)
#define SHU3_MISC0_RG_RVREF_SEL_DQ                         Fld(6, 16) //[21:16]
#define SHU3_MISC0_RG_RVREF_DDR4_SEL                       Fld(1, 22) //[22:22]
#define SHU3_MISC0_RG_RVREF_DDR3_SEL                       Fld(1, 23) //[23:23]
#define SHU3_MISC0_RG_RVREF_SEL_CMD                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1800)
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU3_R0_B0_DQ0_RK0_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R0_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1804)
#define SHU3_R0_B0_DQ1_RK0_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU3_R0_B0_DQ1_RK0_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU3_R0_B0_DQ1_RK0_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU3_R0_B0_DQ1_RK0_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU3_R0_B0_DQ1_RK0_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R0_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1808)
#define SHU3_R0_B0_DQ2_RK0_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R0_B0_DQ2_RK0_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R0_B0_DQ2_RK0_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R0_B0_DQ2_RK0_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x180C)
#define SHU3_R0_B0_DQ3_RK0_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R0_B0_DQ3_RK0_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R0_B0_DQ3_RK0_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R0_B0_DQ3_RK0_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1810)
#define SHU3_R0_B0_DQ4_RK0_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R0_B0_DQ4_RK0_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R0_B0_DQ4_RK0_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R0_B0_DQ4_RK0_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1814)
#define SHU3_R0_B0_DQ5_RK0_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R0_B0_DQ5_RK0_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R0_B0_DQ5_RK0_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R0_B0_DQ5_RK0_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1818)
#define SHU3_R0_B0_DQ6_RK0_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU3_R0_B0_DQ6_RK0_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU3_R0_B0_DQ6_RK0_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU3_R0_B0_DQ6_RK0_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R0_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x181C)
#define SHU3_R0_B0_DQ7_RK0_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU3_R0_B0_DQ7_RK0_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU3_R0_B0_DQ7_RK0_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1820                                  (DDRPHY_AO_BASE_ADDR + 0x1820)
#define RFU_0X1820_RESERVED_0X1820                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1824                                  (DDRPHY_AO_BASE_ADDR + 0x1824)
#define RFU_0X1824_RESERVED_0X1824                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1828                                  (DDRPHY_AO_BASE_ADDR + 0x1828)
#define RFU_0X1828_RESERVED_0X1828                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X182C                                  (DDRPHY_AO_BASE_ADDR + 0x182C)
#define RFU_0X182C_RESERVED_0X182C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R0_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1850)
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU3_R0_B1_DQ0_RK0_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R0_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1854)
#define SHU3_R0_B1_DQ1_RK0_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU3_R0_B1_DQ1_RK0_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU3_R0_B1_DQ1_RK0_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU3_R0_B1_DQ1_RK0_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU3_R0_B1_DQ1_RK0_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R0_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1858)
#define SHU3_R0_B1_DQ2_RK0_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R0_B1_DQ2_RK0_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R0_B1_DQ2_RK0_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R0_B1_DQ2_RK0_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x185C)
#define SHU3_R0_B1_DQ3_RK0_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R0_B1_DQ3_RK0_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R0_B1_DQ3_RK0_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R0_B1_DQ3_RK0_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1860)
#define SHU3_R0_B1_DQ4_RK0_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R0_B1_DQ4_RK0_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R0_B1_DQ4_RK0_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R0_B1_DQ4_RK0_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1864)
#define SHU3_R0_B1_DQ5_RK0_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R0_B1_DQ5_RK0_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R0_B1_DQ5_RK0_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R0_B1_DQ5_RK0_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1868)
#define SHU3_R0_B1_DQ6_RK0_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU3_R0_B1_DQ6_RK0_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU3_R0_B1_DQ6_RK0_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU3_R0_B1_DQ6_RK0_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R0_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x186C)
#define SHU3_R0_B1_DQ7_RK0_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU3_R0_B1_DQ7_RK0_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU3_R0_B1_DQ7_RK0_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1870                                  (DDRPHY_AO_BASE_ADDR + 0x1870)
#define RFU_0X1870_RESERVED_0X1870                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1874                                  (DDRPHY_AO_BASE_ADDR + 0x1874)
#define RFU_0X1874_RESERVED_0X1874                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1878                                  (DDRPHY_AO_BASE_ADDR + 0x1878)
#define RFU_0X1878_RESERVED_0X1878                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X187C                                  (DDRPHY_AO_BASE_ADDR + 0x187C)
#define RFU_0X187C_RESERVED_0X187C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R0_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x18A0)
#define SHU3_R0_CA_CMD0_RK0_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU3_R0_CA_CMD0_RK0_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R0_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x18A4)
#define SHU3_R0_CA_CMD1_RK0_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU3_R0_CA_CMD1_RK0_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R0_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x18A8)
#define SHU3_R0_CA_CMD2_RG_RK0_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD2_RG_RK0_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD2_RG_RK0_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R0_CA_CMD2_RG_RK0_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x18AC)
#define SHU3_R0_CA_CMD3_RG_RK0_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD3_RG_RK0_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD3_RG_RK0_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R0_CA_CMD3_RG_RK0_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x18B0)
#define SHU3_R0_CA_CMD4_RG_RK0_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD4_RG_RK0_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD4_RG_RK0_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R0_CA_CMD4_RG_RK0_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x18B4)
#define SHU3_R0_CA_CMD5_RG_RK0_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD5_RG_RK0_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD5_RG_RK0_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU3_R0_CA_CMD5_RG_RK0_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x18B8)
#define SHU3_R0_CA_CMD6_RG_RK0_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD6_RG_RK0_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD6_RG_RK0_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R0_CA_CMD6_RG_RK0_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x18BC)
#define SHU3_R0_CA_CMD7_RG_RK0_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD7_RG_RK0_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD7_RG_RK0_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R0_CA_CMD7_RG_RK0_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R0_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x18C0)
#define SHU3_R0_CA_CMD8_RG_RK0_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU3_R0_CA_CMD8_RG_RK0_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R0_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x18C4)
#define SHU3_R0_CA_CMD9_RG_RK0_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU3_R0_CA_CMD9_RG_RK0_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU3_R0_CA_CMD9_RG_RK0_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X18C8                                  (DDRPHY_AO_BASE_ADDR + 0x18C8)
#define RFU_0X18C8_RESERVED_0X18C8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X18CC                                  (DDRPHY_AO_BASE_ADDR + 0x18CC)
#define RFU_0X18CC_RESERVED_0X18CC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R1_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1900)
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU3_R1_B0_DQ0_RK1_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R1_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1904)
#define SHU3_R1_B0_DQ1_RK1_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU3_R1_B0_DQ1_RK1_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU3_R1_B0_DQ1_RK1_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU3_R1_B0_DQ1_RK1_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU3_R1_B0_DQ1_RK1_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R1_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1908)
#define SHU3_R1_B0_DQ2_RK1_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R1_B0_DQ2_RK1_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R1_B0_DQ2_RK1_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R1_B0_DQ2_RK1_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x190C)
#define SHU3_R1_B0_DQ3_RK1_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R1_B0_DQ3_RK1_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R1_B0_DQ3_RK1_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R1_B0_DQ3_RK1_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1910)
#define SHU3_R1_B0_DQ4_RK1_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R1_B0_DQ4_RK1_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R1_B0_DQ4_RK1_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R1_B0_DQ4_RK1_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1914)
#define SHU3_R1_B0_DQ5_RK1_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R1_B0_DQ5_RK1_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R1_B0_DQ5_RK1_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R1_B0_DQ5_RK1_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1918)
#define SHU3_R1_B0_DQ6_RK1_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU3_R1_B0_DQ6_RK1_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU3_R1_B0_DQ6_RK1_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU3_R1_B0_DQ6_RK1_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R1_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x191C)
#define SHU3_R1_B0_DQ7_RK1_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU3_R1_B0_DQ7_RK1_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU3_R1_B0_DQ7_RK1_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1920                                  (DDRPHY_AO_BASE_ADDR + 0x1920)
#define RFU_0X1920_RESERVED_0X1920                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1924                                  (DDRPHY_AO_BASE_ADDR + 0x1924)
#define RFU_0X1924_RESERVED_0X1924                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1928                                  (DDRPHY_AO_BASE_ADDR + 0x1928)
#define RFU_0X1928_RESERVED_0X1928                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X192C                                  (DDRPHY_AO_BASE_ADDR + 0x192C)
#define RFU_0X192C_RESERVED_0X192C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R1_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1950)
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU3_R1_B1_DQ0_RK1_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R1_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1954)
#define SHU3_R1_B1_DQ1_RK1_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU3_R1_B1_DQ1_RK1_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU3_R1_B1_DQ1_RK1_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU3_R1_B1_DQ1_RK1_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU3_R1_B1_DQ1_RK1_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R1_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1958)
#define SHU3_R1_B1_DQ2_RK1_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R1_B1_DQ2_RK1_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R1_B1_DQ2_RK1_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R1_B1_DQ2_RK1_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x195C)
#define SHU3_R1_B1_DQ3_RK1_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R1_B1_DQ3_RK1_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R1_B1_DQ3_RK1_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R1_B1_DQ3_RK1_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1960)
#define SHU3_R1_B1_DQ4_RK1_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R1_B1_DQ4_RK1_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R1_B1_DQ4_RK1_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R1_B1_DQ4_RK1_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1964)
#define SHU3_R1_B1_DQ5_RK1_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R1_B1_DQ5_RK1_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R1_B1_DQ5_RK1_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R1_B1_DQ5_RK1_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1968)
#define SHU3_R1_B1_DQ6_RK1_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU3_R1_B1_DQ6_RK1_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU3_R1_B1_DQ6_RK1_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU3_R1_B1_DQ6_RK1_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R1_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x196C)
#define SHU3_R1_B1_DQ7_RK1_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU3_R1_B1_DQ7_RK1_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU3_R1_B1_DQ7_RK1_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1970                                  (DDRPHY_AO_BASE_ADDR + 0x1970)
#define RFU_0X1970_RESERVED_0X1970                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1974                                  (DDRPHY_AO_BASE_ADDR + 0x1974)
#define RFU_0X1974_RESERVED_0X1974                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1978                                  (DDRPHY_AO_BASE_ADDR + 0x1978)
#define RFU_0X1978_RESERVED_0X1978                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X197C                                  (DDRPHY_AO_BASE_ADDR + 0x197C)
#define RFU_0X197C_RESERVED_0X197C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R1_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x19A0)
#define SHU3_R1_CA_CMD0_RK1_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU3_R1_CA_CMD0_RK1_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R1_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x19A4)
#define SHU3_R1_CA_CMD1_RK1_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU3_R1_CA_CMD1_RK1_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R1_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x19A8)
#define SHU3_R1_CA_CMD2_RG_RK1_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD2_RG_RK1_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD2_RG_RK1_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R1_CA_CMD2_RG_RK1_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x19AC)
#define SHU3_R1_CA_CMD3_RG_RK1_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD3_RG_RK1_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD3_RG_RK1_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R1_CA_CMD3_RG_RK1_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x19B0)
#define SHU3_R1_CA_CMD4_RG_RK1_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD4_RG_RK1_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD4_RG_RK1_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R1_CA_CMD4_RG_RK1_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x19B4)
#define SHU3_R1_CA_CMD5_RG_RK1_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD5_RG_RK1_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD5_RG_RK1_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU3_R1_CA_CMD5_RG_RK1_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x19B8)
#define SHU3_R1_CA_CMD6_RG_RK1_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD6_RG_RK1_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD6_RG_RK1_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R1_CA_CMD6_RG_RK1_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x19BC)
#define SHU3_R1_CA_CMD7_RG_RK1_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD7_RG_RK1_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD7_RG_RK1_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R1_CA_CMD7_RG_RK1_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R1_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x19C0)
#define SHU3_R1_CA_CMD8_RG_RK1_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU3_R1_CA_CMD8_RG_RK1_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R1_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x19C4)
#define SHU3_R1_CA_CMD9_RG_RK1_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU3_R1_CA_CMD9_RG_RK1_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU3_R1_CA_CMD9_RG_RK1_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X19C8                                  (DDRPHY_AO_BASE_ADDR + 0x19C8)
#define RFU_0X19C8_RESERVED_0X19C8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X19CC                                  (DDRPHY_AO_BASE_ADDR + 0x19CC)
#define RFU_0X19CC_RESERVED_0X19CC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R2_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1A00)
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU3_R2_B0_DQ0_RK2_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R2_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1A04)
#define SHU3_R2_B0_DQ1_RK2_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU3_R2_B0_DQ1_RK2_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU3_R2_B0_DQ1_RK2_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU3_R2_B0_DQ1_RK2_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU3_R2_B0_DQ1_RK2_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R2_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1A08)
#define SHU3_R2_B0_DQ2_RK2_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R2_B0_DQ2_RK2_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R2_B0_DQ2_RK2_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R2_B0_DQ2_RK2_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1A0C)
#define SHU3_R2_B0_DQ3_RK2_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R2_B0_DQ3_RK2_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R2_B0_DQ3_RK2_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R2_B0_DQ3_RK2_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1A10)
#define SHU3_R2_B0_DQ4_RK2_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R2_B0_DQ4_RK2_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R2_B0_DQ4_RK2_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R2_B0_DQ4_RK2_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1A14)
#define SHU3_R2_B0_DQ5_RK2_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU3_R2_B0_DQ5_RK2_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU3_R2_B0_DQ5_RK2_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU3_R2_B0_DQ5_RK2_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1A18)
#define SHU3_R2_B0_DQ6_RK2_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU3_R2_B0_DQ6_RK2_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU3_R2_B0_DQ6_RK2_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU3_R2_B0_DQ6_RK2_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R2_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1A1C)
#define SHU3_R2_B0_DQ7_RK2_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU3_R2_B0_DQ7_RK2_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU3_R2_B0_DQ7_RK2_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1A20                                  (DDRPHY_AO_BASE_ADDR + 0x1A20)
#define RFU_0X1A20_RESERVED_0X1A20                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1A24                                  (DDRPHY_AO_BASE_ADDR + 0x1A24)
#define RFU_0X1A24_RESERVED_0X1A24                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1A28                                  (DDRPHY_AO_BASE_ADDR + 0x1A28)
#define RFU_0X1A28_RESERVED_0X1A28                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1A2C                                  (DDRPHY_AO_BASE_ADDR + 0x1A2C)
#define RFU_0X1A2C_RESERVED_0X1A2C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R2_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1A50)
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU3_R2_B1_DQ0_RK2_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R2_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1A54)
#define SHU3_R2_B1_DQ1_RK2_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU3_R2_B1_DQ1_RK2_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU3_R2_B1_DQ1_RK2_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU3_R2_B1_DQ1_RK2_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU3_R2_B1_DQ1_RK2_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R2_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1A58)
#define SHU3_R2_B1_DQ2_RK2_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R2_B1_DQ2_RK2_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R2_B1_DQ2_RK2_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R2_B1_DQ2_RK2_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1A5C)
#define SHU3_R2_B1_DQ3_RK2_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R2_B1_DQ3_RK2_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R2_B1_DQ3_RK2_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R2_B1_DQ3_RK2_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1A60)
#define SHU3_R2_B1_DQ4_RK2_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R2_B1_DQ4_RK2_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R2_B1_DQ4_RK2_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R2_B1_DQ4_RK2_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1A64)
#define SHU3_R2_B1_DQ5_RK2_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU3_R2_B1_DQ5_RK2_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU3_R2_B1_DQ5_RK2_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU3_R2_B1_DQ5_RK2_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1A68)
#define SHU3_R2_B1_DQ6_RK2_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU3_R2_B1_DQ6_RK2_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU3_R2_B1_DQ6_RK2_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU3_R2_B1_DQ6_RK2_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R2_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1A6C)
#define SHU3_R2_B1_DQ7_RK2_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU3_R2_B1_DQ7_RK2_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU3_R2_B1_DQ7_RK2_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1A70                                  (DDRPHY_AO_BASE_ADDR + 0x1A70)
#define RFU_0X1A70_RESERVED_0X1A70                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1A74                                  (DDRPHY_AO_BASE_ADDR + 0x1A74)
#define RFU_0X1A74_RESERVED_0X1A74                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1A78                                  (DDRPHY_AO_BASE_ADDR + 0x1A78)
#define RFU_0X1A78_RESERVED_0X1A78                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1A7C                                  (DDRPHY_AO_BASE_ADDR + 0x1A7C)
#define RFU_0X1A7C_RESERVED_0X1A7C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU3_R2_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x1AA0)
#define SHU3_R2_CA_CMD0_RK2_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU3_R2_CA_CMD0_RK2_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R2_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x1AA4)
#define SHU3_R2_CA_CMD1_RK2_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU3_R2_CA_CMD1_RK2_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU3_R2_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x1AA8)
#define SHU3_R2_CA_CMD2_RG_RK2_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD2_RG_RK2_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD2_RG_RK2_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R2_CA_CMD2_RG_RK2_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x1AAC)
#define SHU3_R2_CA_CMD3_RG_RK2_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD3_RG_RK2_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD3_RG_RK2_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R2_CA_CMD3_RG_RK2_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x1AB0)
#define SHU3_R2_CA_CMD4_RG_RK2_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD4_RG_RK2_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD4_RG_RK2_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R2_CA_CMD4_RG_RK2_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x1AB4)
#define SHU3_R2_CA_CMD5_RG_RK2_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD5_RG_RK2_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD5_RG_RK2_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU3_R2_CA_CMD5_RG_RK2_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x1AB8)
#define SHU3_R2_CA_CMD6_RG_RK2_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD6_RG_RK2_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD6_RG_RK2_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R2_CA_CMD6_RG_RK2_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x1ABC)
#define SHU3_R2_CA_CMD7_RG_RK2_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD7_RG_RK2_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD7_RG_RK2_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU3_R2_CA_CMD7_RG_RK2_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU3_R2_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x1AC0)
#define SHU3_R2_CA_CMD8_RG_RK2_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU3_R2_CA_CMD8_RG_RK2_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU3_R2_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x1AC4)
#define SHU3_R2_CA_CMD9_RG_RK2_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU3_R2_CA_CMD9_RG_RK2_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU3_R2_CA_CMD9_RG_RK2_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1AC8                                  (DDRPHY_AO_BASE_ADDR + 0x1AC8)
#define RFU_0X1AC8_RESERVED_0X1AC8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1ACC                                  (DDRPHY_AO_BASE_ADDR + 0x1ACC)
#define RFU_0X1ACC_RESERVED_0X1ACC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_PLL0                                   (DDRPHY_AO_BASE_ADDR + 0x1C80)
#define SHU4_PLL0_RG_RPHYPLL_TOP_REV                       Fld(16, 0) //[15:0]
#define SHU4_PLL0_RG_RPHYPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU4_PLL1                                   (DDRPHY_AO_BASE_ADDR + 0x1C84)
#define SHU4_PLL1_RG_RPHYPLLGP_CK_SEL                      Fld(1, 0) //[0:0]
#define SHU4_PLL1_SHU4_PLL1_RFU                            Fld(3, 1) //[3:1]
#define SHU4_PLL1_R_SHU_AUTO_PLL_MUX                       Fld(1, 4) //[4:4]
#define SHU4_PLL1_RESERVED_0X1C84                          Fld(27, 5) //[31:5]

#define DDRPHY_SHU4_PLL2                                   (DDRPHY_AO_BASE_ADDR + 0x1C88)
#define SHU4_PLL2_RG_RCLRPLL_LOAD_EN                       Fld(1, 19) //[19:19]

#define DDRPHY_SHU4_PLL3                                   (DDRPHY_AO_BASE_ADDR + 0x1C8C)
#define SHU4_PLL3_RESERVED_0X1C8C                          Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_PLL4                                   (DDRPHY_AO_BASE_ADDR + 0x1C90)
#define SHU4_PLL4_RG_RPHYPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU4_PLL4_RG_RPHYPLL_FS                            Fld(2, 18) //[19:18]
#define SHU4_PLL4_RG_RPHYPLL_BW                            Fld(3, 20) //[22:20]
#define SHU4_PLL4_RG_RPHYPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU4_PLL4_RG_RPHYPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU4_PLL4_RG_RPHYPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU4_PLL4_RG_RPHYPLL_BR                            Fld(1, 30) //[30:30]
#define SHU4_PLL4_RG_RPHYPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_PLL5                                   (DDRPHY_AO_BASE_ADDR + 0x1C94)
#define SHU4_PLL5_RG_RPHYPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU4_PLL5_RG_RPHYPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU4_PLL5_RG_RPHYPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU4_PLL6                                   (DDRPHY_AO_BASE_ADDR + 0x1C98)
#define SHU4_PLL6_RG_RCLRPLL_RESERVED                      Fld(16, 0) //[15:0]
#define SHU4_PLL6_RG_RCLRPLL_FS                            Fld(2, 18) //[19:18]
#define SHU4_PLL6_RG_RCLRPLL_BW                            Fld(3, 20) //[22:20]
#define SHU4_PLL6_RG_RCLRPLL_ICHP                          Fld(2, 24) //[25:24]
#define SHU4_PLL6_RG_RCLRPLL_IBIAS                         Fld(2, 26) //[27:26]
#define SHU4_PLL6_RG_RCLRPLL_BLP                           Fld(1, 29) //[29:29]
#define SHU4_PLL6_RG_RCLRPLL_BR                            Fld(1, 30) //[30:30]
#define SHU4_PLL6_RG_RCLRPLL_BP                            Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_PLL7                                   (DDRPHY_AO_BASE_ADDR + 0x1C9C)
#define SHU4_PLL7_RG_RCLRPLL_SDM_FRA_EN                    Fld(1, 0) //[0:0]
#define SHU4_PLL7_RG_RCLRPLL_SDM_PCW_CHG                   Fld(1, 1) //[1:1]
#define SHU4_PLL7_RG_RCLRPLL_SDM_PCW                       Fld(16, 16) //[31:16]

#define DDRPHY_SHU4_PLL8                                   (DDRPHY_AO_BASE_ADDR + 0x1CA0)
#define SHU4_PLL8_RG_RPHYPLL_POSDIV                        Fld(3, 0) //[2:0]
#define SHU4_PLL8_RG_RPHYPLL_PREDIV                        Fld(2, 18) //[19:18]

#define DDRPHY_SHU4_PLL9                                   (DDRPHY_AO_BASE_ADDR + 0x1CA4)
#define SHU4_PLL9_RG_RPHYPLL_RST_DLY                       Fld(2, 8) //[9:8]
#define SHU4_PLL9_RG_RPHYPLL_LVROD_EN                      Fld(1, 12) //[12:12]
#define SHU4_PLL9_RG_RPHYPLL_MONREF_EN                     Fld(1, 13) //[13:13]
#define SHU4_PLL9_RG_RPHYPLL_MONVC_EN                      Fld(2, 14) //[15:14]
#define SHU4_PLL9_RG_RPHYPLL_MONCK_EN                      Fld(1, 16) //[16:16]

#define DDRPHY_SHU4_PLL10                                  (DDRPHY_AO_BASE_ADDR + 0x1CA8)
#define SHU4_PLL10_RG_RCLRPLL_POSDIV                       Fld(3, 0) //[2:0]
#define SHU4_PLL10_RG_RCLRPLL_PREDIV                       Fld(2, 18) //[19:18]

#define DDRPHY_SHU4_PLL11                                  (DDRPHY_AO_BASE_ADDR + 0x1CAC)
#define SHU4_PLL11_RG_RCLRPLL_RST_DLY                      Fld(2, 8) //[9:8]
#define SHU4_PLL11_RG_RCLRPLL_LVROD_EN                     Fld(1, 12) //[12:12]
#define SHU4_PLL11_RG_RCLRPLL_MONREF_EN                    Fld(1, 13) //[13:13]
#define SHU4_PLL11_RG_RCLRPLL_MONVC_EN                     Fld(2, 14) //[15:14]
#define SHU4_PLL11_RG_RCLRPLL_MONCK_EN                     Fld(1, 16) //[16:16]

#define DDRPHY_SHU4_PLL12                                  (DDRPHY_AO_BASE_ADDR + 0x1CB0)
#define SHU4_PLL12_RG_RCLRPLL_EXT_PODIV                    Fld(6, 0) //[5:0]
#define SHU4_PLL12_RG_RCLRPLL_BYPASS                       Fld(1, 6) //[6:6]
#define SHU4_PLL12_RG_RCLRPLL_EXTPODIV_EN                  Fld(1, 7) //[7:7]
#define SHU4_PLL12_RG_RCLRPLL_EXT_FBDIV                    Fld(6, 8) //[13:8]
#define SHU4_PLL12_RG_RCLRPLL_EXTFBDIV_EN                  Fld(1, 15) //[15:15]
#define SHU4_PLL12_RG_RPHYPLL_EXT_FBDIV                    Fld(6, 16) //[21:16]
#define SHU4_PLL12_RG_RPHYPLL_EXTFBDIV_EN                  Fld(1, 22) //[22:22]

#define DDRPHY_SHU4_PLL13                                  (DDRPHY_AO_BASE_ADDR + 0x1CB4)
#define SHU4_PLL13_RG_RCLRPLL_FB_DL                        Fld(6, 0) //[5:0]
#define SHU4_PLL13_RG_RCLRPLL_REF_DL                       Fld(6, 8) //[13:8]
#define SHU4_PLL13_RG_RPHYPLL_FB_DL                        Fld(6, 16) //[21:16]
#define SHU4_PLL13_RG_RPHYPLL_REF_DL                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_PLL14                                  (DDRPHY_AO_BASE_ADDR + 0x1CB8)
#define SHU4_PLL14_RG_RPHYPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU4_PLL14_RG_RPHYPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU4_PLL14_RG_RPHYPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU4_PLL15                                  (DDRPHY_AO_BASE_ADDR + 0x1CBC)
#define SHU4_PLL15_RG_RPHYPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU4_PLL15_RG_RPHYPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU4_PLL20                                  (DDRPHY_AO_BASE_ADDR + 0x1CD0)
#define SHU4_PLL20_RG_RCLRPLL_SDM_HREN                     Fld(1, 0) //[0:0]
#define SHU4_PLL20_RG_RCLRPLL_SDM_SSC_PH_INIT              Fld(1, 1) //[1:1]
#define SHU4_PLL20_RG_RCLRPLL_SDM_SSC_PRD                  Fld(16, 16) //[31:16]

#define DDRPHY_SHU4_PLL21                                  (DDRPHY_AO_BASE_ADDR + 0x1CD4)
#define SHU4_PLL21_RG_RCLRPLL_SDM_SSC_DELTA                Fld(16, 0) //[15:0]
#define SHU4_PLL21_RG_RCLRPLL_SDM_SSC_DELTA1               Fld(16, 16) //[31:16]

#define DDRPHY_SHU4_B0_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x1B00)
#define SHU4_B0_DQ0_RG_TX_ARDQS0_PRE_EN_B0                 Fld(1, 4) //[4:4]
#define SHU4_B0_DQ0_RG_TX_ARDQS0_DRVP_PRE_B0               Fld(3, 8) //[10:8]
#define SHU4_B0_DQ0_RG_TX_ARDQS0_DRVN_PRE_B0               Fld(3, 12) //[14:12]
#define SHU4_B0_DQ0_RG_TX_ARDQ_PRE_EN_B0                   Fld(1, 20) //[20:20]
#define SHU4_B0_DQ0_RG_TX_ARDQ_DRVP_PRE_B0                 Fld(3, 24) //[26:24]
#define SHU4_B0_DQ0_RG_TX_ARDQ_DRVN_PRE_B0                 Fld(3, 28) //[30:28]
#define SHU4_B0_DQ0_R_LP4Y_WDN_MODE_DQS0                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B0_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x1B04)
#define SHU4_B0_DQ1_RG_TX_ARDQ_DRVP_B0                     Fld(5, 0) //[4:0]
#define SHU4_B0_DQ1_RG_TX_ARDQ_DRVN_B0                     Fld(5, 8) //[12:8]
#define SHU4_B0_DQ1_RG_TX_ARDQ_ODTP_B0                     Fld(5, 16) //[20:16]
#define SHU4_B0_DQ1_RG_TX_ARDQ_ODTN_B0                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU4_B0_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x1B08)
#define SHU4_B0_DQ2_RG_TX_ARDQS0_DRVP_B0                   Fld(5, 0) //[4:0]
#define SHU4_B0_DQ2_RG_TX_ARDQS0_DRVN_B0                   Fld(5, 8) //[12:8]
#define SHU4_B0_DQ2_RG_TX_ARDQS0_ODTP_B0                   Fld(5, 16) //[20:16]
#define SHU4_B0_DQ2_RG_TX_ARDQS0_ODTN_B0                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU4_B0_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x1B0C)
#define SHU4_B0_DQ3_RG_TX_ARDQS0_PU_B0                     Fld(2, 0) //[1:0]
#define SHU4_B0_DQ3_RG_TX_ARDQS0_PU_PRE_B0                 Fld(2, 2) //[3:2]
#define SHU4_B0_DQ3_RG_TX_ARDQS0_PDB_B0                    Fld(2, 4) //[5:4]
#define SHU4_B0_DQ3_RG_TX_ARDQS0_PDB_PRE_B0                Fld(2, 6) //[7:6]
#define SHU4_B0_DQ3_RG_TX_ARDQ_PU_B0                       Fld(2, 8) //[9:8]
#define SHU4_B0_DQ3_RG_TX_ARDQ_PU_PRE_B0                   Fld(2, 10) //[11:10]
#define SHU4_B0_DQ3_RG_TX_ARDQ_PDB_B0                      Fld(2, 12) //[13:12]
#define SHU4_B0_DQ3_RG_TX_ARDQ_PDB_PRE_B0                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU4_B0_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x1B10)
#define SHU4_B0_DQ4_RG_ARPI_AA_MCK_DL_B0                   Fld(6, 0) //[5:0]
#define SHU4_B0_DQ4_RG_ARPI_AA_MCK_FB_DL_B0                Fld(6, 8) //[13:8]
#define SHU4_B0_DQ4_RG_ARPI_DA_MCK_FB_DL_B0                Fld(6, 16) //[21:16]

#define DDRPHY_SHU4_B0_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x1B14)
#define SHU4_B0_DQ5_RG_RX_ARDQ_VREF_SEL_B0                 Fld(6, 0) //[5:0]
#define SHU4_B0_DQ5_RG_RX_ARDQ_VREF_BYPASS_B0              Fld(1, 6) //[6:6]
#define SHU4_B0_DQ5_RG_ARPI_FB_B0                          Fld(6, 8) //[13:8]
#define SHU4_B0_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B0             Fld(3, 16) //[18:16]
#define SHU4_B0_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B0           Fld(1, 19) //[19:19]
#define SHU4_B0_DQ5_RG_RX_ARDQS0_DVS_DLY_B0                Fld(3, 20) //[22:20]
#define SHU4_B0_DQ5_RG_ARPI_MCTL_B0                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_B0_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x1B18)
#define SHU4_B0_DQ6_RG_ARPI_OFFSET_DQSIEN_B0               Fld(6, 0) //[5:0]
#define SHU4_B0_DQ6_RG_ARPI_MIDPI_CAP_SEL_B0               Fld(2, 22) //[23:22]
#define SHU4_B0_DQ6_RG_ARPI_MIDPI_VTH_SEL_B0               Fld(2, 24) //[25:24]
#define SHU4_B0_DQ6_RG_ARPI_MIDPI_EN_B0                    Fld(1, 26) //[26:26]
#define SHU4_B0_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B0             Fld(1, 27) //[27:27]
#define SHU4_B0_DQ6_RG_ARPI_CAP_SEL_B0                     Fld(2, 28) //[29:28]
#define SHU4_B0_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B0_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x1B1C)
#define SHU4_B0_DQ7_R_DMRANKRXDVS_B0                       Fld(4, 0) //[3:0]
#define SHU4_B0_DQ7_MIDPI_ENABLE                           Fld(1, 4) //[4:4]
#define SHU4_B0_DQ7_MIDPI_DIV4_ENABLE                      Fld(1, 5) //[5:5]
#define SHU4_B0_DQ7_R_DMDQMDBI_EYE_SHU_B0                  Fld(1, 6) //[6:6]
#define SHU4_B0_DQ7_R_DMDQMDBI_SHU_B0                      Fld(1, 7) //[7:7]
#define SHU4_B0_DQ7_R_DMRXDVS_DQM_FLAGSEL_B0               Fld(4, 8) //[11:8]
#define SHU4_B0_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B0            Fld(1, 12) //[12:12]
#define SHU4_B0_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B0              Fld(1, 13) //[13:13]
#define SHU4_B0_DQ7_R_DMRXTRACK_DQM_EN_B0                  Fld(1, 14) //[14:14]
#define SHU4_B0_DQ7_R_DMRODTEN_B0                          Fld(1, 15) //[15:15]
#define SHU4_B0_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B0           Fld(1, 16) //[16:16]
#define SHU4_B0_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B0               Fld(1, 17) //[17:17]
#define SHU4_B0_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B0              Fld(1, 18) //[18:18]
#define SHU4_B0_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B0              Fld(1, 19) //[19:19]
#define SHU4_B0_DQ7_R_LP4Y_SDN_MODE_DQS0                   Fld(1, 20) //[20:20]
#define SHU4_B0_DQ7_R_DMRXRANK_DQ_EN_B0                    Fld(1, 24) //[24:24]
#define SHU4_B0_DQ7_R_DMRXRANK_DQ_LAT_B0                   Fld(3, 25) //[27:25]
#define SHU4_B0_DQ7_R_DMRXRANK_DQS_EN_B0                   Fld(1, 28) //[28:28]
#define SHU4_B0_DQ7_R_DMRXRANK_DQS_LAT_B0                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU4_B0_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x1B20)
#define SHU4_B0_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B0             Fld(15, 0) //[14:0]
#define SHU4_B0_DQ8_R_DMRXDVS_UPD_FORCE_EN_B0              Fld(1, 15) //[15:15]
#define SHU4_B0_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B0           Fld(1, 19) //[19:19]
#define SHU4_B0_DQ8_R_RMRODTEN_CG_IG_B0                    Fld(1, 20) //[20:20]
#define SHU4_B0_DQ8_R_RMRX_TOPHY_CG_IG_B0                  Fld(1, 21) //[21:21]
#define SHU4_B0_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B0          Fld(1, 22) //[22:22]
#define SHU4_B0_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B0      Fld(1, 23) //[23:23]
#define SHU4_B0_DQ8_R_DMRXDLY_CG_IG_B0                     Fld(1, 24) //[24:24]
#define SHU4_B0_DQ8_R_DMSTBEN_SYNC_CG_IG_B0                Fld(1, 25) //[25:25]
#define SHU4_B0_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B0          Fld(1, 26) //[26:26]
#define SHU4_B0_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B0          Fld(1, 27) //[27:27]
#define SHU4_B0_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B0         Fld(1, 28) //[28:28]
#define SHU4_B0_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B0     Fld(1, 29) //[29:29]
#define SHU4_B0_DQ8_R_DMRANK_PIPE_CG_IG_B0                 Fld(1, 30) //[30:30]
#define SHU4_B0_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B0_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x1B24)
#define SHU4_B0_DQ9_RG_ARPI_RESERVE_B0                     Fld(22, 0) //[21:0]

#define DDRPHY_SHU4_B0_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x1B28)
#define SHU4_B0_DQ10_RESERVED_0X1B28                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B0_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x1B2C)
#define SHU4_B0_DQ11_RESERVED_0X1B2C                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B0_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x1B30)
#define SHU4_B0_DQ12_RESERVED_0X1B30                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B0_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1B34)
#define SHU4_B0_DLL0_RG_ARPISM_MCK_SEL_B0_SHU              Fld(1, 0) //[0:0]
#define SHU4_B0_DLL0_B0_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU4_B0_DLL0_RG_ARDLL_FAST_PSJP_B0                 Fld(1, 4) //[4:4]
#define SHU4_B0_DLL0_RG_ARDLL_PHDIV_B0                     Fld(1, 9) //[9:9]
#define SHU4_B0_DLL0_RG_ARDLL_PHJUMP_EN_B0                 Fld(1, 10) //[10:10]
#define SHU4_B0_DLL0_RG_ARDLL_P_GAIN_B0                    Fld(4, 12) //[15:12]
#define SHU4_B0_DLL0_RG_ARDLL_IDLECNT_B0                   Fld(4, 16) //[19:16]
#define SHU4_B0_DLL0_RG_ARDLL_GAIN_B0                      Fld(4, 20) //[23:20]
#define SHU4_B0_DLL0_RG_ARDLL_PHDET_IN_SWAP_B0             Fld(1, 30) //[30:30]
#define SHU4_B0_DLL0_RG_ARDLL_PHDET_OUT_SEL_B0             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B0_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1B38)
#define SHU4_B0_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B0             Fld(1, 0) //[0:0]
#define SHU4_B0_DLL1_RG_ARDLL_PS_EN_B0                     Fld(1, 1) //[1:1]
#define SHU4_B0_DLL1_RG_ARDLL_PD_CK_SEL_B0                 Fld(1, 2) //[2:2]
#define SHU4_B0_DLL1_RG_ARDQ_REV_B0                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU4_B1_DQ0                                 (DDRPHY_AO_BASE_ADDR + 0x1B80)
#define SHU4_B1_DQ0_RG_TX_ARDQS0_PRE_EN_B1                 Fld(1, 4) //[4:4]
#define SHU4_B1_DQ0_RG_TX_ARDQS0_DRVP_PRE_B1               Fld(3, 8) //[10:8]
#define SHU4_B1_DQ0_RG_TX_ARDQS0_DRVN_PRE_B1               Fld(3, 12) //[14:12]
#define SHU4_B1_DQ0_RG_TX_ARDQ_PRE_EN_B1                   Fld(1, 20) //[20:20]
#define SHU4_B1_DQ0_RG_TX_ARDQ_DRVP_PRE_B1                 Fld(3, 24) //[26:24]
#define SHU4_B1_DQ0_RG_TX_ARDQ_DRVN_PRE_B1                 Fld(3, 28) //[30:28]
#define SHU4_B1_DQ0_R_LP4Y_WDN_MODE_DQS1                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B1_DQ1                                 (DDRPHY_AO_BASE_ADDR + 0x1B84)
#define SHU4_B1_DQ1_RG_TX_ARDQ_DRVP_B1                     Fld(5, 0) //[4:0]
#define SHU4_B1_DQ1_RG_TX_ARDQ_DRVN_B1                     Fld(5, 8) //[12:8]
#define SHU4_B1_DQ1_RG_TX_ARDQ_ODTP_B1                     Fld(5, 16) //[20:16]
#define SHU4_B1_DQ1_RG_TX_ARDQ_ODTN_B1                     Fld(5, 24) //[28:24]

#define DDRPHY_SHU4_B1_DQ2                                 (DDRPHY_AO_BASE_ADDR + 0x1B88)
#define SHU4_B1_DQ2_RG_TX_ARDQS0_DRVP_B1                   Fld(5, 0) //[4:0]
#define SHU4_B1_DQ2_RG_TX_ARDQS0_DRVN_B1                   Fld(5, 8) //[12:8]
#define SHU4_B1_DQ2_RG_TX_ARDQS0_ODTP_B1                   Fld(5, 16) //[20:16]
#define SHU4_B1_DQ2_RG_TX_ARDQS0_ODTN_B1                   Fld(5, 24) //[28:24]

#define DDRPHY_SHU4_B1_DQ3                                 (DDRPHY_AO_BASE_ADDR + 0x1B8C)
#define SHU4_B1_DQ3_RG_TX_ARDQS0_PU_B1                     Fld(2, 0) //[1:0]
#define SHU4_B1_DQ3_RG_TX_ARDQS0_PU_PRE_B1                 Fld(2, 2) //[3:2]
#define SHU4_B1_DQ3_RG_TX_ARDQS0_PDB_B1                    Fld(2, 4) //[5:4]
#define SHU4_B1_DQ3_RG_TX_ARDQS0_PDB_PRE_B1                Fld(2, 6) //[7:6]
#define SHU4_B1_DQ3_RG_TX_ARDQ_PU_B1                       Fld(2, 8) //[9:8]
#define SHU4_B1_DQ3_RG_TX_ARDQ_PU_PRE_B1                   Fld(2, 10) //[11:10]
#define SHU4_B1_DQ3_RG_TX_ARDQ_PDB_B1                      Fld(2, 12) //[13:12]
#define SHU4_B1_DQ3_RG_TX_ARDQ_PDB_PRE_B1                  Fld(2, 14) //[15:14]

#define DDRPHY_SHU4_B1_DQ4                                 (DDRPHY_AO_BASE_ADDR + 0x1B90)
#define SHU4_B1_DQ4_RG_ARPI_AA_MCK_DL_B1                   Fld(6, 0) //[5:0]
#define SHU4_B1_DQ4_RG_ARPI_AA_MCK_FB_DL_B1                Fld(6, 8) //[13:8]
#define SHU4_B1_DQ4_RG_ARPI_DA_MCK_FB_DL_B1                Fld(6, 16) //[21:16]

#define DDRPHY_SHU4_B1_DQ5                                 (DDRPHY_AO_BASE_ADDR + 0x1B94)
#define SHU4_B1_DQ5_RG_RX_ARDQ_VREF_SEL_B1                 Fld(6, 0) //[5:0]
#define SHU4_B1_DQ5_RG_RX_ARDQ_VREF_BYPASS_B1              Fld(1, 6) //[6:6]
#define SHU4_B1_DQ5_RG_ARPI_FB_B1                          Fld(6, 8) //[13:8]
#define SHU4_B1_DQ5_RG_RX_ARDQS0_DQSIEN_DLY_B1             Fld(3, 16) //[18:16]
#define SHU4_B1_DQ5_DA_RX_ARDQS_DQSIEN_RB_DLY_B1           Fld(1, 19) //[19:19]
#define SHU4_B1_DQ5_RG_RX_ARDQS0_DVS_DLY_B1                Fld(3, 20) //[22:20]
#define SHU4_B1_DQ5_RG_ARPI_MCTL_B1                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_B1_DQ6                                 (DDRPHY_AO_BASE_ADDR + 0x1B98)
#define SHU4_B1_DQ6_RG_ARPI_OFFSET_DQSIEN_B1               Fld(6, 0) //[5:0]
#define SHU4_B1_DQ6_RG_ARPI_RESERVE_B1                     Fld(16, 6) //[21:6]
#define SHU4_B1_DQ6_RG_ARPI_MIDPI_CAP_SEL_B1               Fld(2, 22) //[23:22]
#define SHU4_B1_DQ6_RG_ARPI_MIDPI_VTH_SEL_B1               Fld(2, 24) //[25:24]
#define SHU4_B1_DQ6_RG_ARPI_MIDPI_EN_B1                    Fld(1, 26) //[26:26]
#define SHU4_B1_DQ6_RG_ARPI_MIDPI_CKDIV4_EN_B1             Fld(1, 27) //[27:27]
#define SHU4_B1_DQ6_RG_ARPI_CAP_SEL_B1                     Fld(2, 28) //[29:28]
#define SHU4_B1_DQ6_RG_ARPI_MIDPI_BYPASS_EN_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B1_DQ7                                 (DDRPHY_AO_BASE_ADDR + 0x1B9C)
#define SHU4_B1_DQ7_R_DMRANKRXDVS_B1                       Fld(4, 0) //[3:0]
#define SHU4_B1_DQ7_R_DMDQMDBI_EYE_SHU_B1                  Fld(1, 6) //[6:6]
#define SHU4_B1_DQ7_R_DMDQMDBI_SHU_B1                      Fld(1, 7) //[7:7]
#define SHU4_B1_DQ7_R_DMRXDVS_DQM_FLAGSEL_B1               Fld(4, 8) //[11:8]
#define SHU4_B1_DQ7_R_DMRXDVS_PBYTE_FLAG_OPT_B1            Fld(1, 12) //[12:12]
#define SHU4_B1_DQ7_R_DMRXDVS_PBYTE_DQM_EN_B1              Fld(1, 13) //[13:13]
#define SHU4_B1_DQ7_R_DMRXTRACK_DQM_EN_B1                  Fld(1, 14) //[14:14]
#define SHU4_B1_DQ7_R_DMRODTEN_B1                          Fld(1, 15) //[15:15]
#define SHU4_B1_DQ7_R_DMARPI_CG_FB2DLL_DCM_EN_B1           Fld(1, 16) //[16:16]
#define SHU4_B1_DQ7_R_DMTX_ARPI_CG_DQ_NEW_B1               Fld(1, 17) //[17:17]
#define SHU4_B1_DQ7_R_DMTX_ARPI_CG_DQS_NEW_B1              Fld(1, 18) //[18:18]
#define SHU4_B1_DQ7_R_DMTX_ARPI_CG_DQM_NEW_B1              Fld(1, 19) //[19:19]
#define SHU4_B1_DQ7_R_LP4Y_SDN_MODE_DQS1                   Fld(1, 20) //[20:20]
#define SHU4_B1_DQ7_R_DMRXRANK_DQ_EN_B1                    Fld(1, 24) //[24:24]
#define SHU4_B1_DQ7_R_DMRXRANK_DQ_LAT_B1                   Fld(3, 25) //[27:25]
#define SHU4_B1_DQ7_R_DMRXRANK_DQS_EN_B1                   Fld(1, 28) //[28:28]
#define SHU4_B1_DQ7_R_DMRXRANK_DQS_LAT_B1                  Fld(3, 29) //[31:29]

#define DDRPHY_SHU4_B1_DQ8                                 (DDRPHY_AO_BASE_ADDR + 0x1BA0)
#define SHU4_B1_DQ8_R_DMRXDVS_UPD_FORCE_CYC_B1             Fld(15, 0) //[14:0]
#define SHU4_B1_DQ8_R_DMRXDVS_UPD_FORCE_EN_B1              Fld(1, 15) //[15:15]
#define SHU4_B1_DQ8_R_DMRANK_RXDLY_PIPE_CG_IG_B1           Fld(1, 19) //[19:19]
#define SHU4_B1_DQ8_R_RMRODTEN_CG_IG_B1                    Fld(1, 20) //[20:20]
#define SHU4_B1_DQ8_R_RMRX_TOPHY_CG_IG_B1                  Fld(1, 21) //[21:21]
#define SHU4_B1_DQ8_R_DMRXDVS_RDSEL_PIPE_CG_IG_B1          Fld(1, 22) //[22:22]
#define SHU4_B1_DQ8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_B1      Fld(1, 23) //[23:23]
#define SHU4_B1_DQ8_R_DMRXDLY_CG_IG_B1                     Fld(1, 24) //[24:24]
#define SHU4_B1_DQ8_R_DMSTBEN_SYNC_CG_IG_B1                Fld(1, 25) //[25:25]
#define SHU4_B1_DQ8_R_DMDQSIEN_FLAG_SYNC_CG_IG_B1          Fld(1, 26) //[26:26]
#define SHU4_B1_DQ8_R_DMDQSIEN_FLAG_PIPE_CG_IG_B1          Fld(1, 27) //[27:27]
#define SHU4_B1_DQ8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_B1         Fld(1, 28) //[28:28]
#define SHU4_B1_DQ8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_B1     Fld(1, 29) //[29:29]
#define SHU4_B1_DQ8_R_DMRANK_PIPE_CG_IG_B1                 Fld(1, 30) //[30:30]
#define SHU4_B1_DQ8_R_DMRANK_CHG_PIPE_CG_IG_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B1_DQ9                                 (DDRPHY_AO_BASE_ADDR + 0x1BA4)
#define SHU4_B1_DQ9_RESERVED_0X1BA4                        Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B1_DQ10                                (DDRPHY_AO_BASE_ADDR + 0x1BA8)
#define SHU4_B1_DQ10_RESERVED_0X1BA8                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B1_DQ11                                (DDRPHY_AO_BASE_ADDR + 0x1BAC)
#define SHU4_B1_DQ11_RESERVED_0X1BAC                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B1_DQ12                                (DDRPHY_AO_BASE_ADDR + 0x1BB0)
#define SHU4_B1_DQ12_RESERVED_0X1BB0                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_B1_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1BB4)
#define SHU4_B1_DLL0_RG_ARPISM_MCK_SEL_B1_SHU              Fld(1, 0) //[0:0]
#define SHU4_B1_DLL0_B1_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU4_B1_DLL0_RG_ARDLL_FAST_PSJP_B1                 Fld(1, 4) //[4:4]
#define SHU4_B1_DLL0_RG_ARDLL_PHDIV_B1                     Fld(1, 9) //[9:9]
#define SHU4_B1_DLL0_RG_ARDLL_PHJUMP_EN_B1                 Fld(1, 10) //[10:10]
#define SHU4_B1_DLL0_RG_ARDLL_P_GAIN_B1                    Fld(4, 12) //[15:12]
#define SHU4_B1_DLL0_RG_ARDLL_IDLECNT_B1                   Fld(4, 16) //[19:16]
#define SHU4_B1_DLL0_RG_ARDLL_GAIN_B1                      Fld(4, 20) //[23:20]
#define SHU4_B1_DLL0_RG_ARDLL_PHDET_IN_SWAP_B1             Fld(1, 30) //[30:30]
#define SHU4_B1_DLL0_RG_ARDLL_PHDET_OUT_SEL_B1             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_B1_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1BB8)
#define SHU4_B1_DLL1_RG_ARDLL_FASTPJ_CK_SEL_B1             Fld(1, 0) //[0:0]
#define SHU4_B1_DLL1_RG_ARDLL_PS_EN_B1                     Fld(1, 1) //[1:1]
#define SHU4_B1_DLL1_RG_ARDLL_PD_CK_SEL_B1                 Fld(1, 2) //[2:2]
#define SHU4_B1_DLL1_RG_ARDQ_REV_B1                        Fld(24, 8) //[31:8]

#define DDRPHY_SHU4_CA_CMD0                                (DDRPHY_AO_BASE_ADDR + 0x1C00)
#define SHU4_CA_CMD0_RG_TX_ARCLK_PRE_EN                    Fld(1, 4) //[4:4]
#define SHU4_CA_CMD0_RG_TX_ARCLK_DRVP_PRE                  Fld(3, 8) //[10:8]
#define SHU4_CA_CMD0_RG_TX_ARCLK_DRVN_PRE                  Fld(3, 12) //[14:12]
#define SHU4_CA_CMD0_RG_CGEN_FMEM_CK_CG_DLL                Fld(1, 17) //[17:17]
#define SHU4_CA_CMD0_RG_FB_CK_MUX                          Fld(2, 18) //[19:18]
#define SHU4_CA_CMD0_RG_TX_ARCMD_PRE_EN                    Fld(1, 20) //[20:20]
#define SHU4_CA_CMD0_RG_TX_ARCMD_DRVP_PRE                  Fld(3, 24) //[26:24]
#define SHU4_CA_CMD0_RG_TX_ARCMD_DRVN_PRE                  Fld(3, 28) //[30:28]
#define SHU4_CA_CMD0_R_LP4Y_WDN_MODE_CLK                   Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_CA_CMD1                                (DDRPHY_AO_BASE_ADDR + 0x1C04)
#define SHU4_CA_CMD1_RG_TX_ARCMD_DRVP                      Fld(5, 0) //[4:0]
#define SHU4_CA_CMD1_RG_TX_ARCMD_DRVN                      Fld(5, 8) //[12:8]
#define SHU4_CA_CMD1_RG_TX_ARCMD_ODTP                      Fld(5, 16) //[20:16]
#define SHU4_CA_CMD1_RG_TX_ARCMD_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU4_CA_CMD2                                (DDRPHY_AO_BASE_ADDR + 0x1C08)
#define SHU4_CA_CMD2_RG_TX_ARCLK_DRVP                      Fld(5, 0) //[4:0]
#define SHU4_CA_CMD2_RG_TX_ARCLK_DRVN                      Fld(5, 8) //[12:8]
#define SHU4_CA_CMD2_RG_TX_ARCLK_ODTP                      Fld(5, 16) //[20:16]
#define SHU4_CA_CMD2_RG_TX_ARCLK_ODTN                      Fld(5, 24) //[28:24]

#define DDRPHY_SHU4_CA_CMD3                                (DDRPHY_AO_BASE_ADDR + 0x1C0C)
#define SHU4_CA_CMD3_RG_TX_ARCLK_PU                        Fld(2, 0) //[1:0]
#define SHU4_CA_CMD3_RG_TX_ARCLK_PU_PRE                    Fld(2, 2) //[3:2]
#define SHU4_CA_CMD3_RG_TX_ARCLK_PDB                       Fld(2, 4) //[5:4]
#define SHU4_CA_CMD3_RG_TX_ARCLK_PDB_PRE                   Fld(2, 6) //[7:6]
#define SHU4_CA_CMD3_RG_TX_ARCMD_PU                        Fld(2, 8) //[9:8]
#define SHU4_CA_CMD3_RG_TX_ARCMD_PU_PRE                    Fld(2, 10) //[11:10]
#define SHU4_CA_CMD3_RG_TX_ARCMD_PDB                       Fld(2, 12) //[13:12]
#define SHU4_CA_CMD3_RG_TX_ARCMD_PDB_PRE                   Fld(2, 14) //[15:14]

#define DDRPHY_SHU4_CA_CMD4                                (DDRPHY_AO_BASE_ADDR + 0x1C10)
#define SHU4_CA_CMD4_RG_ARPI_AA_MCK_DL_CA                  Fld(6, 0) //[5:0]
#define SHU4_CA_CMD4_RG_ARPI_AA_MCK_FB_DL_CA               Fld(6, 8) //[13:8]
#define SHU4_CA_CMD4_RG_ARPI_DA_MCK_FB_DL_CA               Fld(6, 16) //[21:16]

#define DDRPHY_SHU4_CA_CMD5                                (DDRPHY_AO_BASE_ADDR + 0x1C14)
#define SHU4_CA_CMD5_RG_RX_ARCMD_VREF_SEL                  Fld(6, 0) //[5:0]
#define SHU4_CA_CMD5_RG_RX_ARCMD_VREF_BYPASS               Fld(1, 6) //[6:6]
#define SHU4_CA_CMD5_RG_ARPI_FB_CA                         Fld(6, 8) //[13:8]
#define SHU4_CA_CMD5_RG_RX_ARCLK_DQSIEN_DLY                Fld(3, 16) //[18:16]
#define SHU4_CA_CMD5_DA_RX_ARCLK_DQSIEN_RB_DLY             Fld(1, 19) //[19:19]
#define SHU4_CA_CMD5_RG_RX_ARCLK_DVS_DLY                   Fld(3, 20) //[22:20]
#define SHU4_CA_CMD5_RG_ARPI_MCTL_CA                       Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_CA_CMD6                                (DDRPHY_AO_BASE_ADDR + 0x1C18)
#define SHU4_CA_CMD6_RG_ARPI_OFFSET_CLKIEN                 Fld(6, 0) //[5:0]
#define SHU4_CA_CMD6_RG_ARPI_RESERVE_CA                    Fld(16, 6) //[21:6]
#define SHU4_CA_CMD6_RG_ARPI_MIDPI_CAP_SEL_CA              Fld(2, 22) //[23:22]
#define SHU4_CA_CMD6_RG_ARPI_MIDPI_VTH_SEL_CA              Fld(2, 24) //[25:24]
#define SHU4_CA_CMD6_RG_ARPI_MIDPI_EN_CA                   Fld(1, 26) //[26:26]
#define SHU4_CA_CMD6_RG_ARPI_MIDPI_CKDIV4_EN_CA            Fld(1, 27) //[27:27]
#define SHU4_CA_CMD6_RG_ARPI_CAP_SEL_CA                    Fld(2, 28) //[29:28]
#define SHU4_CA_CMD6_RG_ARPI_MIDPI_BYPASS_EN_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_CA_CMD7                                (DDRPHY_AO_BASE_ADDR + 0x1C1C)
#define SHU4_CA_CMD7_R_DMRANKRXDVS_CA                      Fld(4, 0) //[3:0]
#define SHU4_CA_CMD7_R_DMRXDVS_PBYTE_FLAG_OPT_CA           Fld(1, 12) //[12:12]
#define SHU4_CA_CMD7_R_DMRODTEN_CA                         Fld(1, 15) //[15:15]
#define SHU4_CA_CMD7_R_DMARPI_CG_FB2DLL_DCM_EN_CA          Fld(1, 16) //[16:16]
#define SHU4_CA_CMD7_R_DMTX_ARPI_CG_CMD_NEW                Fld(1, 17) //[17:17]
#define SHU4_CA_CMD7_R_DMTX_ARPI_CG_CLK_NEW                Fld(1, 18) //[18:18]
#define SHU4_CA_CMD7_R_DMTX_ARPI_CG_CS_NEW                 Fld(1, 19) //[19:19]
#define SHU4_CA_CMD7_R_LP4Y_SDN_MODE_CLK                   Fld(1, 20) //[20:20]
#define SHU4_CA_CMD7_R_DMRXRANK_CMD_EN                     Fld(1, 24) //[24:24]
#define SHU4_CA_CMD7_R_DMRXRANK_CMD_LAT                    Fld(3, 25) //[27:25]
#define SHU4_CA_CMD7_R_DMRXRANK_CLK_EN                     Fld(1, 28) //[28:28]
#define SHU4_CA_CMD7_R_DMRXRANK_CLK_LAT                    Fld(3, 29) //[31:29]

#define DDRPHY_SHU4_CA_CMD8                                (DDRPHY_AO_BASE_ADDR + 0x1C20)
#define SHU4_CA_CMD8_R_DMRXDVS_UPD_FORCE_CYC_CA            Fld(15, 0) //[14:0]
#define SHU4_CA_CMD8_R_DMRXDVS_UPD_FORCE_EN_CA             Fld(1, 15) //[15:15]
#define SHU4_CA_CMD8_R_DMRANK_RXDLY_PIPE_CG_IG_CA          Fld(1, 19) //[19:19]
#define SHU4_CA_CMD8_R_RMRODTEN_CG_IG_CA                   Fld(1, 20) //[20:20]
#define SHU4_CA_CMD8_R_RMRX_TOPHY_CG_IG_CA                 Fld(1, 21) //[21:21]
#define SHU4_CA_CMD8_R_DMRXDVS_RDSEL_PIPE_CG_IG_CA         Fld(1, 22) //[22:22]
#define SHU4_CA_CMD8_R_DMRXDVS_RDSEL_TOG_PIPE_CG_IG_CA     Fld(1, 23) //[23:23]
#define SHU4_CA_CMD8_R_DMRXDLY_CG_IG_CA                    Fld(1, 24) //[24:24]
#define SHU4_CA_CMD8_R_DMSTBEN_SYNC_CG_IG_CA               Fld(1, 25) //[25:25]
#define SHU4_CA_CMD8_R_DMDQSIEN_FLAG_SYNC_CG_IG_CA         Fld(1, 26) //[26:26]
#define SHU4_CA_CMD8_R_DMDQSIEN_FLAG_PIPE_CG_IG_CA         Fld(1, 27) //[27:27]
#define SHU4_CA_CMD8_R_DMDQSIEN_RDSEL_PIPE_CG_IG_CA        Fld(1, 28) //[28:28]
#define SHU4_CA_CMD8_R_DMDQSIEN_RDSEL_TOG_PIPE_CG_IG_CA    Fld(1, 29) //[29:29]
#define SHU4_CA_CMD8_R_DMRANK_PIPE_CG_IG_CA                Fld(1, 30) //[30:30]
#define SHU4_CA_CMD8_R_DMRANK_CHG_PIPE_CG_IG_CA            Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_CA_CMD9                                (DDRPHY_AO_BASE_ADDR + 0x1C24)
#define SHU4_CA_CMD9_RESERVED_0X1C24                       Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_CA_CMD10                               (DDRPHY_AO_BASE_ADDR + 0x1C28)
#define SHU4_CA_CMD10_RESERVED_0X1C28                      Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_CA_CMD11                               (DDRPHY_AO_BASE_ADDR + 0x1C2C)
#define SHU4_CA_CMD11_RG_RIMP_REV                          Fld(8, 0) //[7:0]
#define SHU4_CA_CMD11_RG_RIMP_VREF_SEL                     Fld(6, 8) //[13:8]
#define SHU4_CA_CMD11_RG_TX_ARCKE_DRVP                     Fld(5, 17) //[21:17]
#define SHU4_CA_CMD11_RG_TX_ARCKE_DRVN                     Fld(5, 22) //[26:22]

#define DDRPHY_SHU4_CA_CMD12                               (DDRPHY_AO_BASE_ADDR + 0x1C30)
#define SHU4_CA_CMD12_RESERVED_0X1C30                      Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_CA_DLL0                                (DDRPHY_AO_BASE_ADDR + 0x1C34)
#define SHU4_CA_DLL0_RG_ARPISM_MCK_SEL_CA_SHU              Fld(1, 0) //[0:0]
#define SHU4_CA_DLL0_CA_DLL0_RFU                           Fld(1, 3) //[3:3]
#define SHU4_CA_DLL0_RG_ARDLL_FAST_PSJP_CA                 Fld(1, 4) //[4:4]
#define SHU4_CA_DLL0_RG_ARDLL_PHDIV_CA                     Fld(1, 9) //[9:9]
#define SHU4_CA_DLL0_RG_ARDLL_PHJUMP_EN_CA                 Fld(1, 10) //[10:10]
#define SHU4_CA_DLL0_RG_ARDLL_P_GAIN_CA                    Fld(4, 12) //[15:12]
#define SHU4_CA_DLL0_RG_ARDLL_IDLECNT_CA                   Fld(4, 16) //[19:16]
#define SHU4_CA_DLL0_RG_ARDLL_GAIN_CA                      Fld(4, 20) //[23:20]
#define SHU4_CA_DLL0_RG_ARDLL_PHDET_IN_SWAP_CA             Fld(1, 30) //[30:30]
#define SHU4_CA_DLL0_RG_ARDLL_PHDET_OUT_SEL_CA             Fld(1, 31) //[31:31]

#define DDRPHY_SHU4_CA_DLL1                                (DDRPHY_AO_BASE_ADDR + 0x1C38)
#define SHU4_CA_DLL1_RG_ARDLL_FASTPJ_CK_SEL_CA             Fld(1, 0) //[0:0]
#define SHU4_CA_DLL1_RG_ARDLL_PS_EN_CA                     Fld(1, 1) //[1:1]
#define SHU4_CA_DLL1_RG_ARDLL_PD_CK_SEL_CA                 Fld(1, 2) //[2:2]
#define SHU4_CA_DLL1_RG_ARCMD_REV                          Fld(24, 8) //[31:8]

#define DDRPHY_SHU4_MISC0                                  (DDRPHY_AO_BASE_ADDR + 0x1CF0)
#define SHU4_MISC0_RG_RVREF_SEL_DQ                         Fld(6, 16) //[21:16]
#define SHU4_MISC0_RG_RVREF_DDR4_SEL                       Fld(1, 22) //[22:22]
#define SHU4_MISC0_RG_RVREF_DDR3_SEL                       Fld(1, 23) //[23:23]
#define SHU4_MISC0_RG_RVREF_SEL_CMD                        Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1D00)
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU4_R0_B0_DQ0_RK0_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R0_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1D04)
#define SHU4_R0_B0_DQ1_RK0_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU4_R0_B0_DQ1_RK0_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU4_R0_B0_DQ1_RK0_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU4_R0_B0_DQ1_RK0_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU4_R0_B0_DQ1_RK0_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R0_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1D08)
#define SHU4_R0_B0_DQ2_RK0_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R0_B0_DQ2_RK0_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R0_B0_DQ2_RK0_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R0_B0_DQ2_RK0_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1D0C)
#define SHU4_R0_B0_DQ3_RK0_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R0_B0_DQ3_RK0_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R0_B0_DQ3_RK0_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R0_B0_DQ3_RK0_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1D10)
#define SHU4_R0_B0_DQ4_RK0_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R0_B0_DQ4_RK0_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R0_B0_DQ4_RK0_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R0_B0_DQ4_RK0_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1D14)
#define SHU4_R0_B0_DQ5_RK0_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R0_B0_DQ5_RK0_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R0_B0_DQ5_RK0_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R0_B0_DQ5_RK0_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1D18)
#define SHU4_R0_B0_DQ6_RK0_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU4_R0_B0_DQ6_RK0_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU4_R0_B0_DQ6_RK0_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU4_R0_B0_DQ6_RK0_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R0_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1D1C)
#define SHU4_R0_B0_DQ7_RK0_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU4_R0_B0_DQ7_RK0_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU4_R0_B0_DQ7_RK0_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1D20                                  (DDRPHY_AO_BASE_ADDR + 0x1D20)
#define RFU_0X1D20_RESERVED_0X1D20                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D24                                  (DDRPHY_AO_BASE_ADDR + 0x1D24)
#define RFU_0X1D24_RESERVED_0X1D24                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D28                                  (DDRPHY_AO_BASE_ADDR + 0x1D28)
#define RFU_0X1D28_RESERVED_0X1D28                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D2C                                  (DDRPHY_AO_BASE_ADDR + 0x1D2C)
#define RFU_0X1D2C_RESERVED_0X1D2C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R0_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1D50)
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU4_R0_B1_DQ0_RK0_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R0_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1D54)
#define SHU4_R0_B1_DQ1_RK0_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU4_R0_B1_DQ1_RK0_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU4_R0_B1_DQ1_RK0_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU4_R0_B1_DQ1_RK0_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU4_R0_B1_DQ1_RK0_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R0_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1D58)
#define SHU4_R0_B1_DQ2_RK0_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R0_B1_DQ2_RK0_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R0_B1_DQ2_RK0_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R0_B1_DQ2_RK0_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1D5C)
#define SHU4_R0_B1_DQ3_RK0_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R0_B1_DQ3_RK0_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R0_B1_DQ3_RK0_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R0_B1_DQ3_RK0_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1D60)
#define SHU4_R0_B1_DQ4_RK0_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R0_B1_DQ4_RK0_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R0_B1_DQ4_RK0_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R0_B1_DQ4_RK0_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1D64)
#define SHU4_R0_B1_DQ5_RK0_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R0_B1_DQ5_RK0_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R0_B1_DQ5_RK0_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R0_B1_DQ5_RK0_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1D68)
#define SHU4_R0_B1_DQ6_RK0_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU4_R0_B1_DQ6_RK0_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU4_R0_B1_DQ6_RK0_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU4_R0_B1_DQ6_RK0_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R0_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1D6C)
#define SHU4_R0_B1_DQ7_RK0_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU4_R0_B1_DQ7_RK0_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU4_R0_B1_DQ7_RK0_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1D70                                  (DDRPHY_AO_BASE_ADDR + 0x1D70)
#define RFU_0X1D70_RESERVED_0X1D70                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D74                                  (DDRPHY_AO_BASE_ADDR + 0x1D74)
#define RFU_0X1D74_RESERVED_0X1D74                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D78                                  (DDRPHY_AO_BASE_ADDR + 0x1D78)
#define RFU_0X1D78_RESERVED_0X1D78                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1D7C                                  (DDRPHY_AO_BASE_ADDR + 0x1D7C)
#define RFU_0X1D7C_RESERVED_0X1D7C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R0_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x1DA0)
#define SHU4_R0_CA_CMD0_RK0_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU4_R0_CA_CMD0_RK0_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R0_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x1DA4)
#define SHU4_R0_CA_CMD1_RK0_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU4_R0_CA_CMD1_RK0_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R0_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x1DA8)
#define SHU4_R0_CA_CMD2_RG_RK0_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD2_RG_RK0_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD2_RG_RK0_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R0_CA_CMD2_RG_RK0_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x1DAC)
#define SHU4_R0_CA_CMD3_RG_RK0_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD3_RG_RK0_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD3_RG_RK0_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R0_CA_CMD3_RG_RK0_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x1DB0)
#define SHU4_R0_CA_CMD4_RG_RK0_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD4_RG_RK0_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD4_RG_RK0_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R0_CA_CMD4_RG_RK0_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x1DB4)
#define SHU4_R0_CA_CMD5_RG_RK0_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD5_RG_RK0_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD5_RG_RK0_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU4_R0_CA_CMD5_RG_RK0_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x1DB8)
#define SHU4_R0_CA_CMD6_RG_RK0_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD6_RG_RK0_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD6_RG_RK0_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R0_CA_CMD6_RG_RK0_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x1DBC)
#define SHU4_R0_CA_CMD7_RG_RK0_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD7_RG_RK0_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD7_RG_RK0_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R0_CA_CMD7_RG_RK0_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R0_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x1DC0)
#define SHU4_R0_CA_CMD8_RG_RK0_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU4_R0_CA_CMD8_RG_RK0_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R0_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x1DC4)
#define SHU4_R0_CA_CMD9_RG_RK0_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU4_R0_CA_CMD9_RG_RK0_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU4_R0_CA_CMD9_RG_RK0_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1DC8                                  (DDRPHY_AO_BASE_ADDR + 0x1DC8)
#define RFU_0X1DC8_RESERVED_0X1DC8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1DCC                                  (DDRPHY_AO_BASE_ADDR + 0x1DCC)
#define RFU_0X1DCC_RESERVED_0X1DCC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R1_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1E00)
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU4_R1_B0_DQ0_RK1_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R1_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1E04)
#define SHU4_R1_B0_DQ1_RK1_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU4_R1_B0_DQ1_RK1_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU4_R1_B0_DQ1_RK1_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU4_R1_B0_DQ1_RK1_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU4_R1_B0_DQ1_RK1_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R1_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1E08)
#define SHU4_R1_B0_DQ2_RK1_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R1_B0_DQ2_RK1_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R1_B0_DQ2_RK1_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R1_B0_DQ2_RK1_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1E0C)
#define SHU4_R1_B0_DQ3_RK1_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R1_B0_DQ3_RK1_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R1_B0_DQ3_RK1_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R1_B0_DQ3_RK1_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1E10)
#define SHU4_R1_B0_DQ4_RK1_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R1_B0_DQ4_RK1_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R1_B0_DQ4_RK1_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R1_B0_DQ4_RK1_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1E14)
#define SHU4_R1_B0_DQ5_RK1_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R1_B0_DQ5_RK1_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R1_B0_DQ5_RK1_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R1_B0_DQ5_RK1_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1E18)
#define SHU4_R1_B0_DQ6_RK1_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU4_R1_B0_DQ6_RK1_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU4_R1_B0_DQ6_RK1_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU4_R1_B0_DQ6_RK1_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R1_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1E1C)
#define SHU4_R1_B0_DQ7_RK1_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU4_R1_B0_DQ7_RK1_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU4_R1_B0_DQ7_RK1_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1E20                                  (DDRPHY_AO_BASE_ADDR + 0x1E20)
#define RFU_0X1E20_RESERVED_0X1E20                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1E24                                  (DDRPHY_AO_BASE_ADDR + 0x1E24)
#define RFU_0X1E24_RESERVED_0X1E24                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1E28                                  (DDRPHY_AO_BASE_ADDR + 0x1E28)
#define RFU_0X1E28_RESERVED_0X1E28                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1E2C                                  (DDRPHY_AO_BASE_ADDR + 0x1E2C)
#define RFU_0X1E2C_RESERVED_0X1E2C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R1_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1E50)
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU4_R1_B1_DQ0_RK1_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R1_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1E54)
#define SHU4_R1_B1_DQ1_RK1_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU4_R1_B1_DQ1_RK1_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU4_R1_B1_DQ1_RK1_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU4_R1_B1_DQ1_RK1_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU4_R1_B1_DQ1_RK1_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R1_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1E58)
#define SHU4_R1_B1_DQ2_RK1_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R1_B1_DQ2_RK1_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R1_B1_DQ2_RK1_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R1_B1_DQ2_RK1_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1E5C)
#define SHU4_R1_B1_DQ3_RK1_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R1_B1_DQ3_RK1_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R1_B1_DQ3_RK1_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R1_B1_DQ3_RK1_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1E60)
#define SHU4_R1_B1_DQ4_RK1_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R1_B1_DQ4_RK1_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R1_B1_DQ4_RK1_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R1_B1_DQ4_RK1_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1E64)
#define SHU4_R1_B1_DQ5_RK1_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R1_B1_DQ5_RK1_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R1_B1_DQ5_RK1_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R1_B1_DQ5_RK1_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1E68)
#define SHU4_R1_B1_DQ6_RK1_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU4_R1_B1_DQ6_RK1_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU4_R1_B1_DQ6_RK1_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU4_R1_B1_DQ6_RK1_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R1_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1E6C)
#define SHU4_R1_B1_DQ7_RK1_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU4_R1_B1_DQ7_RK1_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU4_R1_B1_DQ7_RK1_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1E70                                  (DDRPHY_AO_BASE_ADDR + 0x1E70)
#define RFU_0X1E70_RESERVED_0X1E70                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1E74                                  (DDRPHY_AO_BASE_ADDR + 0x1E74)
#define RFU_0X1E74_RESERVED_0X1E74                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1E78                                  (DDRPHY_AO_BASE_ADDR + 0x1E78)
#define RFU_0X1E78_RESERVED_0X1E78                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1E7C                                  (DDRPHY_AO_BASE_ADDR + 0x1E7C)
#define RFU_0X1E7C_RESERVED_0X1E7C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R1_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x1EA0)
#define SHU4_R1_CA_CMD0_RK1_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU4_R1_CA_CMD0_RK1_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R1_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x1EA4)
#define SHU4_R1_CA_CMD1_RK1_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU4_R1_CA_CMD1_RK1_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R1_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x1EA8)
#define SHU4_R1_CA_CMD2_RG_RK1_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD2_RG_RK1_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD2_RG_RK1_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R1_CA_CMD2_RG_RK1_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x1EAC)
#define SHU4_R1_CA_CMD3_RG_RK1_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD3_RG_RK1_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD3_RG_RK1_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R1_CA_CMD3_RG_RK1_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x1EB0)
#define SHU4_R1_CA_CMD4_RG_RK1_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD4_RG_RK1_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD4_RG_RK1_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R1_CA_CMD4_RG_RK1_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x1EB4)
#define SHU4_R1_CA_CMD5_RG_RK1_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD5_RG_RK1_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD5_RG_RK1_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU4_R1_CA_CMD5_RG_RK1_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x1EB8)
#define SHU4_R1_CA_CMD6_RG_RK1_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD6_RG_RK1_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD6_RG_RK1_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R1_CA_CMD6_RG_RK1_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x1EBC)
#define SHU4_R1_CA_CMD7_RG_RK1_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD7_RG_RK1_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD7_RG_RK1_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R1_CA_CMD7_RG_RK1_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R1_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x1EC0)
#define SHU4_R1_CA_CMD8_RG_RK1_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU4_R1_CA_CMD8_RG_RK1_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R1_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x1EC4)
#define SHU4_R1_CA_CMD9_RG_RK1_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU4_R1_CA_CMD9_RG_RK1_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU4_R1_CA_CMD9_RG_RK1_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1EC8                                  (DDRPHY_AO_BASE_ADDR + 0x1EC8)
#define RFU_0X1EC8_RESERVED_0X1EC8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1ECC                                  (DDRPHY_AO_BASE_ADDR + 0x1ECC)
#define RFU_0X1ECC_RESERVED_0X1ECC                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R2_B0_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1F00)
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ0_DLY_B0                 Fld(4, 0) //[3:0]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ1_DLY_B0                 Fld(4, 4) //[7:4]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ2_DLY_B0                 Fld(4, 8) //[11:8]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ3_DLY_B0                 Fld(4, 12) //[15:12]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ4_DLY_B0                 Fld(4, 16) //[19:16]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ5_DLY_B0                 Fld(4, 20) //[23:20]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ6_DLY_B0                 Fld(4, 24) //[27:24]
#define SHU4_R2_B0_DQ0_RK2_TX_ARDQ7_DLY_B0                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R2_B0_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1F04)
#define SHU4_R2_B0_DQ1_RK2_TX_ARDQM0_DLY_B0                Fld(4, 0) //[3:0]
#define SHU4_R2_B0_DQ1_RK2_TX_ARDQS0_DLYB_B0               Fld(4, 16) //[19:16]
#define SHU4_R2_B0_DQ1_RK2_TX_ARDQS0B_DLYB_B0              Fld(4, 20) //[23:20]
#define SHU4_R2_B0_DQ1_RK2_TX_ARDQS0_DLY_B0                Fld(4, 24) //[27:24]
#define SHU4_R2_B0_DQ1_RK2_TX_ARDQS0B_DLY_B0               Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R2_B0_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1F08)
#define SHU4_R2_B0_DQ2_RK2_RX_ARDQ0_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R2_B0_DQ2_RK2_RX_ARDQ0_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R2_B0_DQ2_RK2_RX_ARDQ1_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R2_B0_DQ2_RK2_RX_ARDQ1_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B0_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1F0C)
#define SHU4_R2_B0_DQ3_RK2_RX_ARDQ2_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R2_B0_DQ3_RK2_RX_ARDQ2_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R2_B0_DQ3_RK2_RX_ARDQ3_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R2_B0_DQ3_RK2_RX_ARDQ3_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B0_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1F10)
#define SHU4_R2_B0_DQ4_RK2_RX_ARDQ4_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R2_B0_DQ4_RK2_RX_ARDQ4_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R2_B0_DQ4_RK2_RX_ARDQ5_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R2_B0_DQ4_RK2_RX_ARDQ5_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B0_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1F14)
#define SHU4_R2_B0_DQ5_RK2_RX_ARDQ6_R_DLY_B0               Fld(6, 0) //[5:0]
#define SHU4_R2_B0_DQ5_RK2_RX_ARDQ6_F_DLY_B0               Fld(6, 8) //[13:8]
#define SHU4_R2_B0_DQ5_RK2_RX_ARDQ7_R_DLY_B0               Fld(6, 16) //[21:16]
#define SHU4_R2_B0_DQ5_RK2_RX_ARDQ7_F_DLY_B0               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B0_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1F18)
#define SHU4_R2_B0_DQ6_RK2_RX_ARDQM0_R_DLY_B0              Fld(6, 0) //[5:0]
#define SHU4_R2_B0_DQ6_RK2_RX_ARDQM0_F_DLY_B0              Fld(6, 8) //[13:8]
#define SHU4_R2_B0_DQ6_RK2_RX_ARDQS0_R_DLY_B0              Fld(7, 16) //[22:16]
#define SHU4_R2_B0_DQ6_RK2_RX_ARDQS0_F_DLY_B0              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R2_B0_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1F1C)
#define SHU4_R2_B0_DQ7_RK2_ARPI_DQ_B0                      Fld(6, 8) //[13:8]
#define SHU4_R2_B0_DQ7_RK2_ARPI_DQM_B0                     Fld(6, 16) //[21:16]
#define SHU4_R2_B0_DQ7_RK2_ARPI_PBYTE_B0                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1F20                                  (DDRPHY_AO_BASE_ADDR + 0x1F20)
#define RFU_0X1F20_RESERVED_0X1F20                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1F24                                  (DDRPHY_AO_BASE_ADDR + 0x1F24)
#define RFU_0X1F24_RESERVED_0X1F24                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1F28                                  (DDRPHY_AO_BASE_ADDR + 0x1F28)
#define RFU_0X1F28_RESERVED_0X1F28                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1F2C                                  (DDRPHY_AO_BASE_ADDR + 0x1F2C)
#define RFU_0X1F2C_RESERVED_0X1F2C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R2_B1_DQ0                              (DDRPHY_AO_BASE_ADDR + 0x1F50)
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ0_DLY_B1                 Fld(4, 0) //[3:0]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ1_DLY_B1                 Fld(4, 4) //[7:4]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ2_DLY_B1                 Fld(4, 8) //[11:8]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ3_DLY_B1                 Fld(4, 12) //[15:12]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ4_DLY_B1                 Fld(4, 16) //[19:16]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ5_DLY_B1                 Fld(4, 20) //[23:20]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ6_DLY_B1                 Fld(4, 24) //[27:24]
#define SHU4_R2_B1_DQ0_RK2_TX_ARDQ7_DLY_B1                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R2_B1_DQ1                              (DDRPHY_AO_BASE_ADDR + 0x1F54)
#define SHU4_R2_B1_DQ1_RK2_TX_ARDQM0_DLY_B1                Fld(4, 0) //[3:0]
#define SHU4_R2_B1_DQ1_RK2_TX_ARDQS0_DLYB_B1               Fld(4, 16) //[19:16]
#define SHU4_R2_B1_DQ1_RK2_TX_ARDQS0B_DLYB_B1              Fld(4, 20) //[23:20]
#define SHU4_R2_B1_DQ1_RK2_TX_ARDQS0_DLY_B1                Fld(4, 24) //[27:24]
#define SHU4_R2_B1_DQ1_RK2_TX_ARDQS0B_DLY_B1               Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R2_B1_DQ2                              (DDRPHY_AO_BASE_ADDR + 0x1F58)
#define SHU4_R2_B1_DQ2_RK2_RX_ARDQ0_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R2_B1_DQ2_RK2_RX_ARDQ0_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R2_B1_DQ2_RK2_RX_ARDQ1_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R2_B1_DQ2_RK2_RX_ARDQ1_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B1_DQ3                              (DDRPHY_AO_BASE_ADDR + 0x1F5C)
#define SHU4_R2_B1_DQ3_RK2_RX_ARDQ2_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R2_B1_DQ3_RK2_RX_ARDQ2_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R2_B1_DQ3_RK2_RX_ARDQ3_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R2_B1_DQ3_RK2_RX_ARDQ3_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B1_DQ4                              (DDRPHY_AO_BASE_ADDR + 0x1F60)
#define SHU4_R2_B1_DQ4_RK2_RX_ARDQ4_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R2_B1_DQ4_RK2_RX_ARDQ4_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R2_B1_DQ4_RK2_RX_ARDQ5_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R2_B1_DQ4_RK2_RX_ARDQ5_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B1_DQ5                              (DDRPHY_AO_BASE_ADDR + 0x1F64)
#define SHU4_R2_B1_DQ5_RK2_RX_ARDQ6_R_DLY_B1               Fld(6, 0) //[5:0]
#define SHU4_R2_B1_DQ5_RK2_RX_ARDQ6_F_DLY_B1               Fld(6, 8) //[13:8]
#define SHU4_R2_B1_DQ5_RK2_RX_ARDQ7_R_DLY_B1               Fld(6, 16) //[21:16]
#define SHU4_R2_B1_DQ5_RK2_RX_ARDQ7_F_DLY_B1               Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_B1_DQ6                              (DDRPHY_AO_BASE_ADDR + 0x1F68)
#define SHU4_R2_B1_DQ6_RK2_RX_ARDQM0_R_DLY_B1              Fld(6, 0) //[5:0]
#define SHU4_R2_B1_DQ6_RK2_RX_ARDQM0_F_DLY_B1              Fld(6, 8) //[13:8]
#define SHU4_R2_B1_DQ6_RK2_RX_ARDQS0_R_DLY_B1              Fld(7, 16) //[22:16]
#define SHU4_R2_B1_DQ6_RK2_RX_ARDQS0_F_DLY_B1              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R2_B1_DQ7                              (DDRPHY_AO_BASE_ADDR + 0x1F6C)
#define SHU4_R2_B1_DQ7_RK2_ARPI_DQ_B1                      Fld(6, 8) //[13:8]
#define SHU4_R2_B1_DQ7_RK2_ARPI_DQM_B1                     Fld(6, 16) //[21:16]
#define SHU4_R2_B1_DQ7_RK2_ARPI_PBYTE_B1                   Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1F70                                  (DDRPHY_AO_BASE_ADDR + 0x1F70)
#define RFU_0X1F70_RESERVED_0X1F70                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1F74                                  (DDRPHY_AO_BASE_ADDR + 0x1F74)
#define RFU_0X1F74_RESERVED_0X1F74                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1F78                                  (DDRPHY_AO_BASE_ADDR + 0x1F78)
#define RFU_0X1F78_RESERVED_0X1F78                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1F7C                                  (DDRPHY_AO_BASE_ADDR + 0x1F7C)
#define RFU_0X1F7C_RESERVED_0X1F7C                         Fld(32, 0) //[31:0]

#define DDRPHY_SHU4_R2_CA_CMD0                             (DDRPHY_AO_BASE_ADDR + 0x1FA0)
#define SHU4_R2_CA_CMD0_RK2_TX_ARCA0_DLY                   Fld(4, 0) //[3:0]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCA1_DLY                   Fld(4, 4) //[7:4]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCA2_DLY                   Fld(4, 8) //[11:8]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCA3_DLY                   Fld(4, 12) //[15:12]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCA4_DLY                   Fld(4, 16) //[19:16]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCA5_DLY                   Fld(4, 20) //[23:20]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCLK_DLYB                  Fld(4, 24) //[27:24]
#define SHU4_R2_CA_CMD0_RK2_TX_ARCLKB_DLYB                 Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R2_CA_CMD1                             (DDRPHY_AO_BASE_ADDR + 0x1FA4)
#define SHU4_R2_CA_CMD1_RK2_TX_ARCKE0_DLY                  Fld(4, 0) //[3:0]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCKE1_DLY                  Fld(4, 4) //[7:4]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCKE2_DLY                  Fld(4, 8) //[11:8]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCS0_DLY                   Fld(4, 12) //[15:12]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCS1_DLY                   Fld(4, 16) //[19:16]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCS2_DLY                   Fld(4, 20) //[23:20]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCLK_DLY                   Fld(4, 24) //[27:24]
#define SHU4_R2_CA_CMD1_RK2_TX_ARCLKB_DLY                  Fld(4, 28) //[31:28]

#define DDRPHY_SHU4_R2_CA_CMD2                             (DDRPHY_AO_BASE_ADDR + 0x1FA8)
#define SHU4_R2_CA_CMD2_RG_RK2_RX_ARCA0_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD2_RG_RK2_RX_ARCA0_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD2_RG_RK2_RX_ARCA1_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R2_CA_CMD2_RG_RK2_RX_ARCA1_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_CA_CMD3                             (DDRPHY_AO_BASE_ADDR + 0x1FAC)
#define SHU4_R2_CA_CMD3_RG_RK2_RX_ARCA2_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD3_RG_RK2_RX_ARCA2_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD3_RG_RK2_RX_ARCA3_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R2_CA_CMD3_RG_RK2_RX_ARCA3_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_CA_CMD4                             (DDRPHY_AO_BASE_ADDR + 0x1FB0)
#define SHU4_R2_CA_CMD4_RG_RK2_RX_ARCA4_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD4_RG_RK2_RX_ARCA4_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD4_RG_RK2_RX_ARCA5_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R2_CA_CMD4_RG_RK2_RX_ARCA5_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_CA_CMD5                             (DDRPHY_AO_BASE_ADDR + 0x1FB4)
#define SHU4_R2_CA_CMD5_RG_RK2_RX_ARCKE0_R_DLY             Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD5_RG_RK2_RX_ARCKE0_F_DLY             Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD5_RG_RK2_RX_ARCKE1_R_DLY             Fld(6, 16) //[21:16]
#define SHU4_R2_CA_CMD5_RG_RK2_RX_ARCKE1_F_DLY             Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_CA_CMD6                             (DDRPHY_AO_BASE_ADDR + 0x1FB8)
#define SHU4_R2_CA_CMD6_RG_RK2_RX_ARCKE2_R_DLY             Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD6_RG_RK2_RX_ARCKE2_F_DLY             Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD6_RG_RK2_RX_ARCS0_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R2_CA_CMD6_RG_RK2_RX_ARCS0_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_CA_CMD7                             (DDRPHY_AO_BASE_ADDR + 0x1FBC)
#define SHU4_R2_CA_CMD7_RG_RK2_RX_ARCS1_R_DLY              Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD7_RG_RK2_RX_ARCS1_F_DLY              Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD7_RG_RK2_RX_ARCS2_R_DLY              Fld(6, 16) //[21:16]
#define SHU4_R2_CA_CMD7_RG_RK2_RX_ARCS2_F_DLY              Fld(6, 24) //[29:24]

#define DDRPHY_SHU4_R2_CA_CMD8                             (DDRPHY_AO_BASE_ADDR + 0x1FC0)
#define SHU4_R2_CA_CMD8_RG_RK2_RX_ARCLK_R_DLY              Fld(7, 16) //[22:16]
#define SHU4_R2_CA_CMD8_RG_RK2_RX_ARCLK_F_DLY              Fld(7, 24) //[30:24]

#define DDRPHY_SHU4_R2_CA_CMD9                             (DDRPHY_AO_BASE_ADDR + 0x1FC4)
#define SHU4_R2_CA_CMD9_RG_RK2_ARPI_CS                     Fld(6, 0) //[5:0]
#define SHU4_R2_CA_CMD9_RG_RK2_ARPI_CMD                    Fld(6, 8) //[13:8]
#define SHU4_R2_CA_CMD9_RG_RK2_ARPI_CLK                    Fld(6, 24) //[29:24]

#define DDRPHY_RFU_0X1FC8                                  (DDRPHY_AO_BASE_ADDR + 0x1FC8)
#define RFU_0X1FC8_RESERVED_0X1FC8                         Fld(32, 0) //[31:0]

#define DDRPHY_RFU_0X1FCC                                  (DDRPHY_AO_BASE_ADDR + 0x1FCC)
#define RFU_0X1FCC_RESERVED_0X1FCC                         Fld(32, 0) //[31:0]

//Reg reserved
//DDRPHY_SHU1_B0_DLL1
//DDRPHY_SHU1_B1_DLL1
#define RG_ARDQ_REV_BIT_23_NA Fld(1,31)//[31:31]
#define RG_ARDQ_REV_BIT_2221_DATA_SWAP Fld(2,29)//[30:29]
#define RG_ARDQ_REV_BIT_20_DATA_SWAP_EN Fld(1,28)//[28:28]
#define RG_ARDQ_REV_BIT_19_RX_DQSIEN_FORCE_ON_EN Fld(1,27)//[27:27]
#define RG_ARDQ_REV_BIT_18_RX_LP4Y_EN Fld(1,26)//[26:26]
#define RG_ARDQ_REV_BIT_1716_TX_LP4Y_SEL Fld(2,24)//[25:24]
#define RG_ARDQ_REV_BIT_15_TX_PRE_EN Fld(1,23)//[23:23]
#define RG_ARDQ_REV_BIT_14_TX_PRE_DATA_SEL Fld(1,22)//[22:22]
#define RG_ARDQ_REV_BIT_1312_DRVP_PRE Fld(2,20)//[21:20]
#define RG_ARDQ_REV_BIT_1110_DRVN_PRE Fld(2,18)//[19:18]
#define RG_ARDQ_REV_BIT_09_TX_READ_BASE_EN Fld(1,17)//[17:17]
#define RG_ARDQ_REV_BIT_08_TX_ODT_DISABLE Fld(1,16)//[16:16]
#define RG_ARDQ_REV_BIT_07_MCK4X_SEL_DQ5 Fld(1,15)//[15:15]
#define RG_ARDQ_REV_BIT_06_MCK4X_SEL_DQ1 Fld(1,14)//[14:14]
#define RG_ARDQ_REV_BIT_05_RX_SER_RST_MODE Fld(1,13)//[13:13]
#define RG_ARDQ_REV_BIT_04_RX_DQSIEN_RB_DLY Fld(1,12)//[12:12]
#define RG_ARDQ_REV_BIT_03_RX_DQS_GATE_EN_MODE Fld(1,11)//[11:11]
#define RG_ARDQ_REV_BIT_02_TX_READ_BASE_EN_DQSB Fld(1,10)//[10:10]
#define RG_ARDQ_REV_BIT_01_DQS_MCK4XB_DLY_EN Fld(1,9)//[9:9]
#define RG_ARDQ_REV_BIT_00_DQS_MCK4X_DLY_EN Fld(1,8)//[8:8]

//DDRPHY_SHU1_CA_DLL1
#define RG_ARCMD_REV_BIT_23_NA Fld(1,31)//[31:31]
#define RG_ARCMD_REV_BIT_2221_DATA_SWAP Fld(2,29)//[30:29]
#define RG_ARCMD_REV_BIT_20_DATA_SWAP_EN Fld(1,28)//[28:28]
#define RG_ARCMD_REV_BIT_19_RX_DQSIEN_FORCE_ON_EN Fld(1,27)//[27:27]
#define RG_ARCMD_REV_BIT_18_RX_LP4Y_EN Fld(1,26)//[26:26]
#define RG_ARCMD_REV_BIT_1716_TX_LP4Y_SEL Fld(2,24)//[25:24]
#define RG_ARCMD_REV_BIT_15_TX_DDR4P_CKE_SEL Fld(1,23)//[23:23]
#define RG_ARCMD_REV_BIT_14_TX_DDR4_CKE_SEL Fld(1,22)//[22:22]
#define RG_ARCMD_REV_BIT_13_TX_DDR3_CKE_SEL Fld(1,21)//[21:21]
#define RG_ARCMD_REV_BIT_1208_TX_CKE_DRVN Fld(5,16)//[20:16]
#define RG_ARCMD_REV_BIT_07_MCK4X_SEL_CKE1 Fld(1,15)//[15:15]
#define RG_ARCMD_REV_BIT_06_MCK4X_SEL_CKE0 Fld(1,14)//[14:14]
#define RG_ARCMD_REV_BIT_05_RX_SER_RST_MODE Fld(1,13)//[13:13]
#define RG_ARCMD_REV_BIT_04_RX_DQSIEN_RB_DLY Fld(1,12)//[12:12]
#define RG_ARCMD_REV_BIT_03_RX_DQS_GATE_EN_MODE Fld(1,11)//[11:11]
#define RG_ARCMD_REV_BIT_02_TX_LSH_DQM_CG_EN Fld(1,10)//[10:10]
#define RG_ARCMD_REV_BIT_01_TX_LSH_DQS_CG_EN Fld(1,9)//[9:9]
#define RG_ARCMD_REV_BIT_00_TX_LSH_DQ_CG_EN Fld(1,8)//[8:8]

//DDRPHY_SHU1_CA_CMD6
//DDRPHY_SHU1_B0_DQ6
//DDRPHY_SHU1_B1_DQ6
#define RG_ARPI_RESERVE_BIT_15_PSMUX_DRV_SEL Fld(1,21)//[21:21]
#define RG_ARPI_RESERVE_BIT_14_LP3_SEL Fld(1,20)//[20:20]
#define RG_ARPI_RESERVE_BIT_13_CG_SYNC_ENB Fld(1,19)//[19:19]
#define RG_ARPI_RESERVE_BIT_12_BYPASS_SR_DQS Fld(1,18)//[18:18]
#define RG_ARPI_RESERVE_BIT_11_BYPASS_SR Fld(1,17)//[17:17]
#define RG_ARPI_RESERVE_BIT_10_BUFGP_XLATCH_FORCE_DQS Fld(1,16)//[16:16]
#define RG_ARPI_RESERVE_BIT_09_BUFGP_XLATCH_FORCE Fld(1,15)//[15:15]
#define RG_ARPI_RESERVE_BIT_08_SMT_XLATCH_FORCE_DQS Fld(1,14)//[14:14]
#define RG_ARPI_RESERVE_BIT_07_SMT_XLATCH_FORCE Fld(1,13)//[13:13]
#define RG_ARPI_RESERVE_BIT_06_PSMUX_XLATCH_FORCEDQS Fld(1,12)//[12:12]
#define RG_ARPI_RESERVE_BIT_05_PSMUX_XLATCH_FORCE Fld(1,11)//[11:11]
#define RG_ARPI_RESERVE_BIT_04_8PHASE_XLATCH_FORCE Fld(1,10)//[10:10]
#define RG_ARPI_RESERVE_BIT_03_MIDPI_CAP_SEL Fld(1,9)//[9:9]
#define RG_ARPI_RESERVE_BIT_02_HYST_SEL Fld(1,8)//[8:8]
#define RG_ARPI_RESERVE_BIT_01_DLL_FAST_PSJP Fld(1,7)//[7:7]
#define RG_ARPI_RESERVE_BIT_00_TX_CG_EN Fld(1,6)//[6:6]

//DDRPHY_SHU1_PLL6
//DDRPHY_SHU1_PLL4
#define RG_PLL_RESERVE_BIT_13_PLL_FS_EN Fld(1,13)//[13:13]

#endif /* #ifndef __DDRPHY__REGS_H__ */
