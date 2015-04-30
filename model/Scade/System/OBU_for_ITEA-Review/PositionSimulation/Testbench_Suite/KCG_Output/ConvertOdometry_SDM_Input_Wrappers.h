/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _ConvertOdometry_SDM_Input_Wrappers_H_
#define _ConvertOdometry_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"
#include "TransformT_intToT_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */


/* SDM_Input_Wrappers::ConvertOdometry */
extern void ConvertOdometry_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertOdometry::odo_in */ odometry_T_Obu_BasicTypes_Pkg *odo_in,
  /* SDM_Input_Wrappers::ConvertOdometry::odo_out */ Odometry_real_T_SDM_Types_Pkg *odo_out,
  /* SDM_Input_Wrappers::ConvertOdometry::V_ura */ kcg_real *V_ura);

#endif /* _ConvertOdometry_SDM_Input_Wrappers_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** ConvertOdometry_SDM_Input_Wrappers.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

