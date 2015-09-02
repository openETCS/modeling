/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Position_GP_with_BGs_TA_Gradient.h"

void GP_Position_GP_with_BGs_reset_TA_Gradient(
  outC_GP_Position_GP_with_BGs_TA_Gradient *outC)
{
  /* 2 */ GP_Correct_StartSection_reset_TA_Gradient(&outC->_4_Context_2);
  /* 3 */ GP_Truncate_at_BG_reset_TA_Gradient(&outC->Context_3);
  /* 2 */ GP_Normalize_Profile_reset_TA_Gradient(&outC->_3_Context_2);
  /* 1 */ GP_Correct_StartSection_reset_TA_Gradient(&outC->_2_Context_1);
  /* 2 */ GP_Truncate_at_BG_reset_TA_Gradient(&outC->Context_2);
  /* 1 */ GP_Normalize_Profile_reset_TA_Gradient(&outC->_1_Context_1);
  /* 1 */ GP_Merge_New_P21_to_Profile_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::GP_Position_GP_with_BGs */
void GP_Position_GP_with_BGs_TA_Gradient(
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::LastProfile */GradientProfile_t_TrackAtlasTypes *LastProfile,
  outC_GP_Position_GP_with_BGs_TA_Gradient *outC)
{
  kcg_bool noname;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L4, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, LastProfile);
  /* 1 */
  GP_Merge_New_P21_to_Profile_TA_Gradient(
    &outC->_L4,
    &outC->_L5,
    &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L6,
    &outC->Context_1.GradientdProfile_out);
  outC->_L9 = pos_LRBG;
  /* 1 */
  GP_Normalize_Profile_TA_Gradient(&outC->_L6, outC->_L9, &outC->_1_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L16,
    &outC->_1_Context_1.ProfileNormalized_LRBG);
  /* 2 */ GP_Truncate_at_BG_TA_Gradient(&outC->_L16, &outC->Context_2);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L22,
    &outC->Context_2.Profile_out);
  outC->_L27 = pos_LRBG;
  /* 1 */
  GP_Correct_StartSection_TA_Gradient(
    &outC->_L22,
    outC->_L27,
    &outC->_2_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L24,
    &outC->_2_Context_1.Profile_out);
  outC->_L28 = outC->_L24[0].valid;
  outC->available = outC->_L28;
  outC->_L26 = pos_prvLRBG;
  outC->_L8 = pos_prvLRBG;
  /* 2 */
  GP_Normalize_Profile_TA_Gradient(&outC->_L6, outC->_L8, &outC->_3_Context_2);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L18,
    &outC->_3_Context_2.ProfileNormalized_LRBG);
  /* 3 */ GP_Truncate_at_BG_TA_Gradient(&outC->_L18, &outC->Context_3);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L23,
    &outC->Context_3.Profile_out);
  /* 2 */
  GP_Correct_StartSection_TA_Gradient(
    &outC->_L23,
    outC->_L26,
    &outC->_4_Context_2);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L25,
    &outC->_4_Context_2.Profile_out);
  outC->_L15 = there_is_prvLRBG;
  noname = outC->_L15;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->ProfileLoopOut,
    &outC->_L25);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L24);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Position_GP_with_BGs_TA_Gradient.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

