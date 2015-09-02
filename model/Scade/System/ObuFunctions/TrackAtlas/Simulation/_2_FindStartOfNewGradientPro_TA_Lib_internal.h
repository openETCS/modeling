/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */
#ifndef __2_FindStartOfNewGradientPro_TA_Lib_internal_H_
#define __2_FindStartOfNewGradientPro_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewGradientPro_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindStartOfNewGradientPro_TA_Lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L93 */ _L93;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L94 */ _L94;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L96 */ _L96;
  array__2398 /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L98 */ _L98;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L99 */ _L99;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L100 */ _L100;
  array_int_33 /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::_L198 */ _L198;
} outC__2_FindStartOfNewGradientPro_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewGradientProfileAbs */
extern void _2_FindStartOfNewGradientPro_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs::New_Profile */GradientProfile_t_TrackAtlasTypes *New_Profile,
  outC__2_FindStartOfNewGradientPro_TA_Lib_internal *outC);

extern void _2_FindStartOfNewGradientPro_reset_TA_Lib_internal(
  outC__2_FindStartOfNewGradientPro_TA_Lib_internal *outC);

#endif /* __2_FindStartOfNewGradientPro_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** _2_FindStartOfNewGradientPro_TA_Lib_internal.h
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

