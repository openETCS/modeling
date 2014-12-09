/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_registeringToTheRadioNetwork.h"

void MoRC_registeringToTheRadioNetwork_init(
  MoRC_outC_registeringToTheRadioNetwork *outC)
{
  outC->init = kcg_true;
  outC->_L108 = kcg_true;
  outC->noValidActualRadioNetworkID_available = kcg_true;
  outC->mobileSWStatus.settingUpConnectionHasFailed = kcg_true;
  outC->mobileSWStatus.registeredRadioNetworkID = 0;
  outC->mobileSWStatus.connectionStatus = MoRC_mswc_unregistered;
  outC->mobileSWStatus.mobileHW_available = kcg_true;
  outC->mobileSWStatus.valid = kcg_true;
  outC->mobileHWCmd.radioNetworkID = 0;
  outC->mobileHWCmd.action = MoRC_mhwa_nop;
  outC->mobileHWCmd.valid = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->actualRadioNetworkID.radioNetworkID = 0;
  outC->actualRadioNetworkID.valid = kcg_true;
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->orderTheRegistrationOfItsConnectedMobiles = kcg_true;
  MoRC_radioNetworkMobile_init(&outC->Context_1);
  MoRC_RisingEdge_init_digital(&outC->Context_4);
  MoRC_RisingEdge_init_digital(&outC->Context_2);
  MoRC_RisingEdge_init_digital(&outC->Context_3);
}


void MoRC_registeringToTheRadioNetwork_reset(
  MoRC_outC_registeringToTheRadioNetwork *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_radioNetworkMobile_reset(&outC->Context_1);
  /* 4 */ MoRC_RisingEdge_reset_digital(&outC->Context_4);
  /* 2 */ MoRC_RisingEdge_reset_digital(&outC->Context_2);
  /* 3 */ MoRC_RisingEdge_reset_digital(&outC->Context_3);
}

