/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
void GP_Convert_P21_to_DistanceProfile_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::Packet21_in */ P021_OBU_T_TM *Packet21_in,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::GradientProfile */ GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile */
  static GradientProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L73 */
  static P021_OBU_T_TM _L73;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L71 */
  static P021_OBU_sectionlist_enum_T_TM _L71;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L65 */
  static Q_SCALE _L65;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L63 */
  static P021_OBU_T_TM _L63;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L74 */
  static array_168986 _L74;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L76 */
  static array_170575 _L76;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L77 */
  static GradientProfile_t_TrackAtlasTypes _L77;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile::_L83 */
  static GradientProfile_t_TrackAtlasTypes _L83;
  
  kcg_copy_P021_OBU_T_TM(&_L63, Packet21_in);
  _L65 = _L63.q_scale;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &_L83,
    (GradientProfile_t_TrackAtlasTypes *)
      &DEFAULT_GradientProfile_TrackAtlasTypes);
  kcg_copy_P021_OBU_T_TM(&_L73, Packet21_in);
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&_L71, &_L73.sections);
  /* pow */ for (i2 = 0; i2 < 33; i2++) {
    kcg_copy_P021_OBU_sectionlist_enum_T_TM(&_L74[i2], &_L71);
  }
  /* pow */ for (i1 = 0; i1 < 33; i1++) {
    _L76[i1] = _L65;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L77, &_L83);
  /* 1 */ for (i = 0; i < 33; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&acc, &_L77);
    /* 1 */
    GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient(
      i,
      &acc,
      &_L74[i],
      _L76[i],
      &_L77);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile, &_L77);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Convert_P21_to_DistanceProfile_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

