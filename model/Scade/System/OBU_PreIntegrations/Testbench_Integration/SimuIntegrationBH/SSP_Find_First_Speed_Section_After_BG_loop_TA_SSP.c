/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.h"

/* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop */
void SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Acc */ kcg_int Acc,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::cont */ kcg_bool *cont,
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::Pointer */ kcg_int *Pointer)
{
  static kcg_int noname;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L5 */
  static kcg_int _L5;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L6 */
  static kcg_int _L6;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L7 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L7;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L9 */
  static StaticSpeedSection_t_TrackAtlasTypes _L9;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L11 */
  static kcg_bool _L11;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L12 */
  static kcg_int _L12;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L13 */
  static kcg_int _L13;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L14 */
  static kcg_int _L14;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L15 */
  static kcg_bool _L15;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L16 */
  static kcg_int _L16;
  /* TA_SSP::SSP_Find_First_Speed_Section_After_BG_loop::_L17 */
  static kcg_int _L17;
  
  _L5 = i;
  _L6 = Acc;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L7, Profile_in);
  if ((0 <= _L5) & (_L5 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L9, &_L7[_L5]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L9,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  _L10 = _L9.d_static_LRBG;
  _L12 = 0;
  _L11 = _L10 < _L12;
  *cont = _L11;
  _L14 = 1;
  _L13 = _L5 - _L14;
  _L16 = 0;
  _L15 = _L13 < _L16;
  /* 1 */ if (_L15) {
    _L17 = _L16;
  }
  else {
    _L17 = _L13;
  }
  *Pointer = _L17;
  noname = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

