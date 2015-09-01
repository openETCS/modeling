/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _GP_Truncate_at_BG_loop_TA_Gradient_H_
#define _GP_Truncate_at_BG_loop_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::GP_Truncate_at_BG_loop::cont */ cont;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_out */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::GP_Truncate_at_BG_loop::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG_loop::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG_loop::_L3 */ _L3;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG_loop::_L4 */ _L4;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG_loop::_L5 */ _L5;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG_loop::_L6 */ _L6;
  kcg_int /* TA_Gradient::GP_Truncate_at_BG_loop::_L7 */ _L7;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Truncate_at_BG_loop::_L8 */ _L8;
  kcg_bool /* TA_Gradient::GP_Truncate_at_BG_loop::_L9 */ _L9;
} outC_GP_Truncate_at_BG_loop_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Truncate_at_BG_loop */
extern void GP_Truncate_at_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG_loop::i */kcg_int i,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Acc */GradientProfile_t_TrackAtlasTypes *Acc,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Pointer */kcg_int Pointer,
  outC_GP_Truncate_at_BG_loop_TA_Gradient *outC);

extern void GP_Truncate_at_BG_loop_reset_TA_Gradient(
  outC_GP_Truncate_at_BG_loop_TA_Gradient *outC);

#endif /* _GP_Truncate_at_BG_loop_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Truncate_at_BG_loop_TA_Gradient.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

