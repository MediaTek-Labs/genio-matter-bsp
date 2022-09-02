#ifndef __PSRAMC_AO_REGS_H__
#define __PSRAMC_AO_REGS_H__
#include "dramc_register.h"

#define PSRAMC_AO_BASE_ADDRESS Channel_A_PSRAM_AO_BASE_VIRTUAL

#define PSRAMC_REG_DDRCOMMON0                                  (PSRAMC_AO_BASE_ADDRESS + 0x00000)
#define DDRCOMMON0_DISSTOP26M                              Fld(1, 0) //[0:0]
#define DDRCOMMON0_PSRAM_256M_EN                           Fld(1, 1) //[1:1]
#define DDRCOMMON0_DRAMC_SW_RST                            Fld(1, 31) //[31:31]

#define PSRAMC_REG_SA_RESERVE                                  (PSRAMC_AO_BASE_ADDRESS + 0x0000C)
#define SA_RESERVE_SA_RESERVE                              Fld(32, 0) //[31:0]
#define PSRAM_CALIBRATION_STATUS                           Fld(1, 31) //[31:31]

#define PSRAMC_REG_PSEL                                        (PSRAMC_AO_BASE_ADDRESS + 0x00010)
#define PSEL_PSEL_CNT                                      Fld(6, 0) //[5:0]

#define PSRAMC_REG_NONSHU_RSV                                  (PSRAMC_AO_BASE_ADDRESS + 0x000FC)
#define NONSHU_RSV_NONSHU_RSV                              Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST2_A0                                    (PSRAMC_AO_BASE_ADDRESS + 0x00100)
#define TEST2_A0_TEST2_PAT1                                Fld(8, 0) //[7:0]
#define TEST2_A0_TEST2_PAT0                                Fld(8, 8) //[15:8]
#define TEST2_A0_LOOP_NV_END                               Fld(1, 16) //[16:16]
#define TEST2_A0_ERR_BREAK_EN                              Fld(1, 17) //[17:17]
#define TEST2_A0_TA2_LOOP_EN                               Fld(1, 18) //[18:18]
#define TEST2_A0_TA2_CG_FR                                 Fld(1, 19) //[19:19]
#define TEST2_A0_LOOP_CNT_INDEX                            Fld(4, 20) //[23:20]
#define TEST2_A0_WDT_BY_DRAMC_DIS                          Fld(1, 24) //[24:24]

#define PSRAMC_REG_TEST2_A2                                    (PSRAMC_AO_BASE_ADDRESS + 0x00104)
#define TEST2_A2_TEST2_OFF                                 Fld(28, 4) //[31:4]

#define PSRAMC_REG_TEST2_A3                                    (PSRAMC_AO_BASE_ADDRESS + 0x00108)
#define TEST2_A3_TESTCNT                                   Fld(4, 0) //[3:0]
#define TEST2_A3_TESTWRHIGH                                Fld(1, 4) //[4:4]
#define TEST2_A3_ADRDECEN_TARKMODE                         Fld(1, 5) //[5:5]
#define TEST2_A3_PSTWR2                                    Fld(1, 6) //[6:6]
#define TEST2_A3_TESTAUDPAT                                Fld(1, 7) //[7:7]
#define TEST2_A3_TESTCLKRUN                                Fld(1, 8) //[8:8]
#define TEST2_A3_ERRFLAG_BYTE_SEL                          Fld(2, 9) //[10:9]
#define TEST2_A3_PAT_SHIFT_SW_EN                           Fld(1, 11) //[11:11]
#define TEST2_A3_PAT_SHIFT_OFFSET                          Fld(3, 12) //[14:12]
#define TEST2_A3_TEST2_PAT_SHIFT                           Fld(1, 15) //[15:15]
#define TEST2_A3_TEST_AID_EN                               Fld(1, 16) //[16:16]
#define TEST2_A3_HFIDPAT                                   Fld(1, 17) //[17:17]
#define TEST2_A3_AUTO_GEN_PAT                              Fld(1, 18) //[18:18]
#define TEST2_A3_DMPAT32                                   Fld(1, 24) //[24:24]
#define TEST2_A3_TESTADR_SHIFT                             Fld(1, 25) //[25:25]
#define TEST2_A3_TAHPRI_B                                  Fld(1, 26) //[26:26]
#define TEST2_A3_TESTLP                                    Fld(1, 27) //[27:27]
#define TEST2_A3_TEST2WREN2_HW_EN                          Fld(1, 28) //[28:28]
#define TEST2_A3_TEST1                                     Fld(1, 29) //[29:29]
#define TEST2_A3_TEST2R                                    Fld(1, 30) //[30:30]
#define TEST2_A3_TEST2W                                    Fld(1, 31) //[31:31]

#define PSRAMC_REG_TEST2_A4                                    (PSRAMC_AO_BASE_ADDRESS + 0x0010C)
#define TEST2_A4_TESTAUDINC                                Fld(5, 0) //[4:0]
#define TEST2_A4_TEST2DISSCRAM                             Fld(1, 5) //[5:5]
#define TEST2_A4_TESTSSOPAT                                Fld(1, 6) //[6:6]
#define TEST2_A4_TESTSSOXTALKPAT                           Fld(1, 7) //[7:7]
#define TEST2_A4_TESTAUDINIT                               Fld(5, 8) //[12:8]
#define TEST2_A4_TEST2_EN1ARB_DIS                          Fld(1, 13) //[13:13]
#define TEST2_A4_TESTAUDBITINV                             Fld(1, 14) //[14:14]
#define TEST2_A4_TESTAUDMODE                               Fld(1, 15) //[15:15]
#define TEST2_A4_TESTXTALKPAT                              Fld(1, 16) //[16:16]
#define TEST2_A4_TEST_REQ_LEN1                             Fld(1, 17) //[17:17]
#define TEST2_A4_TEST2EN1_OPT2                             Fld(1, 18) //[18:18]
#define TEST2_A4_TEST2EN1_OPT1_DIS                         Fld(1, 19) //[19:19]
#define TEST2_A4_TEST2_DQMTGL                              Fld(1, 21) //[21:21]
#define TEST2_A4_TESTAGENTRK                               Fld(2, 24) //[25:24]
#define TEST2_A4_TESTDMITGLPAT                             Fld(1, 26) //[26:26]
#define TEST2_A4_TEST1TO4LEN1_DIS                          Fld(1, 27) //[27:27]
#define TEST2_A4_TESTAGENTRKSEL                            Fld(3, 28) //[30:28]
#define TEST2_A4_TESTAGENT_DMYRD_OPT                       Fld(1, 31) //[31:31]

