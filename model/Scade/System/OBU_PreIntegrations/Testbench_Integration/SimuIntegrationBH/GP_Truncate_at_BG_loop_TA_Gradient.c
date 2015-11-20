/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_loop_TA_Gradient.h"

/* TA_Gradient::GP_Truncate_at_BG_loop */
void GP_Truncate_at_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Acc */ GradientProfile_t_TrackAtlasTypes *Acc,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_in */ GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Pointer */ kcg_int Pointer,
  /* TA_Gradient::GP_Truncate_at_BG_loop::cont */ kcg_bool *cont,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_out */ GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L1 */
  static kcg_int _L1;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L2 */
  static GradientProfile_t_TrackAtlasTypes _L2;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L3 */
  static GradientProfile_t_TrackAtlasTypes _L3;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L4 */
  static kcg_int _L4;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L5 */
  static GradientProfile_t_TrackAtlasTypes _L5;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L6 */
  static kcg_int _L6;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L7 */
  static kcg_int _L7;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L8 */
  static Gradient_section_t_TrackAtlasTypes _L8;
  /* TA_Gradient::GP_Truncate_at_BG_loop::_L9 */
  static kcg_bool _L9;
  
  _L1 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L2, Acc);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L3, Profile_in);
  _L4 = Pointer;
  _L6 = i;
  _L7 = _L6 + _L4;
  if ((0 <= _L7) & (_L7 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L8, &_L3[_L7]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L8,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  _L9 = _L8.valid;
  *cont = _L9;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L5, &_L2);
  if ((0 <= _L1) & (_L1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L5[_L1], &_L8);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(Profile_out, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Truncate_at_BG_loop_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

