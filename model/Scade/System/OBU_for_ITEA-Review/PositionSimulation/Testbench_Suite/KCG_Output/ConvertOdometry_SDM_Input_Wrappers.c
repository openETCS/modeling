/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertOdometry_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertOdometry */
void ConvertOdometry_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::ConvertOdometry::odo_in */ odometry_T_Obu_BasicTypes_Pkg *odo_in,
  /* SDM_Input_Wrappers::ConvertOdometry::odo_out */ Odometry_real_T_SDM_Types_Pkg *odo_out,
  /* SDM_Input_Wrappers::ConvertOdometry::V_ura */ kcg_real *V_ura)
{
  (*odo_out).valid = (*odo_in).valid;
  (*odo_out).motionState = (*odo_in).motionState;
  (*odo_out).motionDirection = (*odo_in).motionDirection;
  *V_ura = /* 8 */
    TransformV_intToV_real_SDM_Types_Pkg(
      (*odo_in).speed.v_upper - (*odo_in).speed.v_rawNominal);
  (*odo_out).timestamp = /* 1 */
    TransformT_intToT_real_SDM_Types_Pkg((*odo_in).timestamp);
  (*odo_out).odo.o_nominal = /* 2 */
    TransformL_intToL_real_SDM_Types_Pkg((*odo_in).odo.o_nominal);
  (*odo_out).odo.o_min = /* 3 */
    TransformL_intToL_real_SDM_Types_Pkg((*odo_in).odo.o_min);
  (*odo_out).odo.o_max = /* 1 */
    TransformL_intToL_real_SDM_Types_Pkg((*odo_in).odo.o_max);
  (*odo_out).speed.v_safeNominal = /* 4 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_safeNominal);
  (*odo_out).speed.v_rawNominal = /* 1 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_rawNominal);
  (*odo_out).speed.v_lower = /* 2 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_lower);
  (*odo_out).speed.v_upper = /* 3 */
    TransformV_intToV_real_SDM_Types_Pkg((*odo_in).speed.v_upper);
  (*odo_out).acceleration = /* 1 */
    TransformA_intToA_real_SDM_Types_Pkg((*odo_in).acceleration);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ConvertOdometry_SDM_Input_Wrappers.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

