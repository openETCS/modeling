/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Position_SSP_with_BGs_TA_SSP.h"

void SSP_Position_SSP_with_BGs_reset_TA_SSP(
  outC_SSP_Position_SSP_with_BGs_TA_SSP *outC)
{
  /* 1 */ SSP_Correct_StartSection_reset_TA_SSP(&outC->_5_Context_1);
  /* 1 */ SSP_Truncate_at_BG_reset_TA_SSP(&outC->_4_Context_1);
  /* 1 */ SSP_Normalize_Profile_reset_TA_SSP(&outC->_3_Context_1);
  /* 2 */ SSP_Correct_StartSection_reset_TA_SSP(&outC->_2_Context_2);
  /* 2 */ SSP_Truncate_at_BG_reset_TA_SSP(&outC->_1_Context_2);
  /* 2 */ SSP_Normalize_Profile_reset_TA_SSP(&outC->Context_2);
  /* 1 */ SSP_Merge_New_P27V1_to_Profile_reset_TA_SSP(&outC->Context_1);
}

/* TA_SSP::SSP_Position_SSP_with_BGs */
void SSP_Position_SSP_with_BGs_TA_SSP(
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileIn */StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::LastProfile */StaticSpeedProfile_t_TrackAtlasTypes *LastProfile,
  outC_SSP_Position_SSP_with_BGs_TA_SSP *outC)
{
  kcg_bool noname;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L4, ProfileIn);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, LastProfile);
  /* 1 */
  SSP_Merge_New_P27V1_to_Profile_TA_SSP(
    &outC->_L4,
    &outC->_L5,
    &outC->Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L6,
    &outC->Context_1.SpeedProfile_out);
  outC->_L8 = pos_prvLRBG;
  /* 2 */ SSP_Normalize_Profile_TA_SSP(&outC->_L6, outC->_L8, &outC->Context_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L18,
    &outC->Context_2.ProfileNormalized_LRBG);
  /* 2 */ SSP_Truncate_at_BG_TA_SSP(&outC->_L18, &outC->_1_Context_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L23,
    &outC->_1_Context_2.Profile_out);
  /* 2 */ SSP_Correct_StartSection_TA_SSP(&outC->_L23, &outC->_2_Context_2);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L30,
    &outC->_2_Context_2.Profile_out);
  outC->_L9 = pos_LRBG;
  /* 1 */
  SSP_Normalize_Profile_TA_SSP(&outC->_L6, outC->_L9, &outC->_3_Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L16,
    &outC->_3_Context_1.ProfileNormalized_LRBG);
  /* 1 */ SSP_Truncate_at_BG_TA_SSP(&outC->_L16, &outC->_4_Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L22,
    &outC->_4_Context_1.Profile_out);
  /* 1 */ SSP_Correct_StartSection_TA_SSP(&outC->_L22, &outC->_5_Context_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L29,
    &outC->_5_Context_1.Profile_out);
  outC->_L28 = outC->_L29[0].valid;
  outC->available = outC->_L28;
  outC->_L15 = there_is_prvLRBG;
  noname = outC->_L15;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->ProfileLoopOut,
    &outC->_L30);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L29);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Position_SSP_with_BGs_TA_SSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

