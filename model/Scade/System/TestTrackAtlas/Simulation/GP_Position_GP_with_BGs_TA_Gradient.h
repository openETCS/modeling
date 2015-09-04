/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _GP_Position_GP_with_BGs_TA_Gradient_H_
#define _GP_Position_GP_with_BGs_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient.h"
#include "GP_Normalize_Profile_TA_Gradient.h"
#include "GP_Truncate_at_BG_TA_Gradient.h"
#include "GP_Correct_StartSection_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::ProfileOut */ ProfileOut;
  kcg_bool /* TA_Gradient::GP_Position_GP_with_BGs::available */ available;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::ProfileLoopOut */ ProfileLoopOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Correct_StartSection_TA_Gradient /* 2 */ _4_Context_2;
  outC_GP_Truncate_at_BG_TA_Gradient /* 3 */ Context_3;
  outC_GP_Normalize_Profile_TA_Gradient /* 2 */ _3_Context_2;
  outC_GP_Correct_StartSection_TA_Gradient /* 1 */ _2_Context_1;
  outC_GP_Truncate_at_BG_TA_Gradient /* 2 */ Context_2;
  outC_GP_Normalize_Profile_TA_Gradient /* 1 */ _1_Context_1;
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L4 */ _L4;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L5 */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Position_GP_with_BGs::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Position_GP_with_BGs::_L9 */ _L9;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L6 */ _L6;
  kcg_bool /* TA_Gradient::GP_Position_GP_with_BGs::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L16 */ _L16;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L18 */ _L18;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L22 */ _L22;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L23 */ _L23;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L24 */ _L24;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Position_GP_with_BGs::_L25 */ _L25;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Position_GP_with_BGs::_L27 */ _L27;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Position_GP_with_BGs::_L26 */ _L26;
  kcg_bool /* TA_Gradient::GP_Position_GP_with_BGs::_L28 */ _L28;
} outC_GP_Position_GP_with_BGs_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Position_GP_with_BGs */
extern void GP_Position_GP_with_BGs_TA_Gradient(
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::LastProfile */GradientProfile_t_TrackAtlasTypes *LastProfile,
  outC_GP_Position_GP_with_BGs_TA_Gradient *outC);

extern void GP_Position_GP_with_BGs_reset_TA_Gradient(
  outC_GP_Position_GP_with_BGs_TA_Gradient *outC);

#endif /* _GP_Position_GP_with_BGs_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Position_GP_with_BGs_TA_Gradient.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

