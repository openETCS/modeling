/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentToABrake */
void brakePercentToABrake_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentToABrake::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SDMConversionModelPkg::brakePercentToABrake::aBrake */a_Brake_t_SDMConversionModelPkg *aBrake)
{
  /* SDMConversionModelPkg::brakePercentToABrake::_L1 */
  static av_Map_t_SDMConversionModelPkg _L1;
  /* SDMConversionModelPkg::brakePercentToABrake::_L5 */
  static kcg_bool _L5;
  
  /* 1 */
  brakePercentLookUp_SDMConversionModelPkg((*trainData).brakePerctage, &_L1);
  kcg_copy_av_Map_t_SDMConversionModelPkg(&(*aBrake).emergency, &_L1);
  _L5 = (*trainData).brakePerctage >
    cBrakePercentServiceMax_SDMConversionModelPkg;
  if (_L5) {
    /* 2 */
    brakePercentLookUp_SDMConversionModelPkg(
      cBrakePercentServiceMax_SDMConversionModelPkg,
      &(*aBrake).service);
  }
  else {
    kcg_copy_av_Map_t_SDMConversionModelPkg(&(*aBrake).service, &_L1);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** brakePercentToABrake_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

