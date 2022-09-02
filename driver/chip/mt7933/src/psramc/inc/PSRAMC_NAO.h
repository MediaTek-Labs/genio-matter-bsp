#ifndef __PSRAMC_NAO_REGS_H__
#define __PSRAMC_NAO_REGS_H__
#include "dramc_register.h"

#define PSRAMC_NAO_BASE_ADDRESS Channel_A_PSRAM_NAO_BASE_VIRTUAL

#define PSRAMC_REG_DMMONITOR                                   (PSRAMC_NAO_BASE_ADDRESS + 0x00024)
#define DMMONITOR_MONPAUSE_SW                              Fld(1, 2) //[2:2]
#define DMMONITOR_BUSMONEN_SW                              Fld(1, 3) //[3:3]
#define DMMONITOR_REQQUE_MON_SREF_RW                       Fld(1, 12) //[12:12]

#define PSRAMC_REG_MISC_STATUSA                                (PSRAMC_NAO_BASE_ADDRESS + 0x00080)
#define MISC_STATUSA_WAIT_DLE                              Fld(1, 0) //[0:0]
#define MISC_STATUSA_REQUEST_QUEUE_FULL                    Fld(1, 2) //[2:2]
#define MISC_STATUSA_REFRESH_RATE                          Fld(3, 8) //[10:8]
#define MISC_STATUSA_SREF_STATE_ORI                        Fld(1, 15) //[15:15]
#define MISC_STATUSA_SREF_STATE                            Fld(1, 16) //[16:16]
#define MISC_STATUSA_SELFREF_SM                            Fld(3, 17) //[19:17]
#define MISC_STATUSA_REFRESH_OVER_CNT                      Fld(4, 20) //[23:20]
#define MISC_STATUSA_REFRESH_QUEUE_CNT                     Fld(4, 24) //[27:24]
#define MISC_STATUSA_DRAMC_IDLE_STATUS                     Fld(1, 30) //[30:30]
#define MISC_STATUSA_DRAMC_IDLE_DCM                        Fld(1, 31) //[31:31]

#define PSRAMC_REG_SPECIAL_STATUS                              (PSRAMC_NAO_BASE_ADDRESS + 0x00084)
#define PSRAM_SPECIAL_STATUS_SC_ENABLE                           Fld(1, 0) //[0:0]
#define PSRAM_SPECIAL_STATUS_RESET_SW_ENABLE                     Fld(1, 1) //[1:1]
#define PSRAM_SPECIAL_STATUS_ZQC_SW_ENABLE                       Fld(1, 2) //[2:2]
#define PSRAM_SPECIAL_STATUS_ZQC_HW_ENABLE                       Fld(1, 3) //[3:3]
#define PSRAM_SPECIAL_STATUS_MRR_SW_ENABLE                       Fld(1, 4) //[4:4]
#define PSRAM_SPECIAL_STATUS_MRR_HW_ENABLE                       Fld(1, 5) //[5:5]
#define PSRAM_SPECIAL_STATUS_MRW_SW_ENABLE                       Fld(1, 6) //[6:6]
#define PSRAM_SPECIAL_STATUS_H_ZQCAL_REQ                         Fld(1, 7) //[7:7]
#define PSRAM_SPECIAL_STATUS_S_MRW_REQ                           Fld(1, 8) //[8:8]
#define PSRAM_SPECIAL_STATUS_S_MRR_REQ                           Fld(1, 9) //[9:9]
#define PSRAM_SPECIAL_STATUS_S_ZQC_REQ                           Fld(1, 10) //[10:10]
#define PSRAM_SPECIAL_STATUS_S_RESET_REQ                         Fld(1, 11) //[11:11]
#define PSRAM_SPECIAL_STATUS_H_REFR_REQ                          Fld(1, 12) //[12:12]
#define PSRAM_SPECIAL_STATUS_SCSM                                Fld(5, 16) //[20:16]
#define PSRAM_SPECIAL_STATUS_HSLEEPX_BLOCK                       Fld(1, 21) //[21:21]
#define PSRAM_SPECIAL_STATUS_HSLEEP_REQ_2Q                       Fld(1, 22) //[22:22]
#define PSRAM_SPECIAL_STATUS_HSLEEP_REQ                          Fld(1, 23) //[23:23]
#define PSRAM_SPECIAL_STATUS_SCARB_SM                            Fld(5, 24) //[28:24]
#define PSRAM_SPECIAL_STATUS_SREF_REQ_2Q                         Fld(1, 30) //[30:30]
#define PSRAM_SPECIAL_STATUS_SREF_REQ                            Fld(1, 31) //[31:31]

