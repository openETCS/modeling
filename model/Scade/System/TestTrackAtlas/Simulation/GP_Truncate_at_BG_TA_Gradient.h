/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _GP_Truncate_at_BG_TA_Gradient_H_
#define _GP_Truncate_at_BG_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Truncate_at_BG_loop_TA_Gradient.h"
#include "GP_Find_First_Gsection_After_BG_loop_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG::Profile_out */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Truncate_at_BG_loop_TA_Gradient /* 1 */ _1_Context_1[50];
  outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG::_L1 */ _L1;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG::_L8 */ _L8;
  array__11132 /* TA_Gradient::GP_Truncate_at_BG::_L6 */ _L6;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG::_L5 */ _L5;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG::_L4 */ _L4;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG::_L10 */ _L10;
  kcg_bool /* TA_Gradient::GP_Truncate_at_BG::_L11 */ _L11;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG::_L12 */ _L12;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG::_L13 */ _L13;
  kcg_bool /* TA_Gradient::GP_Truncate_at_BG::_L14 */ _L14;
  array_int_50 /* TA_Gradient::GP_Truncate_at_BG::_L17 */ _L17;
} outC_GP_Truncate_at_BG_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Truncate_at_BG */
extern void GP_Truncate_at_BG_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_GP_Truncate_at_BG_TA_Gradient *outC);

extern void GP_Truncate_at_BG_reset_TA_Gradient(
  outC_GP_Truncate_at_BG_TA_Gradient *outC);

#endif /* _GP_Truncate_at_BG_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Truncate_at_BG_TA_Gradient.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