#define PSRAMC_REG_DUMMY_RD                                    (PSRAMC_AO_BASE_ADDRESS + 0x00110)
#define DUMMY_RD_SREF_DMYRD_MASK                           Fld(1, 0) //[0:0]
#define DUMMY_RD_DMYRDOFOEN                                Fld(1, 1) //[1:1]
#define DUMMY_RD_DUMMY_RD_SW                               Fld(1, 4) //[4:4]
#define DUMMY_RD_DMYWR_LPRI_EN                             Fld(1, 5) //[5:5]
#define DUMMY_RD_DMY_WR_DBG                                Fld(1, 6) //[6:6]
#define DUMMY_RD_DMY_RD_DBG                                Fld(1, 7) //[7:7]
#define DUMMY_RD_DRS_CNTX                                  Fld(7, 8) //[14:8]
#define DUMMY_RD_DRS_SELFWAKE_DMYRD_DIS                    Fld(1, 15) //[15:15]
#define DUMMY_RD_RANK_NUM                                  Fld(2, 16) //[17:16]
#define DUMMY_RD_DUMMY_RD_EN                               Fld(1, 20) //[20:20]
#define DUMMY_RD_SREF_DMYRD_EN                             Fld(1, 21) //[21:21]
#define DUMMY_RD_DQSG_DMYRD_EN                             Fld(1, 22) //[22:22]
#define DUMMY_RD_DQSG_DMYWR_EN                             Fld(1, 23) //[23:23]
#define DUMMY_RD_DUMMY_RD_PA_OPT                           Fld(1, 24) //[24:24]
#define DUMMY_RD_DMY_RD_RX_TRACK                           Fld(1, 25) //[25:25]
#define DUMMY_RD_DMYRD_HPRI_DIS                            Fld(1, 26) //[26:26]
#define DUMMY_RD_DMYRD_REORDER_DIS                         Fld(1, 27) //[27:27]
#define DUMMY_RD_RETRY_SP_RK_DIS                           Fld(1, 28) //[28:28]

#define PSRAMC_REG_DUMMY_RD_INTV                               (PSRAMC_AO_BASE_ADDRESS + 0x00114)
#define DUMMY_RD_INTV_DUMMY_RD_CNT0                        Fld(1, 0) //[0:0]
#define DUMMY_RD_INTV_DUMMY_RD_CNT1                        Fld(1, 1) //[1:1]
#define DUMMY_RD_INTV_DUMMY_RD_CNT2                        Fld(1, 2) //[2:2]
#define DUMMY_RD_INTV_DUMMY_RD_CNT3                        Fld(1, 3) //[3:3]
#define DUMMY_RD_INTV_DUMMY_RD_CNT4                        Fld(1, 4) //[4:4]
#define DUMMY_RD_INTV_DUMMY_RD_CNT5                        Fld(1, 5) //[5:5]
#define DUMMY_RD_INTV_DUMMY_RD_CNT6                        Fld(1, 6) //[6:6]
#define DUMMY_RD_INTV_DUMMY_RD_CNT7                        Fld(1, 7) //[7:7]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT0                      Fld(1, 16) //[16:16]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT1                      Fld(1, 17) //[17:17]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT2                      Fld(1, 18) //[18:18]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT3                      Fld(1, 19) //[19:19]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT4                      Fld(1, 20) //[20:20]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT5                      Fld(1, 21) //[21:21]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT6                      Fld(1, 22) //[22:22]
#define DUMMY_RD_INTV_DUMMY_RD_1_CNT7                      Fld(1, 23) //[23:23]

#define PSRAMC_REG_BUS_MON1                                    (PSRAMC_AO_BASE_ADDRESS + 0x00118)
#define BUS_MON1_WRBYTE_CNT_OPT                            Fld(1, 0) //[0:0]
#define BUS_MON1_REQQUE_MON_RW                             Fld(1, 1) //[1:1]
#define BUS_MON1_REQQUE_MON_SREF_DIS                       Fld(1, 2) //[2:2]

#define PSRAMC_REG_ZQC_CTRL0                                   (PSRAMC_AO_BASE_ADDRESS + 0x00120)
#define ZQC_CTRL0_ZQCSCNT                                  Fld(16, 0) //[15:0]
#define ZQC_CTRL0_ZQCS_MODE                                Fld(1, 30) //[30:30]
#define ZQC_CTRL0_ZQCSDISB                                 Fld(1, 31) //[31:31]

#define PSRAMC_REG_SWCMD_EN                                    (PSRAMC_AO_BASE_ADDRESS + 0x00124)
#define SWCMD_EN_RESETEN                                   Fld(1, 0) //[0:0]
#define SWCMD_EN_MRWEN                                     Fld(1, 11) //[11:11]
#define SWCMD_EN_MRREN                                     Fld(1, 12) //[12:12]
#define SWCMD_EN_ZQCEN                                     Fld(1, 14) //[14:14]

