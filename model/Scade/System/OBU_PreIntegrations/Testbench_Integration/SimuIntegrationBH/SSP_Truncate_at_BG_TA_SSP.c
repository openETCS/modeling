/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_TA_SSP.h"

/* TA_SSP::SSP_Truncate_at_BG */
void SSP_Truncate_at_BG_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG::Profile_out */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  static kcg_int i5;
  /* TA_SSP::SSP_Truncate_at_BG */
  static kcg_int acc4;
  /* TA_SSP::SSP_Truncate_at_BG */
  static kcg_bool _3_cond_iterw;
  static kcg_int i2;
  static kcg_int i1;
  /* TA_SSP::SSP_Truncate_at_BG */
  static StaticSpeedProfile_t_TrackAtlasTypes acc;
  /* TA_SSP::SSP_Truncate_at_BG */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  static kcg_int _6_noname;
  /* TA_SSP::SSP_Truncate_at_BG::_L1 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L1;
  /* TA_SSP::SSP_Truncate_at_BG::_L8 */
  static kcg_int _L8;
  /* TA_SSP::SSP_Truncate_at_BG::_L6 */
  static array_169375 _L6;
  /* TA_SSP::SSP_Truncate_at_BG::_L5 */
  static kcg_int _L5;
  /* TA_SSP::SSP_Truncate_at_BG::_L4 */
  static kcg_int _L4;
  /* TA_SSP::SSP_Truncate_at_BG::_L10 */
  static kcg_int _L10;
  /* TA_SSP::SSP_Truncate_at_BG::_L11 */
  static kcg_bool _L11;
  /* TA_SSP::SSP_Truncate_at_BG::_L12 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L12;
  /* TA_SSP::SSP_Truncate_at_BG::_L13 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L13;
  /* TA_SSP::SSP_Truncate_at_BG::_L14 */
  static kcg_bool _L14;
  /* TA_SSP::SSP_Truncate_at_BG::_L17 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L17;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &_L13,
    (StaticSpeedProfile_t_TrackAtlasTypes *)
      &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L1, Profile_in);
  /* pow */ for (i5 = 0; i5 < 50; i5++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L6[i5], &_L1);
  }
  _L8 = 0;
  _L14 = kcg_true;
  _L5 = _L8;
  /* 2 */ if (_L14) {
    /* 2 */ for (i2 = 0; i2 < 50; i2++) {
      acc4 = _L5;
      /* 1 */
      SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
        i2,
        acc4,
        &_L6[i2],
        &_3_cond_iterw,
        &_L5);
      _L4 = i2 + 1;
      /* 2 */ if (!_3_cond_iterw) {
        break;
      }
    }
  }
  else {
    _L4 = 0;
  }
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L17[i1] = _L5;
  }
  _L11 = kcg_true;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L12, &_L13);
  /* 1 */ if (_L11) {
    /* 1 */ for (i = 0; i < 50; i++) {
      kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&acc, &_L12);
      /* 1 */
      SSP_Truncate_at_BG_loop_TA_SSP(
        i,
        &acc,
        &_L6[i],
        _L17[i],
        &cond_iterw,
        &_L12);
      _L10 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L10 = 0;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(Profile_out, &_L12);
  noname = _L4;
  _6_noname = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Truncate_at_BG_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

