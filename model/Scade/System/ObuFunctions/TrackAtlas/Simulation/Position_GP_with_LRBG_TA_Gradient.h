/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */
#ifndef _Position_GP_with_LRBG_TA_Gradient_H_
#define _Position_GP_with_LRBG_TA_Gradient_H_

#include "kcg_types.h"
#include "Calc_Distance_from_LRBG_TA_Gradient.h"
#include "Merge_GP_Abs_TA_Gradient.h"
#include "Trunc_GP_at_BG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::Position_GP_with_LRBG::updated */ updated;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::ProfileOut */ ProfileOut;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::ProfileLoopOut */ ProfileLoopOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Calc_Distance_from_LRBG_TA_Gradient /* 1 */ _2_Context_1;
  outC_Trunc_GP_at_BG_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_Merge_GP_Abs_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::_L4 */ _L4;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::_L5 */ _L5;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::_L7 */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Position_GP_with_LRBG::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Position_GP_with_LRBG::_L9 */ _L9;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::_L10 */ _L10;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::_L11 */ _L11;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Position_GP_with_LRBG::_L6 */ _L6;
  kcg_bool /* TA_Gradient::Position_GP_with_LRBG::_L14 */ _L14;
} outC_Position_GP_with_LRBG_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Position_GP_with_LRBG */
extern void Position_GP_with_LRBG_TA_Gradient(
  /* TA_Gradient::Position_GP_with_LRBG::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::Position_GP_with_LRBG::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::Position_GP_with_LRBG::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::Position_GP_with_LRBG::LastProfile */GradientProfile_t_TrackAtlasTypes *LastProfile,
  outC_Position_GP_with_LRBG_TA_Gradient *outC);

extern void Position_GP_with_LRBG_reset_TA_Gradient(
  outC_Position_GP_with_LRBG_TA_Gradient *outC);

#endif /* _Position_GP_with_LRBG_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Position_GP_with_LRBG_TA_Gradient.h
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

