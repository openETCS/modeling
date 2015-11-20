/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_OutputManagement.h"

/* OutputManagement::Output_To_BG_Management */
void Output_To_BG_Management_OutputManagement(
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management_From_Mode */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* OutputManagement::Output_To_BG_Management::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested,
  /* OutputManagement::Output_To_BG_Management::PositionReportNeeded */ kcg_bool PositionReportNeeded,
  /* OutputManagement::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* OutputManagement::Output_To_BG_Management::_L6 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L6;
  /* OutputManagement::Output_To_BG_Management::_L7 */
  static kcg_bool _L7;
  /* OutputManagement::Output_To_BG_Management::_L8 */
  static kcg_bool _L8;
  
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_L6,
    Data_To_BG_Management_From_Mode);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    Data_To_BG_Management,
    &_L6);
  _L7 = Connection_to_RBC_Requested;
  _L8 = PositionReportNeeded;
  noname = _L7;
  _1_noname = _L8;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_OutputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

