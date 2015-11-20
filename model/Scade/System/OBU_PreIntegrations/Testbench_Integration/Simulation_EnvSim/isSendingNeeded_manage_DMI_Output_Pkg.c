/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isSendingNeeded_manage_DMI_Output_Pkg.h"

void isSendingNeeded_reset_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Output_Pkg::isSendingNeeded */
void isSendingNeeded_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::isSendingNeeded::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::isSendingNeeded::incurrentDMIStatus */DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::isSendingNeeded::_L1 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L1;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L1 = 0;
  }
  else {
    _L1 = outC->lastDMI_Update;
  }
  outC->sendingNeeded = ((inSystemTime >= ctimeInterval_manage_DMI_Output_Pkg +
        _L1) | (_L1 == 0)) & (*incurrentDMIStatus).DMI_Active;
  if (outC->sendingNeeded) {
    outC->lastDMI_Update = inSystemTime;
  }
  else {
    outC->lastDMI_Update = _L1;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isSendingNeeded_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

