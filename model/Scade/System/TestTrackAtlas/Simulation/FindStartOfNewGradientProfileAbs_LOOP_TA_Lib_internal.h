/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal_H_
#define _FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::cont */ cont;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* math::Abs::_L1 */ _L1_1;
  kcg_int /* math::Abs::_L2 */ _L2_1;
  kcg_int /* math::Abs::_L3 */ _L3_1;
  kcg_int /* math::Abs::_L5 */ _L5_1;
  kcg_int /* math::Abs::_L8 */ _L8_1;
  kcg_int /* math::Abs::A_Output */ A_Output_1;
  kcg_int /* math::Abs::A_Input */ A_Input_1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L3 */ _L3;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L4 */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L5 */ _L5;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L6 */ _L6;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L7 */ _L7;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L8 */ _L8;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L12 */ _L12;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L13 */ _L13;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L14 */ _L14;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L15 */ _L15;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L16 */ _L16;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L17 */ _L17;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L18 */ _L18;
  G_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L26 */ _L26;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L25 */ _L25;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L24 */ _L24;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L23 */ _L23;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L22 */ _L22;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L21 */ _L21;
  G_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L20 */ _L20;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L19 */ _L19;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L27 */ _L27;
} outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP */
extern void FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::distance_in */L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal *outC);

extern void FindStartOfNewGradientProfileAbs_LOOP_reset_TA_Lib_internal(
  outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal *outC);

#endif /* _FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

