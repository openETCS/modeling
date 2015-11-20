/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Input_Modes_InputManagement_H_
#define _Input_Modes_InputManagement_H_

#include "kcg_types.h"
#include "Input_ModeProfiles_InputManagement.h"
#include "Input_Reversing_Mode_InputManagement.h"
#include "Input_Staff_Responsible_InputManagement.h"

/* =====================  no input structure  ====================== */


/* InputManagement::Input_Modes */
extern void Input_Modes_InputManagement(
  /* InputManagement::Input_Modes::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Modes::Stop_If_In_SH */kcg_bool *Stop_If_In_SH,
  /* InputManagement::Input_Modes::Stop_if_In_SR */kcg_bool *Stop_if_In_SR,
  /* InputManagement::Input_Modes::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* InputManagement::Input_Modes::Mode_Profile_On_Borad */T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *Mode_Profile_On_Borad,
  /* InputManagement::Input_Modes::List_BG_Related_SR_Empty */kcg_bool *List_BG_Related_SR_Empty,
  /* InputManagement::Input_Modes::Trip_Order_givrn_By_Balise */kcg_bool *Trip_Order_givrn_By_Balise);

#endif /* _Input_Modes_InputManagement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Modes_InputManagement.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

