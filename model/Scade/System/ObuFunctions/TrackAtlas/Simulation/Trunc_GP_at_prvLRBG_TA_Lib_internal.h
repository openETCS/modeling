/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T18:42:59
*************************************************************$ */
#ifndef _Trunc_GP_at_prvLRBG_TA_Lib_internal_H_
#define _Trunc_GP_at_prvLRBG_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindFirstRelevantGPForNewLRBG_TA_Lib_internal.h"
#include "Trunc_GP_at_prvLRBG_Loop_TA_Lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::ProfileIn */ ProfileIn;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::Loc_BG */ Loc_BG;
} inC_Trunc_GP_at_prvLRBG_TA_Lib_internal;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::ProfileOut */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Trunc_GP_at_prvLRBG_Loop_TA_Lib_internal /* 1 */ _1_Context_1[33];
  outC_FindFirstRelevantGPForNewLRBG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L2 */ _L2;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L3 */ _L3;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L4 */ _L4;
  array_int_33 /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L5 */ _L5;
  array_int_33 /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L6 */ _L6;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L7 */ _L7;
  Gradient_section_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L9 */ _L9;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L12 */ _L12;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L13 */ _L13;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L14 */ _L14;
  GradientProfile_t_TrackAtlasTypes /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L15 */ _L15;
  kcg_int /* TA_Lib_internal::Trunc_GP_at_prvLRBG::_L16 */ _L16;
} outC_Trunc_GP_at_prvLRBG_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Trunc_GP_at_prvLRBG */
extern void Trunc_GP_at_prvLRBG_TA_Lib_internal(
  inC_Trunc_GP_at_prvLRBG_TA_Lib_internal *inC,
  outC_Trunc_GP_at_prvLRBG_TA_Lib_internal *outC);

extern void Trunc_GP_at_prvLRBG_reset_TA_Lib_internal(
  outC_Trunc_GP_at_prvLRBG_TA_Lib_internal *outC);

#endif /* _Trunc_GP_at_prvLRBG_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trunc_GP_at_prvLRBG_TA_Lib_internal.h
** Generation date: 2015-08-31T18:42:59
*************************************************************$ */

