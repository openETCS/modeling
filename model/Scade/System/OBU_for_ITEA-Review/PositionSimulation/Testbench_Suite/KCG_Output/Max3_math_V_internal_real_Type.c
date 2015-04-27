/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Max3_math_V_internal_real_Type.h"

/* math::Max3 */
kcg_real Max3_math_V_internal_real_Type(
  /* math::Max3::I1 */ kcg_real I1,
  /* math::Max3::I2 */ kcg_real I2,
  /* math::Max3::I3 */ kcg_real I3)
{
  /* math::Max3::Ma3_Output */ kcg_real Ma3_Output;
  
  if ((I1 >= I2) & (I1 >= I3)) {
    Ma3_Output = I1;
  }
  else if (I2 >= I3) {
    Ma3_Output = I2;
  }
  else {
    Ma3_Output = I3;
  }
  return Ma3_Output;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Max3_math_V_internal_real_Type.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