#define PSRAMC_REG_SWCMD_CTRL0                                 (PSRAMC_AO_BASE_ADDRESS + 0x00128)
#define SWCMD_CTRL0_MRWOP                                  Fld(8, 0) //[7:0]
#define SWCMD_CTRL0_MRSMA                                  Fld(8, 8) //[15:8]

#define PSRAMC_REG_ZQC_CTRL1                                   (PSRAMC_AO_BASE_ADDRESS + 0x0012C)
#define ZQC_CTRL1_ZQCSOP                                   Fld(8, 0) //[7:0]
#define ZQC_CTRL1_ZQCSAD                                   Fld(8, 8) //[15:8]

#define PSRAMC_REG_PICTRL                                      (PSRAMC_AO_BASE_ADDRESS + 0x00130)
#define PICTRL_CADQPICG_EN                                 Fld(1, 0) //[0:0]
#define PICTRL_ARPIDQ_SW                                   Fld(1, 1) //[1:1]
#define PICTRL_DQ2CA_PI_CHG_SEL                            Fld(2, 8) //[9:8]
#define PICTRL_CA2DQ_PI_CHG_SEL                            Fld(2, 10) //[11:10]
#define PICTRL_RK0_ARPI_CA_B0                              Fld(6, 16) //[21:16]

#define PSRAMC_REG_SREF_DPD_CTRL                               (PSRAMC_AO_BASE_ADDRESS + 0x00168)
#define SREF_DPD_CTRL_HSLEEPX_BLOCK_EN                     Fld(1, 0) //[0:0]
#define SREF_DPD_CTRL_HSLEEPX_BLOCK                        Fld(1, 1) //[1:1]
#define SREF_DPD_CTRL_SREF_CG_OPT                          Fld(1, 8) //[8:8]
#define SREF_DPD_CTRL_CLR_EN                               Fld(1, 9) //[9:9]
#define SREF_DPD_CTRL_SELFREF_AUTOSAVE_EN                  Fld(1, 10) //[10:10]
#define SREF_DPD_CTRL_SREF_PRD_OPT                         Fld(1, 11) //[11:11]
#define SREF_DPD_CTRL_SRFPD_DIS                            Fld(1, 13) //[13:13]
#define SREF_DPD_CTRL_SREFDLY                              Fld(4, 16) //[19:16]
#define SREF_DPD_CTRL_HSLEEP_HW_EN                         Fld(1, 20) //[20:20]
#define SREF_DPD_CTRL_HSLEEP                               Fld(1, 21) //[21:21]
#define SREF_DPD_CTRL_SREF_HW_EN                           Fld(1, 22) //[22:22]
#define SREF_DPD_CTRL_SELFREF                              Fld(1, 23) //[23:23]
#define SREF_DPD_CTRL_CMDCKAR                              Fld(1, 26) //[26:26]
#define SREF_DPD_CTRL_DAT_SYNC_MASK                        Fld(1, 30) //[30:30]
#define SREF_DPD_CTRL_PHY_SYNC_MASK                        Fld(1, 31) //[31:31]

#define PSRAMC_REG_DLLFRZ_CTRL                                 (PSRAMC_AO_BASE_ADDRESS + 0x00170)
#define DLLFRZ_CTRL_MANUDLLFRZ                             Fld(1, 6) //[6:6]
#define DLLFRZ_CTRL_DLLFRZ                                 Fld(1, 7) //[7:7]
#define DLLFRZ_CTRL_UPDBYWR                                Fld(1, 8) //[8:8]

#define PSRAMC_REG_ACTIMING_CTRL                               (PSRAMC_AO_BASE_ADDRESS + 0x00190)
#define ACTIMING_CTRL_SEQCLKRUN3                           Fld(1, 0) //[0:0]
#define ACTIMING_CTRL_SEQCLKRUN2                           Fld(1, 1) //[1:1]
#define ACTIMING_CTRL_SEQCLKRUN                            Fld(1, 2) //[2:2]
#define ACTIMING_CTRL_MRRSWUPD                             Fld(1, 5) //[5:5]
#define ACTIMING_CTRL_CLKWITRFC                            Fld(1, 9) //[9:9]

#define PSRAMC_REG_MRR_BIT_MUX1                                (PSRAMC_AO_BASE_ADDRESS + 0x001D0)
#define MRR_BIT_MUX1_MRR_BIT0_SEL                          Fld(5, 0) //[4:0]
#define MRR_BIT_MUX1_MRR_BIT1_SEL                          Fld(5, 8) //[12:8]
#define MRR_BIT_MUX1_MRR_BIT2_SEL                          Fld(5, 16) //[20:16]
#define MRR_BIT_MUX1_MRR_BIT3_SEL                          Fld(5, 24) //[28:24]

#define PSRAMC_REG_MRR_BIT_MUX2                                (PSRAMC_AO_BASE_ADDRESS + 0x001D4)
#define MRR_BIT_MUX2_MRR_BIT4_SEL                          Fld(5, 0) //[4:0]
#define MRR_BIT_MUX2_MRR_BIT5_SEL                          Fld(5, 8) //[12:8]
#define MRR_BIT_MUX2_MRR_BIT6_SEL                          Fld(5, 16) //[20:16]
#define MRR_BIT_MUX2_MRR_BIT7_SEL                          Fld(5, 24) //[28:24]

