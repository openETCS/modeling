/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.h"

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop */
void SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SP */ StaticSpeedProfile_t_TrackAtlasTypes *SP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::First_Section_To_Replace */ kcg_int First_Section_To_Replace,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::new_SP_received */ StaticSpeedProfile_t_TrackAtlasTypes *new_SP_received,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::SSP */ StaticSpeedProfile_t_TrackAtlasTypes *SSP)
{
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L4 */
  static kcg_int _L4;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L5 */
  static kcg_int _L5;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L6 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L6;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L7 */
  static kcg_int _L7;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L11 */
  static kcg_int _L11;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L15 */
  static StaticSpeedSection_t_TrackAtlasTypes _L15;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L19 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L19;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile_loop::_L20 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L20;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L20, SP);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L6, new_SP_received);
  _L11 = i;
  if ((0 <= _L11) & (_L11 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L15, &_L6[_L11]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L15,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  _L5 = i;
  _L4 = First_Section_To_Replace;
  _L7 = _L5 + _L4;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L19, &_L20);
  if ((0 <= _L7) & (_L7 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L19[_L7], &_L15);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SSP, &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