/* registeringToTheRadioNetwork */
void MoRC_registeringToTheRadioNetwork(
  /* registeringToTheRadioNetwork::atPowerUp */ kcg_bool atPowerUp,
  /* registeringToTheRadioNetwork::afterDriverEntryOfANewRadioNetworkID */ kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* registeringToTheRadioNetwork::etcs_level */ MoRC_M_LEVEL_Type etcs_level,
  /* registeringToTheRadioNetwork::registrationOrderedFromTrackside */ kcg_bool registrationOrderedFromTrackside,
  /* registeringToTheRadioNetwork::registrationOrderFromTracksideCancelled */ kcg_bool registrationOrderFromTracksideCancelled,
  /* registeringToTheRadioNetwork::atPowerOff */ kcg_bool atPowerOff,
  /* registeringToTheRadioNetwork::RadioNetworkID_memorized */ MoRC_validRadioNetworkID_Type *RadioNetworkID_memorized,
  /* registeringToTheRadioNetwork::RadioNetworkID_fromDriver */ MoRC_validRadioNetworkID_Type *RadioNetworkID_fromDriver,
  /* registeringToTheRadioNetwork::RadioNetworkID_fromTrackside */ MoRC_validRadioNetworkID_Type *RadioNetworkID_fromTrackside,
  /* registeringToTheRadioNetwork::triggerDecisionThatNoRadioNetworkIDAvailable */ kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* registeringToTheRadioNetwork::mobileHWStatus */ MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* registeringToTheRadioNetwork::mobileSWCmd */ MoRC_mobileSWCmd_Type *mobileSWCmd,
  /* registeringToTheRadioNetwork::RadioNetworkID_Default */ MoRC_validRadioNetworkID_Type *RadioNetworkID_Default,
  MoRC_outC_registeringToTheRadioNetwork *outC)
{
  MoRC_mobileSWCmd_Type tmp;
  /* registeringToTheRadioNetwork::_L32 */ kcg_bool _L32;
  /* registeringToTheRadioNetwork::_L44 */ kcg_bool _L44;
  /* registeringToTheRadioNetwork::_L76 */ MoRC_mobileSWStatus_Type _L76;
  /* registeringToTheRadioNetwork::_L89 */ kcg_bool _L89;
  /* registeringToTheRadioNetwork::_L95 */ kcg_bool _L95;
  /* registeringToTheRadioNetwork::_L99 */ kcg_bool _L99;
  /* registeringToTheRadioNetwork::_L103 */ kcg_bool _L103;
  /* registeringToTheRadioNetwork::_L120 */ kcg_bool _L120;
  
  /* 3 */ MoRC_RisingEdge_digital(atPowerUp, &outC->Context_3);
  if (outC->init) {
    _L32 = kcg_true;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &_L76,
      (MoRC_mobileSWStatus_Type *) &MoRC_cInvalidMobileSWStatus);
  }
  else {
    _L32 = outC->noValidActualRadioNetworkID_available;
    MoRC_kcg_copy_mobileSWStatus_Type(&_L76, &outC->mobileSWStatus);
  }
  _L89 = (*RadioNetworkID_Default).valid &&
    triggerDecisionThatNoRadioNetworkIDAvailable && _L32;
  _L32 = (*RadioNetworkID_fromDriver).valid &&
    afterDriverEntryOfANewRadioNetworkID;
  _L44 = (*RadioNetworkID_fromTrackside).valid &&
    registrationOrderedFromTrackside;
  if (((*RadioNetworkID_memorized).valid && outC->Context_3.RE_Output) ||
    _L32 || _L44 || _L89) {
    if (_L89) {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_Default);
    }
    else if (_L44) {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_fromTrackside);
    }
    else if (_L32) {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_fromDriver);
    }
    else {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_memorized);
    }
  }
  else if (outC->init) {
    MoRC_kcg_copy_validRadioNetworkID_Type(
      &outC->actualRadioNetworkID,
      (MoRC_validRadioNetworkID_Type *) &MoRC_cInvalidRadioNetworkID);
  }
  outC->noValidActualRadioNetworkID_available =
    !outC->actualRadioNetworkID.valid;
  outC->orderTheRegistrationOfItsConnectedMobiles = outC->Context_3.RE_Output ||
    (afterDriverEntryOfANewRadioNetworkID && (MoRC_ETCS_Level_2 == etcs_level ||
        etcs_level == MoRC_ETCS_Level_3)) ||
    (triggerDecisionThatNoRadioNetworkIDAvailable &&
      outC->noValidActualRadioNetworkID_available);
  /* 2 */ MoRC_RisingEdge_digital(atPowerOff, &outC->Context_2);
  outC->memorizeTheLastRadioNetworkID = outC->Context_2.RE_Output &&
    outC->actualRadioNetworkID.valid;
  _L89 = _L76.connectionStatus == MoRC_mswc_unregistered;
  _L95 = _L89 || (MoRC_mswc_unregistered != _L76.connectionStatus &&
      _L76.registeredRadioNetworkID !=
      outC->actualRadioNetworkID.radioNetworkID);
  _L99 = !(_L76.connectionStatus == MoRC_mswc_establishingSession ||
      _L76.connectionStatus == MoRC_mswc_sessionEstablished);
  _L103 = !(_L76.connectionStatus == MoRC_mswc_connecting ||
      _L76.connectionStatus == MoRC_mswc_connected);
  if (outC->init) {
    outC->init = kcg_false;
    outC->_L108 = kcg_false;
  }
  else {
    outC->_L108 = !registrationOrderFromTracksideCancelled &&
      (registrationOrderedFromTrackside || outC->_L108);
  }
  /* 4 */
  MoRC_RisingEdge_digital(
    (kcg_bool) (outC->_L108 && _L95 && _L99 && _L103),
    &outC->Context_4);
  _L120 = (_L76.valid && _L76.mobileHW_available &&
      ((registrationOrderedFromTrackside && _L95 && _L99 && _L103) ||
        outC->Context_4.RE_Output)) ||
    outC->orderTheRegistrationOfItsConnectedMobiles || (_L32 || _L44);
  if (_L120) {
    tmp.valid = _L120;
    tmp.action = MoRC_mswa_register;
    tmp.radioNetworkID = outC->actualRadioNetworkID.radioNetworkID;
  }
  else {
    MoRC_kcg_copy_mobileSWCmd_Type(&tmp, mobileSWCmd);
  }
  /* 1 */ MoRC_radioNetworkMobile(mobileHWStatus, &tmp, &outC->Context_1);
  MoRC_kcg_copy_mobileHWCmd_Type(
    &outC->mobileHWCmd,
    &outC->Context_1.mobileHWCmd);
  MoRC_kcg_copy_mobileSWStatus_Type(
    &outC->mobileSWStatus,
    &outC->Context_1.mobileSWStatus);
  outC->rejectOrderToContactRBC_or_RIU = _L89 || _L76.connectionStatus ==
    MoRC_mswc_registering;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_registeringToTheRadioNetwork.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