#define PSRAMC_REG_DRAMC_PD_CTRL                               (PSRAMC_AO_BASE_ADDRESS + 0x001FC)
#define PSRAMC_PD_CTRL_DCMEN                                Fld(1, 0) //[0:0]
#define PSAMC_PD_CTRL_DCMEN2                               Fld(1, 1) //[1:1]
#define PSAMC_PD_CTRL_DCMENNOTRFC                          Fld(1, 2) //[2:2]
#define PSAMC_PD_CTRL_PHYGLUECLKRUN                        Fld(1, 3) //[3:3]
#define PSAMC_PD_CTRL_PHYCLK_REFWKEN                       Fld(1, 4) //[4:4]
#define PSAMC_PD_CTRL_COMBPHY_CLKENSAME                    Fld(1, 5) //[5:5]  
#define PSAMC_PD_CTRL_MIOCKCTRLOFF                         Fld(1, 6) //[6:6]
#define PSAMC_PD_CTRL_PG_DCM_OPT                           Fld(1, 9) //[9:9]
#define PSAMC_PD_CTRL_COMB_DCM                             Fld(1, 10) //[10:10]
#define PSAMC_PD_CTRL_APHYCKCG_FIXOFF                      Fld(1, 12) //[12:12]
#define PSAMC_PD_CTRL_TCKFIXON                             Fld(1, 13) //[13:13]
#define PSAMC_PD_CTRL_APHYPI_CKCGL_CNT                     Fld(4, 16) //[19:16]
#define PSAMC_PD_CTRL_APHYPI_CKCGH_CNT                     Fld(4, 20) //[23:20]
#define PSAMC_PD_CTRL_PHYCLKDYNGEN                         Fld(1, 30) //[30:30]
#define PSAMC_PD_CTRL_COMBCLKCTRL                          Fld(1, 31) //[31:31]

#define PSRAMC_REG_DCM_CTRL0                                   (PSRAMC_AO_BASE_ADDRESS + 0x00200)
#define DCM_CTRL0_DISDMOEDIS                               Fld(1, 8) //[8:8]
#define DCM_CTRL0_IDLE_CNT_OPT                             Fld(1, 16) //[16:16]
#define DCM_CTRL0_IDLEDCM_CNT_OPT                          Fld(1, 17) //[17:17]
#define DCM_CTRL0_IDLE_COND_OPT                            Fld(1, 18) //[18:18]

#define PSRAMC_REG_CKECTRL                                     (PSRAMC_AO_BASE_ADDRESS + 0x00204)
#define CKECTRL_CKEFIXON                                   Fld(1, 6) //[6:6]
#define CKECTRL_CKEFIXOFF                                  Fld(1, 7) //[7:7]

#define PSRAMC_REG_CMD_DEC_CTRL0                               (PSRAMC_AO_BASE_ADDRESS + 0x0021C)
#define CMD_DEC_CTRL0_GDDR3RST                             Fld(1, 0) //[0:0]
#define CMD_DEC_CTRL0_DQSOEAOEN                            Fld(1, 4) //[4:4]
#define CMD_DEC_CTRL0_PHYPIPE1EN                           Fld(1, 15) //[15:15]
#define CMD_DEC_CTRL0_PHYPIPE2EN                           Fld(1, 16) //[16:16]
#define CMD_DEC_CTRL0_PHYPIPE3EN                           Fld(1, 17) //[17:17]
#define CMD_DEC_CTRL0_DQCMD                                Fld(1, 19) //[19:19]

#define PSRAMC_REG_HMR4                                        (PSRAMC_AO_BASE_ADDRESS + 0x00220)
#define HMR4_HMR4_TOG_OPT                                  Fld(1, 1) //[1:1]
#define HMR4_SPDR_MR4_OPT                                  Fld(1, 2) //[2:2]
#define HMR4_SRFMR4_CNTKEEP_B                              Fld(1, 3) //[3:3]
#define HMR4_MRRREFUPD_B                                   Fld(1, 4) //[4:4]
#define HMR4_REFR_PERIOD_OPT                               Fld(1, 7) //[7:7]
#define HMR4_REFRDIS                                       Fld(1, 8) //[8:8]
#define HMR4_REFRCNT_OPT                                   Fld(1, 9) //[9:9]

#define PSRAMC_REG_TX_SET0                                     (PSRAMC_AO_BASE_ADDRESS + 0x00238)
#define TX_SET0_TX_DQM_DEFAULT                             Fld(1, 4) //[4:4]
#define TX_SET0_DQS_OE_OP1_DIS                             Fld(1, 28) //[28:28]
#define TX_SET0_DQS_OE_OP2_EN                              Fld(1, 29) //[29:29]
#define TX_SET0_DRAMOEN                                    Fld(1, 31) //[31:31]

#define PSRAMC_REG_TX_CG_SET0                                  (PSRAMC_AO_BASE_ADDRESS + 0x0023C)
#define TX_CG_SET0_SELPH_4LCG_DIS                          Fld(1, 0) //[0:0]
#define TX_CG_SET0_SELPH_CG_DIS                            Fld(1, 1) //[1:1]
#define TX_CG_SET0_SELPH_CMD_CG_DIS                        Fld(1, 4) //[4:4]

#define PSRAMC_REG_RX_SET0                                     (PSRAMC_AO_BASE_ADDRESS + 0x00240)
#define RX_SET0_RDATRST                                    Fld(1, 0) //[0:0]
#define RX_SET0_PRE_DLE_VLD_OPT                            Fld(1, 1) //[1:1]
#define RX_SET0_DATLAT_PDLE_TH                             Fld(3, 2) //[4:2]
#define RX_SET0_DM32BIT_RDSEL_OPT                          Fld(1, 30) //[30:30]
#define RX_SET0_DM4TO1MODE                                 Fld(1, 31) //[31:31]

