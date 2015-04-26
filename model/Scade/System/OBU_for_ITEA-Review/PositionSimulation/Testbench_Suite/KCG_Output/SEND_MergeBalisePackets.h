/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SEND_MergeBalisePackets_H_
#define _SEND_MergeBalisePackets_H_

#include "kcg_types.h"
#include "SEND_WritePacket041_IT.h"
#include "SEND_WritePacket046_IT.h"
#include "SEND_WritePacket042_IT.h"
#include "SEND_WritePacket255_IT.h"

/* =====================  no input structure  ====================== */


/* SEND_MergeBalisePackets */
extern void SEND_MergeBalisePackets(
  /* SEND_MergeBalisePackets::Headers */ TM_BaliseTelegramHeader_int_T *Headers,
  /* SEND_MergeBalisePackets::P3 */ TM_P003_T *P3,
  /* SEND_MergeBalisePackets::P41 */ TM_P041_T *P41,
  /* SEND_MergeBalisePackets::P42 */ TM_P042_T *P42,
  /* SEND_MergeBalisePackets::P46 */ TM_P046_T *P46,
  /* SEND_MergeBalisePackets::P72 */ kcg_int P72,
  /* SEND_MergeBalisePackets::P137 */ TM_P137_T *P137,
  /* SEND_MergeBalisePackets::P255 */ TM_P255_T *P255,
  /* SEND_MergeBalisePackets::BM_out */ TM_CompressedBaliseMessage *BM_out);

#endif /* _SEND_MergeBalisePackets_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_MergeBalisePackets.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

