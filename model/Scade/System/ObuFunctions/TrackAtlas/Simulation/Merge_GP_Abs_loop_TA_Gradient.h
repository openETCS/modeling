/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */
#ifndef _Merge_GP_Abs_loop_TA_Gradient_H_
#define _Merge_GP_Abs_loop_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs_loop::GradientProfile_out */ GradientProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::Merge_GP_Abs_loop::_L4 */ _L4;
  kcg_int /* TA_Gradient::Merge_GP_Abs_loop::_L5 */ _L5;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs_loop::_L6 */ _L6;
  kcg_int /* TA_Gradient::Merge_GP_Abs_loop::_L7 */ _L7;
  kcg_int /* TA_Gradient::Merge_GP_Abs_loop::_L11 */ _L11;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs_loop::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs_loop::_L19 */ _L19;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs_loop::_L20 */ _L20;
} outC_Merge_GP_Abs_loop_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Merge_GP_Abs_loop */
extern void Merge_GP_Abs_loop_TA_Gradient(
  /* TA_Gradient::Merge_GP_Abs_loop::i */kcg_int i,
  /* TA_Gradient::Merge_GP_Abs_loop::GP */GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Gradient::Merge_GP_Abs_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_Gradient::Merge_GP_Abs_loop::new_GP_received */GradientProfile_t_TrackAtlasTypes *new_GP_received,
  outC_Merge_GP_Abs_loop_TA_Gradient *outC);

extern void Merge_GP_Abs_loop_reset_TA_Gradient(
  outC_Merge_GP_Abs_loop_TA_Gradient *outC);

#endif /* _Merge_GP_Abs_loop_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merge_GP_Abs_loop_TA_Gradient.h
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

