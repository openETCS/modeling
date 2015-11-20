/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_Interfaces.h"

/* Interfaces::Output_To_DMI */
void Output_To_DMI_Interfaces(
  /* Interfaces::Output_To_DMI::Ack_LS_Req_To_Driver */kcg_bool Ack_LS_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_OS_Req_To_Driver */kcg_bool Ack_OS_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_RV_Req_To_Driver */kcg_bool Ack_RV_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_SH_Req_To_Driver */kcg_bool Ack_SH_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_SN_Req_To_Driver */kcg_bool Ack_SN_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_SR_Req_To_Driver */kcg_bool Ack_SR_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_TR_Req_To_Driver */kcg_bool Ack_TR_Req_To_Driver,
  /* Interfaces::Output_To_DMI::Ack_UN_Req_To_Driver */kcg_bool Ack_UN_Req_To_Driver,
  /* Interfaces::Output_To_DMI::SH_Refused_By_RBC_To_DMI */kcg_bool SH_Refused_By_RBC_To_DMI,
  /* Interfaces::Output_To_DMI::Data_To_DMI */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI)
{
  (*Data_To_DMI).Ack_LS = Ack_LS_Req_To_Driver;
  (*Data_To_DMI).Ack_OS = Ack_OS_Req_To_Driver;
  (*Data_To_DMI).Ack_RV = Ack_RV_Req_To_Driver;
  (*Data_To_DMI).Ack_SH = Ack_SH_Req_To_Driver;
  (*Data_To_DMI).Ack_SN = Ack_SN_Req_To_Driver;
  (*Data_To_DMI).Ack_SR = Ack_SR_Req_To_Driver;
  (*Data_To_DMI).Ack_TR = Ack_TR_Req_To_Driver;
  (*Data_To_DMI).Ack_UN = Ack_UN_Req_To_Driver;
  (*Data_To_DMI).SH_Refused_By_RBC = SH_Refused_By_RBC_To_DMI;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_To_DMI_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

