/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */
#ifndef _GP_Normalize_Profile_loop_TA_Gradient_H_
#define _GP_Normalize_Profile_loop_TA_Gradient_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::ProfileNormalized_LRBG */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::Loc_Section_Abs */ Loc_Section_Abs;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::Ga_section_at_LRBG */ Ga_section_at_LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::L_Gradient */ L_Gradient;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L1 */ _L1;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L2 */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::_L3 */ _L3;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L4 */ _L4;
  kcg_bool /* TA_Gradient::GP_Normalize_Profile_loop::_L5 */ _L5;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L7 */ _L7;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L9 */ _L9;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L10 */ _L10;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L11 */ _L11;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L14 */ _L14;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L13 */ _L13;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L16 */ _L16;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L17 */ _L17;
  G_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::_L19 */ _L19;
  kcg_bool /* TA_Gradient::GP_Normalize_Profile_loop::_L18 */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::_L20 */ _L20;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L21 */ _L21;
  kcg_bool /* TA_Gradient::GP_Normalize_Profile_loop::_L22 */ _L22;
  kcg_bool /* TA_Gradient::GP_Normalize_Profile_loop::_L23 */ _L23;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L24 */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::_L25 */ _L25;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L26 */ _L26;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::_L27 */ _L27;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L34 */ _L34;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L33 */ _L33;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L32 */ _L32;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile_loop::_L31 */ _L31;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L30 */ _L30;
  Gradient_section_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile_loop::_L12 */ _L12;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L35 */ _L35;
  kcg_bool /* TA_Gradient::GP_Normalize_Profile_loop::_L36 */ _L36;
  kcg_int /* TA_Gradient::GP_Normalize_Profile_loop::_L37 */ _L37;
} outC_GP_Normalize_Profile_loop_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Normalize_Profile_loop */
extern void GP_Normalize_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile_loop::i */kcg_int i,
  /* TA_Gradient::GP_Normalize_Profile_loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile_loop::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_loop_TA_Gradient *outC);

extern void GP_Normalize_Profile_loop_reset_TA_Gradient(
  outC_GP_Normalize_Profile_loop_TA_Gradient *outC);

#endif /* _GP_Normalize_Profile_loop_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Normalize_Profile_loop_TA_Gradient.h
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