#define PSRAMC_REG_RX_CG_SET0                                  (PSRAMC_AO_BASE_ADDRESS + 0x00244)
#define RX_CG_SET0_RDPERIODON                              Fld(1, 29) //[29:29]
#define RX_CG_SET0_RDYCKAR                                 Fld(1, 31) //[31:31]

#define PSRAMC_REG_DRAMCTRL                                    (PSRAMC_AO_BASE_ADDRESS + 0x0024C)
#define DRAMCTRL_AP_EN                                     Fld(4, 0) //[3:0]
#define DRAMCTRL_SREF_BALE_OPT                             Fld(1, 13) //[13:13]
#define DRAMCTRL_ALEBLOCK                                  Fld(1, 14) //[14:14]

#define PSRAMC_REG_CLKAR                                       (PSRAMC_AO_BASE_ADDRESS + 0x00260)
#define CLKAR_SRF_CLKRUN                                   Fld(1, 17) //[17:17]
#define CLKAR_IDLE_OPT                                     Fld(1, 18) //[18:18]
#define CLKAR_DCMREF_OPT                                   Fld(1, 24) //[24:24]
#define CLKAR_REQQUECLKRUN                                 Fld(1, 27) //[27:27]

#define PSRAMC_REG_REFCTRL0                                    (PSRAMC_AO_BASE_ADDRESS + 0x00264)
#define REFCTRL0_REFOVERCNT_RST                            Fld(1, 7) //[7:7]
#define REFCTRL0_REF_PREGATE_CNT                           Fld(4, 24) //[27:24]
#define REFCTRL0_REFDIS                                    Fld(1, 29) //[29:29]

#define PSRAMC_REG_REFCTRL1                                    (PSRAMC_AO_BASE_ADDRESS + 0x00268)
#define REFCTRL1_REFRESH_RATE_OPT                          Fld(1, 0) //[0:0]
#define REFCTRL1_REF_QUE_AUTOSAVE_EN                       Fld(1, 5) //[5:5]
#define REFCTRL1_REFPEND_OPT1                              Fld(1, 6) //[6:6]
#define REFCTRL1_REFRATE_MON_CLR                           Fld(1, 11) //[11:11]
#define REFCTRL1_REF_OVERHEAD_ALL_REFAL_ENA                Fld(1, 26) //[26:26]
#define REFCTRL1_REFRATE_MANUAL                            Fld(3, 28) //[30:28]
#define REFCTRL1_REFRATE_MANUAL_RATE_TRIG                  Fld(1, 31) //[31:31]

#define PSRAMC_REG_REFQUE_CNT                                  (PSRAMC_AO_BASE_ADDRESS + 0x00280)
#define REFQUE_CNT_REFRESH_QUEUE_CNT_FROM_AO               Fld(4, 0) //[3:0]

#define PSRAMC_REG_WDT_RST                                     (PSRAMC_AO_BASE_ADDRESS + 0x0029C)
#define WDT_RST_WDT_DBG_RST                                Fld(1, 0) //[0:0]

#define PSRAMC_REG_REFCNT_FR_CLK1                              (PSRAMC_AO_BASE_ADDRESS + 0x002F0)
#define REFCNT_FR_CLK1_REFCNT_FR_CLK_1X                    Fld(11, 0) //[10:0]
#define REFCNT_FR_CLK1_REFCNT_FR_CLK_2X                    Fld(11, 16) //[26:16]

#define PSRAMC_REG_REFCNT_FR_CLK2                              (PSRAMC_AO_BASE_ADDRESS + 0x002F4)
#define REFCNT_FR_CLK2_REFCNT_FR_CLK_4X                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_RK_TEST2_A1                                 (PSRAMC_AO_BASE_ADDRESS + 0x00300)
#define RK_TEST2_A1_TEST2_BASE                             Fld(29, 3) //[31:3]

#define PSRAMC_REG_RK_TEST2_A2                                 (PSRAMC_AO_BASE_ADDRESS + 0x00304)
#define RK_TEST2_A2_TEST2_BASE_2                           Fld(29, 3) //[31:3]

#define PSRAMC_REG_RK_SREF_DPD_TCK_RK_CTRL                     (PSRAMC_AO_BASE_ADDRESS + 0x00368)
#define RK_SREF_DPD_TCK_RK_CTRL_CLK_EN                     Fld(1, 28) //[28:28]
#define RK_SREF_DPD_TCK_RK_CTRL_SRF_EN                     Fld(1, 31) //[31:31]

#define PSRAMC_REG_WDT_DBG_SIGNAL                              (PSRAMC_AO_BASE_ADDRESS + 0x00400)
#define WDT_DBG_SIGNAL_LATCH_RD_TEST_DM_CMP_CPT2_RK0_FROM_AO Fld(1, 0) //[0:0]
#define WDT_DBG_SIGNAL_LATCH_RD_TEST_DM_CMP_CPT2_RK1_FROM_AO Fld(1, 1) //[1:1]
#define WDT_DBG_SIGNAL_LATCH_RD_TEST_DM_CMP_ERR2_RK0_FROM_AO Fld(1, 2) //[2:2]
#define WDT_DBG_SIGNAL_LATCH_RD_TEST_DM_CMP_ERR2_RK1_FROM_AO Fld(1, 3) //[3:3]
#define WDT_DBG_SIGNAL_LATCH_RD_TEST_DLE_CNT_OK2_RK0_FROM_AO Fld(1, 4) //[4:4]
#define WDT_DBG_SIGNAL_LATCH_RD_TEST_DLE_CNT_OK2_RK1_FROM_AO Fld(1, 5) //[5:5]
#define WDT_DBG_SIGNAL_LATCH_RDWR_TEST_DM_CMP_CPT2_RK0_FROM_AO Fld(1, 8) //[8:8]
#define WDT_DBG_SIGNAL_LATCH_RDWR_TEST_DM_CMP_CPT2_RK1_FROM_AO Fld(1, 9) //[9:9]
#define WDT_DBG_SIGNAL_LATCH_RDWR_TEST_DM_CMP_ERR2_RK0_FROM_AO Fld(1, 10) //[10:10]
#define WDT_DBG_SIGNAL_LATCH_RDWR_TEST_DM_CMP_ERR2_RK1_FROM_AO Fld(1, 11) //[11:11]
#define WDT_DBG_SIGNAL_LATCH_RDWR_TEST_DLE_CNT_OK2_RK0_FROM_AO Fld(1, 12) //[12:12]
#define WDT_DBG_SIGNAL_LATCH_RDWR_TEST_DLE_CNT_OK2_RK1_FROM_AO Fld(1, 13) //[13:13]
#define WDT_DBG_SIGNAL_LATCH_DRAMC_GATING_ERROR_FROM_AO    Fld(1, 14) //[14:14]
#define WDT_DBG_SIGNAL_LATCH_DRAMC_FIFO_STBEN_ERR_FROM_AO  Fld(1, 15) //[15:15]

