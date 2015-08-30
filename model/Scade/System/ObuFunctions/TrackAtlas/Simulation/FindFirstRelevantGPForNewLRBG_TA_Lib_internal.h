/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _FindFirstRelevantGPForNewLRBG_TA_Lib_internal_H_
#define _FindFirstRelevantGPForNewLRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantGPForNew_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindFirstRelevantGPForNew_TA_Lib_internal /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L93 */ _L93;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L94 */ _L94;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L96 */ _L96;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L100 */ _L100;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L168 */ _L168;
  array__10560 /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L169 */ _L169;
  array_int_33 /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::_L170 */ _L170;
} outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG */
extern void FindFirstRelevantGPForNewLRBG_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal *outC);

extern void FindFirstRelevantGPForNewLRBG_reset_TA_Lib_internal(
  outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal *outC);

#endif /* _FindFirstRelevantGPForNewLRBG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantGPForNewLRBG_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

