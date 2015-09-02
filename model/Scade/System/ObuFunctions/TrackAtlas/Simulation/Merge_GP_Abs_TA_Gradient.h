/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */
#ifndef _Merge_GP_Abs_TA_Gradient_H_
#define _Merge_GP_Abs_TA_Gradient_H_

#include "kcg_types.h"
#include "Merge_GP_Abs_loop_TA_Gradient.h"
#include "_2_FindStartOfNewGradientPro_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs::GradientdProfile_out */ GradientdProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merge_GP_Abs_loop_TA_Gradient /* 1 */ _1_Context_1[33];
  outC__2_FindStartOfNewGradientPro_TA_Lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::Merge_GP_Abs::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs::_L5 */ _L5;
  array_int_33 /* TA_Gradient::Merge_GP_Abs::_L9 */ _L9;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs::_L14 */ _L14;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Merge_GP_Abs::_L45 */ _L45;
  array__2398 /* TA_Gradient::Merge_GP_Abs::_L47 */ _L47;
  kcg_bool /* TA_Gradient::Merge_GP_Abs::_L148 */ _L148;
} outC_Merge_GP_Abs_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Merge_GP_Abs */
extern void Merge_GP_Abs_TA_Gradient(
  /* TA_Gradient::Merge_GP_Abs::new_GP */GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Gradient::Merge_GP_Abs::Last_GradientProfile_in */GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  outC_Merge_GP_Abs_TA_Gradient *outC);

extern void Merge_GP_Abs_reset_TA_Gradient(outC_Merge_GP_Abs_TA_Gradient *outC);

#endif /* _Merge_GP_Abs_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merge_GP_Abs_TA_Gradient.h
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