#define PSRAMC_REG_SPCMDRESP                                   (PSRAMC_NAO_BASE_ADDRESS + 0x00088)
#define PSRAM_SPCMDRESP_MRW_RESPONSE                             Fld(1, 0) //[0:0]
#define PSRAM_SPCMDRESP_MRR_RESPONSE                             Fld(1, 1) //[1:1]
#define PSRAM_SPCMDRESP_ZQC_RESPONSE                             Fld(1, 2) //[2:2]
#define PSRAM_SPCMDRESP_RESET_RESPONSE                           Fld(1, 3) //[3:3]

#define PSRAMC_REG_MRR_STATUS                                  (PSRAMC_NAO_BASE_ADDRESS + 0x0008C)
#define PSRAM_MRR_STATUS_MRR_REG                                 Fld(8, 0) //[7:0]
#define PSRAM_MRR_STATUS_MRR_DATA                                Fld(8, 8) //[15:8]
#define PSRAM_MRR_STATUS_MRR_SW_REG                              Fld(8, 16) //[23:16]

#define PSRAMC_REG_MRR_STATUS2                                 (PSRAMC_NAO_BASE_ADDRESS + 0x00090)
#define PSRAM_MRR_STATUS2_MR4_REG                                Fld(8, 0) //[7:0]

#define PSRAMC_REG_SREF_STATUS                                 (PSRAMC_NAO_BASE_ADDRESS + 0x00094)
#define SREF_STATUS_TXREF_CNT                              Fld(10, 0) //[9:0]

#define PSRAMC_REG_HW_REFRATE_MON                              (PSRAMC_NAO_BASE_ADDRESS + 0x00114)
#define HW_REFRATE_MON_REFRESH_RATE_MIN_MON                Fld(3, 0) //[2:0]
#define HW_REFRATE_MON_REFRESH_RATE_MAX_MON                Fld(3, 8) //[10:8]

#define PSRAMC_REG_TESTRPT                                     (PSRAMC_NAO_BASE_ADDRESS + 0x00120)
#define TESTRPT_DM_CMP_CPT_RK0                             Fld(1, 0) //[0:0]
#define TESTRPT_DM_CMP_CPT_RK1                             Fld(1, 1) //[1:1]
#define TESTRPT_DM_CMP_ERR_RK0                             Fld(1, 4) //[4:4]
#define TESTRPT_DM_CMP_ERR_RK1                             Fld(1, 5) //[5:5]
#define TESTRPT_DLE_CNT_OK_RK0                             Fld(1, 8) //[8:8]
#define TESTRPT_DLE_CNT_OK_RK1                             Fld(1, 9) //[9:9]
#define TESTRPT_TESTSTAT                                   Fld(3, 20) //[22:20]

