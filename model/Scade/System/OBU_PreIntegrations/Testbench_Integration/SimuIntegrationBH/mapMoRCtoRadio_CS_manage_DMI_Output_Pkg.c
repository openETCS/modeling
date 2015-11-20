/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS */
connectionStatusRadioUnit_T_API_RadioCommunication_Pkg mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status)
{
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L1 */
  static morcStatus_T_RCM_Session_Types_Pkg _L1;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L6 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L6;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L8 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L8;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L9 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L9;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L12 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L12;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L13 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L13;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L15 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L15;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L19 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L19;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L21 */
  static kcg_bool _L21;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L22 */
  static kcg_bool _L22;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L23 */
  static kcg_bool _L23;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L24 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L24;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L25 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L25;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::_L26 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L26;
  /* manage_DMI_Output_Pkg::mapMoRCtoRadio_CS::outBMI_CS */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg outBMI_CS;
  
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L1, inMoRC_status);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L12, &_L1.connection);
  _L22 = _L12.valid;
  _L23 = !_L22;
  _L25 = conn_unknown_API_RadioCommunication_Pkg;
  _L21 = _L12.settingUpConnectionHasFailed;
  _L9 = conn_SetupFailed_API_RadioCommunication_Pkg;
  _L13 = _L12.status;
  _L15 = conn_no_connection_API_RadioCommunication_Pkg;
  _L8 = conn_ConnectionUp_API_RadioCommunication_Pkg;
  _L6 = conn_unknown_API_RadioCommunication_Pkg;
  switch (_L13) {
    case mcs_connecting_RCM_Types_Pkg :
      _L19 = _L15;
      break;
    case mcs_connected_RCM_Types_Pkg :
      _L19 = _L8;
      break;
    
    default :
      _L19 = _L6;
  }
  /* 2 */ if (_L21) {
    _L26 = _L9;
  }
  else {
    _L26 = _L19;
  }
  /* 1 */ if (_L23) {
    _L24 = _L25;
  }
  else {
    _L24 = _L26;
  }
  outBMI_CS = _L24;
  return outBMI_CS;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapMoRCtoRadio_CS_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

