/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest */
void C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::dmi_driver_request_int */DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Driver_Reqest::dmi_driver_request_ct */DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct)
{
  (*dmi_driver_request_ct).systemTime = (*dmi_driver_request_int)[1];
  (*dmi_driver_request_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_driver_request_int)[0]);
  (*dmi_driver_request_ct).m_request = /* 1 */
    CAST_int_to_DMI_Request_DATA_Variables((*dmi_driver_request_int)[2]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