#define PSRAMC_REG_CMP_ERR                                     (PSRAMC_NAO_BASE_ADDRESS + 0x00124)
#define CMP_ERR_CMP_ERR                                    Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS1                           (PSRAMC_NAO_BASE_ADDRESS + 0x00128)
#define TEST_ABIT_STATUS1_TEST_ABIT_ERR1                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS2                           (PSRAMC_NAO_BASE_ADDRESS + 0x0012C)
#define TEST_ABIT_STATUS2_TEST_ABIT_ERR2                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS3                           (PSRAMC_NAO_BASE_ADDRESS + 0x00130)
#define TEST_ABIT_STATUS3_TEST_ABIT_ERR3                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS4                           (PSRAMC_NAO_BASE_ADDRESS + 0x00134)
#define TEST_ABIT_STATUS4_TEST_ABIT_ERR4                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS5                           (PSRAMC_NAO_BASE_ADDRESS + 0x00138)
#define TEST_ABIT_STATUS5_TEST_ABIT_ERR5                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS6                           (PSRAMC_NAO_BASE_ADDRESS + 0x0013C)
#define TEST_ABIT_STATUS6_TEST_ABIT_ERR6                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS7                           (PSRAMC_NAO_BASE_ADDRESS + 0x00140)
#define TEST_ABIT_STATUS7_TEST_ABIT_ERR7                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_ABIT_STATUS8                           (PSRAMC_NAO_BASE_ADDRESS + 0x00144)
#define TEST_ABIT_STATUS8_TEST_ABIT_ERR8                   Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_RF_ERROR_FLAG0                         (PSRAMC_NAO_BASE_ADDRESS + 0x00148)
#define TEST_RF_ERROR_FLAG0_TEST_RF_ERROR_FLAG0            Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_RF_ERROR_FLAG1                         (PSRAMC_NAO_BASE_ADDRESS + 0x0014C)
#define TEST_RF_ERROR_FLAG1_TEST_RF_ERROR_FLAG1            Fld(32, 0) //[31:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT1                          (PSRAMC_NAO_BASE_ADDRESS + 0x00150)
#define TEST_RF_ERROR_CNT1_DQ0F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT1_DQ0R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT2                          (PSRAMC_NAO_BASE_ADDRESS + 0x00154)
#define TEST_RF_ERROR_CNT2_DQ1F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT2_DQ1R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT3                          (PSRAMC_NAO_BASE_ADDRESS + 0x00158)
#define TEST_RF_ERROR_CNT3_DQ2F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT3_DQ2R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT4                          (PSRAMC_NAO_BASE_ADDRESS + 0x0015C)
#define TEST_RF_ERROR_CNT4_DQ3F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT4_DQ3R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT5                          (PSRAMC_NAO_BASE_ADDRESS + 0x00160)
#define TEST_RF_ERROR_CNT5_DQ4F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT5_DQ4R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT6                          (PSRAMC_NAO_BASE_ADDRESS + 0x00164)
#define TEST_RF_ERROR_CNT6_DQ5F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT6_DQ5R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT7                          (PSRAMC_NAO_BASE_ADDRESS + 0x00168)
#define TEST_RF_ERROR_CNT7_DQ6F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT7_DQ6R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_RF_ERROR_CNT8                          (PSRAMC_NAO_BASE_ADDRESS + 0x0016C)
#define TEST_RF_ERROR_CNT8_DQ7F_ERR_CNT                    Fld(11, 16) //[26:16]
#define TEST_RF_ERROR_CNT8_DQ7R_ERR_CNT                    Fld(11, 0) //[10:0]

#define PSRAMC_REG_TEST_LOOP_CNT                               (PSRAMC_NAO_BASE_ADDRESS + 0x00170)
#define TEST_LOOP_CNT_LOOP_CNT                             Fld(16, 0) //[15:0]

#define PSRAMC_REG_SREF_DLY_CNT                                (PSRAMC_NAO_BASE_ADDRESS + 0x00180)
#define SREF_DLY_CNT_SREF_DLY_CNT                          Fld(16, 0) //[15:0]

#define PSRAMC_REG_DRAM_CLK_EN_0_NEW_COUNTER                   (PSRAMC_NAO_BASE_ADDRESS + 0x002F0)
#define DRAM_CLK_EN_0_NEW_COUNTER_DRAM_CLK_EN_0_NEW_COUNTER Fld(32, 0) //[31:0]

#define PSRAMC_REG_APHYPI_CG_CK_NEW_COUNTER                    (PSRAMC_NAO_BASE_ADDRESS + 0x002F4)
#define APHYPI_CG_CK_NEW_COUNTER_APHYPI_CG_CK_NEW_COUNTER  Fld(32, 0) //[31:0]

#define PSRAMC_REG_REFRESH_POP_COUNTER                         (PSRAMC_NAO_BASE_ADDRESS + 0x00300)
#define REFRESH_POP_COUNTER_REFRESH_POP_COUNTER            Fld(32, 0) //[31:0]

#define PSRAMC_REG_FREERUN_26M_COUNTER                         (PSRAMC_NAO_BASE_ADDRESS + 0x00304)
#define FREERUN_26M_COUNTER_FREERUN_26M_COUNTER            Fld(32, 0) //[31:0]

#define PSRAMC_REG_DRAMC_IDLE_COUNTER                          (PSRAMC_NAO_BASE_ADDRESS + 0x00308)
#define DRAMC_IDLE_COUNTER_DRAMC_IDLE_COUNTER              Fld(32, 0) //[31:0]

