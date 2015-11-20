/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Reversing_Mode_InputManagement.h"

/* InputManagement::Input_Reversing_Mode */
void Input_Reversing_Mode_InputManagement(
  /* InputManagement::Input_Reversing_Mode::P_138 */P138_ReversingAreaInformation_T_Packet_Types_Pkg *P_138,
  /* InputManagement::Input_Reversing_Mode::P_139 */P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P_139,
  /* InputManagement::Input_Reversing_Mode::referenceLocation */L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::Input_Reversing_Mode::Reversing_Data */T_Reversing_Data_Level_And_Mode_Types_Pkg *Reversing_Data)
{
  (*Reversing_Data).Available = (*P_138).valid & (*P_139).valid;
  (*Reversing_Data).Dist_Start = (*P_138).d_startreverse + referenceLocation;
  (*Reversing_Data).Length = (*P_138).l_reversearea;
  (*Reversing_Data).Dist_Run = referenceLocation + (*P_139).d_reverse;
  (*Reversing_Data).Speed = (*P_139).v_reverse;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Reversing_Mode_InputManagement.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

