/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _GP_Correct_StartSection_TA_Gradient_H_
#define _GP_Correct_StartSection_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Correct_StartSection::Profile_out */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Correct_StartSection::_L1 */ _L1;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Correct_StartSection::_L3 */ _L3;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Correct_StartSection::_L5 */ _L5;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Correct_StartSection::_L7 */ _L7;
  kcg_int /* TA_Gradient::GP_Correct_StartSection::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Correct_StartSection::_L9 */ _L9;
  kcg_int /* TA_Gradient::GP_Correct_StartSection::_L10 */ _L10;
  kcg_int /* TA_Gradient::GP_Correct_StartSection::_L11 */ _L11;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Correct_StartSection::_L12 */ _L12;
} outC_GP_Correct_StartSection_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Correct_StartSection */
extern void GP_Correct_StartSection_TA_Gradient(
  /* TA_Gradient::GP_Correct_StartSection::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Correct_StartSection::Loc_BG */kcg_int Loc_BG,
  outC_GP_Correct_StartSection_TA_Gradient *outC);

extern void GP_Correct_StartSection_reset_TA_Gradient(
  outC_GP_Correct_StartSection_TA_Gradient *outC);

#endif /* _GP_Correct_StartSection_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Correct_StartSection_TA_Gradient.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

