/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _GP_Postprocessing_TA_Gradient_H_
#define _GP_Postprocessing_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Position_GP_with_BGs_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::GP_Postprocessing::available */ available;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::GP */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::_L4 */ _L4;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Position_GP_with_BGs_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Postprocessing::_L7 */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Postprocessing::_L6 */ _L6;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::_L2 */ _L2;
  kcg_bool /* TA_Gradient::GP_Postprocessing::_L3 */ _L3;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Postprocessing::_L8 */ _L8;
  kcg_bool /* TA_Gradient::GP_Postprocessing::_L9 */ _L9;
} outC_GP_Postprocessing_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Postprocessing */
extern void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient *outC);

extern void GP_Postprocessing_reset_TA_Gradient(
  outC_GP_Postprocessing_TA_Gradient *outC);

#endif /* _GP_Postprocessing_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Postprocessing_TA_Gradient.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