#define PSRAMC_REG_SELFREF_HWSAVE_FLAG                         (PSRAMC_AO_BASE_ADDRESS + 0x00408)
#define SELFREF_HWSAVE_FLAG_SELFREF_HWSAVE_FLAG_FROM_AO    Fld(1, 0) //[0:0]

#define PSRAMC_REG_RK_DUMMY_RD_WDATA0                          (PSRAMC_AO_BASE_ADDRESS + 0x00504)
#define RK_DUMMY_RD_WDATA0_DMY_RD_WDATA0                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK_DUMMY_RD_WDATA1                          (PSRAMC_AO_BASE_ADDRESS + 0x00508)
#define RK_DUMMY_RD_WDATA1_DMY_RD_WDATA1                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK_DUMMY_RD_WDATA2                          (PSRAMC_AO_BASE_ADDRESS + 0x0050C)
#define RK_DUMMY_RD_WDATA2_DMY_RD_WDATA2                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK_DUMMY_RD_WDATA3                          (PSRAMC_AO_BASE_ADDRESS + 0x00510)
#define RK_DUMMY_RD_WDATA3_DMY_RD_WDATA3                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK_DUMMY_RD_ADR                             (PSRAMC_AO_BASE_ADDRESS + 0x00514)
#define RK_DUMMY_RD_ADR_DMY_RD_COL_ADR                     Fld(11, 17) //[27:17]
#define RK_DUMMY_RD_ADR_DMY_RD_LEN                         Fld(4, 28) //[31:28]

#define PSRAMC_REG_RK_DUMMY_RD_ADR2                            (PSRAMC_AO_BASE_ADDRESS + 0x00554)
#define RK_DUMMY_RD_ADR2_DMY_RD_BK                         Fld(4, 0) //[3:0]
#define RK_DUMMY_RD_ADR2_DMY_RD_ROW_ADR                    Fld(18, 4) //[21:4]

#define PSRAMC_REG_SHURK_SELPH_DQ0                             (PSRAMC_AO_BASE_ADDRESS + 0x00600)
#define SHURK_SELPH_DQ0_TXDLY_DQ0                          Fld(3, 0) //[2:0]
#define SHURK_SELPH_DQ0_TXDLY_OEN_DQ0                      Fld(3, 16) //[18:16]
#define SHURK_SELPH_DQ0_TXDLY_OEN_CA0                      Fld(3, 20) //[22:20]

#define PSRAMC_REG_SHURK_SELPH_DQ1                             (PSRAMC_AO_BASE_ADDRESS + 0x00604)
#define SHURK_SELPH_DQ1_TXDLY_DQM0                         Fld(3, 0) //[2:0]
#define SHURK_SELPH_DQ1_TXDLY_OEN_DQM0                     Fld(3, 16) //[18:16]

#define PSRAMC_REG_SHURK_SELPH_DQ2                             (PSRAMC_AO_BASE_ADDRESS + 0x00608)
#define SHURK_SELPH_DQ2_DLY_DQ0                            Fld(3, 0) //[2:0]
#define SHURK_SELPH_DQ2_DLY_OEN_DQ0                        Fld(3, 16) //[18:16]
#define SHURK_SELPH_DQ2_DLY_OEN_CA0                        Fld(3, 20) //[22:20]

#define PSRAMC_REG_SHURK_SELPH_DQ3                             (PSRAMC_AO_BASE_ADDRESS + 0x0060C)
#define SHURK_SELPH_DQ3_DLY_DQM0                           Fld(3, 0) //[2:0]
#define SHURK_SELPH_DQ3_DLY_OEN_DQM0                       Fld(3, 16) //[18:16]

#define PSRAMC_REG_SHURK_PI                                    (PSRAMC_AO_BASE_ADDRESS + 0x00624)
#define SHURK_PI_RK0_ARPI_DQ_B0                            Fld(6, 8) //[13:8]
#define SHURK_PI_RK0_ARPI_DQM_B0                           Fld(6, 24) //[29:24]

#define PSRAMC_REG_SHU_MATYPE                                  (PSRAMC_AO_BASE_ADDRESS + 0x00700)
#define SHU_MATYPE_MATYPE                                  Fld(2, 0) //[1:0]

#define PSRAMC_REG_SHU_COMMON0                                 (PSRAMC_AO_BASE_ADDRESS + 0x00704)
#define SHU_COMMON0_SHU_COMMON0_RSV                        Fld(17, 15) //[31:15]

