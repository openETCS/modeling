/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */
#ifndef _Update_LRBG_only_TA_Gradient_H_
#define _Update_LRBG_only_TA_Gradient_H_

#include "kcg_types.h"
#include "MoveGPSectionsToNewLRBGafter_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_only::new_profile_out */ new_profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveGPSectionsToNewLRBGafter_TA_Lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_only::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::Update_LRBG_only::_L2 */ _L2;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::Update_LRBG_only::_L3 */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Update_LRBG_only::_L34 */ _L34;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::Update_LRBG_only::_L35 */ _L35;
  kcg_int /* TA_Gradient::Update_LRBG_only::_L36 */ _L36;
} outC_Update_LRBG_only_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::Update_LRBG_only */
extern void Update_LRBG_only_TA_Gradient(
  /* TA_Gradient::Update_LRBG_only::SP_in */GradientProfile_t_TrackAtlasTypes *SP_in,
  /* TA_Gradient::Update_LRBG_only::TrainPosition_in */trainPosition_T_TrainPosition_Types_Pck *TrainPosition_in,
  outC_Update_LRBG_only_TA_Gradient *outC);

extern void Update_LRBG_only_reset_TA_Gradient(
  outC_Update_LRBG_only_TA_Gradient *outC);

#endif /* _Update_LRBG_only_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_LRBG_only_TA_Gradient.h
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */

