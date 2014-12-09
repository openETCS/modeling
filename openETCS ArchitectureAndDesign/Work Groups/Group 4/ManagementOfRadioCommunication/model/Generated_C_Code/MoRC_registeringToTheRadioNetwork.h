/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_registeringToTheRadioNetwork_H_
#define _MoRC_registeringToTheRadioNetwork_H_

#include "kcg_types.h"
#include "MoRC_radioNetworkMobile.h"
#include "MoRC_RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* registeringToTheRadioNetwork::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* registeringToTheRadioNetwork::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  MoRC_validRadioNetworkID_Type /* registeringToTheRadioNetwork::actualRadioNetworkID */ actualRadioNetworkID;
  kcg_bool /* registeringToTheRadioNetwork::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  MoRC_mobileHWCmd_Type /* registeringToTheRadioNetwork::mobileHWCmd */ mobileHWCmd;
  MoRC_mobileSWStatus_Type /* registeringToTheRadioNetwork::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* registeringToTheRadioNetwork::noValidActualRadioNetworkID_available */ noValidActualRadioNetworkID_available;
  kcg_bool /* registeringToTheRadioNetwork::_L108 */ _L108;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_RisingEdge_digital /* 3 */ Context_3;
  MoRC_outC_RisingEdge_digital /* 2 */ Context_2;
  MoRC_outC_RisingEdge_digital /* 4 */ Context_4;
  MoRC_outC_radioNetworkMobile /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_registeringToTheRadioNetwork;

/* ===========  node initialization and cycle functions  =========== */
/* registeringToTheRadioNetwork */
extern void MoRC_registeringToTheRadioNetwork(
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
  MoRC_outC_registeringToTheRadioNetwork *outC);

extern void MoRC_registeringToTheRadioNetwork_reset(
  MoRC_outC_registeringToTheRadioNetwork *outC);
extern void MoRC_registeringToTheRadioNetwork_init(
  MoRC_outC_registeringToTheRadioNetwork *outC);

#endif /* _MoRC_registeringToTheRadioNetwork_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_registeringToTheRadioNetwork.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

