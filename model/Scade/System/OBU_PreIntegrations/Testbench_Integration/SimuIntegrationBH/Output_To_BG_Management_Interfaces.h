/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Output_To_BG_Management_Interfaces_H_
#define _Output_To_BG_Management_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::Output_To_BG_Management */
extern void Output_To_BG_Management_Interfaces(
  /* Interfaces::Output_To_BG_Management::End_Of_Mission_Procedure_Req */ kcg_bool End_Of_Mission_Procedure_Req,
  /* Interfaces::Output_To_BG_Management::Clean_BG_List_SH_Area */ kcg_bool Clean_BG_List_SH_Area,
  /* Interfaces::Output_To_BG_Management::MA_Req_To_RBC */ kcg_bool MA_Req_To_RBC,
  /* Interfaces::Output_To_BG_Management::Request_For_SH_To_RBC */ kcg_bool Request_For_SH_To_RBC,
  /* Interfaces::Output_To_BG_Management::Data_To_BG_Management */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management);

#endif /* _Output_To_BG_Management_Interfaces_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Output_To_BG_Management_Interfaces.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

