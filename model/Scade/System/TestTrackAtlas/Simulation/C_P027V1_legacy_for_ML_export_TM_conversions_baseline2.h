/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _C_P027V1_legacy_for_ML_export_TM_conversions_baseline2_H_
#define _C_P027V1_legacy_for_ML_export_TM_conversions_baseline2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_legacy_out */ P027_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L1 */ _L1;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L2 */ _L2;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L3 */ _L3;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::_L4 */ _L4;
} outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export */
extern void C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_legacy_for_ML_export::P027_in */P027V1_OBU_T_TM_baseline2 *P027_in,
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC);

extern void C_P027V1_legacy_for_ML_export_reset_TM_conversions_baseline2(
  outC_C_P027V1_legacy_for_ML_export_TM_conversions_baseline2 *outC);

#endif /* _C_P027V1_legacy_for_ML_export_TM_conversions_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

