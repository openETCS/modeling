/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputDMI_InputManagement.h"

/* InputManagement::InputDMI */
void InputDMI_InputManagement(
  /* InputManagement::InputDMI::Data_From_DMI */DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* InputManagement::InputDMI::driver_level_transition1 */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition1,
  /* InputManagement::InputDMI::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* InputManagement::InputDMI::Level_Ack */kcg_bool *Level_Ack,
  /* InputManagement::InputDMI::Data_From_DMI_To_Mode */T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI_To_Mode)
{
  /* InputManagement::InputDMI::Loc_DMI_Req_Valid */
  static kcg_bool Loc_DMI_Req_Valid;
  
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    driver_level_transition,
    driver_level_transition1);
  Loc_DMI_Req_Valid = (*Data_From_DMI).valid &
    (*Data_From_DMI).DriverAck.valid &
    (*Data_From_DMI).DriverAck.acknowledgement;
  (*Data_From_DMI_To_Mode).Ack_LS = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_Limited_Supervision);
  (*Data_From_DMI_To_Mode).Ack_OS = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_On_Sight);
  (*Data_From_DMI_To_Mode).Ack_RV = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_Reversing);
  (*Data_From_DMI_To_Mode).Ack_SH = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_Shunting);
  (*Data_From_DMI_To_Mode).Ack_SN = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_National_System);
  (*Data_From_DMI_To_Mode).Ack_SR = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_Staff_Responsible);
  (*Data_From_DMI_To_Mode).Ack_TR = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_Trip);
  (*Data_From_DMI_To_Mode).Ack_UN = Loc_DMI_Req_Valid &
    ((*Data_From_DMI).DriverAck.whichMode == M_MODE_Unfitted);
  Loc_DMI_Req_Valid = (*Data_From_DMI).valid &
    (*Data_From_DMI).DriverRequest.valid;
  (*Data_From_DMI_To_Mode).Req_Exit_SH = Loc_DMI_Req_Valid &
    (*Data_From_DMI).DriverRequest.Req_Exit_SH;
  (*Data_From_DMI_To_Mode).Req_NL = Loc_DMI_Req_Valid &
    (*Data_From_DMI).DriverRequest.Req_NL;
  (*Data_From_DMI_To_Mode).Req_Override = Loc_DMI_Req_Valid &
    (*Data_From_DMI).DriverRequest.Req_Override;
  (*Data_From_DMI_To_Mode).Req_SH = Loc_DMI_Req_Valid &
    (*Data_From_DMI).DriverRequest.Req_SH;
  (*Data_From_DMI_To_Mode).Req_Start = Loc_DMI_Req_Valid &
    (*Data_From_DMI).DriverRequest.Req_Start;
  (*Data_From_DMI_To_Mode).ETCS_Isolated = Loc_DMI_Req_Valid &
    (*Data_From_DMI).DriverRequest.ETCS_Isolated;
  *Level_Ack = (*Data_From_DMI).LevelAck & (*Data_From_DMI).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputDMI_InputManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

