/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _GP_Merge_New_P21_to_Profile_loop_TA_Gradient_H_
#define _GP_Merge_New_P21_to_Profile_loop_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GradientProfile_out */ GradientProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L4 */ _L4;
  kcg_int /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L5 */ _L5;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L6 */ _L6;
  kcg_int /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L7 */ _L7;
  kcg_int /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L11 */ _L11;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L19 */ _L19;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L20 */ _L20;
} outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Merge_New_P21_to_Profile_loop */
extern void GP_Merge_New_P21_to_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::i */kcg_int i,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GP */GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::new_GP_received */GradientProfile_t_TrackAtlasTypes *new_GP_received,
  outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient *outC);

extern void GP_Merge_New_P21_to_Profile_loop_reset_TA_Gradient(
  outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient *outC);

#endif /* _GP_Merge_New_P21_to_Profile_loop_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Merge_New_P21_to_Profile_loop_TA_Gradient.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

