/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_loop_TA_Gradient.h"

/* TA_Gradient::GP_Merge_New_P21_to_Profile_loop */
void GP_Merge_New_P21_to_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GP */ GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::First_Section_To_Replace */ kcg_int First_Section_To_Replace,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::new_GP_received */ GradientProfile_t_TrackAtlasTypes *new_GP_received,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GradientProfile_out */ GradientProfile_t_TrackAtlasTypes *GradientProfile_out)
{
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L4 */
  static kcg_int _L4;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L5 */
  static kcg_int _L5;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L6 */
  static GradientProfile_t_TrackAtlasTypes _L6;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L7 */
  static kcg_int _L7;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L11 */
  static kcg_int _L11;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L15 */
  static Gradient_section_t_TrackAtlasTypes _L15;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L19 */
  static GradientProfile_t_TrackAtlasTypes _L19;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::_L20 */
  static GradientProfile_t_TrackAtlasTypes _L20;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L20, GP);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L6, new_GP_received);
  _L11 = i;
  if ((0 <= _L11) & (_L11 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L15, &_L6[_L11]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L15,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  _L5 = i;
  _L4 = First_Section_To_Replace;
  _L7 = _L5 + _L4;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L19, &_L20);
  if ((0 <= _L7) & (_L7 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L19[_L7], &_L15);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile_out, &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Merge_New_P21_to_Profile_loop_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

