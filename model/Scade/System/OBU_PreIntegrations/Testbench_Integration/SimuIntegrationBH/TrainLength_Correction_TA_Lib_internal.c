/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

/* TA_Lib_internal::TrainLength_Correction */
L_internal_Type_Obu_BasicTypes_Pkg TrainLength_Correction_TA_Lib_internal(
  /* TA_Lib_internal::TrainLength_Correction::Static_Speed_Profile */ StaticSpeedProfile_t_TrackAtlasTypes *Static_Speed_Profile,
  /* TA_Lib_internal::TrainLength_Correction::train_length */ L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_Lib_internal::TrainLength_Correction::i */ kcg_int i,
  /* TA_Lib_internal::TrainLength_Correction::v_static */ V_internal_Type_Obu_BasicTypes_Pkg v_static,
  /* TA_Lib_internal::TrainLength_Correction::distance */ L_internal_Type_Obu_BasicTypes_Pkg distance)
{
  /* TA_Lib_internal::TrainLength_Correction::_L1 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L1;
  /* TA_Lib_internal::TrainLength_Correction::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* TA_Lib_internal::TrainLength_Correction::_L3 */
  static kcg_int _L3;
  /* TA_Lib_internal::TrainLength_Correction::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* TA_Lib_internal::TrainLength_Correction::_L5 */
  static StaticSpeedSection_t_TrackAtlasTypes _L5;
  /* TA_Lib_internal::TrainLength_Correction::_L6 */
  static kcg_int _L6;
  /* TA_Lib_internal::TrainLength_Correction::_L7 */
  static kcg_int _L7;
  /* TA_Lib_internal::TrainLength_Correction::_L9 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L9;
  /* TA_Lib_internal::TrainLength_Correction::_L10 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L10;
  /* TA_Lib_internal::TrainLength_Correction::_L11 */
  static kcg_bool _L11;
  /* TA_Lib_internal::TrainLength_Correction::_L12 */
  static kcg_int _L12;
  /* TA_Lib_internal::TrainLength_Correction::_L13 */
  static kcg_int _L13;
  /* TA_Lib_internal::TrainLength_Correction::_L14 */
  static kcg_int _L14;
  /* TA_Lib_internal::TrainLength_Correction::_L15 */
  static kcg_bool _L15;
  /* TA_Lib_internal::TrainLength_Correction::_L16 */
  static kcg_bool _L16;
  /* TA_Lib_internal::TrainLength_Correction::corrected_distance */
  static L_internal_Type_Obu_BasicTypes_Pkg corrected_distance;
  
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L1, Static_Speed_Profile);
  _L2 = train_length;
  _L3 = i;
  _L4 = distance;
  _L14 = 635;
  _L10 = v_static;
  _L16 = _L14 != _L10;
  _L7 = 1;
  _L6 = _L3 - _L7;
  if ((0 <= _L6) & (_L6 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L5, &_L1[_L6]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L5,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP);
  }
  _L9 = _L5.v_static;
  _L11 = _L10 > _L9;
  _L15 = _L16 & _L11;
  _L13 = _L2 + _L4;
  /* 1 */ if (_L15) {
    _L12 = _L13;
  }
  else {
    _L12 = _L4;
  }
  corrected_distance = _L12;
  return corrected_distance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrainLength_Correction_TA_Lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

