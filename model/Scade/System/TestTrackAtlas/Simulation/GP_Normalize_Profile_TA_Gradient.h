/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _GP_Normalize_Profile_TA_Gradient_H_
#define _GP_Normalize_Profile_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Normalize_Profile_loop_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile::ProfileNormalized_LRBG */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Normalize_Profile_loop_TA_Gradient /* 1 */ Context_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile::_L1 */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Normalize_Profile::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Normalize_Profile::_L3 */ _L3;
  array_int_50 /* TA_Gradient::GP_Normalize_Profile::_L4 */ _L4;
} outC_GP_Normalize_Profile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Normalize_Profile */
extern void GP_Normalize_Profile_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_TA_Gradient *outC);

extern void GP_Normalize_Profile_reset_TA_Gradient(
  outC_GP_Normalize_Profile_TA_Gradient *outC);

#endif /* _GP_Normalize_Profile_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Normalize_Profile_TA_Gradient.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

