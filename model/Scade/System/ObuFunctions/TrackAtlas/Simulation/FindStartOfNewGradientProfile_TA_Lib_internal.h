/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _FindStartOfNewGradientProfile_TA_Lib_internal_H_
#define _FindStartOfNewGradientProfile_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewGradientPro_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfile::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindStartOfNewGradientPro_TA_Lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewGradientProfile::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewGradientProfile::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewGradientProfile::_L93 */ _L93;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfile::_L94 */ _L94;
  kcg_bool /* TA_Lib_internal::FindStartOfNewGradientProfile::_L96 */ _L96;
  array__10560 /* TA_Lib_internal::FindStartOfNewGradientProfile::_L98 */ _L98;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfile::_L99 */ _L99;
  kcg_int /* TA_Lib_internal::FindStartOfNewGradientProfile::_L100 */ _L100;
  array_int_33 /* TA_Lib_internal::FindStartOfNewGradientProfile::_L198 */ _L198;
} outC_FindStartOfNewGradientProfile_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewGradientProfile */
extern void FindStartOfNewGradientProfile_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfile::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfile::New_Profile */GradientProfile_t_TrackAtlasTypes *New_Profile,
  outC_FindStartOfNewGradientProfile_TA_Lib_internal *outC);

extern void FindStartOfNewGradientProfile_reset_TA_Lib_internal(
  outC_FindStartOfNewGradientProfile_TA_Lib_internal *outC);

#endif /* _FindStartOfNewGradientProfile_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewGradientProfile_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

