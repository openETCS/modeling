/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _GP_Merge_New_P21_to_Profile_TA_Gradient_H_
#define _GP_Merge_New_P21_to_Profile_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Merge_New_P21_to_Profile_loop_TA_Gradient.h"
#include "FindStartOfNewGradientProfileAbs_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile::GradientdProfile_out */ GradientdProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient /* 1 */ _1_Context_1[33];
  outC_FindStartOfNewGradientProfileAbs_TA_Lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L5 */ _L5;
  array_int_33 /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L9 */ _L9;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L14 */ _L14;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L45 */ _L45;
  array__11017 /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L47 */ _L47;
  kcg_bool /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L148 */ _L148;
} outC_GP_Merge_New_P21_to_Profile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Merge_New_P21_to_Profile */
extern void GP_Merge_New_P21_to_Profile_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::new_GP */GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::Last_GradientProfile_in */GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient *outC);

extern void GP_Merge_New_P21_to_Profile_reset_TA_Gradient(
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient *outC);

#endif /* _GP_Merge_New_P21_to_Profile_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Merge_New_P21_to_Profile_TA_Gradient.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

