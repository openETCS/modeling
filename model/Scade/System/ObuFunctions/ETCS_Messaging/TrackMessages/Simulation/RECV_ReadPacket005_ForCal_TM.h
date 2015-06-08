/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */
#ifndef _RECV_ReadPacket005_ForCal_TM_H_
#define _RECV_ReadPacket005_ForCal_TM_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "_2_RECV_ConvertP005afterRead_TM_conversions.h"

/* ========================  input structure  ====================== */
typedef struct {
  CompressedPackets_T_Common_Types_Pkg /* TM::RECV_ReadPacket005_ForCalcTrainPos::RadioMessage_IN */ RadioMessage_IN;
  NID_LRBG /* TM::RECV_ReadPacket005_ForCalcTrainPos::LRBG */ LRBG;
} inC_RECV_ReadPacket005_ForCal_TM;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBGs_T_BG_Types_Pkg /* TM::RECV_ReadPacket005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC__2_RECV_ConvertP005afterRead_TM_conversions /* 1 */ _1_Context_1;
  outC_RECV_ReadPackets_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_500 /* TM::RECV_ReadPacket005_ForCalcTrainPos::_L5 */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* TM::RECV_ReadPacket005_ForCalcTrainPos::_L6 */ _L6;
  array_int_39 /* TM::RECV_ReadPacket005_ForCalcTrainPos::_L11 */ _L11;
  MetadataElement_T_Common_Types_Pkg /* TM::RECV_ReadPacket005_ForCalcTrainPos::_L30 */ _L30;
  NID_LRBG /* TM::RECV_ReadPacket005_ForCalcTrainPos::_L165 */ _L165;
  LinkedBGs_T_BG_Types_Pkg /* TM::RECV_ReadPacket005_ForCalcTrainPos::_L166 */ _L166;
} outC_RECV_ReadPacket005_ForCal_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::RECV_ReadPacket005_ForCalcTrainPos */
extern void RECV_ReadPacket005_ForCal_TM(
  inC_RECV_ReadPacket005_ForCal_TM *inC,
  outC_RECV_ReadPacket005_ForCal_TM *outC);

extern void RECV_ReadPacket005_ForCal_reset_TM(
  outC_RECV_ReadPacket005_ForCal_TM *outC);

#endif /* _RECV_ReadPacket005_ForCal_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPacket005_ForCal_TM.h
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */

