/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP */
void FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::i */ kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Acc */ kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::distance_in */ L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Profile_in */ StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::cont */ kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::relevant_section */ kcg_int *relevant_section)
{
  /* math::Abs::A_Output */
  static kcg_int A_Output_1;
  /* math::Abs::A_Input */
  static kcg_int A_Input_1;
  /* math::Abs::_L8 */
  static kcg_int _L8_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_1;
  /* math::Abs::_L3 */
  static kcg_int _L3_1;
  /* math::Abs::_L2 */
  static kcg_int _L2_1;
  /* math::Abs::_L1 */
  static kcg_bool _L1_1;
  static kcg_int noname;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L1 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L2 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L2;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L3 */
  static kcg_int _L3;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L4 */
  static StaticSpeedSection_t_TrackAtlasTypes _L4;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L5 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L6 */
  static kcg_bool _L6;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L7 */
  static kcg_int _L7;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L8 */
  static kcg_int _L8;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L12 */
  static kcg_int _L12;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L13 */
  static kcg_bool _L13;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L14 */
  static kcg_int _L14;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L15 */
  static kcg_bool _L15;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L16 */
  static kcg_bool _L16;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L17 */
  static kcg_bool _L17;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L18 */
  static kcg_bool _L18;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L26 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L26;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L25 */
  static kcg_int _L25;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L24 */
  static kcg_int _L24;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L23 */
  static kcg_int _L23;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L22 */
  static kcg_int _L22;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L21 */
  static kcg_int _L21;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L20 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L19 */
  static kcg_bool _L19;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L27 */
  static kcg_bool _L27;
  
  _L1 = distance_in;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L2, Profile_in);
  _L3 = i;
  if ((0 <= _L3) & (_L3 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L4, &_L2[_L3]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  _L5 = _L4.d_static_abs;
  _L6 = _L5 < _L1;
  _L14 = i;
  _L12 = 0;
  _L13 = _L14 > _L12;
  _L15 = _L12 == _L5;
  _L16 = _L13 & _L15;
  _L17 = !_L16;
  _L8_1 = 0;
  _L26 = _L4.v_static;
  A_Input_1 = _L26;
  _L5_1 = A_Input_1;
  _L1_1 = _L8_1 <= _L5_1;
  _L3_1 = - _L5_1;
  /* 2 */ if (_L1_1) {
    _L2_1 = _L5_1;
  }
  else {
    _L2_1 = _L3_1;
  }
  A_Output_1 = _L2_1;
  _L20 = A_Output_1;
  _L22 = 635;
  _L19 = _L20 != _L22;
  _L18 = _L17 & _L6 & _L19;
  *cont = _L18;
  _L7 = i;
  _L27 = kcg_true;
  _L23 = 0;
  _L24 = - 1;
  /* 1 */ if (_L27) {
    _L21 = _L23;
  }
  else {
    _L21 = _L24;
  }
  _L25 = _L7 + _L21;
  *relevant_section = _L25;
  _L8 = Acc;
  noname = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

