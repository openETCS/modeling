/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _GP_Find_First_Gsection_After_BG_loop_TA_Gradient_H_
#define _GP_Find_First_Gsection_After_BG_loop_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::cont */ cont;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Pointer */ Pointer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L5 */ _L5;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L6 */ _L6;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L7 */ _L7;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L10 */ _L10;
  kcg_bool /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L11 */ _L11;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L12 */ _L12;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L13 */ _L13;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L14 */ _L14;
  kcg_bool /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L15 */ _L15;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L16 */ _L16;
  kcg_int /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L17 */ _L17;
} outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Find_First_Gsection_After_BG_loop */
extern void GP_Find_First_Gsection_After_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::i */kcg_int i,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Acc */kcg_int Acc,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient *outC);

extern void GP_Find_First_Gsection_After_BG_loop_reset_TA_Gradient(
  outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient *outC);

#endif /* _GP_Find_First_Gsection_After_BG_loop_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Find_First_Gsection_After_BG_loop_TA_Gradient.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