#define PSRAMC_REG_SHU_SREF_CTRL                               (PSRAMC_AO_BASE_ADDRESS + 0x00708)
#define SHU_SREF_CTRL_CKEHCMD                              Fld(2, 4) //[5:4]
#define SHU_SREF_CTRL_SREF_CK_DLY                          Fld(2, 28) //[29:28]

#define PSRAMC_REG_SHU_SCHEDULER                               (PSRAMC_AO_BASE_ADDRESS + 0x0070C)
#define SHU_SCHEDULER_DUALSCHEN                            Fld(1, 2) //[2:2]

#define PSRAMC_REG_SHU_DCM_CTRL0                               (PSRAMC_AO_BASE_ADDRESS + 0x00710)
#define SHU_DCM_CTRL0_DDRPHY_CLK_EN_OPT                    Fld(1, 7) //[7:7]
#define SHU_DCM_CTRL0_DPHY_CMDDCM_EXTCNT                   Fld(4, 8) //[11:8]
#define SHU_DCM_CTRL0_DDRPHY_CLK_DYN_GATING_SEL            Fld(4, 12) //[15:12]
#define SHU_DCM_CTRL0_FASTWAKE2                            Fld(1, 29) //[29:29]

#define PSRAMC_REG_SHU_HMR4_DVFS_CTRL0                         (PSRAMC_AO_BASE_ADDRESS + 0x00714)
#define SHU_HMR4_DVFS_CTRL0_REFRCNT                        Fld(12, 16) //[27:16]

#define PSRAMC_REG_SHU_SELPH_CA1                               (PSRAMC_AO_BASE_ADDRESS + 0x00718)
#define SHU_SELPH_CA1_TXDLY_CS                             Fld(3, 0) //[2:0]

#define PSRAMC_REG_SHU_SELPH_CA3                               (PSRAMC_AO_BASE_ADDRESS + 0x00720)
#define SHU_SELPH_CA3_TXDLY_RA0                            Fld(3, 0) //[2:0]
#define SHU_SELPH_CA3_TXDLY_RA1                            Fld(3, 4) //[6:4]
#define SHU_SELPH_CA3_TXDLY_RA2                            Fld(3, 8) //[10:8]
#define SHU_SELPH_CA3_TXDLY_RA3                            Fld(3, 12) //[14:12]
#define SHU_SELPH_CA3_TXDLY_RA4                            Fld(3, 16) //[18:16]
#define SHU_SELPH_CA3_TXDLY_RA5                            Fld(3, 20) //[22:20]
#define SHU_SELPH_CA3_TXDLY_RA6                            Fld(3, 24) //[26:24]
#define SHU_SELPH_CA3_TXDLY_RA7                            Fld(3, 28) //[30:28]

#define PSRAMC_REG_SHU_SELPH_CA5                               (PSRAMC_AO_BASE_ADDRESS + 0x00728)
#define SHU_SELPH_CA5_DLY_CS                               Fld(3, 0) //[2:0]

#define PSRAMC_REG_SHU_SELPH_CA7                               (PSRAMC_AO_BASE_ADDRESS + 0x00730)
#define SHU_SELPH_CA7_DLY_RA0                              Fld(3, 0) //[2:0]
#define SHU_SELPH_CA7_DLY_RA1                              Fld(3, 4) //[6:4]
#define SHU_SELPH_CA7_DLY_RA2                              Fld(3, 8) //[10:8]
#define SHU_SELPH_CA7_DLY_RA3                              Fld(3, 12) //[14:12]
#define SHU_SELPH_CA7_DLY_RA4                              Fld(3, 16) //[18:16]
#define SHU_SELPH_CA7_DLY_RA5                              Fld(3, 20) //[22:20]
#define SHU_SELPH_CA7_DLY_RA6                              Fld(3, 24) //[26:24]
#define SHU_SELPH_CA7_DLY_RA7                              Fld(3, 28) //[30:28]

#define PSRAMC_REG_CE_CTRL                                     (PSRAMC_AO_BASE_ADDRESS + 0x0073C)
#define CE_CTRL_WRCS_NOT_MASK                              Fld(8, 0) //[7:0]

#define PSRAMC_REG_CE_CNT0                                     (PSRAMC_AO_BASE_ADDRESS + 0x00740)
#define CE_CNT0_TCE_RD                                     Fld(8, 0) //[7:0]
#define CE_CNT0_TCE_WR                                     Fld(8, 8) //[15:8]
#define CE_CNT0_TCE_HSLEEPX                                Fld(8, 16) //[23:16]
#define CE_CNT0_TCE_MRW                                    Fld(8, 24) //[31:24]

#define PSRAMC_REG_SHU_ACTIM0                                  (PSRAMC_AO_BASE_ADDRESS + 0x00744)
#define SHU_ACTIM0_TRFC                                    Fld(8, 0) //[7:0]
#define SHU_ACTIM0_TRC                                     Fld(8, 8) //[15:8]
#define SHU_ACTIM0_TXHS                                    Fld(8, 16) //[23:16]
#define SHU_ACTIM0_TCEM                                    Fld(8, 24) //[31:24]

#define PSRAMC_REG_SHU_ACTIM1                                  (PSRAMC_AO_BASE_ADDRESS + 0x00748)
#define SHU_ACTIM1_TCPHR_S                                 Fld(8, 0) //[7:0]
#define SHU_ACTIM1_TCPHR_L                                 Fld(8, 8) //[15:8]
#define SHU_ACTIM1_TCPHW                                   Fld(8, 16) //[23:16]

#define PSRAMC_REG_SHU_ACTIM2                                  (PSRAMC_AO_BASE_ADDRESS + 0x0074C)
#define SHU_ACTIM2_TMRW                                    Fld(8, 0) //[7:0]

