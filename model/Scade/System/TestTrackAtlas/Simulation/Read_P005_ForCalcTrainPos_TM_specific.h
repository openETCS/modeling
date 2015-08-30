/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _Read_P005_ForCalcTrainPos_TM_specific_H_
#define _Read_P005_ForCalcTrainPos_TM_specific_H_

#include "kcg_types.h"
#include "Read_P005_TM.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBGs_T_BG_Types_Pkg /* TM_specific::Read_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_ForCalcTrainPos_TM_conversions /* 1 */ _1_Context_1;
  outC_Read_P005_TM /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* TM_specific::Read_P005_ForCalcTrainPos::_L1 */ _L1;
  NID_LRBG /* TM_specific::Read_P005_ForCalcTrainPos::_L2 */ _L2;
  P005_OBU_T_TM /* TM_specific::Read_P005_ForCalcTrainPos::_L3 */ _L3;
  LinkedBGs_T_BG_Types_Pkg /* TM_specific::Read_P005_ForCalcTrainPos::_L4 */ _L4;
  NID_C /* TM_specific::Read_P005_ForCalcTrainPos::_L5 */ _L5;
  kcg_bool /* TM_specific::Read_P005_ForCalcTrainPos::_L6 */ _L6;
} outC_Read_P005_ForCalcTrainPos_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::Read_P005_ForCalcTrainPos */
extern void Read_P005_ForCalcTrainPos_TM_specific(
  /* TM_specific::Read_P005_ForCalcTrainPos::RadioMessage_IN */CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM_specific::Read_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  /* TM_specific::Read_P005_ForCalcTrainPos::NID_C_onboard */NID_C NID_C_onboard,
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC);

extern void Read_P005_ForCalcTrainPos_reset_TM_specific(
  outC_Read_P005_ForCalcTrainPos_TM_specific *outC);

#endif /* _Read_P005_ForCalcTrainPos_TM_specific_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P005_ForCalcTrainPos_TM_specific.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

