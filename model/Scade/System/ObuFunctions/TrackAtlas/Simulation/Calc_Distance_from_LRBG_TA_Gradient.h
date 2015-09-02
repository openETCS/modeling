/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */
#ifndef _Calc_Distance_from_LRBG_TA_Gradient_H_
#define _Calc_Distance_from_LRBG_TA_Gradient_H_

#include "kcg_types.h"
#include "Trunc_GP_at_BG_TA_Lib_internal.h"

/* ========================  input structure  ====================== */
typedef struct {
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Calc_Distance_from_LRBG::ProfileIn */ ProfileIn;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Calc_Distance_from_LRBG::pos_LRBG */ pos_LRBG;
} inC_Calc_Distance_from_LRBG_TA_Gradient;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Calc_Distance_from_LRBG::ProfileOut */ ProfileOut;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Calc_Distance_from_LRBG::ProfileLoopOut */ ProfileLoopOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Trunc_GP_at_BG_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Calc_Distance_from_LRBG::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Calc_Distance_from_LRBG::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Calc_Distance_from_LRBG::_L3 */ _L3;
  kcg_bool /* TA_Gradient::Calc_Distance_from_LRBG::_L4 */ _L4;
} outC_Calc_Distance_from_LRBG_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Calc_Distance_from_LRBG */
extern void Calc_Distance_from_LRBG_TA_Gradient(
  inC_Calc_Distance_from_LRBG_TA_Gradient *inC,
  outC_Calc_Distance_from_LRBG_TA_Gradient *outC);

extern void Calc_Distance_from_LRBG_reset_TA_Gradient(
  outC_Calc_Distance_from_LRBG_TA_Gradient *outC);

#endif /* _Calc_Distance_from_LRBG_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Calc_Distance_from_LRBG_TA_Gradient.h
** Generation date: 2015-09-01T16:26:32
*************************************************************$ */