#define PSRAMC_REG_READ_BYTES_COUNTER                          (PSRAMC_NAO_BASE_ADDRESS + 0x0038C)
#define READ_BYTES_COUNTER_READ_BYTES_COUNTER              Fld(32, 0) //[31:0]

#define PSRAMC_REG_WRITE_BYTES_COUNTER                         (PSRAMC_NAO_BASE_ADDRESS + 0x00390)
#define WRITE_BYTES_COUNTER_WRITE_BYTES_COUNTER            Fld(32, 0) //[31:0]

#define PSRAMC_REG_MAX_SREF_REQ_TO_ACK_LATENCY_COUNTER         (PSRAMC_NAO_BASE_ADDRESS + 0x00394)
#define MAX_SREF_REQ_TO_ACK_LATENCY_COUNTER_SREF_REQTOACK_MAX_COUNTER Fld(32, 0) //[31:0]

#define PSRAMC_REG_DRAMC_IDLE_DCM_COUNTER                      (PSRAMC_NAO_BASE_ADDRESS + 0x003A0)
#define DRAMC_IDLE_DCM_COUNTER_DRAMC_IDLE_DCM_COUNTER      Fld(32, 0) //[31:0]

#define PSRAMC_REG_DDRPHY_CLK_EN_COUNTER                       (PSRAMC_NAO_BASE_ADDRESS + 0x003A4)
#define DDRPHY_CLK_EN_COUNTER_DDRPHY_CLK_EN_COUNTER        Fld(32, 0) //[31:0]

#define PSRAMC_REG_DDRPHY_CLK_EN_COMB_COUNTER                  (PSRAMC_NAO_BASE_ADDRESS + 0x003A8)
#define DDRPHY_CLK_EN_COMB_COUNTER_DDRPHY_CLK_EN_COMB_COUNTER Fld(32, 0) //[31:0]

#define PSRAMC_REG_LAT_COUNTER_AVER                            (PSRAMC_NAO_BASE_ADDRESS + 0x003E0)
#define LAT_COUNTER_AVER_LAT_CMD_AVER_CNT                  Fld(32, 0) //[31:0]

#define PSRAMC_REG_LAT_COUNTER_NUM                             (PSRAMC_NAO_BASE_ADDRESS + 0x003E4)
#define LAT_COUNTER_NUM_LAT_CMD_NUM                        Fld(16, 0) //[15:0]

#define PSRAMC_REG_LAT_COUNTER_BLOCK_ALE                       (PSRAMC_NAO_BASE_ADDRESS + 0x003E8)
#define LAT_COUNTER_BLOCK_ALE_CTO_BLOCK_CNT_MAX            Fld(16, 0) //[15:0]

#define PSRAMC_REG_LAT_COUNTER_CMD0                            (PSRAMC_NAO_BASE_ADDRESS + 0x003C0)
#define LAT_COUNTER_CMD0_LAT_CMD0_CNT_MAX                  Fld(16, 0) //[15:0]

#define PSRAMC_REG_RK0_CURRENT_TX_SETTING1                     (PSRAMC_NAO_BASE_ADDRESS + 0x00610)
#define RK0_CURRENT_TX_SETTING1_REG_TX_DLY_DQ0_MOD         Fld(3, 0) //[2:0]
#define RK0_CURRENT_TX_SETTING1_REG_TX_DLY_DQM0_MOD        Fld(3, 16) //[18:16]

#define PSRAMC_REG_RK0_CURRENT_TX_SETTING2                     (PSRAMC_NAO_BASE_ADDRESS + 0x00614)
#define RK0_CURRENT_TX_SETTING2_REG_DLY_DQ0_MOD            Fld(3, 0) //[2:0]
#define RK0_CURRENT_TX_SETTING2_REG_DLY_DQM0_MOD           Fld(3, 16) //[18:16]

#define PSRAMC_REG_RK0_CURRENT_TX_SETTING3                     (PSRAMC_NAO_BASE_ADDRESS + 0x00618)
#define RK0_CURRENT_TX_SETTING3_REG_TX_DLY_OEN_DQ0_MOD     Fld(3, 0) //[2:0]
#define RK0_CURRENT_TX_SETTING3_REG_TX_DLY_OEN_DQM0_MOD    Fld(3, 16) //[18:16]

