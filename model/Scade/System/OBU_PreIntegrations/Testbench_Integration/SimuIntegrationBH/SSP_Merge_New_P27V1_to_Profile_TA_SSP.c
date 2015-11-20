/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP.h"

/* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
void SSP_Merge_New_P27V1_to_Profile_TA_SSP(
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::new_GP */ StaticSpeedProfile_t_TrackAtlasTypes *new_GP,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::Last_SpeedProfile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Last_SpeedProfile_in,
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::SpeedProfile_out */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedProfile_out)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  static kcg_int i;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
  static kcg_int op_call;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile */
  static kcg_bool ck_every;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L1 */
  static kcg_int _L1;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L5 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L5;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L9 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L9;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L14 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L14;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L45 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L45;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L47 */
  static array_169375 _L47;
  /* TA_SSP::SSP_Merge_New_P27V1_to_Profile::_L148 */
  static kcg_bool _L148;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L45, Last_SpeedProfile_in);
  _L148 = _L45[0].valid;
  ck_every = _L148;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L5, new_GP);
  /* ck_SSP_Merge_New_P27V1_to_Profile */ if (ck_every) {
    op_call = /* 1 */
      FindStartOfNewSpeedProfileAbs_TA_Lib_internal(&_L45, &_L5);
    _L1 = op_call;
  }
  else {
    _L1 = 0;
  }
  /* pow */ for (i2 = 0; i2 < 50; i2++) {
    _L9[i2] = _L1;
  }
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L47[i1], &_L5);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L14, &_L45);
  /* 2 */ for (i = 0; i < 50; i++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &_L14);
    /* 1 */
    SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP(
      i,
      &acc,
      _L9[i],
      &_L47[i],
      &_L14);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SpeedProfile_out, &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Merge_New_P27V1_to_Profile_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

