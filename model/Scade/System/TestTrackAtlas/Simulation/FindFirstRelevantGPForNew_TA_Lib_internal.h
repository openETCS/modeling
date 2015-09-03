/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */
#ifndef _FindFirstRelevantGPForNew_TA_Lib_internal_H_
#define _FindFirstRelevantGPForNew_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::cont */ cont;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L168 */ _L168;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L169 */ _L169;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L170 */ _L170;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L171 */ _L171;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L172 */ _L172;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L173 */ _L173;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L174 */ _L174;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L175 */ _L175;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L181 */ _L181;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L180 */ _L180;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L179 */ _L179;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L178 */ _L178;
  kcg_bool /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L177 */ _L177;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L176 */ _L176;
  kcg_int /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L182 */ _L182;
} outC_FindFirstRelevantGPForNew_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop */
extern void FindFirstRelevantGPForNew_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  outC_FindFirstRelevantGPForNew_TA_Lib_internal *outC);

extern void FindFirstRelevantGPForNew_reset_TA_Lib_internal(
  outC_FindFirstRelevantGPForNew_TA_Lib_internal *outC);

#endif /* _FindFirstRelevantGPForNew_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantGPForNew_TA_Lib_internal.h
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

