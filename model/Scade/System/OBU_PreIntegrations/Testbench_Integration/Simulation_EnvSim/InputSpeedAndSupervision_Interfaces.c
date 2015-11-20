/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_Interfaces.h"

/* Interfaces::InputSpeedAndSupervision */
void InputSpeedAndSupervision_Interfaces(
  /* Interfaces::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Overpass_SR_Distance */kcg_bool *Estimated_Front_End_Overpass_SR_Distance,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */kcg_bool *Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Interfaces::InputSpeedAndSupervision::Override_Function_Active */kcg_bool *Override_Function_Active,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Antenna */kcg_bool *Train_Overpass_EOA_Antenna,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Front_End */kcg_bool *Train_Overpass_EOA_Front_End,
  /* Interfaces::InputSpeedAndSupervision::Train_Speed_Under_Override_Limit */kcg_bool *Train_Speed_Under_Override_Limit)
{
  *Train_Speed_Under_Override_Limit =
    (*Data_From_Speed_and_Supervision).Train_Speed_Under_Overide_Limit;
  *Train_Overpass_EOA_Front_End =
    (*Data_From_Speed_and_Supervision).EOA_Front_End;
  *Train_Overpass_EOA_Antenna =
    (*Data_From_Speed_and_Supervision).EOA_Antenna_Overpass;
  *Override_Function_Active =
    (*Data_From_Speed_and_Supervision).Override_Function_Active;
  *Estimated_Front_End_Rear_Location_SSP_Or_Gradient =
    (*Data_From_Speed_and_Supervision).Estim_Front_End_Rear_SSP;
  *Estimated_Front_End_Overpass_SR_Distance =
    (*Data_From_Speed_and_Supervision).Estim_front_End_overpass_SR_Dist;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InputSpeedAndSupervision_Interfaces.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

