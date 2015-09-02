/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P27_to_DistanceProfile_1st_section_TA_SSP.h"

/* TA_SSP::Convert_P27_to_DistanceProfile_1st_section */
void Convert_P27_to_DistanceProfile_1st_section_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::Section1_in */P027V1_section_enum_T_TM_baseline2 *Section1_in,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg *v_static_section1,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::section1_delay */SSP_section_t_TA_MRSP *section1_delay,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::section1 */SSP_section_t_TA_MRSP *section1)
{
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::_L88 */ L_internal_Type_Obu_BasicTypes_Pkg _L88;
  
  *v_static_section1 = (*Section1_in).v_static;
  (*section1_delay).speed = *v_static_section1;
  (*section1).speed = *v_static_section1;
  _L88 = /* 2 */
    Normalize_Distance_d_internal_t_TA_Lib_internal(
      q_scale,
      (*Section1_in).d_static);
  (*section1).target = _L88;
  (*section1_delay).target = _L88 + /* 2 */
    Eval_Q_Front_TA_Lib_internal((*Section1_in).q_front, TrainLength);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistanceProfile_1st_section_TA_SSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

