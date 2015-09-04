/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */
#ifndef _FindStartOfNewSpeedProfileAbs_TA_Lib_internal_H_
#define _FindStartOfNewSpeedProfileAbs_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L2 */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L93 */ _L93;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L94 */ _L94;
  kcg_bool /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L96 */ _L96;
  array__11530 /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L98 */ _L98;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L99 */ _L99;
  kcg_int /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L100 */ _L100;
  array_int_50 /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::_L198 */ _L198;
} outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs */
extern void FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs::New_Profile */StaticSpeedProfile_t_TrackAtlasTypes *New_Profile,
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC);

extern void FindStartOfNewSpeedProfileAbs_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC);

#endif /* _FindStartOfNewSpeedProfileAbs_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

