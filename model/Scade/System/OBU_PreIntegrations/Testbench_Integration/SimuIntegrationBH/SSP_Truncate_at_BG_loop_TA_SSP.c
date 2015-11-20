/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP.h"

/* TA_SSP::SSP_Truncate_at_BG_loop */
void SSP_Truncate_at_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Acc */ StaticSpeedProfile_t_TrackAtlasTypes *Acc,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Pointer */ kcg_int Pointer,
  /* TA_SSP::SSP_Truncate_at_BG_loop::cont */ kcg_bool *cont,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_out */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L1 */
  static kcg_int _L1;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L2 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L2;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L3 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L3;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L4 */
  static kcg_int _L4;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L5 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L5;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L6 */
  static kcg_int _L6;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L7 */
  static kcg_int _L7;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L8 */
  static StaticSpeedSection_t_TrackAtlasTypes _L8;
  /* TA_SSP::SSP_Truncate_at_BG_loop::_L9 */
  static kcg_bool _L9;
  
  _L1 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L2, Acc);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L3, Profile_in);
  _L4 = Pointer;
  _L6 = i;
  _L7 = _L6 + _L4;
  if ((0 <= _L7) & (_L7 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L8, &_L3[_L7]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L8,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  _L9 = _L8.valid;
  *cont = _L9;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L5, &_L2);
  if ((0 <= _L1) & (_L1 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L5[_L1], &_L8);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(Profile_out, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Truncate_at_BG_loop_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

