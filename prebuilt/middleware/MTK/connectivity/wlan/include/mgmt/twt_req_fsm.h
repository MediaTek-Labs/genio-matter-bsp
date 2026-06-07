/******************************************************************************
 *
 * This file is provided under a dual license.  When you use or
 * distribute this software, you may choose to be licensed under
 * version 2 of the GNU General Public License ("GPLv2 License")
 * or BSD License.
 *
 * GPLv2 License
 *
 * Copyright(C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 *
 * BSD LICENSE
 *
 * Copyright(C) 2017 MediaTek Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *****************************************************************************/
#ifndef _TWT_REQ_FSM_H
#define _TWT_REQ_FSM_H
#if (CFG_SUPPORT_TWT == 1)

/*******************************************************************************
*                         C O M P I L E R   F L A G S
********************************************************************************
*/

/*******************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
********************************************************************************
*/

/*******************************************************************************
*                              C O N S T A N T S
********************************************************************************
*/

/**
 * TWT_REQ_STATUS - Represents the status of the requested
 * TWT operation (<0 means fail, others mean success)
 *
 * @TWT_REQ_STATUS_SUCCESS: Responder accepts the TWT request
 * @TWT_REQ_STATUS_SUCCESS_ALTERNATE: Responder suggests another parameter
 * @TWT_REQ_STATUS_SUCCESS_DICTATE: Responder indicates another parameter
 * @TWT_REQ_STATUS_UNKNOWN_ERROR: encounter unknown error during negotiation
 * @TWT_REQ_STATUS_FAIL_NEGO_TIMEOUT: The process of negotiation > 1 second
 * @TWT_REQ_STATUS_FAIL_NEGO_REJECT: Responder reject the negotiation
 * @TWT_REQ_STATUS_PEER_NOT_SUPPORT: Peer device(AP) not support TWT
 * @TWT_REQ_STATUS_START_NEGO: negotiation is undergoing
 * @TWT_REQ_STATUS_NOT_ENABLE: Device not enable TWT
 * @TWT_REQ_STATUS_INVALID_PARAMETER: Invalid input parameter
 */

#define TWT_REQ_FAIL_CATEGORY_CREATE_FAIL             (1)
#define TWT_REQ_FAIL_CATEGORY_PEER_NOT_SUPPORT        (2)
#define TWT_REQ_FAIL_CATEGORY_NOT_ENABLE              (3)
#define TWT_REQ_FAIL_CATEGORY_INVALID_PARAM           (4)

/* ACCEPT */
#define TWT_REQ_STATUS_SUCCESS              ((uint32_t)0x00000000)
#define TWT_REQ_STATUS_SUCCESS_ALTERNATE    ((uint32_t)0x00000001)
#define TWT_REQ_STATUS_SUCCESS_DICTATE      ((uint32_t)0x00000002)

/* FAIL TO CREATE TWT/ */
#define TWT_REQ_STATUS_UNKNOWN_ERROR \
(TWT_REQ_FAIL_CATEGORY_CREATE_FAIL | ((uint32_t)0x8000 << 16))  /* 0x80000001 */
#define TWT_REQ_STATUS_FAIL_NEGO_TIMEOUT \
(TWT_REQ_FAIL_CATEGORY_CREATE_FAIL | ((uint32_t)0x8001 << 16))  /* 0x80010001 */
#define TWT_REQ_STATUS_FAIL_NEGO_REJECT \
(TWT_REQ_FAIL_CATEGORY_CREATE_FAIL | ((uint32_t)0x8002 << 16))  /* 0x80020001 */

/* PEER NOT SUPPORT */
#define TWT_REQ_STATUS_PEER_NOT_SUPPORT \
(TWT_REQ_FAIL_CATEGORY_PEER_NOT_SUPPORT | ((uint32_t)0x8000 << 16))
/* 0x80000002 */

