/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T17:27:48
*************************************************************$ */
#ifndef _Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient_H_
#define _Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::cont */ cont;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::relevant_section */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L168 */ _L168;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L169 */ _L169;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L170 */ _L170;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L171 */ _L171;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L172 */ _L172;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L173 */ _L173;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L174 */ _L174;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L175 */ _L175;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L181 */ _L181;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L180 */ _L180;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L179 */ _L179;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L178 */ _L178;
  kcg_bool /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L177 */ _L177;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L176 */ _L176;
  kcg_int /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::_L182 */ _L182;
} outC_Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop */
extern void Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient(
  /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::i */kcg_int i,
  /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::Acc */kcg_int Acc,
  /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::Trunc_GP_at_prvLRBG_Abs_Loop::position_BG */kcg_int position_BG,
  outC_Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient *outC);

extern void Trunc_GP_at_prvLRBG_Abs_Loop_reset_TA_Gradient(
  outC_Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient *outC);

#endif /* _Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Trunc_GP_at_prvLRBG_Abs_Loop_TA_Gradient.h
** Generation date: 2015-08-31T17:27:48
*************************************************************$ */

