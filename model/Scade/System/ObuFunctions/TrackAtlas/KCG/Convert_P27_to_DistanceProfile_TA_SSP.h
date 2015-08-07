/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */
#ifndef _Convert_P27_to_DistanceProfile_TA_SSP_H_
#define _Convert_P27_to_DistanceProfile_TA_SSP_H_

#include "kcg_types.h"
#include "Convert_P27_to_DistanceProfile_loop_TA_SSP.h"
#include "Convert_P27_to_DistanceProfile_1st_section_TA_SSP.h"

/* =====================  no input structure  ====================== */


/* TA_SSP::Convert_P27_to_DistanceProfile */
extern void Convert_P27_to_DistanceProfile_TA_SSP(
  /* TA_SSP::Convert_P27_to_DistanceProfile::Packet27_in */P027V1_OBU_T_TM_baseline2 *Packet27_in,
  /* TA_SSP::Convert_P27_to_DistanceProfile::TrainLength */L_internal_Type_Obu_BasicTypes_Pkg TrainLength,
  /* TA_SSP::Convert_P27_to_DistanceProfile::SpeedProfile */SSP_cat_t_TA_MRSP *SpeedProfile,
  /* TA_SSP::Convert_P27_to_DistanceProfile::v_static_section1 */V_internal_Type_Obu_BasicTypes_Pkg *v_static_section1,
  /* TA_SSP::Convert_P27_to_DistanceProfile::section1_delay */SSP_section_t_TA_MRSP *section1_delay,
  /* TA_SSP::Convert_P27_to_DistanceProfile::section1 */SSP_section_t_TA_MRSP *section1);

#endif /* _Convert_P27_to_DistanceProfile_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P27_to_DistanceProfile_TA_SSP.h
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

