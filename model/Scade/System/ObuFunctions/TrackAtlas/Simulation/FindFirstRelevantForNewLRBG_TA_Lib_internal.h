/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */
#ifndef _FindFirstRelevantForNewLRBG_TA_Lib_internal_H_
#define _FindFirstRelevantForNewLRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantForNewLR_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindFirstRelevantForNewLR_TA_Lib_internal /* 3 */ Context_3[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L1 */ _L1;
  SSP_cat_t_TA_MRSP /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L93 */ _L93;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L94 */ _L94;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L96 */ _L96;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L100 */ _L100;
  kcg_int /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L168 */ _L168;
  array__254 /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L169 */ _L169;
  array_int_33 /* TA_Lib_internal::FindFirstRelevantForNewLRBG::_L170 */ _L170;
} outC_FindFirstRelevantForNewLRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindFirstRelevantForNewLRBG */
extern void FindFirstRelevantForNewLRBG_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantForNewLRBG::SpeedProfile_in */SSP_cat_t_TA_MRSP *SpeedProfile_in,
  /* TA_Lib_internal::FindFirstRelevantForNewLRBG::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_FindFirstRelevantForNewLRBG_TA_Lib_internal *outC);

extern void FindFirstRelevantForNewLRBG_reset_TA_Lib_internal(
  outC_FindFirstRelevantForNewLRBG_TA_Lib_internal *outC);

#endif /* _FindFirstRelevantForNewLRBG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantForNewLRBG_TA_Lib_internal.h
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */

