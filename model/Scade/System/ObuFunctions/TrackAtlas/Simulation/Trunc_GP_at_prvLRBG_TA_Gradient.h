/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T17:27:48
*************************************************************$ */
#ifndef _Trunc_GP_at_prvLRBG_TA_Gradient_H_
#define _Trunc_GP_at_prvLRBG_TA_Gradient_H_

#include "kcg_types.h"
#include "Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient.h"

/* ========================  input structure  ====================== */
typedef struct {
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Trunc_GP_at_prvLRBG::Profile_in */ Profile_in;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG::position_BG */ position_BG;
} inC_Trunc_GP_at_prvLRBG_TA_Gradient;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient /* 1 */ Context_1[33];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Trunc_GP_at_prvLRBG::_L93 */ _L93;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG::_L94 */ _L94;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG::_L96 */ _L96;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG::_L100 */ _L100;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG::_L168 */ _L168;
  array__190 /* TA_Gradient::Trunc_GP_at_prvLRBG::_L169 */ _L169;
  array_int_33 /* TA_Gradient::Trunc_GP_at_prvLRBG::_L170 */ _L170;
} outC_Trunc_GP_at_prvLRBG_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Trunc_GP_at_prvLRBG */
extern void Trunc_GP_at_prvLRBG_TA_Gradient(
  inC_Trunc_GP_at_prvLRBG_TA_Gradient *inC,
  outC_Trunc_GP_at_prvLRBG_TA_Gradient *outC);

extern void Trunc_GP_at_prvLRBG_reset_TA_Gradient(
  outC_Trunc_GP_at_prvLRBG_TA_Gradient *outC);

#endif /* _Trunc_GP_at_prvLRBG_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trunc_GP_at_prvLRBG_TA_Gradient.h
** Generation date: 2015-08-31T17:27:48
*************************************************************$ */

