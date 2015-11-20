/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_Interfaces.h"

/* Interfaces::Output_To_BG_Management */
void Output_To_BG_Management_Interfaces(
  /* Interfaces::Output_To_BG_Management::End_Of_Mission_Procedure_Req */ kcg_bool End_Of_Mission_Procedure_Req,
  /* Interfaces::Output_To_BG_Management::Clean_BG_List_SH_Area */ kcg_bool Clean_BG_List_SH_Area,
  /* Interfaces::Output_To_BG_Management::MA_Req_To_RBC */ kcg_bool MA_Req_To_RBC,
  /* Interfaces::Output_To_BG_Management::Request_For_SH_To_RBC */ kcg_bool Request_For_SH_To_RBC,
  /* Interfaces::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management)
{
  /* Interfaces::Output_To_BG_Management::_L2 */
  static kcg_bool _L2;
  /* Interfaces::Output_To_BG_Management::_L3 */
  static kcg_bool _L3;
  /* Interfaces::Output_To_BG_Management::_L4 */
  static kcg_bool _L4;
  /* Interfaces::Output_To_BG_Management::_L5 */
  static kcg_bool _L5;
  /* Interfaces::Output_To_BG_Management::_L6 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L6;
  /* Interfaces::Output_To_BG_Management::_L7 */
  static kcg_bool _L7;
  /* Interfaces::Output_To_BG_Management::_L8 */
  static kcg_bool _L8;
  
  _L2 = End_Of_Mission_Procedure_Req;
  _L3 = Clean_BG_List_SH_Area;
  _L4 = MA_Req_To_RBC;
  _L5 = Request_For_SH_To_RBC;
  _L7 = kcg_false;
  _L8 = kcg_false;
  _L6.EoM_Procedure_req = _L2;
  _L6.Clean_BG_List_SH_Area = _L3;
  _L6.MA_Req = _L4;
  _L6.Req_for_SH_from_Driver = _L5;
  _L6.Connection_to_RBC_req = _L7;
  _L6.Position_Repport_Needed = _L8;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    Data_To_BG_Management,
    &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