/* NOT REQUEST TWT YET*/
#define TWT_REQ_STATUS_START_NEGO \
(TWT_REQ_FAIL_CATEGORY_NOT_ENABLE | ((uint32_t)0x8000 << 16))   /* 0x80000003 */
#define TWT_REQ_STATUS_NOT_ENABLE \
(TWT_REQ_FAIL_CATEGORY_NOT_ENABLE | ((uint32_t)0x8001 << 16))   /* 0x80010003 */
#define TWT_REQ_STATUS_TERMINATE_TEMPORARY \
(TWT_REQ_FAIL_CATEGORY_NOT_ENABLE | ((uint32_t)0x8002 << 16))   /* 0x80010003 */
#define TWT_REQ_STATUS_RESET \
(TWT_REQ_FAIL_CATEGORY_NOT_ENABLE | ((uint32_t)0x8003 << 16))   /* 0x80010003 */

/* INVALID PARAMETER */
#define TWT_REQ_STATUS_INVALID_PARAMETER \
(TWT_REQ_FAIL_CATEGORY_INVALID_PARAM | ((uint32_t)0x8000 << 16))/* 0x80000004 */


/*******************************************************************************
*                             D A T A   T Y P E S
********************************************************************************
*/

enum _ENUM_TWT_REQUESTER_STATE_T {
	TWT_REQ_STATE_IDLE = 0,
	TWT_REQ_STATE_REQTX,
	TWT_REQ_STATE_WAIT_RSP,
	TWT_REQ_STATE_SUSPENDING,
	TWT_REQ_STATE_SUSPENDED,
	TWT_REQ_STATE_RESUMING,
	TWT_REQ_STATE_TEARING_DOWN,
	TWT_REQ_STATE_RX_TEARDOWN,
	TWT_REQ_STATE_RX_INFOFRM,
	TWT_REQ_STATE_NUM
};

/*******************************************************************************
*                            P U B L I C   D A T A
********************************************************************************
*/

/*******************************************************************************
*                           P R I V A T E   D A T A
********************************************************************************
*/

/*******************************************************************************
*                                 M A C R O S
********************************************************************************
*/

/*******************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
********************************************************************************
*/
uint32_t twtReqGetStatus(void);
void twtReqSetStatus(uint32_t u4TwtStatus);
void
twtReqInit(struct ADAPTER *prAdapter);
void
twtReqDeinit(struct ADAPTER *prAdapter);

u_int32_t
twtReqFsmRunEventTxDone(
	struct ADAPTER *prAdapter,
	struct MSDU_INFO *prMsduInfo,
	enum ENUM_TX_RESULT_CODE rTxDoneStatus);

void twtReqFsmRunEventRxSetup(
	struct ADAPTER *prAdapter,
	struct SW_RFB *prSwRfb,
	struct STA_RECORD *prStaRec,
	u_int8_t ucTWTFlowId);

void twtReqFsmRunEventRxTeardown(
	struct ADAPTER *prAdapter,
	struct SW_RFB *prSwRfb,
	struct STA_RECORD *prStaRec,
	u_int8_t ucTWTFlowId);

void twtReqFsmRunEventRxInfoFrm(
	struct ADAPTER *prAdapter,
	struct SW_RFB *prSwRfb,
	struct STA_RECORD *prStaRec,
	u_int8_t ucTWTFlowId,
	struct _NEXT_TWT_INFO_T *prNextTWTInfo);

void twtReqFsmRunEventStart(
	struct ADAPTER *prAdapter,
	struct MSG_HDR *prMsgHdr);

void twtReqFsmRunEventTeardown(
	struct ADAPTER *prAdapter,
	struct MSG_HDR *prMsgHdr);


#if (CFG_SUPPORT_TWT_SUSPEND_RESUME == 1)
void twtReqFsmRunEventSuspend(
	struct ADAPTER *prAdapter,
	struct MSG_HDR *prMsgHdr);

void twtReqFsmRunEventResume(
	struct ADAPTER *prAdapter,
	struct MSG_HDR *prMsgHdr);
#endif

/*******************************************************************************
*                              F U N C T I O N S
********************************************************************************
*/

#endif /* (CFG_SUPPORT_TWT == 1) */
#endif /* _TWT_REQ_FSM_H */
