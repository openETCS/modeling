/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Preprocessing_TA_SSP.h"

void SSP_Preprocessing_reset_TA_SSP(outC_SSP_Preprocessing_TA_SSP *outC)
{
  /* 1 */ MoveSSPSectionsAbsolute_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ SSP_Convert_P27V1_to_DistanceProfile_reset_TA_SSP(&outC->Context_1);
}

/* TA_SSP::SSP_Preprocessing */
void SSP_Preprocessing_TA_SSP(
  /* TA_SSP::SSP_Preprocessing::p27v1 */P027V1_OBU_T_TM_baseline2 *p27v1,
  /* TA_SSP::SSP_Preprocessing::reset */kcg_bool reset,
  /* TA_SSP::SSP_Preprocessing::msg_LRBG */kcg_bool msg_LRBG,
  /* TA_SSP::SSP_Preprocessing::msg_prvLRBG */kcg_bool msg_prvLRBG,
  /* TA_SSP::SSP_Preprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Preprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  outC_SSP_Preprocessing_TA_SSP *outC)
{
  kcg_bool noname;
  
  outC->_L21 = reset;
  noname = outC->_L21;
  outC->_L18 = msg_prvLRBG;
  outC->_L16 = pos_prvLRBG;
  outC->_L15 = msg_LRBG;
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L1, p27v1);
  /* 1 */
  SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(&outC->_L1, &outC->Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->Context_1.SpeedProfile);
  outC->_L11 = pos_LRBG;
  /* 1 */
  MoveSSPSectionsAbsolute_TA_Lib_internal(
    &outC->_L14,
    outC->_L18,
    outC->_L15,
    outC->_L11,
    outC->_L16,
    &outC->_1_Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L13,
    &outC->_1_Context_1.ProfileOut);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Preprocessing_TA_SSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

