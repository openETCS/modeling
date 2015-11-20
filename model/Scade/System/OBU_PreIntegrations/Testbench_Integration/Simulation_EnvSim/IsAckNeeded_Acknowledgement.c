/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsAckNeeded_Acknowledgement.h"

/* Acknowledgement::IsAckNeeded */
kcg_bool IsAckNeeded_Acknowledgement(
  /* Acknowledgement::IsAckNeeded::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::IsAckNeeded::last_level */M_LEVEL last_level)
{
  /* Acknowledgement::IsAckNeeded::_L16 */
  static kcg_bool _L16;
  /* Acknowledgement::IsAckNeeded::_L27 */
  static kcg_bool _L27;
  /* Acknowledgement::IsAckNeeded::isAckNeeded */
  static kcg_bool isAckNeeded;
  
  _L27 = (*selected_level_transition).transition.level ==
    M_LEVEL_Level_NTC_specified_by_NID_NTC;
  _L16 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  isAckNeeded = ((last_level != (*selected_level_transition).transition.level) |
      (_L27 & _L16)) & (((*selected_level_transition).transition.level ==
        M_LEVEL_Level_0) | _L27 | _L16);
  return isAckNeeded;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsAckNeeded_Acknowledgement.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

