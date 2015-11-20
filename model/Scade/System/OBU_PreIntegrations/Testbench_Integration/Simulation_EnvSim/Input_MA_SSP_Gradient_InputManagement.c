/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"

/* InputManagement::Input_MA_SSP_Gradient */
void Input_MA_SSP_Gradient_InputManagement(
  /* InputManagement::Input_MA_SSP_Gradient::Data_From_Track_MASSPGradient */T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* InputManagement::Input_MA_SSP_Gradient::received_L2_L3_MA */kcg_bool *received_L2_L3_MA,
  /* InputManagement::Input_MA_SSP_Gradient::received_L1_MA */kcg_bool *received_L1_MA,
  /* InputManagement::Input_MA_SSP_Gradient::MA_SSP_Gradient_Available */kcg_bool *MA_SSP_Gradient_Available)
{
  /* InputManagement::Input_MA_SSP_Gradient::_L27 */
  static kcg_bool _L27;
  
  _L27 = (*Data_From_Track_MASSPGradient).P21_received &
    (*Data_From_Track_MASSPGradient).P27_received;
  *received_L1_MA = (*Data_From_Track_MASSPGradient).P12_received & _L27;
  *received_L2_L3_MA = (*Data_From_Track_MASSPGradient).P15_received & _L27;
  *MA_SSP_Gradient_Available = ((*Data_From_Track_MASSPGradient).P12_received |
      (*Data_From_Track_MASSPGradient).P15_received) & _L27;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_MA_SSP_Gradient_InputManagement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

