/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Correct_StartSection_TA_Gradient.h"

/* TA_Gradient::GP_Correct_StartSection */
void GP_Correct_StartSection_TA_Gradient(
  /* TA_Gradient::GP_Correct_StartSection::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Correct_StartSection::Loc_BG */ kcg_int Loc_BG,
  /* TA_Gradient::GP_Correct_StartSection::Profile_out */ GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  static Gradient_section_t_TrackAtlasTypes noname;
  /* TA_Gradient::GP_Correct_StartSection::_L1 */
  static GradientProfile_t_TrackAtlasTypes _L1;
  /* TA_Gradient::GP_Correct_StartSection::_L3 */
  static Gradient_section_t_TrackAtlasTypes _L3;
  /* TA_Gradient::GP_Correct_StartSection::_L5 */
  static GradientProfile_t_TrackAtlasTypes _L5;
  /* TA_Gradient::GP_Correct_StartSection::_L7 */
  static Gradient_section_t_TrackAtlasTypes _L7;
  /* TA_Gradient::GP_Correct_StartSection::_L8 */
  static kcg_int _L8;
  /* TA_Gradient::GP_Correct_StartSection::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* TA_Gradient::GP_Correct_StartSection::_L10 */
  static kcg_int _L10;
  /* TA_Gradient::GP_Correct_StartSection::_L11 */
  static kcg_int _L11;
  /* TA_Gradient::GP_Correct_StartSection::_L12 */
  static Gradient_section_t_TrackAtlasTypes _L12;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L1, Profile_in);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L3, &_L1[0]);
  _L8 = 0;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L7, &_L3);
  if (kcg_true) {
    _L7.Loc_LRBG = _L8;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L5, &_L1);
  if ((0 <= 0) & (0 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L5[0], &_L7);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(Profile_out, &_L5);
  _L9 = _L1[1].Loc_Absolute;
  _L10 = Loc_BG;
  _L11 = _L9 - _L10;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L12, &_L7);
  if (kcg_true) {
    _L12.L_Gradient = _L11;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&noname, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Correct_StartSection_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

