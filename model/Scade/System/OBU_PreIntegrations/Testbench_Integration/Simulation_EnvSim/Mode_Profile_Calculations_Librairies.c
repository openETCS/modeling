/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mode_Profile_Calculations_Librairies.h"

/* Librairies::Mode_Profile_Calculations */
void Mode_Profile_Calculations_Librairies(
  /* Librairies::Mode_Profile_Calculations::Selected_Mode */T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Librairies::Mode_Profile_Calculations::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Librairies::Mode_Profile_Calculations::Profile_Mode */T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Librairies::Mode_Profile_Calculations::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Librairies::Mode_Profile_Calculations::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Librairies::Mode_Profile_Calculations::Max_Safe_Front_In_Mode_Profile */kcg_bool *Max_Safe_Front_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Supervision_Condition_In_Mode_Profile */kcg_bool *Supervision_Condition_In_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Awaited_Mode_Profile */kcg_bool *Awaited_Mode_Profile,
  /* Librairies::Mode_Profile_Calculations::Estimated_front_End_In_Ack_Area */kcg_bool *Estimated_front_End_In_Ack_Area)
{
  static kcg_bool tmp;
  /* Librairies::Mode_Profile_Calculations::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* Librairies::Mode_Profile_Calculations::Condition_Ok */
  static kcg_bool Condition_Ok;
  /* Librairies::Mode_Profile_Calculations::_L35 */
  static kcg_bool _L35;
  
  IfBlock2_clock = ((*Mode_Profile_On_Board).Mode ==
      Profile_OS_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
      OS_Level_And_Mode_Types_Pkg);
  if (IfBlock2_clock) {
    tmp = kcg_true;
  }
  else {
    _L35 = ((*Mode_Profile_On_Board).Mode ==
        Profile_LS_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
        LS_Level_And_Mode_Types_Pkg);
    if (_L35) {
      tmp = kcg_true;
    }
    else {
      Condition_Ok = ((*Mode_Profile_On_Board).Mode ==
          Profile_SH_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
          SH_Level_And_Mode_Types_Pkg);
      if (Condition_Ok) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
    }
  }
  *Awaited_Mode_Profile = ((*Mode_Profile_On_Board).Mode == Profile_Mode) | tmp;
  Condition_Ok = *Awaited_Mode_Profile & (*Train_Position).valid;
  _L35 = /* 1 */
    Position_In_Ack_Area_Librairies(
      (*Train_Position).estimatedFrontEndPosition,
      (*Mode_Profile_On_Board).Distance,
      (*Mode_Profile_On_Board).Length_Ack);
  if (Condition_Ok) {
    *Estimated_front_End_In_Ack_Area = _L35;
    *Supervision_Condition_In_Mode_Profile = ((*Mode_Profile_On_Board).Speed >=
        Train_Speed) & _L35;
    *Max_Safe_Front_In_Mode_Profile = /* 1 */
      Position_In_Area_Librairies(
        (*Train_Position).maxSafeFrontEndPostion,
        (*Mode_Profile_On_Board).Distance,
        (*Mode_Profile_On_Board).Length);
  }
  else {
    *Max_Safe_Front_In_Mode_Profile = kcg_false;
    *Supervision_Condition_In_Mode_Profile = kcg_false;
    *Estimated_front_End_In_Ack_Area = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Mode_Profile_Calculations_Librairies.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

