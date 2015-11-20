/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSTM_Interfaces.h"

/* Interfaces::InputSTM */
void InputSTM_Interfaces(
  /* Interfaces::InputSTM::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Interfaces::InputSTM::Interface_To_National_System */ kcg_bool *Interface_To_National_System,
  /* Interfaces::InputSTM::National_Trip_Order */ kcg_bool *National_Trip_Order)
{
  /* Interfaces::InputSTM::_L1 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L1;
  /* Interfaces::InputSTM::_L3 */
  static kcg_bool _L3;
  /* Interfaces::InputSTM::_L2 */
  static kcg_bool _L2;
  
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&_L1, Data_From_STM);
  _L3 = _L1.Interface_To_National_System;
  *Interface_To_National_System = _L3;
  _L2 = _L1.National_trip_Order;
  *National_Trip_Order = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSTM_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

