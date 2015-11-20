/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void mapnewCMD_toCmd_init_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
  outC->nidRadio = 0;
  outC->nidMN = 0;
  outC->outMN = 0;
  outC->outRadio = 0;
  outC->toRTMCMD = cmdr_not_relevant_API_RadioCommunication_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mapnewCMD_toCmd_reset_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::mapnewCMD_toCmd */
void mapnewCMD_toCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC)
{
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */
  static NID_RADIO _3_nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */
  static NID_MN nidMN2;
  /* radioOutput_Pkg::mapnewCMD_toCmd::toRTMCMD */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _1_toRTMCMD;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L11 */
  static NID_MN _L11_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L10 */
  static NID_RADIO _L10_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L9 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L9_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L8 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L8_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L7 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L7_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L2 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L2_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L3 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L3_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L5 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L5_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::then::_L6 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L6_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */
  static NID_RADIO nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */
  static NID_MN nidMN;
  /* radioOutput_Pkg::mapnewCMD_toCmd::toRTMCMD */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg toRTMCMD;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::else::_L28 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L28_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::else::_L29 */
  static NID_MN _L29_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::else::_L30 */
  static NID_RADIO _L30_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::toRTMCMD */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _4_toRTMCMD;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */
  static NID_MN nidMN5;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */
  static NID_RADIO _6_nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L11 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L1115_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L10 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L1014_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L9 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L913_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L8 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L812_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L7 */
  static mobileRegistrationAction_T_RCM_Types_Pkg _L711_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L6 */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _L610_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L13 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L13_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L14 */
  static NID_MN _L14_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1::else::then::_L15 */
  static NID_RADIO _L15_IfBlock1;
  /* radioOutput_Pkg::mapnewCMD_toCmd::toRTMCMD */
  static cmdRadioUnit_T_API_RadioCommunication_Pkg _7_toRTMCMD;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */
  static NID_MN nidMN8;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */
  static NID_RADIO _9_nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */
  static NID_RADIO last_nidRadio;
  /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */
  static NID_MN last_nidMN;
  /* radioOutput_Pkg::mapnewCMD_toCmd::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* radioOutput_Pkg::mapnewCMD_toCmd::doConnection */
  static kcg_bool doConnection;
  /* radioOutput_Pkg::mapnewCMD_toCmd::doRegistration */
  static kcg_bool doRegistration;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L40 */
  static kcg_bool _L40;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L39 */
  static kcg_bool _L39;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L38 */
  static kcg_bool _L38;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L37 */
  static kcg_bool _L37;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L36 */
  static mobileRegistrationCmd_T_RCM_Types_Pkg _L36;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L35 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L35;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L41 */
  static NID_MN _L41;
  /* radioOutput_Pkg::mapnewCMD_toCmd::_L42 */
  static NID_RADIO _L42;
  
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&_L35, mobileConnectionCMD);
  _L37 = _L35.valid;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(&_L36, mobileRegistrationCMD);
  _L38 = _L36.valid;
  _L40 = !_L38;
  _L39 = _L37 & _L40;
  doConnection = _L39;
  IfBlock1_clock = doConnection;
  doRegistration = _L38;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &_L7_IfBlock1,
      mobileConnectionCMD);
    _L8_IfBlock1 = _L7_IfBlock1.action;
    _L3_IfBlock1 = cmdr_connection_request_API_RadioCommunication_Pkg;
    _L5_IfBlock1 = cmdr_disconnection_request_API_RadioCommunication_Pkg;
    _L6_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
    switch (_L8_IfBlock1) {
      case mca_connect_RCM_Types_Pkg :
        _L2_IfBlock1 = _L3_IfBlock1;
        break;
      case mca_disconnect_RCM_Types_Pkg :
        _L2_IfBlock1 = _L5_IfBlock1;
        break;
      
      default :
        _L2_IfBlock1 = _L6_IfBlock1;
    }
    _1_toRTMCMD = _L2_IfBlock1;
    outC->toRTMCMD = _1_toRTMCMD;
  }
  else {
    else_clock_IfBlock1 = doRegistration;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
        &_L1014_IfBlock1,
        mobileRegistrationCMD);
      _L711_IfBlock1 = _L1014_IfBlock1.action;
      _L610_IfBlock1 = cmdr_networkRegister_API_RadioCommunication_Pkg;
      _L913_IfBlock1 = cmdr_networkUnregister_API_RadioCommunication_Pkg;
      _L1115_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
      switch (_L711_IfBlock1) {
        case mra_register_RCM_Types_Pkg :
          _L812_IfBlock1 = _L610_IfBlock1;
          break;
        case mra_unregister_RCM_Types_Pkg :
          _L812_IfBlock1 = _L913_IfBlock1;
          break;
        
        default :
          _L812_IfBlock1 = _L1115_IfBlock1;
      }
      _7_toRTMCMD = _L812_IfBlock1;
      toRTMCMD = _7_toRTMCMD;
    }
    else {
      _L28_IfBlock1 = cmdr_not_relevant_API_RadioCommunication_Pkg;
      _4_toRTMCMD = _L28_IfBlock1;
      toRTMCMD = _4_toRTMCMD;
    }
    outC->toRTMCMD = toRTMCMD;
  }
  /* last_init_ck_nidMN */ if (outC->init) {
    last_nidMN = 0;
  }
  else {
    last_nidMN = outC->nidMN;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L11_IfBlock1 = last_nidMN;
    nidMN2 = _L11_IfBlock1;
    outC->nidMN = nidMN2;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
        &_L13_IfBlock1,
        mobileRegistrationCMD);
      _L14_IfBlock1 = _L13_IfBlock1.network_id;
      nidMN8 = _L14_IfBlock1;
      nidMN = nidMN8;
    }
    else {
      _L29_IfBlock1 = last_nidMN;
      nidMN5 = _L29_IfBlock1;
      nidMN = nidMN5;
    }
    outC->nidMN = nidMN;
  }
  /* last_init_ck_nidRadio */ if (outC->init) {
    last_nidRadio = 0;
  }
  else {
    last_nidRadio = outC->nidRadio;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
      &_L9_IfBlock1,
      mobileConnectionCMD);
    _L10_IfBlock1 = _L9_IfBlock1.nid_radio;
    _3_nidRadio = _L10_IfBlock1;
    outC->nidRadio = _3_nidRadio;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L15_IfBlock1 = last_nidRadio;
      _9_nidRadio = _L15_IfBlock1;
      nidRadio = _9_nidRadio;
    }
    else {
      _L30_IfBlock1 = last_nidRadio;
      _6_nidRadio = _L30_IfBlock1;
      nidRadio = _6_nidRadio;
    }
    outC->nidRadio = nidRadio;
  }
  _L42 = outC->nidRadio;
  outC->outRadio = _L42;
  _L41 = outC->nidMN;
  outC->outMN = _L41;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** mapnewCMD_toCmd_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

