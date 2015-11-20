/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Correct_StartSection_TA_SSP.h"

/* TA_SSP::SSP_Correct_StartSection */
void SSP_Correct_StartSection_TA_SSP(
  /* TA_SSP::SSP_Correct_StartSection::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Correct_StartSection::Profile_out */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_out)
{
  /* TA_SSP::SSP_Correct_StartSection::_L1 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L1;
  /* TA_SSP::SSP_Correct_StartSection::_L3 */
  static StaticSpeedSection_t_TrackAtlasTypes _L3;
  /* TA_SSP::SSP_Correct_StartSection::_L5 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L5;
  /* TA_SSP::SSP_Correct_StartSection::_L7 */
  static StaticSpeedSection_t_TrackAtlasTypes _L7;
  /* TA_SSP::SSP_Correct_StartSection::_L8 */
  static kcg_int _L8;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L1, Profile_in);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L3, &_L1[0]);
  _L8 = 0;
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L7, &_L3);
  if (kcg_true) {
    _L7.d_static_LRBG = _L8;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L5, &_L1);
  if ((0 <= 0) & (0 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L5[0], &_L7);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(Profile_out, &_L5);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Correct_StartSection_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

