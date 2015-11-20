/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void mapCMDToRTM_init_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->toRTM.valid = kcg_true;
  outC->toRTM.cmd = cmdr_not_relevant_API_RadioCommunication_Pkg;
  outC->toRTM.networkID = 0;
  /* 1 */ mapnewCMD_toCmd_init_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapCMDToRTM_reset_radioOutput_Pkg(outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* 1 */ mapnewCMD_toCmd_reset_radioOutput_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::mapCMDToRTM */
void mapCMDToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapCMDToRTM::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapCMDToRTM::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pkg *outC)
{
  /* radioOutput_Pkg::mapCMDToRTM::_L18 */
  static RadioManagement_T_API_RadioCommunication_Pkg _L18;
  /* radioOutput_Pkg::mapCMDToRTM::_L20 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L20;
  /* radioOutput_Pkg::mapCMDToRTM::_L21 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L21;
  /* radioOutput_Pkg::mapCMDToRTM::_L22 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L22;
  /* radioOutput_Pkg::mapCMDToRTM::_L23 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L23;
  /* radioOutput_Pkg::mapCMDToRTM::_L24 */
  static kcg_bool _L24;
  /* radioOutput_Pkg::mapCMDToRTM::_L25 */
  static NID_RADIO _L25;
  /* radioOutput_Pkg::mapCMDToRTM::_L26 */
  static NID_MN _L26;
  /* radioOutput_Pkg::mapCMDToRTM::_L33 */
  static kcg_bool _L33;
  /* radioOutput_Pkg::mapCMDToRTM::_L34 */
  static NID_MN _L34;
  /* radioOutput_Pkg::mapCMDToRTM::_L35 */
  static NID_RADIO _L35;
  /* radioOutput_Pkg::mapCMDToRTM::_L36 */
  static NID_MN _L36;
  /* radioOutput_Pkg::mapCMDToRTM::_L37 */
  static kcg_bool _L37;
  /* radioOutput_Pkg::mapCMDToRTM::_L38 */
  static NID_RADIO _L38;
  /* radioOutput_Pkg::mapCMDToRTM::_L39 */
  static kcg_int _L39;
  
  _L23 = cmdr_not_relevant_API_RadioCommunication_Pkg;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&_L20, mobileConnectionCMD);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(&_L21, mobileRegistrationCMD);
  /* 1 */ mapnewCMD_toCmd_radioOutput_Pkg(&_L20, &_L21, &outC->Context_1);
  _L22 = outC->Context_1.toRTMCMD;
  _L25 = outC->Context_1.outRadio;
  _L26 = outC->Context_1.outMN;
  _L24 = _L23 != _L22;
  _L33 = _L21.valid;
  _L34 = _L21.network_id;
  _L37 = _L20.valid;
  _L35 = _L20.nid_radio;
  _L39 = 0;
  /* 2 */ if (_L37) {
    _L38 = _L35;
  }
  else {
    _L38 = _L39;
  }
  /* 1 */ if (_L33) {
    _L36 = _L34;
  }
  else {
    _L36 = _L38;
  }
  _L18.valid = _L24;
  _L18.cmd = _L22;
  _L18.networkID = _L36;
  kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(&outC->toRTM, &_L18);
  outC->outRadio = _L25;
  outC->outMN = _L26;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapCMDToRTM_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

