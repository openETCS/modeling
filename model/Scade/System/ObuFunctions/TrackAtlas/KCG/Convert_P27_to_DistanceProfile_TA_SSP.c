/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P27_to_DistanceProfile_TA_SSP.h"

/* TA_SSP::Convert_P27_to_DistanceProfile */
void Convert_P27_to_DistanceProfile_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile::Packet27_in */P027V1_OBU_T_TM_baseline2 *Packet27_in,
  /* TA_SSP::Convert_P27_to_DistanceProfile::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile::SpeedProfile */SSP_cat_t_TA_MRSP *SpeedProfile,
  /* TA_SSP::Convert_P27_to_DistanceProfile::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg *v_static_section1,
  /* TA_SSP::Convert_P27_to_DistanceProfile::section1_delay */SSP_section_t_TA_MRSP *section1_delay,
  /* TA_SSP::Convert_P27_to_DistanceProfile::section1 */SSP_section_t_TA_MRSP *section1)
{
  SSP_cat_t_TA_MRSP tmp;
  kcg_int i;
  /* TA_SSP::Convert_P27_to_DistanceProfile::_L84 */ array__11234 _L84;
  /* TA_SSP::Convert_P27_to_DistanceProfile::_L85 */ array__11351 _L85;
  
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &_L85[0],
    (P027V1_section_enum_T_TM_baseline2 *)
      &DEFAULT_P027v1_OBU_section_TM_baseline2);
  kcg_copy_array__12119(&_L84[0], (array__12119 *) &(*Packet27_in).sections[1]);
  kcg_copy_array__11351(&_L84[32], &_L85);
  /* 3 */
  Convert_P27_to_DistanceProfile_1st_section_TA_SSP(
    (*Packet27_in).q_scale,
    &(*Packet27_in).sections[0],
    TrainLength,
    v_static_section1,
    section1_delay,
    section1);
  kcg_copy_SSP_cat_t_TA_MRSP(
    SpeedProfile,
    (SSP_cat_t_TA_MRSP *) &DEFAULT_SSP_cat_TA_MRSP);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_cat_t_TA_MRSP(&tmp, SpeedProfile);
    /* 3 */
    Convert_P27_to_DistanceProfile_loop_TA_SSP(
      i,
      &tmp,
      &_L84,
      TrainLength,
      (*Packet27_in).q_scale,
      *v_static_section1,
      SpeedProfile);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistanceProfile_TA_SSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

