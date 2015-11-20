/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Modes_InputManagement.h"

/* InputManagement::Input_Modes */
void Input_Modes_InputManagement(
  /* InputManagement::Input_Modes::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Modes::Stop_If_In_SH */kcg_bool *Stop_If_In_SH,
  /* InputManagement::Input_Modes::Stop_if_In_SR */kcg_bool *Stop_if_In_SR,
  /* InputManagement::Input_Modes::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* InputManagement::Input_Modes::Mode_Profile_On_Borad */T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *Mode_Profile_On_Borad,
  /* InputManagement::Input_Modes::List_BG_Related_SR_Empty */kcg_bool *List_BG_Related_SR_Empty,
  /* InputManagement::Input_Modes::Trip_Order_givrn_By_Balise */kcg_bool *Trip_Order_givrn_By_Balise)
{
  static kcg_int i;
  
  /* 1 */
  Input_Staff_Responsible_InputManagement(
    &(*Data_From_Track_Packets).P_63,
    &(*Data_From_Track_Packets).P_137,
    List_BG_Related_SR_Empty,
    Stop_if_In_SR);
  /* 1 */
  Input_Reversing_Mode_InputManagement(
    &(*Data_From_Track_Packets).P_138,
    &(*Data_From_Track_Packets).P_139,
    (*Data_From_Track_Packets).referenceLocation,
    Reversing_Data);
  for (i = 0; i < 3; i++) {
    /* 1 */
    Input_ModeProfiles_InputManagement(
      &(*Data_From_Track_Packets).P_80[i],
      (*Data_From_Track_Packets).referenceLocation,
      &(*Mode_Profile_On_Borad)[i]);
  }
  *Trip_Order_givrn_By_Balise = (*Data_From_Track_Packets).P_12[0].valid &
    ((*Data_From_Track_Packets).P_12[0].v_main == 0);
  *Stop_If_In_SH = (*Data_From_Track_Packets).P_135.valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Modes_InputManagement.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

