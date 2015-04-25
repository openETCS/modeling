/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _RECV_ReadPacket005_H_
#define _RECV_ReadPacket005_H_

#include "kcg_types.h"
#include "RECV_ReadPackets.h"
#include "RECV_ConvertP005afterRead_CT.h"
#include "TOOLS_Int_to_NID_LRBG.h"

/* =====================  no input structure  ====================== */


/* RECV_ReadPacket005 */
extern void RECV_ReadPacket005(
  /* RECV_ReadPacket005::RadioMessage_IN */ TM_CompressedRadioMessage *RadioMessage_IN,
  /* RECV_ReadPacket005::RadioPacket005_old_out */ LinkedBGs_T_BG_Types_Pkg *RadioPacket005_old_out);

#endif /* _RECV_ReadPacket005_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPacket005.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

