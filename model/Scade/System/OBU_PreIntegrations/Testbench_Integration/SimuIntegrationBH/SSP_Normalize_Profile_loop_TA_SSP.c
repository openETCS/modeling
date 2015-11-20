/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Normalize_Profile_loop_TA_SSP.h"

/* TA_SSP::SSP_Normalize_Profile_loop */
void SSP_Normalize_Profile_loop_TA_SSP(
  /* TA_SSP::SSP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileIn */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_SSP::SSP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_SSP::SSP_Normalize_Profile_loop::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_SSP::SSP_Normalize_Profile_loop::ProfileNormalized_LRBG */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_SSP::SSP_Normalize_Profile_loop */
  static L_internal_Type_Obu_BasicTypes_Pkg op_call;
  /* TA_SSP::SSP_Normalize_Profile_loop */
  static kcg_bool ck_every;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L1 */
  static kcg_int _L1;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L2 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L2;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L4 */
  static StaticSpeedSection_t_TrackAtlasTypes _L4;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L5 */
  static kcg_bool _L5;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L7 */
  static StaticSpeedSection_t_TrackAtlasTypes _L7;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L9 */
  static kcg_int _L9;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L10 */
  static kcg_int _L10;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L11 */
  static kcg_int _L11;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L39 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L39;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L40 */
  static kcg_int _L40;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L44 */
  static kcg_bool _L44;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L45 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L45;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L46 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L47 */
  static kcg_int _L47;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L48 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L48;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L49 */
  static kcg_bool _L49;
  /* TA_SSP::SSP_Normalize_Profile_loop::_L50 */
  static StaticSpeedSection_t_TrackAtlasTypes _L50;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L2, ProfileIn);
  _L1 = i;
  if ((0 <= _L1) & (_L1 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L4, &_L2[_L1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP);
  }
  _L44 = _L4.q_train_length_corr;
  _L5 = _L4.valid;
  _L49 = _L44 & _L5;
  ck_every = _L49;
  _L46 = train_length;
  _L47 = i;
  _L48 = _L4.v_static;
  _L38 = _L4.d_static_abs;
  _L3 = pos_BG;
  _L9 = _L38 - _L3;
  _L11 = 0;
  /* 1 */ if (_L5) {
    _L10 = _L9;
  }
  else {
    _L10 = _L11;
  }
  /* ck_SSP_Normalize_Profile_loop */ if (ck_every) {
    op_call = /* 1 */
      TrainLength_Correction_TA_Lib_internal(&_L2, _L46, _L47, _L48, _L10);
  }
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L50, &_L4);
  if (kcg_true) {
    _L50.q_train_length_corr = _L49;
  }
  /* ck_SSP_Normalize_Profile_loop */ if (ck_every) {
    _L45 = op_call;
  }
  else {
    _L45 = _L10;
  }
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L7, &_L50);
  if (kcg_true) {
    _L7.d_static_LRBG = _L45;
  }
  _L40 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L39, &_L2);
  if ((0 <= _L40) & (_L40 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L39[_L40], &_L7);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, &_L39);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Normalize_Profile_loop_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

