/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Read_P027V1_Legacy_for_ML_TM_specific_H_
#define _Read_P027V1_Legacy_for_ML_TM_specific_H_

#include "kcg_types.h"
#include "Read_P027V1_TM_baseline2.h"
#include "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* TM_specific::Read_P027V1_Legacy_for_ML::P027_legacy_out */ P027_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 /* 1 */ _1_Context_1;
  outC_Read_P027V1_TM_baseline2 /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TM_specific::Read_P027V1_Legacy_for_ML::_L2 */ _L2;
  kcg_bool /* TM_specific::Read_P027V1_Legacy_for_ML::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* TM_specific::Read_P027V1_Legacy_for_ML::_L3 */ _L3;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* TM_specific::Read_P027V1_Legacy_for_ML::_L4 */ _L4;
} outC_Read_P027V1_Legacy_for_ML_TM_specific;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific::Read_P027V1_Legacy_for_ML */
extern void Read_P027V1_Legacy_for_ML_TM_specific(
  /* TM_specific::Read_P027V1_Legacy_for_ML::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC);

extern void Read_P027V1_Legacy_for_ML_reset_TM_specific(
  outC_Read_P027V1_Legacy_for_ML_TM_specific *outC);

#endif /* _Read_P027V1_Legacy_for_ML_TM_specific_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_Legacy_for_ML_TM_specific.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

