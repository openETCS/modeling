/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_BrakeBasic_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::T_BrakeBasic */
T_internal_real_Type_SDM_Types_Pkg T_BrakeBasic_SDMConversionModelPkg(
  /* SDMConversionModelPkg::T_BrakeBasic::coeff */coeff_BrakeBasic_t_SDMConversionModelPkg *coeff,
  /* SDMConversionModelPkg::T_BrakeBasic::trainLength */L_internal_real_Type_SDM_Types_Pkg trainLength)
{
  /* SDMConversionModelPkg::T_BrakeBasic::_L13 */
  static kcg_real _L13;
  /* SDMConversionModelPkg::T_BrakeBasic::T_BB */
  static T_internal_real_Type_SDM_Types_Pkg T_BB;
  
  _L13 = trainLength / 100.0;
  T_BB = (*coeff)[0] + _L13 * (*coeff)[1] + _L13 * _L13 * (*coeff)[2];
  return T_BB;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_BrakeBasic_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

