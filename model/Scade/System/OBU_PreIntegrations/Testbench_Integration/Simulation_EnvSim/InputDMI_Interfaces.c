/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputDMI_Interfaces.h"

/* Interfaces::InputDMI */
void InputDMI_Interfaces(
  /* Interfaces::InputDMI::Data_From_DMI */T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* Interfaces::InputDMI::Driver_Ack_LS */kcg_bool *Driver_Ack_LS,
  /* Interfaces::InputDMI::Driver_Ack_OS */kcg_bool *Driver_Ack_OS,
  /* Interfaces::InputDMI::Driver_Ack_RV */kcg_bool *Driver_Ack_RV,
  /* Interfaces::InputDMI::Driver_Ack_SH */kcg_bool *Driver_Ack_SH,
  /* Interfaces::InputDMI::Driver_Ack_SN */kcg_bool *Driver_Ack_SN,
  /* Interfaces::InputDMI::Driver_Ack_SR */kcg_bool *Driver_Ack_SR,
  /* Interfaces::InputDMI::Driver_Ack_TR */kcg_bool *Driver_Ack_TR,
  /* Interfaces::InputDMI::Driver_Ack_UN */kcg_bool *Driver_Ack_UN,
  /* Interfaces::InputDMI::Driver_Req_Exit_SH */kcg_bool *Driver_Req_Exit_SH,
  /* Interfaces::InputDMI::Driver_Req_NL */kcg_bool *Driver_Req_NL,
  /* Interfaces::InputDMI::Driver_Req_Override */kcg_bool *Driver_Req_Override,
  /* Interfaces::InputDMI::Driver_Req_SH */kcg_bool *Driver_Req_SH,
  /* Interfaces::InputDMI::Driver_Req_Start */kcg_bool *Driver_Req_Start,
  /* Interfaces::InputDMI::ETCS_Isolated */kcg_bool *ETCS_Isolated)
{
  *ETCS_Isolated = (*Data_From_DMI).ETCS_Isolated;
  *Driver_Req_Start = (*Data_From_DMI).Req_Start;
  *Driver_Req_SH = (*Data_From_DMI).Req_SH;
  *Driver_Req_Override = (*Data_From_DMI).Req_Override;
  *Driver_Req_NL = (*Data_From_DMI).Req_NL;
  *Driver_Req_Exit_SH = (*Data_From_DMI).Req_Exit_SH;
  *Driver_Ack_UN = (*Data_From_DMI).Ack_UN;
  *Driver_Ack_TR = (*Data_From_DMI).Ack_TR;
  *Driver_Ack_SR = (*Data_From_DMI).Ack_SR;
  *Driver_Ack_SN = (*Data_From_DMI).Ack_SN;
  *Driver_Ack_SH = (*Data_From_DMI).Ack_SH;
  *Driver_Ack_RV = (*Data_From_DMI).Ack_RV;
  *Driver_Ack_OS = (*Data_From_DMI).Ack_OS;
  *Driver_Ack_LS = (*Data_From_DMI).Ack_LS;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputDMI_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

