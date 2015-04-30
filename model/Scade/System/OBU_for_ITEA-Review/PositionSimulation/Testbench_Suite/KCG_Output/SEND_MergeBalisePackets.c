/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergeBalisePackets.h"

/* SEND_MergeBalisePackets */
void SEND_MergeBalisePackets(
  /* SEND_MergeBalisePackets::Headers */ TM_BaliseTelegramHeader_int_T *Headers,
  /* SEND_MergeBalisePackets::P3 */ TM_P003_T *P3,
  /* SEND_MergeBalisePackets::P41 */ TM_P041_T *P41,
  /* SEND_MergeBalisePackets::P42 */ TM_P042_T *P42,
  /* SEND_MergeBalisePackets::P46 */ TM_P046_T *P46,
  /* SEND_MergeBalisePackets::P72 */ kcg_int P72,
  /* SEND_MergeBalisePackets::P137 */ TM_P137_T *P137,
  /* SEND_MergeBalisePackets::P255 */ TM_P255_T *P255,
  /* SEND_MergeBalisePackets::BM_out */ TM_CompressedBaliseMessage *BM_out)
{
  kcg_bool tmp;
  /* SEND_MergeBalisePackets::_L6 */ CompressedPackets_T_Common_Types_Pkg _L6;
  /* SEND_MergeBalisePackets::_L15 */ CompressedPackets_T_Common_Types_Pkg _L15;
  
  kcg_copy_TM_BaliseTelegramHeader_int_T(&(*BM_out).Header, Headers);
  if ((*P41).valid) {
    /* 1 */
    SEND_WritePacket041_IT(
      P41,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_BaliseMessages,
      &tmp,
      &_L15);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L15,
      (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_BaliseMessages);
  }
  if ((*P46).valid) {
    /* 1 */ SEND_WritePacket046_IT(P46, &_L15, &tmp, &_L6);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, &_L15);
  }
  if ((*P42).valid) {
    /* 1 */ SEND_WritePacket042_IT(P42, &_L6, &tmp, &_L15);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L15, &_L6);
  }
  if ((*P255).valid) {
    /* 1 */ SEND_WritePacket255_IT(P255, &_L15, &tmp, &(*BM_out).Messages);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&(*BM_out).Messages, &_L15);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SEND_MergeBalisePackets.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

