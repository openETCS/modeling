/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputDMI_Interfaces.h"

/* Interfaces::InputDMI */
void InputDMI_Interfaces(
  /* Interfaces::InputDMI::Data_From_DMI */ T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* Interfaces::InputDMI::Driver_Ack_LS */ kcg_bool *Driver_Ack_LS,
  /* Interfaces::InputDMI::Driver_Ack_OS */ kcg_bool *Driver_Ack_OS,
  /* Interfaces::InputDMI::Driver_Ack_RV */ kcg_bool *Driver_Ack_RV,
  /* Interfaces::InputDMI::Driver_Ack_SH */ kcg_bool *Driver_Ack_SH,
  /* Interfaces::InputDMI::Driver_Ack_SN */ kcg_bool *Driver_Ack_SN,
  /* Interfaces::InputDMI::Driver_Ack_SR */ kcg_bool *Driver_Ack_SR,
  /* Interfaces::InputDMI::Driver_Ack_TR */ kcg_bool *Driver_Ack_TR,
  /* Interfaces::InputDMI::Driver_Ack_UN */ kcg_bool *Driver_Ack_UN,
  /* Interfaces::InputDMI::Driver_Req_Exit_SH */ kcg_bool *Driver_Req_Exit_SH,
  /* Interfaces::InputDMI::Driver_Req_NL */ kcg_bool *Driver_Req_NL,
  /* Interfaces::InputDMI::Driver_Req_Override */ kcg_bool *Driver_Req_Override,
  /* Interfaces::InputDMI::Driver_Req_SH */ kcg_bool *Driver_Req_SH,
  /* Interfaces::InputDMI::Driver_Req_Start */ kcg_bool *Driver_Req_Start,
  /* Interfaces::InputDMI::ETCS_Isolated */ kcg_bool *ETCS_Isolated)
{
  /* Interfaces::InputDMI::_L16 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L16;
  /* Interfaces::InputDMI::_L130 */
  static kcg_bool _L130;
  /* Interfaces::InputDMI::_L129 */
  static kcg_bool _L129;
  /* Interfaces::InputDMI::_L128 */
  static kcg_bool _L128;
  /* Interfaces::InputDMI::_L127 */
  static kcg_bool _L127;
  /* Interfaces::InputDMI::_L126 */
  static kcg_bool _L126;
  /* Interfaces::InputDMI::_L125 */
  static kcg_bool _L125;
  /* Interfaces::InputDMI::_L124 */
  static kcg_bool _L124;
  /* Interfaces::InputDMI::_L123 */
  static kcg_bool _L123;
  /* Interfaces::InputDMI::_L122 */
  static kcg_bool _L122;
  /* Interfaces::InputDMI::_L121 */
  static kcg_bool _L121;
  /* Interfaces::InputDMI::_L120 */
  static kcg_bool _L120;
  /* Interfaces::InputDMI::_L119 */
  static kcg_bool _L119;
  /* Interfaces::InputDMI::_L118 */
  static kcg_bool _L118;
  /* Interfaces::InputDMI::_L117 */
  static kcg_bool _L117;
  
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(&_L16, Data_From_DMI);
  _L130 = _L16.Ack_LS;
  *Driver_Ack_LS = _L130;
  _L129 = _L16.Ack_OS;
  *Driver_Ack_OS = _L129;
  _L128 = _L16.Ack_RV;
  *Driver_Ack_RV = _L128;
  _L127 = _L16.Ack_SH;
  *Driver_Ack_SH = _L127;
  _L126 = _L16.Ack_SN;
  *Driver_Ack_SN = _L126;
  _L125 = _L16.Ack_SR;
  *Driver_Ack_SR = _L125;
  _L124 = _L16.Ack_TR;
  *Driver_Ack_TR = _L124;
  _L123 = _L16.Ack_UN;
  *Driver_Ack_UN = _L123;
  _L118 = _L16.Req_Start;
  *Driver_Req_Start = _L118;
  _L120 = _L16.Req_Override;
  *Driver_Req_Override = _L120;
  _L119 = _L16.Req_SH;
  *Driver_Req_SH = _L119;
  _L121 = _L16.Req_NL;
  *Driver_Req_NL = _L121;
  _L122 = _L16.Req_Exit_SH;
  *Driver_Req_Exit_SH = _L122;
  _L117 = _L16.ETCS_Isolated;
  *ETCS_Isolated = _L117;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputDMI_Interfaces.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

