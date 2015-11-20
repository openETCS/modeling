/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LowerOrHold_SDM_Commands_Pkg.h"

void LowerOrHold_reset_SDM_Commands_Pkg(outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SDM_Commands_Pkg::LowerOrHold */
void LowerOrHold_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::LowerOrHold::vi */V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */Target_T_TargetManagement_types *mrdt,
  outC_LowerOrHold_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::LowerOrHold::_L15 */
  static Target_T_TargetManagement_types _L15;
  /* SDM_Commands_Pkg::LowerOrHold::_L30 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L30;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L15.targetType = EoA_TargetManagement_types;
    _L15.distance = 0;
    _L15.speed = 0;
    _L15.valid = kcg_false;
    _L30 = - 1;
  }
  else {
    _L30 = outC->vo;
    kcg_copy_Target_T_TargetManagement_types(&_L15, &outC->rem_mrdt);
  }
  if (((*mrdt).targetType == _L15.targetType) & ((*mrdt).distance ==
      _L15.distance) & ((*mrdt).speed == _L15.speed) & ((*mrdt).valid ==
      _L15.valid) & (_L30 > 0) & (_L30 < vi)) {
    outC->vo = _L30;
  }
  else {
    outC->vo = vi;
  }
  kcg_copy_Target_T_TargetManagement_types(&outC->rem_mrdt, mrdt);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LowerOrHold_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

