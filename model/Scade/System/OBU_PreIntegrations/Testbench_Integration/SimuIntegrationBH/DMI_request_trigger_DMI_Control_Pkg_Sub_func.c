/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_request_trigger_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void DMI_request_trigger_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L4 = Start_of_mission_DMI_Types_Pkg;
  outC->_L3 = 0;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = 0;
  outC->_L1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->dmi_driver_request.valid = kcg_true;
  outC->dmi_driver_request.systemTime = 0;
  outC->dmi_driver_request.m_request = Start_of_mission_DMI_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_request_trigger_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* DMI_Control_Pkg::Sub_func::DMI_request_trigger */
void DMI_request_trigger_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::trigger */ kcg_bool trigger,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::dmi_request */ DMI_Request_T_DMI_Types_Pkg dmi_request,
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L2 = trigger;
  outC->_L3 = systemTime;
  outC->_L4 = dmi_request;
  outC->_L1.valid = outC->_L2;
  outC->_L1.systemTime = outC->_L3;
  outC->_L1.m_request = outC->_L4;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->dmi_driver_request,
    &outC->_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_request_trigger_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

