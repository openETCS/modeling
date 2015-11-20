/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeData_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeData */
void iterateASafeData_SDMModelPkg(
  /* SDMModelPkg::iterateASafeData::ASafeRows */ASafeRow_T_CalcBrakingCurves_types *ASafeRows,
  /* SDMModelPkg::iterateASafeData::AGradient */A_gradient_t_SDM_GradientAcceleration_types *AGradient,
  /* SDMModelPkg::iterateASafeData::ASafeRows_graded */ASafeRow_T_CalcBrakingCurves_types *ASafeRows_graded)
{
  static kcg_real tmp;
  static kcg_int i;
  /* SDMModelPkg::iterateASafeData::_L5 */
  static A_internal_real_Type_SDM_Types_Pkg _L5;
  
  _L5 = 0.0;
  for (i = 0; i < 100; i++) {
    tmp = _L5;
    /* 1 */
    iterateASafeRow_SDMModelPkg(
      tmp,
      (*ASafeRows)[i],
      &(*AGradient)[i],
      &_L5,
      &(*ASafeRows_graded)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** iterateASafeData_SDMModelPkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