#define PSRAMC_REG_SHU_ACTIM3                                  (PSRAMC_AO_BASE_ADDRESS + 0x00750)
#define SHU_ACTIM3_TZQCL                                   Fld(9, 0) //[8:0]
#define SHU_ACTIM3_TZQCS                                   Fld(9, 16) //[24:16]

#define PSRAMC_REG_SHU_ACTIM4                                  (PSRAMC_AO_BASE_ADDRESS + 0x00754)
#define SHU_ACTIM4_TXREFCNT                                Fld(10, 0) //[9:0]

#define PSRAMC_REG_CE_CNT_05T                                  (PSRAMC_AO_BASE_ADDRESS + 0x00760)
#define CE_CNT_05T_TCE_RD_05T                              Fld(1, 0) //[0:0]
#define CE_CNT_05T_TCE_WR_05T                              Fld(1, 1) //[1:1]
#define CE_CNT_05T_TCE_HSLEEPX_05T                         Fld(1, 2) //[2:2]
#define CE_CNT_05T_TCE_MRW_05T                             Fld(1, 3) //[3:3]

#define PSRAMC_REG_SHU_AC_TIME_05T                             (PSRAMC_AO_BASE_ADDRESS + 0x00764)
#define PSRAMC_SHU_AC_TIME_05T_TRFC_05T                    Fld(1, 0) //[0:0]
#define PSRAMC_SHU_AC_TIME_05T_TRC_05T                     Fld(1, 1) //[1:1]
#define PSRAMC_SHU_AC_TIME_05T_TXHS_05T                    Fld(1, 2) //[2:2]
#define PSRAMC_SHU_AC_TIME_05T_TCEM_05T                    Fld(1, 3) //[3:3]
#define PSRAMC_SHU_AC_TIME_05T_TCPHR_S_05T                 Fld(1, 4) //[4:4]
#define PSRAMC_SHU_AC_TIME_05T_TCPHR_L_05T                 Fld(1, 5) //[5:5]
#define PSRAMC_SHU_AC_TIME_05T_TCPHW_05T                   Fld(1, 6) //[6:6]
#define PSRAMC_SHU_AC_TIME_05T_TMRW_05T                    Fld(1, 7) //[7:7]

#define PSRAMC_REG_SHU_AC_TIME_05T_B                           (PSRAMC_AO_BASE_ADDRESS + 0x00768)
#define SHU_AC_TIME_05T_B_TZQCL_05T                        Fld(1, 0) //[0:0]
#define SHU_AC_TIME_05T_B_TZQCS_05T                        Fld(1, 1) //[1:1]

#define PSRAMC_REG_SHU_CKECTRL                                 (PSRAMC_AO_BASE_ADDRESS + 0x00778)
#define SHU_CKECTRL_TCKESRX                                Fld(2, 24) //[25:24]

#define PSRAMC_REG_SHU_SELPH_DQS0                              (PSRAMC_AO_BASE_ADDRESS + 0x0077C)
#define SHU_SELPH_DQS0_TXDLY_DQS0                          Fld(3, 0) //[2:0]
#define SHU_SELPH_DQS0_TXDLY_OEN_DQS0                      Fld(3, 16) //[18:16]

#define PSRAMC_REG_SHU_SELPH_DQS1                              (PSRAMC_AO_BASE_ADDRESS + 0x00780)
#define SHU_SELPH_DQS1_DLY_DQS0                            Fld(3, 0) //[2:0]
#define SHU_SELPH_DQS1_DLY_OEN_DQS0                        Fld(3, 16) //[18:16]

#define PSRAMC_REG_SHU_TX_SET0                                 (PSRAMC_AO_BASE_ADDRESS + 0x00788)
#define SHU_TX_SET0_DQOE_CNT                               Fld(3, 0) //[2:0]
#define SHU_TX_SET0_DQOE_OPT                               Fld(1, 4) //[4:4]
#define SHU_TX_SET0_CACG_CNT                               Fld(4, 24) //[27:24]
#define SHU_TX_SET0_CAOE_CNT                               Fld(3, 28) //[30:28]

#define PSRAMC_REG_SHU_RX_CG_SET0                              (PSRAMC_AO_BASE_ADDRESS + 0x0078C)
#define SHU_RX_CG_SET0_DLE_LAST_EXTEND3                    Fld(1, 0) //[0:0]
#define SHU_RX_CG_SET0_READ_START_EXTEND3                  Fld(1, 1) //[1:1]
#define SHU_RX_CG_SET0_DLE_LAST_EXTEND2                    Fld(1, 2) //[2:2]
#define SHU_RX_CG_SET0_READ_START_EXTEND2                  Fld(1, 3) //[3:3]
#define SHU_RX_CG_SET0_DLE_LAST_EXTEND1                    Fld(1, 4) //[4:4]
#define SHU_RX_CG_SET0_READ_START_EXTEND1                  Fld(1, 5) //[5:5]

#define PSRAMC_REG_SHU_CONF0                                   (PSRAMC_AO_BASE_ADDRESS + 0x007A0)
#define SHU_CONF0_REFTHD                                   Fld(4, 12) //[15:12]

#define PSRAMC_REG_SHU_MISC                                    (PSRAMC_AO_BASE_ADDRESS + 0x007A4)
#define SHU_MISC_DCMDLYREF                                 Fld(3, 16) //[18:16]

#define PSRAMC_REG_SHU_REF0                                    (PSRAMC_AO_BASE_ADDRESS + 0x007D4)
#define SHU_REF0_MPENDREF_CNT                              Fld(3, 0) //[2:0]

#endif /* #ifndef __PSRAMC_AO_REGS_H__ */
