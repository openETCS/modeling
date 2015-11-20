/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "triggerForMA_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::triggerForMA */
void triggerForMA_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::triggerForMA::fromDMI_driverRequest */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::triggerForMA::outForMA */ Driver2MAR_T_MA_Request *_3_outForMA)
{
  /* manage_DMI_Input_Pkg::triggerForMA::outForMA */
  static Driver2MAR_T_MA_Request _1_outForMA;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L9 */
  static DMI_Request_T_DMI_Types_Pkg _L9_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L7 */
  static Driver2MAR_T_MA_Request _L7_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L1 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L1_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::then::_L2 */
  static DMI_Request_T_DMI_Types_Pkg _L2_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::outForMA */
  static Driver2MAR_T_MA_Request outForMA;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1::else::_L1 */
  static Driver2MAR_T_MA_Request _L12_IfBlock1;
  /* manage_DMI_Input_Pkg::triggerForMA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::triggerForMA::isValid */
  static kcg_bool isValid;
  /* manage_DMI_Input_Pkg::triggerForMA::_L1 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L1;
  /* manage_DMI_Input_Pkg::triggerForMA::_L2 */
  static kcg_bool _L2;
  
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L1,
    fromDMI_driverRequest);
  _L2 = _L1.valid;
  isValid = _L2;
  IfBlock1_clock = isValid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L1_IfBlock1,
      fromDMI_driverRequest);
    _L2_IfBlock1 = _L1_IfBlock1.m_request;
    _L9_IfBlock1 = Track_Ahead_Free_is_validated_DMI_Types_Pkg;
    _L8_IfBlock1 = _L2_IfBlock1 == _L9_IfBlock1;
    _L5_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
    _L4_IfBlock1 = _L2_IfBlock1 == _L5_IfBlock1;
    _L7_IfBlock1.trackAheadFree = _L8_IfBlock1;
    _L7_IfBlock1.driverSelectsStart = _L4_IfBlock1;
    kcg_copy_Driver2MAR_T_MA_Request(&_1_outForMA, &_L7_IfBlock1);
    kcg_copy_Driver2MAR_T_MA_Request(_3_outForMA, &_1_outForMA);
  }
  else {
    kcg_copy_Driver2MAR_T_MA_Request(
      &_L12_IfBlock1,
      (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
    kcg_copy_Driver2MAR_T_MA_Request(&outForMA, &_L12_IfBlock1);
    kcg_copy_Driver2MAR_T_MA_Request(_3_outForMA, &outForMA);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** triggerForMA_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

