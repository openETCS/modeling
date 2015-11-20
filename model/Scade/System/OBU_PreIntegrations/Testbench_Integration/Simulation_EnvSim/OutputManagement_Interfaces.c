/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OutputManagement_Interfaces.h"

/* Interfaces::OutputManagement */
void OutputManagement_Interfaces(
  /* Interfaces::OutputManagement::current_Mode */T_Mode_Level_And_Mode_Types_Pkg current_Mode,
  /* Interfaces::OutputManagement::Ack_LS_Req_To_Driver */kcg_bool Ack_LS_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_OS_Req_To_Driver */kcg_bool Ack_OS_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_RV_Req_To_Driver */kcg_bool Ack_RV_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_SH_Req_To_Driver */kcg_bool Ack_SH_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_SN_Req_To_Driver */kcg_bool Ack_SN_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_SR_Req_To_Driver */kcg_bool Ack_SR_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_TR_Req_To_Driver */kcg_bool Ack_TR_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_UN_Req_To_Driver */kcg_bool Ack_UN_Req_To_Driver,
  /* Interfaces::OutputManagement::Clean_BG_List_SH_Area */kcg_bool Clean_BG_List_SH_Area,
  /* Interfaces::OutputManagement::EB_requested */kcg_bool EB_requested,
  /* Interfaces::OutputManagement::End_Of_Mission_Procedure_Req */kcg_bool End_Of_Mission_Procedure_Req,
  /* Interfaces::OutputManagement::MA_Req_to_RBC */kcg_bool MA_Req_to_RBC,
  /* Interfaces::OutputManagement::Request_For_SH_To_RBC */kcg_bool Request_For_SH_To_RBC,
  /* Interfaces::OutputManagement::service_brake_Command */kcg_bool service_brake_Command,
  /* Interfaces::OutputManagement::SH_Refused_by_RBC_To_DMI */kcg_bool SH_Refused_by_RBC_To_DMI,
  /* Interfaces::OutputManagement::Data_To_DMI */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI,
  /* Interfaces::OutputManagement::Data_To_BG_Management */T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management,
  /* Interfaces::OutputManagement::EB_Requested */kcg_bool *EB_Requested,
  /* Interfaces::OutputManagement::Service_Brake_Command */kcg_bool *Service_Brake_Command,
  /* Interfaces::OutputManagement::newMode */T_Mode_Level_And_Mode_Types_Pkg *newMode)
{
  *newMode = current_Mode;
  *Service_Brake_Command = service_brake_Command;
  *EB_Requested = EB_requested;
  /* 1 */
  Output_To_BG_Management_Interfaces(
    (kcg_bool)
      ((*newMode == SB_Level_And_Mode_Types_Pkg) &
        End_Of_Mission_Procedure_Req),
    Clean_BG_List_SH_Area,
    MA_Req_to_RBC,
    Request_For_SH_To_RBC,
    Data_To_BG_Management);
  /* 1 */
  Output_To_DMI_Interfaces(
    Ack_LS_Req_To_Driver,
    Ack_OS_Req_To_Driver,
    Ack_RV_Req_To_Driver,
    Ack_SH_Req_To_Driver,
    Ack_SN_Req_To_Driver,
    Ack_SR_Req_To_Driver,
    Ack_TR_Req_To_Driver,
    Ack_UN_Req_To_Driver,
    SH_Refused_by_RBC_To_DMI,
    Data_To_DMI);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OutputManagement_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

