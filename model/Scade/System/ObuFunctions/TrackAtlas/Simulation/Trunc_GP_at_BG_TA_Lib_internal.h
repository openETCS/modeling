/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */
#ifndef _Trunc_GP_at_BG_TA_Lib_internal_H_
#define _Trunc_GP_at_BG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantGPForNewLRBG_TA_Lib_internal.h"
#include "Trunc_GP_at_BG_Loop_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_BG::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Trunc_GP_at_BG_Loop_TA_Lib_internal /* 1 */ _1_Context_1[33];
  outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_BG::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L3 */ _L3;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_BG::_L4 */ _L4;
  array_int_33 /* TA_Lib_internal::Trunc_GP_at_BG::_L5 */ _L5;
  array_int_33 /* TA_Lib_internal::Trunc_GP_at_BG::_L6 */ _L6;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_BG::_L7 */ _L7;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_BG::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::Trunc_GP_at_BG::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L12 */ _L12;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L13 */ _L13;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L14 */ _L14;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_BG::_L15 */ _L15;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L16 */ _L16;
  kcg_bool /* TA_Lib_internal::Trunc_GP_at_BG::_L17 */ _L17;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L18 */ _L18;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_BG::_L19 */ _L19;
} outC_Trunc_GP_at_BG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Trunc_GP_at_BG */
extern void Trunc_GP_at_BG_TA_Lib_internal(
  /* TA_Lib_internal::Trunc_GP_at_BG::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Lib_internal::Trunc_GP_at_BG::Loc_BG */kcg_int Loc_BG,
  /* TA_Lib_internal::Trunc_GP_at_BG::there_is_prv_LRBG */kcg_bool there_is_prv_LRBG,
  outC_Trunc_GP_at_BG_TA_Lib_internal *outC);

extern void Trunc_GP_at_BG_reset_TA_Lib_internal(
  outC_Trunc_GP_at_BG_TA_Lib_internal *outC);

#endif /* _Trunc_GP_at_BG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trunc_GP_at_BG_TA_Lib_internal.h
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */

