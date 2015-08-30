/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */
#ifndef _C_P005_ForCalcTrainPos_TM_conversions_H_
#define _C_P005_ForCalcTrainPos_TM_conversions_H_

#include "kcg_types.h"
#include "C_P005_LinkedBGs_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBGs_T_BG_Types_Pkg /* TM_conversions::C_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_LinkedBGs_TM_conversions /* 1 */ Context_1[4];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* TM_conversions::C_P005_ForCalcTrainPos::_L1 */ _L1;
  P005_OBU_T_TM /* TM_conversions::C_P005_ForCalcTrainPos::_L2 */ _L2;
  array__16723 /* TM_conversions::C_P005_ForCalcTrainPos::_L4 */ _L4;
  P005_OBU_sectionlist_enum_T_TM /* TM_conversions::C_P005_ForCalcTrainPos::_L11 */ _L11;
  N_ITER /* TM_conversions::C_P005_ForCalcTrainPos::_L10 */ _L10;
  Q_SCALE /* TM_conversions::C_P005_ForCalcTrainPos::_L9 */ _L9;
  L_PACKET /* TM_conversions::C_P005_ForCalcTrainPos::_L8 */ _L8;
  Q_DIR /* TM_conversions::C_P005_ForCalcTrainPos::_L7 */ _L7;
  kcg_bool /* TM_conversions::C_P005_ForCalcTrainPos::_L6 */ _L6;
  array__17558 /* TM_conversions::C_P005_ForCalcTrainPos::_L18 */ _L18;
  array__17561 /* TM_conversions::C_P005_ForCalcTrainPos::_L20 */ _L20;
  array__17564 /* TM_conversions::C_P005_ForCalcTrainPos::_L21 */ _L21;
  array_int_4 /* TM_conversions::C_P005_ForCalcTrainPos::_L22 */ _L22;
  NID_C /* TM_conversions::C_P005_ForCalcTrainPos::_L23 */ _L23;
  array_int_4 /* TM_conversions::C_P005_ForCalcTrainPos::_L24 */ _L24;
} outC_C_P005_ForCalcTrainPos_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_ForCalcTrainPos */
extern void C_P005_ForCalcTrainPos_TM_conversions(
  /* TM_conversions::C_P005_ForCalcTrainPos::P005_in */P005_OBU_T_TM *P005_in,
  /* TM_conversions::C_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  /* TM_conversions::C_P005_ForCalcTrainPos::NID_C_onboard */NID_C NID_C_onboard,
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC);

extern void C_P005_ForCalcTrainPos_reset_TM_conversions(
  outC_C_P005_ForCalcTrainPos_TM_conversions *outC);

#endif /* _C_P005_ForCalcTrainPos_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_ForCalcTrainPos_TM_conversions.h
** Generation date: 2015-08-30T07:02:45
*************************************************************$ */

