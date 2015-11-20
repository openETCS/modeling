/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_request_trigger_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::DMI_request_trigger */
void DMI_request_trigger_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::trigger */kcg_bool trigger,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::dmi_request */DMI_Request_T_DMI_Types_Pkg dmi_request,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::dmi_driver_request */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request)
{
  (*dmi_driver_request).valid = trigger;
  (*dmi_driver_request).systemTime = systemTime;
  (*dmi_driver_request).m_request = dmi_request;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_request_trigger_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:34
*************************************************************$ */

