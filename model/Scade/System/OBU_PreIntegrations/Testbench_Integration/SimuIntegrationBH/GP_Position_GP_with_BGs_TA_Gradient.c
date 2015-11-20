/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Position_GP_with_BGs_TA_Gradient.h"

/* TA_Gradient::GP_Position_GP_with_BGs */
void GP_Position_GP_with_BGs_TA_Gradient(
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_LRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::pos_prvLRBG */ L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::there_is_prvLRBG */ kcg_bool there_is_prvLRBG,
  /* TA_Gradient::GP_Position_GP_with_BGs::LastProfile */ GradientProfile_t_TrackAtlasTypes *LastProfile,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileOut */ GradientProfile_t_TrackAtlasTypes *ProfileOut,
  /* TA_Gradient::GP_Position_GP_with_BGs::available */ kcg_bool *available,
  /* TA_Gradient::GP_Position_GP_with_BGs::ProfileLoopOut */ GradientProfile_t_TrackAtlasTypes *ProfileLoopOut)
{
  static kcg_bool noname;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L4 */
  static GradientProfile_t_TrackAtlasTypes _L4;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L5 */
  static GradientProfile_t_TrackAtlasTypes _L5;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L8 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L8;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L6 */
  static GradientProfile_t_TrackAtlasTypes _L6;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L15 */
  static kcg_bool _L15;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L16 */
  static GradientProfile_t_TrackAtlasTypes _L16;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L18 */
  static GradientProfile_t_TrackAtlasTypes _L18;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L22 */
  static GradientProfile_t_TrackAtlasTypes _L22;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L23 */
  static GradientProfile_t_TrackAtlasTypes _L23;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L24 */
  static GradientProfile_t_TrackAtlasTypes _L24;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L27 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L27;
  /* TA_Gradient::GP_Position_GP_with_BGs::_L28 */
  static kcg_bool _L28;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L4, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L5, LastProfile);
  _L8 = pos_prvLRBG;
  _L9 = pos_LRBG;
  /* 1 */ GP_Merge_New_P21_to_Profile_TA_Gradient(&_L4, &_L5, &_L6);
  /* 1 */ GP_Normalize_Profile_TA_Gradient(&_L6, _L9, &_L16);
  /* 2 */ GP_Truncate_at_BG_TA_Gradient(&_L16, &_L22);
  _L27 = pos_LRBG;
  /* 1 */ GP_Correct_StartSection_TA_Gradient(&_L22, _L27, &_L24);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileOut, &_L24);
  /* 2 */ GP_Normalize_Profile_TA_Gradient(&_L6, _L8, &_L18);
  /* 3 */ GP_Truncate_at_BG_TA_Gradient(&_L18, &_L23);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileLoopOut, &_L23);
  _L15 = there_is_prvLRBG;
  noname = _L15;
  _L28 = _L24[0].valid;
  *available = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Position_GP_with_BGs_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

