/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Preprocessing_TA_Gradient.h"

void GP_Preprocessing_reset_TA_Gradient(outC_GP_Preprocessing_TA_Gradient *outC)
{
  /* 1 */ MoveGPSectionsAbsolute_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ GP_Convert_P21_to_DistanceProfile_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::GP_Preprocessing */
void GP_Preprocessing_TA_Gradient(
  /* TA_Gradient::GP_Preprocessing::p21 */P021_OBU_T_TM *p21,
  /* TA_Gradient::GP_Preprocessing::reset */kcg_bool reset,
  /* TA_Gradient::GP_Preprocessing::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_Gradient::GP_Preprocessing::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_Gradient::GP_Preprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Preprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_GP_Preprocessing_TA_Gradient *outC)
{
  kcg_bool noname;
  
  outC->_L21 = reset;
  noname = outC->_L21;
  outC->_L18 = msg_prvLRBG;
  outC->_L16 = pos_prvLRBG;
  outC->_L15 = msg_LRBG;
  kcg_copy_P021_OBU_T_TM(&outC->_L1, p21);
  /* 1 */
  GP_Convert_P21_to_DistanceProfile_TA_Gradient(&outC->_L1, &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->Context_1.GradientProfile);
  outC->_L11 = pos_LRBG;
  /* 1 */
  MoveGPSectionsAbsolute_TA_Lib_internal(
    &outC->_L14,
    outC->_L18,
    outC->_L15,
    outC->_L11,
    outC->_L16,
    &outC->_1_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L13,
    &outC->_1_Context_1.ProfileOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Preprocessing_TA_Gradient.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

