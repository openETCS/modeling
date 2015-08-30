/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P27_to_DistancePr_TA_SSP.h"

void Convert_P27_to_DistancePr_reset_TA_SSP(
  outC_Convert_P27_to_DistancePr_TA_SSP *outC)
{
  /* 2 */ Eval_Q_Front_reset_TA_Lib_internal(&outC->_1_Context_2);
  /* 2 */ Normalize_Distance_d_inte_reset_TA_Lib_internal(&outC->Context_2);
}

/* TA_SSP::Convert_P27_to_DistanceProfile_1st_section */
void Convert_P27_to_DistancePr_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::Section1_in */P027V1_section_enum_T_TM_baseline2 *Section1_in,
  /* TA_SSP::Convert_P27_to_DistanceProfile_1st_section::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  outC_Convert_P27_to_DistancePr_TA_SSP *outC)
{
  kcg_copy_P027V1_section_enum_T_TM_baseline2(&outC->_L98, Section1_in);
  outC->_L97 = TrainLength;
  kcg_copy_P027V1_section_enum_T_TM_baseline2(&outC->_L93, Section1_in);
  outC->_L96 = outC->_L93.v_static;
  outC->v_static_section1 = outC->_L96;
  outC->_L89 = q_scale;
  kcg_copy_P027V1_section_enum_T_TM_baseline2(&outC->_L86, Section1_in);
  outC->_L87 = outC->_L86.d_static;
  /* 2 */
  Normalize_Distance_d_inte_TA_Lib_internal(
    outC->_L89,
    outC->_L87,
    &outC->Context_2);
  outC->_L88 = outC->Context_2.d_internal;
  outC->_L95.target = outC->_L88;
  outC->_L95.speed = outC->_L96;
  outC->_L91 = outC->_L98.q_front;
  /* 2 */
  Eval_Q_Front_TA_Lib_internal(outC->_L91, outC->_L97, &outC->_1_Context_2);
  outC->_L90 = outC->_1_Context_2.added_train_length;
  outC->_L92 = outC->_L88 + outC->_L90;
  outC->_L94.target = outC->_L92;
  outC->_L94.speed = outC->_L96;
  kcg_copy_SSP_section_t_TA_MRSP(&outC->section1_delay, &outC->_L94);
  kcg_copy_SSP_section_t_TA_MRSP(&outC->section1, &outC->_L95);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistancePr_TA_SSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

