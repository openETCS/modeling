/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P27_to_DistanceProfile_loop_TA_SSP.h"

/* TA_SSP::Convert_P27_to_DistanceProfile_loop */
void Convert_P27_to_DistanceProfile_loop_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::acc */SSP_cat_t_TA_MRSP *acc,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SpeedProfile */SSP_cat_t_TA_MRSP *SpeedProfile)
{
  L_internal_Type_Obu_BasicTypes_Pkg tmp2;
  kcg_bool tmp1;
  L_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L84 */ P027V1_section_enum_T_TM_baseline2 _L84;
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::_L67 */ kcg_bool _L67;
  
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(&_L84, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &_L84,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
  _L67 = ENUM_Q_FRONT_train_length_delay_TM_conversions == _L84.q_front;
  kcg_copy_SSP_cat_t_TA_MRSP(SpeedProfile, acc);
  if (_L67) {
    tmp1 = /* 1 */
      DetectSpeedIncrease_TA_Lib_internal(v_static_section1, SectionIn, i);
  }
  else {
    tmp1 = kcg_false;
  }
  if (_L67 & tmp1) {
    tmp2 = TrainLength;
  }
  else {
    tmp2 = 0;
  }
  tmp = /* 1 */
    Normalize_Distance_d_internal_t_TA_Lib_internal(q_scale, _L84.d_static);
  if ((0 <= i) & (i < 33)) {
    (*SpeedProfile)[i].target = tmp2 + tmp;
    (*SpeedProfile)[i].speed = _L84.v_static;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistanceProfile_loop_TA_SSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

