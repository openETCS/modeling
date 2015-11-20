/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Position_SSP_with_BGs_TA_SSP.h"

/* TA_SSP::SSP_Position_SSP_with_BGs */
void SSP_Position_SSP_with_BGs_TA_SSP(
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_SSP::SSP_Position_SSP_with_BGs::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Position_SSP_with_BGs::LastProfile */ StaticSpeedProfile_t_TrackAtlasTypes *LastProfile,
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileOut */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileOut,
  /* TA_SSP::SSP_Position_SSP_with_BGs::available */ kcg_bool *available,
  /* TA_SSP::SSP_Position_SSP_with_BGs::ProfileLoopOut */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileLoopOut)
{
  static kcg_bool noname;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L4 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L4;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L5 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L5;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L6 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L6;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L15 */
  static kcg_bool _L15;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L16 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L16;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L18 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L18;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L22 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L22;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L23 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L23;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L28 */
  static kcg_bool _L28;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L29 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L29;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L30 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L30;
  /* TA_SSP::SSP_Position_SSP_with_BGs::_L33 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L33;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L4, ProfileIn);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L5, LastProfile);
  _L8 = pos_prvLRBG;
  _L9 = pos_LRBG;
  /* 1 */ SSP_Merge_New_P27V1_to_Profile_TA_SSP(&_L4, &_L5, &_L6);
  _L33 = train_length;
  /* 1 */ SSP_Normalize_Profile_TA_SSP(&_L6, _L9, _L33, &_L16);
  /* 1 */ SSP_Truncate_at_BG_TA_SSP(&_L16, &_L22);
  /* 1 */ SSP_Correct_StartSection_TA_SSP(&_L22, &_L29);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileOut, &_L29);
  /* 2 */ SSP_Normalize_Profile_TA_SSP(&_L6, _L8, _L33, &_L18);
  /* 2 */ SSP_Truncate_at_BG_TA_SSP(&_L18, &_L23);
  /* 2 */ SSP_Correct_StartSection_TA_SSP(&_L23, &_L30);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileLoopOut, &_L30);
  _L15 = there_is_prvLRBG;
  noname = _L15;
  _L28 = _L29[0].valid;
  *available = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Position_SSP_with_BGs_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

