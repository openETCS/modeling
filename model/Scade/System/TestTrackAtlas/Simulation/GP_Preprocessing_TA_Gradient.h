/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _GP_Preprocessing_TA_Gradient_H_
#define _GP_Preprocessing_TA_Gradient_H_

#include "kcg_types.h"
#include "MoveGPSectionsAbsolute_TA_Lib_internal.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Preprocessing::GP */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveGPSectionsAbsolute_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* TA_Gradient::GP_Preprocessing::_L1 */ _L1;
  kcg_bool /* TA_Gradient::GP_Preprocessing::_L18 */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Preprocessing::_L16 */ _L16;
  kcg_bool /* TA_Gradient::GP_Preprocessing::_L15 */ _L15;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Preprocessing::_L14 */ _L14;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Preprocessing::_L13 */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Preprocessing::_L11 */ _L11;
  kcg_bool /* TA_Gradient::GP_Preprocessing::_L21 */ _L21;
} outC_GP_Preprocessing_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Preprocessing */
extern void GP_Preprocessing_TA_Gradient(
  /* TA_Gradient::GP_Preprocessing::p21 */P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Preprocessing::reset */kcg_bool reset,
  /* TA_Gradient::GP_Preprocessing::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Preprocessing::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Preprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_GP_Preprocessing_TA_Gradient *outC);

extern void GP_Preprocessing_reset_TA_Gradient(
  outC_GP_Preprocessing_TA_Gradient *outC);

#endif /* _GP_Preprocessing_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Preprocessing_TA_Gradient.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

