/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_16_Convert_P27_to_DistancePr_TA_SSP.h"

void _16_Convert_P27_to_DistancePr_reset_TA_SSP(
  outC__16_Convert_P27_to_DistancePr_TA_SSP *outC)
{
  /* 1 */ Normalize_Distance_d_inte_reset_TA_Lib_internal(&outC->_1_Context_1);
  /* 1 */ DetectSpeedIncrease_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_SSP::Convert_P27_to_DistanceProfile_loop */
void _16_Convert_P27_to_DistancePr_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::acc */SSP_cat_t_TA_MRSP *acc,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  outC__16_Convert_P27_to_DistancePr_TA_SSP *outC)
{
  kcg_bool tmp;
  
  outC->_L93 = i;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L65, SectionIn);
  if ((0 <= outC->_L93) & (outC->_L93 < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L92,
      &outC->_L65[outC->_L93]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L92,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
  outC->_L91 = i;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L44, acc);
  outC->_L68 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
  outC->_L66 = outC->_L92.q_front;
  outC->_L67 = outC->_L68 == outC->_L66;
  outC->tmp = outC->_L67;
  outC->_L48 = v_static_section1;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L45, SectionIn);
  outC->_L52 = i;
  if (outC->tmp) {
    /* 1 */
    DetectSpeedIncrease_TA_Lib_internal(
      outC->_L48,
      &outC->_L45,
      outC->_L52,
      &outC->Context_1);
    tmp = outC->Context_1.q_speed_increase;
    outC->_L64 = tmp;
  }
  else {
    outC->_L64 = kcg_false;
  }
  outC->_L69 = outC->_L67 & outC->_L64;
  outC->_L46 = TrainLength;
  outC->_L86 = 0;
  if (outC->_L69) {
    outC->_L85 = outC->_L46;
  }
  else {
    outC->_L85 = outC->_L86;
  }
  outC->_L47 = q_scale;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L57, SectionIn);
  outC->_L58 = i;
  if ((0 <= outC->_L58) & (outC->_L58 < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L84,
      &outC->_L57[outC->_L58]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L84,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
  outC->_L71 = outC->_L84.d_static;
  /* 1 */
  Normalize_Distance_d_inte_TA_Lib_internal(
    outC->_L47,
    outC->_L71,
    &outC->_1_Context_1);
  outC->_L70 = outC->_1_Context_1.d_internal;
  outC->_L87 = outC->_L85 + outC->_L70;
  outC->_L88 = outC->_L84.v_static;
  outC->_L89.target = outC->_L87;
  outC->_L89.speed = outC->_L88;
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->_L90, &outC->_L44);
  if ((0 <= outC->_L91) & (outC->_L91 < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&outC->_L90[outC->_L91], &outC->_L89);
  }
  kcg_copy_SSP_cat_t_TA_MRSP(&outC->SpeedProfile, &outC->_L90);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** _16_Convert_P27_to_DistancePr_TA_SSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

