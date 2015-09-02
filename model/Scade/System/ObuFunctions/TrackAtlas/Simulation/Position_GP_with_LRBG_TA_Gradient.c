/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Position_GP_with_LRBG_TA_Gradient.h"

void Position_GP_with_LRBG_reset_TA_Gradient(
  outC_Position_GP_with_LRBG_TA_Gradient *outC)
{
  /* 1 */ Calc_Distance_from_LRBG_reset_TA_Gradient(&outC->_2_Context_1);
  /* 1 */ Trunc_GP_at_BG_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ Merge_GP_Abs_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::Position_GP_with_LRBG */
void Position_GP_with_LRBG_TA_Gradient(
  /* TA_Gradient::Position_GP_with_LRBG::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::Position_GP_with_LRBG::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::Position_GP_with_LRBG::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::Position_GP_with_LRBG::LastProfile */GradientProfile_t_TrackAtlasTypes *LastProfile,
  outC_Position_GP_with_LRBG_TA_Gradient *outC)
{
  outC->_L14 = kcg_false;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L4, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, LastProfile);
  /* 1 */ Merge_GP_Abs_TA_Gradient(&outC->_L4, &outC->_L5, &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L6,
    &outC->Context_1.GradientdProfile_out);
  outC->updated = outC->_L14;
  outC->_L8 = pos_prvLRBG;
  /* 1 */
  Trunc_GP_at_BG_TA_Lib_internal(&outC->_L6, outC->_L8, &outC->_1_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L7,
    &outC->_1_Context_1.ProfileOut);
  outC->_L9 = pos_LRBG;
  /* 1 */
  Calc_Distance_from_LRBG_TA_Gradient(
    &outC->_L7,
    outC->_L9,
    &outC->_2_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L10,
    &outC->_2_Context_1.ProfileOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L11,
    &outC->_2_Context_1.ProfileLoopOut);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->ProfileLoopOut,
    &outC->_L11);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Position_GP_with_LRBG_TA_Gradient.c
** Generation date: 2015-08-31T19:03:53
*************************************************************$ */

