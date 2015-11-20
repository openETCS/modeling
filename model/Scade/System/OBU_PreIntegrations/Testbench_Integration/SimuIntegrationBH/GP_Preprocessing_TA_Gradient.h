/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _GP_Preprocessing_TA_Gradient_H_
#define _GP_Preprocessing_TA_Gradient_H_

#include "kcg_types.h"
#include "MoveGPSectionsAbsolute_TA_Lib_internal.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_Gradient::GP_Preprocessing */
extern void GP_Preprocessing_TA_Gradient(
  /* TA_Gradient::GP_Preprocessing::p21 */ P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Preprocessing::reset */ kcg_bool reset,
  /* TA_Gradient::GP_Preprocessing::msg_LRBG */ kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Preprocessing::msg_prvLRBG */ kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Preprocessing::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::GP */ GradientProfile_t_TrackAtlasTypes *GP);

#endif /* _GP_Preprocessing_TA_Gradient_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Preprocessing_TA_Gradient.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

