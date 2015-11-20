/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OutputManagement_Interfaces.h"

/* Interfaces::OutputManagement */
void OutputManagement_Interfaces(
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
  /* Interfaces::OutputManagement::newMode */ T_Mode_Level_And_Mode_Types_Pkg *newMode)
{
  /* Interfaces::OutputManagement::_L16 */
  static T_Mode_Level_And_Mode_Types_Pkg _L16;
  /* Interfaces::OutputManagement::_L15 */
  static kcg_bool _L15;
  /* Interfaces::OutputManagement::_L14 */
  static kcg_bool _L14;
  /* Interfaces::OutputManagement::_L13 */
  static kcg_bool _L13;
  /* Interfaces::OutputManagement::_L12 */
  static kcg_bool _L12;
  /* Interfaces::OutputManagement::_L11 */
  static kcg_bool _L11;
  /* Interfaces::OutputManagement::_L10 */
  static kcg_bool _L10;
  /* Interfaces::OutputManagement::_L9 */
  static kcg_bool _L9;
  /* Interfaces::OutputManagement::_L8 */
  static kcg_bool _L8;
  /* Interfaces::OutputManagement::_L7 */
  static kcg_bool _L7;
  /* Interfaces::OutputManagement::_L6 */
  static kcg_bool _L6;
  /* Interfaces::OutputManagement::_L5 */
  static kcg_bool _L5;
  /* Interfaces::OutputManagement::_L4 */
  static kcg_bool _L4;
  /* Interfaces::OutputManagement::_L3 */
  static kcg_bool _L3;
  /* Interfaces::OutputManagement::_L2 */
  static kcg_bool _L2;
  /* Interfaces::OutputManagement::_L1 */
  static kcg_bool _L1;
  /* Interfaces::OutputManagement::_L18 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L18;
  /* Interfaces::OutputManagement::_L20 */
  static kcg_bool _L20;
  /* Interfaces::OutputManagement::_L21 */
  static kcg_bool _L21;
  /* Interfaces::OutputManagement::_L22 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L22;
  
  _L16 = current_Mode;
  *newMode = _L16;
  _L15 = service_brake_Command;
  *Service_Brake_Command = _L15;
  _L14 = EB_requested;
  *EB_Requested = _L14;
  _L13 = Request_For_SH_To_RBC;
  _L12 = MA_Req_to_RBC;
  _L11 = Clean_BG_List_SH_Area;
  _L10 = End_Of_Mission_Procedure_Req;
  _L21 = current_Mode == SB_Level_And_Mode_Types_Pkg;
  _L20 = _L21 & _L10;
  /* 1 */ Output_To_BG_Management_Interfaces(_L20, _L11, _L12, _L13, &_L18);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    Data_To_BG_Management,
    &_L18);
  _L9 = SH_Refused_by_RBC_To_DMI;
  _L8 = Ack_UN_Req_To_Driver;
  _L7 = Ack_TR_Req_To_Driver;
  _L6 = Ack_SR_Req_To_Driver;
  _L5 = Ack_SN_Req_To_Driver;
  _L4 = Ack_SH_Req_To_Driver;
  _L3 = Ack_RV_Req_To_Driver;
  _L2 = Ack_OS_Req_To_Driver;
  _L1 = Ack_LS_Req_To_Driver;
  /* 1 */
  Output_To_DMI_Interfaces(_L1, _L2, _L3, _L4, _L5, _L6, _L7, _L8, _L9, &_L22);
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(Data_To_DMI, &_L22);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** OutputManagement_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

