/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.h"

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
void SSP_Convert_P27V1_to_DistanceProfile_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::Packet27V1_in */ P027V1_OBU_T_TM_baseline2 *Packet27V1_in,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::SpeedProfile */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L73 */
  static P027V1_OBU_T_TM_baseline2 _L73;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L71 */
  static P027V1_OBU_sectionlist_enum_T_TM_baseline2 _L71;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L65 */
  static Q_SCALE _L65;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L63 */
  static P027V1_OBU_T_TM_baseline2 _L63;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L74 */
  static array_170250 _L74;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L76 */
  static array_172875 _L76;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L77 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L77;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile::_L83 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L83;
  
  kcg_copy_P027V1_OBU_T_TM_baseline2(&_L63, Packet27V1_in);
  _L65 = _L63.q_scale;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &_L83,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&_L73, Packet27V1_in);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&_L71, &_L73.sections);
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&_L74[i2], &_L71);
  }
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L76[i1] = _L65;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L77, &_L83);
  /* 1 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &_L77);
    /* 1 */
    SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
      i,
      &acc,
      &_L74[i],
      _L76[i],
      &_L77);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SpeedProfile, &_L77);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

