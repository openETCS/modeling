/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SEND_WritePacket041_IT_H_
#define _SEND_WritePacket041_IT_H_

#include "kcg_types.h"
#include "SEND_ConvertP041forWrite_IT.h"
#include "SIM_SEND_WriteBaliseMessageHeader.h"
#include "SIM_SEND_WriteBaliseMessageData.h"

/* =====================  no input structure  ====================== */


/* SEND_WritePacket041_IT */
extern void SEND_WritePacket041_IT(
  /* SEND_WritePacket041_IT::Message41 */ TM_P041_T *Message41,
  /* SEND_WritePacket041_IT::BaliseMessage */ CompressedPackets_T_Common_Types_Pkg *BaliseMessage,
  /* SEND_WritePacket041_IT::Error */ kcg_bool *Error,
  /* SEND_WritePacket041_IT::BalsieMessageOut */ CompressedPackets_T_Common_Types_Pkg *BalsieMessageOut);

#endif /* _SEND_WritePacket041_IT_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_WritePacket041_IT.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

