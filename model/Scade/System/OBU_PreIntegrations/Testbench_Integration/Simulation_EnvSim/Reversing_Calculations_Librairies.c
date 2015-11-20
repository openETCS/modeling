/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Reversing_Calculations_Librairies.h"

/* Librairies::Reversing_Calculations */
void Reversing_Calculations_Librairies(
  /* Librairies::Reversing_Calculations::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data,
  /* Librairies::Reversing_Calculations::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Librairies::Reversing_Calculations::Max_Safe_Front_In_Reverse_Area */kcg_bool *Max_Safe_Front_In_Reverse_Area,
  /* Librairies::Reversing_Calculations::RV_Data_Available */kcg_bool *RV_Data_Available)
{
  *RV_Data_Available = (*Reversing_Data).Available;
  if (*RV_Data_Available & (*Train_Position).valid) {
    *Max_Safe_Front_In_Reverse_Area = /* 1 */
      Position_In_Area_Librairies(
        (*Train_Position).maxSafeFrontEndPostion,
        (*Reversing_Data).Dist_Start,
        (*Reversing_Data).Length);
  }
  else {
    *Max_Safe_Front_In_Reverse_Area = kcg_false;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Reversing_Calculations_Librairies.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

