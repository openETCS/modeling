/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */
#ifndef _Update_LRBG_then_GP_TA_Gradient_H_
#define _Update_LRBG_then_GP_TA_Gradient_H_

#include "kcg_types.h"
#include "_6_Convert_P21_to_DistancePr_TA_Gradient.h"
#include "MoveGPSectionsToNewLRBGafter_TA_Lib_internal.h"
#include "Update_GP_per_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_then_GP::new_profile_out */ new_profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Update_GP_per_LRBG_TA_Lib_internal /* 1 */ _2_Context_1;
  outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal /* 1 */ _1_Context_1;
  outC__6_Convert_P21_to_DistancePr_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_then_GP::_L1 */ _L1;
  P021_OBU_T_TM /* TA_Gradient::Update_LRBG_then_GP::_L2 */ _L2;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Update_LRBG_then_GP::_L4 */ _L4;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_then_GP::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Update_LRBG_then_GP::_L7 */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Update_LRBG_then_GP::_L6 */ _L6;
  kcg_int /* TA_Gradient::Update_LRBG_then_GP::_L5 */ _L5;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_then_GP::_L13 */ _L13;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_then_GP::_L9 */ _L9;
} outC_Update_LRBG_then_GP_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Update_LRBG_then_GP */
extern void Update_LRBG_then_GP_TA_Gradient(
  /* TA_Gradient::Update_LRBG_then_GP::GP_in */GradientProfile_t_TrackAtlasTypes *GP_in,
  /* TA_Gradient::Update_LRBG_then_GP::P21_in */P021_OBU_T_TM *P21_in,
  /* TA_Gradient::Update_LRBG_then_GP::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  outC_Update_LRBG_then_GP_TA_Gradient *outC);

extern void Update_LRBG_then_GP_reset_TA_Gradient(
  outC_Update_LRBG_then_GP_TA_Gradient *outC);

#endif /* _Update_LRBG_then_GP_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_then_GP_TA_Gradient.h
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

