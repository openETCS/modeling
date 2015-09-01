/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _GP_Processing_TA_Gradient_H_
#define _GP_Processing_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Position_GP_with_BGs_TA_Gradient.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient.h"
#include "MoveGPSectionsAbsolute_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::GP_Processing::available */ available;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Processing::GP */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Processing::_L10 */ _L10;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Position_GP_with_BGs_TA_Gradient /* 1 */ _2_Context_1;
  outC_MoveGPSectionsAbsolute_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* TA_Gradient::GP_Processing::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Processing::_L19 */ _L19;
  kcg_bool /* TA_Gradient::GP_Processing::_L18 */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Processing::_L17 */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Processing::_L16 */ _L16;
  kcg_bool /* TA_Gradient::GP_Processing::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Processing::_L14 */ _L14;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Processing::_L13 */ _L13;
  kcg_bool /* TA_Gradient::GP_Processing::_L12 */ _L12;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Processing::_L11 */ _L11;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Processing::_L8 */ _L8;
  kcg_bool /* TA_Gradient::GP_Processing::_L9 */ _L9;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Processing::_L7 */ _L7;
  kcg_bool /* TA_Gradient::GP_Processing::_L21 */ _L21;
} outC_GP_Processing_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Processing */
extern void GP_Processing_TA_Gradient(
  /* TA_Gradient::GP_Processing::reset */kcg_bool reset,
  /* TA_Gradient::GP_Processing::p21 */P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Processing::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Processing::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Processing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Processing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Processing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  outC_GP_Processing_TA_Gradient *outC);

extern void GP_Processing_reset_TA_Gradient(
  outC_GP_Processing_TA_Gradient *outC);

#endif /* _GP_Processing_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Processing_TA_Gradient.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

