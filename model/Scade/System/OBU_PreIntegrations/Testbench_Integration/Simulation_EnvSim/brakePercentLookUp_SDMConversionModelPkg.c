/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "brakePercentLookUp_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::brakePercentLookUp */
void brakePercentLookUp_SDMConversionModelPkg(
  /* SDMConversionModelPkg::brakePercentLookUp::lambda0 */kcg_int lambda0,
  /* SDMConversionModelPkg::brakePercentLookUp::av */av_Map_t_SDMConversionModelPkg *av)
{
  static kcg_int tmp3;
  static kcg_int tmp2;
  static kcg_int tmp1;
  static kcg_int tmp;
  /* SDMConversionModelPkg::brakePercentLookUp::V_lim */
  static kcg_int V_lim;
  /* SDMConversionModelPkg::brakePercentLookUp::_L96 */
  static kcg_bool _L96;
  /* SDMConversionModelPkg::brakePercentLookUp::_L101 */
  static kcg_bool _L101;
  /* SDMConversionModelPkg::brakePercentLookUp::_L102 */
  static kcg_bool _L102;
  
  tmp = lambda0 - cBrakePercentStepsMin_SDMConversionModelPkg;
  if ((0 <= tmp) & (tmp < 221)) {
    V_lim = cBrakePercentSpeedLookup_SDMConversionModelPkg[tmp];
    kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(
      &(*av).a,
      (a_BrakeSteps_t_SDMConversionModelPkg *)
        &cBrakePercentALookup_SDMConversionModelPkg[tmp]);
  }
  else {
    V_lim = cBrakePercentSpeedLookup_SDMConversionModelPkg[0];
    kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg(
      &(*av).a,
      (a_BrakeSteps_t_SDMConversionModelPkg *)
        &cBrakePercentALookup_SDMConversionModelPkg[0]);
  }
  _L96 = V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[0];
  _L101 = V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[1];
  _L102 = V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[2];
  if (_L96) {
    tmp3 = cBrakePercentV_lim_SDMConversionModelPkg[0];
    tmp2 = cBrakePercentV_lim_SDMConversionModelPkg[1];
    tmp1 = cBrakePercentV_lim_SDMConversionModelPkg[2];
    tmp = cBrakePercentV_lim_SDMConversionModelPkg[3];
  }
  else {
    if (_L101) {
      tmp3 = cBrakePercentV_lim_SDMConversionModelPkg[1];
      tmp2 = cBrakePercentV_lim_SDMConversionModelPkg[2];
      tmp1 = cBrakePercentV_lim_SDMConversionModelPkg[3];
    }
    else {
      if (_L102) {
        tmp3 = cBrakePercentV_lim_SDMConversionModelPkg[2];
        tmp2 = cBrakePercentV_lim_SDMConversionModelPkg[3];
      }
      else {
        if (V_lim <= cBrakePercentV_lim_SDMConversionModelPkg[3]) {
          tmp3 = cBrakePercentV_lim_SDMConversionModelPkg[3];
        }
        else {
          tmp3 = 0;
        }
        tmp2 = 0;
      }
      tmp1 = 0;
    }
    tmp = 0;
  }
  (*av).v[0] = 0;
  (*av).v[1] = V_lim;
  (*av).v[2] = tmp3;
  (*av).v[3] = tmp2;
  (*av).v[4] = tmp1;
  (*av).v[5] = tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** brakePercentLookUp_SDMConversionModelPkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