#define PSRAMC_REG_RK0_CURRENT_TX_SETTING4                     (PSRAMC_NAO_BASE_ADDRESS + 0x0061C)
#define RK0_CURRENT_TX_SETTING4_REG_DLY_OEN_DQ0_MOD        Fld(3, 0) //[2:0]
#define RK0_CURRENT_TX_SETTING4_REG_DLY_OEN_DQM0_MOD       Fld(3, 16) //[18:16]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA0                          (PSRAMC_NAO_BASE_ADDRESS + 0x00620)
#define RK0_DUMMY_RD_DATA0_DUMMY_RD_RK0_DATA0              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA1                          (PSRAMC_NAO_BASE_ADDRESS + 0x00624)
#define RK0_DUMMY_RD_DATA1_DUMMY_RD_RK0_DATA1              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA2                          (PSRAMC_NAO_BASE_ADDRESS + 0x00628)
#define RK0_DUMMY_RD_DATA2_DUMMY_RD_RK0_DATA2              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA3                          (PSRAMC_NAO_BASE_ADDRESS + 0x0062C)
#define RK0_DUMMY_RD_DATA3_DUMMY_RD_RK0_DATA3              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA4                          (PSRAMC_NAO_BASE_ADDRESS + 0x00630)
#define RK0_DUMMY_RD_DATA4_DUMMY_RD_RK0_DATA4              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA5                          (PSRAMC_NAO_BASE_ADDRESS + 0x00634)
#define RK0_DUMMY_RD_DATA5_DUMMY_RD_RK0_DATA5              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA6                          (PSRAMC_NAO_BASE_ADDRESS + 0x00638)
#define RK0_DUMMY_RD_DATA6_DUMMY_RD_RK0_DATA6              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_DUMMY_RD_DATA7                          (PSRAMC_NAO_BASE_ADDRESS + 0x0063C)
#define RK0_DUMMY_RD_DATA7_DUMMY_RD_RK0_DATA7              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK0_PI_DQ_CAL                               (PSRAMC_NAO_BASE_ADDRESS + 0x00660)
#define RK0_PI_DQ_CAL_RK0_ARPI_DQ_B0_CAL                   Fld(6, 0) //[5:0]

#define PSRAMC_REG_RK0_PI_DQM_CAL                              (PSRAMC_NAO_BASE_ADDRESS + 0x00668)
#define RK0_PI_DQM_CAL_RK0_ARPI_DQM_B0_CAL                 Fld(6, 0) //[5:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA0                          (PSRAMC_NAO_BASE_ADDRESS + 0x00720)
#define RK1_DUMMY_RD_DATA0_DUMMY_RD_RK1_DATA0              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA1                          (PSRAMC_NAO_BASE_ADDRESS + 0x00724)
#define RK1_DUMMY_RD_DATA1_DUMMY_RD_RK1_DATA1              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA2                          (PSRAMC_NAO_BASE_ADDRESS + 0x00728)
#define RK1_DUMMY_RD_DATA2_DUMMY_RD_RK1_DATA2              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA3                          (PSRAMC_NAO_BASE_ADDRESS + 0x0072C)
#define RK1_DUMMY_RD_DATA3_DUMMY_RD_RK1_DATA3              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA4                          (PSRAMC_NAO_BASE_ADDRESS + 0x00730)
#define RK1_DUMMY_RD_DATA4_DUMMY_RD_RK1_DATA4              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA5                          (PSRAMC_NAO_BASE_ADDRESS + 0x00734)
#define RK1_DUMMY_RD_DATA5_DUMMY_RD_RK1_DATA5              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA6                          (PSRAMC_NAO_BASE_ADDRESS + 0x00738)
#define RK1_DUMMY_RD_DATA6_DUMMY_RD_RK1_DATA6              Fld(32, 0) //[31:0]

#define PSRAMC_REG_RK1_DUMMY_RD_DATA7                          (PSRAMC_NAO_BASE_ADDRESS + 0x0073C)
#define RK1_DUMMY_RD_DATA7_DUMMY_RD_RK1_DATA7              Fld(32, 0) //[31:0]

#endif /* #ifndef __PSRAMC_NAO_REGS_H__ */
