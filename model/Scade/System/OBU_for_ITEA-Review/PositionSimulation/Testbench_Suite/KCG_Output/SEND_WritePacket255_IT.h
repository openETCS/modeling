/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SEND_WritePacket255_IT_H_
#define _SEND_WritePacket255_IT_H_

#include "kcg_types.h"
#include "SIM_SEND_WriteBaliseMessageHeader.h"
#include "SIM_SEND_WriteBaliseMessageData.h"
#include "SEND_ConvertP255forWrite_IT.h"

/* =====================  no input structure  ====================== */


/* SEND_WritePacket255_IT */
extern void SEND_WritePacket255_IT(
  /* SEND_WritePacket255_IT::Message255 */ TM_P255_T *Message255,
  /* SEND_WritePacket255_IT::BaliseMessage */ CompressedPackets_T_Common_Types_Pkg *BaliseMessage,
  /* SEND_WritePacket255_IT::Error */ kcg_bool *Error,
  /* SEND_WritePacket255_IT::BaliseMessageOut */ CompressedPackets_T_Common_Types_Pkg *BaliseMessageOut);

#endif /* _SEND_WritePacket255_IT_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_WritePacket255_IT.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

