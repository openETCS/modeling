/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Convert_P27_to_DistanceProfile_loop_TA_SSP_H_
#define _Convert_P27_to_DistanceProfile_loop_TA_SSP_H_

#include "kcg_types.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"
#include "DetectSpeedIncrease_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */


/* TA_SSP::Convert_P27_to_DistanceProfile_loop */
extern void Convert_P27_to_DistanceProfile_loop_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::acc */SSP_cat_t_TA_MRSP *acc,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg v_static_section1,
  /* TA_SSP::Convert_P27_to_DistanceProfile_loop::SpeedProfile */SSP_cat_t_TA_MRSP *SpeedProfile);

#endif /* _Convert_P27_to_DistanceProfile_loop_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistanceProfile_loop_TA_SSP.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

