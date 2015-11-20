/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _OutputManagement_Interfaces_H_
#define _OutputManagement_Interfaces_H_

#include "kcg_types.h"
#include "Output_To_DMI_Interfaces.h"
#include "Output_To_BG_Management_Interfaces.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::OutputManagement */
extern void OutputManagement_Interfaces(
  /* Interfaces::OutputManagement::current_Mode */ T_Mode_Level_And_Mode_Types_Pkg current_Mode,
  /* Interfaces::OutputManagement::Ack_LS_Req_To_Driver */ kcg_bool Ack_LS_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_OS_Req_To_Driver */ kcg_bool Ack_OS_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_RV_Req_To_Driver */ kcg_bool Ack_RV_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_SH_Req_To_Driver */ kcg_bool Ack_SH_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_SN_Req_To_Driver */ kcg_bool Ack_SN_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_SR_Req_To_Driver */ kcg_bool Ack_SR_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_TR_Req_To_Driver */ kcg_bool Ack_TR_Req_To_Driver,
  /* Interfaces::OutputManagement::Ack_UN_Req_To_Driver */ kcg_bool Ack_UN_Req_To_Driver,
  /* Interfaces::OutputManagement::Clean_BG_List_SH_Area */ kcg_bool Clean_BG_List_SH_Area,
  /* Interfaces::OutputManagement::EB_requested */ kcg_bool EB_requested,
  /* Interfaces::OutputManagement::End_Of_Mission_Procedure_Req */ kcg_bool End_Of_Mission_Procedure_Req,
  /* Interfaces::OutputManagement::MA_Req_to_RBC */ kcg_bool MA_Req_to_RBC,
  /* Interfaces::OutputManagement::Request_For_SH_To_RBC */ kcg_bool Request_For_SH_To_RBC,
  /* Interfaces::OutputManagement::service_brake_Command */ kcg_bool service_brake_Command,
  /* Interfaces::OutputManagement::SH_Refused_by_RBC_To_DMI */ kcg_bool SH_Refused_by_RBC_To_DMI,
  /* Interfaces::OutputManagement::Data_To_DMI */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI,
  /* Interfaces::OutputManagement::Data_To_BG_Management */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management,
  /* Interfaces::OutputManagement::EB_Requested */ kcg_bool *EB_Requested,
  /* Interfaces::OutputManagement::Service_Brake_Command */ kcg_bool *Service_Brake_Command,
  /* Interfaces::OutputManagement::newMode */ T_Mode_Level_And_Mode_Types_Pkg *newMode);

#endif /* _OutputManagement_Interfaces_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** OutputManagement_Interfaces.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

