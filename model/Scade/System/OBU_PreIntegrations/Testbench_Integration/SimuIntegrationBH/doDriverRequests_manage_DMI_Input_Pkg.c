/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doDriverRequests_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::doDriverRequests */
void doDriverRequests_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::doDriverRequests::inDriverRequest */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *inDriverRequest,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToModes */ DMI_DriverRequest_T_DMI_Types_Pkg *_5_outDriverRequestToModes,
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToLevels */ kcg_bool *outDriverRequestToLevels)
{
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToModes */
  static DMI_DriverRequest_T_DMI_Types_Pkg _1_outDriverRequestToModes;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L17 */
  static DMI_Request_T_DMI_Types_Pkg _L17_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L16 */
  static DMI_Request_T_DMI_Types_Pkg _L16_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L15 */
  static DMI_Request_T_DMI_Types_Pkg _L15_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L13 */
  static DMI_Request_T_DMI_Types_Pkg _L13_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L12 */
  static DMI_Request_T_DMI_Types_Pkg _L12_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L10 */
  static kcg_bool _L10_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L7 */
  static kcg_bool _L7_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L6 */
  static DMI_Request_T_DMI_Types_Pkg _L6_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L4 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L4_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L3 */
  static DMI_Request_T_DMI_Types_Pkg _L3_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::then::_L1 */
  static DMI_DriverRequest_T_DMI_Types_Pkg _L1_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::outDriverRequestToModes */
  static DMI_DriverRequest_T_DMI_Types_Pkg outDriverRequestToModes;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1::else::_L1 */
  static DMI_DriverRequest_T_DMI_Types_Pkg _L14_IfBlock1;
  /* manage_DMI_Input_Pkg::doDriverRequests::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::doDriverRequests::isValid */
  static kcg_bool isValid;
  /* manage_DMI_Input_Pkg::doDriverRequests::_L1 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L1;
  /* manage_DMI_Input_Pkg::doDriverRequests::_L4 */
  static kcg_bool _L4;
  /* manage_DMI_Input_Pkg::doDriverRequests::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5;
  /* manage_DMI_Input_Pkg::doDriverRequests::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Input_Pkg::doDriverRequests::_L11 */
  static kcg_bool _L11;
  /* manage_DMI_Input_Pkg::doDriverRequests::_L12 */
  static DMI_Request_T_DMI_Types_Pkg _L12;
  
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L1,
    inDriverRequest);
  _L12 = _L1.m_request;
  _L5 = Level_entry_request_DMI_Types_Pkg;
  _L4 = _L12 == _L5;
  _L11 = _L1.valid;
  _L6 = _L11 & _L4;
  isValid = _L11;
  IfBlock1_clock = isValid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L18_IfBlock1 = isValid;
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L4_IfBlock1,
      inDriverRequest);
    _L3_IfBlock1 = _L4_IfBlock1.m_request;
    _L6_IfBlock1 = Shunting_exit_DMI_Types_Pkg;
    _L5_IfBlock1 = _L3_IfBlock1 == _L6_IfBlock1;
    _L12_IfBlock1 = Non_leading_DMI_Types_Pkg;
    _L8_IfBlock1 = _L3_IfBlock1 == _L12_IfBlock1;
    _L13_IfBlock1 = Override_EOA_DMI_Types_Pkg;
    _L7_IfBlock1 = _L3_IfBlock1 == _L13_IfBlock1;
    _L15_IfBlock1 = Shunting_entry_DMI_Types_Pkg;
    _L9_IfBlock1 = _L3_IfBlock1 == _L15_IfBlock1;
    _L16_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
    _L11_IfBlock1 = _L3_IfBlock1 == _L16_IfBlock1;
    _L17_IfBlock1 = Request_isolation_DMI_Types_Pkg;
    _L10_IfBlock1 = _L3_IfBlock1 == _L17_IfBlock1;
    _L1_IfBlock1.valid = _L18_IfBlock1;
    _L1_IfBlock1.Req_Exit_SH = _L5_IfBlock1;
    _L1_IfBlock1.Req_NL = _L8_IfBlock1;
    _L1_IfBlock1.Req_Override = _L7_IfBlock1;
    _L1_IfBlock1.Req_SH = _L9_IfBlock1;
    _L1_IfBlock1.Req_Start = _L11_IfBlock1;
    _L1_IfBlock1.ETCS_Isolated = _L10_IfBlock1;
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &_1_outDriverRequestToModes,
      &_L1_IfBlock1);
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      _5_outDriverRequestToModes,
      &_1_outDriverRequestToModes);
  }
  else {
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &_L14_IfBlock1,
      (DMI_DriverRequest_T_DMI_Types_Pkg *)
        &cNoDriverRequestToModes_manage_DMI_Input_Pkg);
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &outDriverRequestToModes,
      &_L14_IfBlock1);
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      _5_outDriverRequestToModes,
      &outDriverRequestToModes);
  }
  *outDriverRequestToLevels = _L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** doDriverRequests_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

