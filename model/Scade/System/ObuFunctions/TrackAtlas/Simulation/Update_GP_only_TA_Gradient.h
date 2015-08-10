/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _Update_GP_only_TA_Gradient_H_
#define _Update_GP_only_TA_Gradient_H_

#include "kcg_types.h"
#include "_21_Convert_P21_to_DistancePr_TA_Gradient.h"
#include "Update_GP_per_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_GP_only::new_profile_out */ new_profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_GP_per_LRBG_TA_Lib_internal /* 1 */ _1_Context_1;
  outC__21_Convert_P21_to_DistancePr_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_GP_only::_L1 */ _L1;
  P021_OBU_T_TM /* TA_Gradient::Update_GP_only::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_GP_only::_L4 */ _L4;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_GP_only::_L5 */ _L5;
} outC_Update_GP_only_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Update_GP_only */
extern void Update_GP_only_TA_Gradient(
  /* TA_Gradient::Update_GP_only::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_GP_only::P21_in */P021_OBU_T_TM *P21_in,
  outC_Update_GP_only_TA_Gradient *outC);

extern void Update_GP_only_reset_TA_Gradient(
  outC_Update_GP_only_TA_Gradient *outC);

#endif /* _Update_GP_only_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_GP_only_TA_Gradient.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

