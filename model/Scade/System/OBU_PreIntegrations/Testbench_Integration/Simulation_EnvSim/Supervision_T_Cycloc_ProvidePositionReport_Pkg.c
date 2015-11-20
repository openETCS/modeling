/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"

void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L27 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L27;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L27 = 0;
  }
  else {
    _L27 = outC->lastTime;
  }
  outC->trigger = (tcycloc > 0) & (tcycloc < 255) & (systemTime - _L27 >=
      tcycloc * cTimeToElapse_ProvidePositionReport_Pkg);
  if (outC->trigger) {
    outC->lastTime = systemTime;
  }
  else {
    outC->lastTime = _L27;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

