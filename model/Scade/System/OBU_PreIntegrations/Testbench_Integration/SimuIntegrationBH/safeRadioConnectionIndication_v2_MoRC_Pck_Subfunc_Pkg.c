/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  outC->connectionStatus_SM_reset_nxt = kcg_true;
  outC->connectionStatus_SM_reset_act = kcg_true;
  outC->connectionStatus_SM_state_nxt = SSM_st_NoConnection_connectionStatus_SM;
  outC->indication.valid = kcg_true;
  outC->indication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  /* 4 */ RisingEdge_init_digital(&outC->Context_4);
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
  /* 3 */ RisingEdge_init_digital(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  outC->init = kcg_true;
  /* 4 */ RisingEdge_reset_digital(&outC->Context_4);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
  /* 3 */ RisingEdge_reset_digital(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2 */
void safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionCmd */ mobileConnectionCmd_T_RCM_Types_Pkg *connectionCmd,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::reset */ kcg_bool reset,
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatusTimerInterval */ time_Type_MoRC_Pck connectionStatusTimerInterval,
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg *outC)
{
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM _8_connectionStatus_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool _7_connectionStatus_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM _6_connectionStatus_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::indicator_l */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _5_indicator_l;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::NoConnection::_L1 */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _L1_connectionStatus_SM_NoConnection;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM _4_connectionStatus_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool _3_connectionStatus_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM _2_connectionStatus_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::indicator_l */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _1_indicator_l;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::ConnectionLost_SetupFailed::_L1 */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _L1_connectionStatus_SM_ConnectionLost_SetupFailed;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM connectionStatus_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool connectionStatus_SM_reset_nxt;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_nxt;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::indicator_l */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator_l;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::ConnectionUp::_L1 */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _L1_connectionStatus_SM_ConnectionUp;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM _14_connectionStatus_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool _13_connectionStatus_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM _12_connectionStatus_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::NoConnection */
  static kcg_bool br_2_guard_connectionStatus_SM_NoConnection;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::NoConnection */
  static kcg_bool br_1_guard_connectionStatus_SM_NoConnection;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM _11_connectionStatus_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool _10_connectionStatus_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM _9_connectionStatus_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::ConnectionLost_SetupFailed */
  static kcg_bool br_2_guard_connectionStatus_SM_ConnectionLost_SetupFailed;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::ConnectionLost_SetupFailed */
  static kcg_bool br_1_guard_connectionStatus_SM_ConnectionLost_SetupFailed;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM connectionStatus_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool connectionStatus_SM_reset_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::ConnectionUp */
  static kcg_bool br_2_guard_connectionStatus_SM_ConnectionUp;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM::ConnectionUp */
  static kcg_bool br_1_guard_connectionStatus_SM_ConnectionUp;
  static kcg_bool noname;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM connectionStatus_SM_state_sel;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_ST_connectionStatus_SM _17_connectionStatus_SM_state_act;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool connectionStatus_SM_reset_sel;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static kcg_bool connectionStatus_SM_reset_prv;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM _16_connectionStatus_SM_fired_strong;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
  static SSM_TR_connectionStatus_SM _15_connectionStatus_SM_fired;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::indicator_l */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _18_indicator_l;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatusTimerExpired */
  static kcg_bool connectionStatusTimerExpired;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_1 */
  static kcg_bool condition_ID_1;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_2 */
  static kcg_bool condition_ID_2;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_3 */
  static kcg_bool condition_ID_3;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_4 */
  static kcg_bool condition_ID_4;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_5 */
  static kcg_bool condition_ID_5;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_6 */
  static kcg_bool condition_ID_6;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::condition_ID_7 */
  static kcg_bool condition_ID_7;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */
  static kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::safeRadioConnection_Setup */
  static kcg_bool safeRadioConnection_Setup;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::safeRadioConnection_Released */
  static kcg_bool safeRadioConnection_Released;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::safeRadioConnection_Lost */
  static kcg_bool safeRadioConnection_Lost;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::startOfMissionProcedureIsGoingOn */
  static kcg_bool startOfMissionProcedureIsGoingOn;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::trainfrontIsInsideAnAnnouncedRadioHole */
  static kcg_bool trainfrontIsInsideAnAnnouncedRadioHole;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::finalAttemptToSetupTheSafeRadioConnectionFailed */
  static kcg_bool finalAttemptToSetupTheSafeRadioConnectionFailed;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::requestsToSetupASafeRadioConnectionAreStopped */
  static kcg_bool requestsToSetupASafeRadioConnectionAreStopped;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::firstRequestToSetupASafeRadioConnection */
  static kcg_bool firstRequestToSetupASafeRadioConnection;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L1 */
  static safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg _L1;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L3 */
  static kcg_bool _L3;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L6 */
  static kcg_bool _L6;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L7 */
  static kcg_bool _L7;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L9 */
  static kcg_bool _L9;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L10 */
  static kcg_bool _L10;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L16 */
  static kcg_bool _L16;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L19 */
  static kcg_bool _L19;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L22 */
  static kcg_bool _L22;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L21 */
  static kcg_bool _L21;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L23 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L23;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L24 */
  static kcg_bool _L24;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L27 */
  static time_Type_MoRC_Pck _L27;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L77 */
  static kcg_bool _L77;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L76 */
  static kcg_bool _L76;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L75 */
  static kcg_bool _L75;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L74 */
  static kcg_bool _L74;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L73 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L73;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L72 */
  static kcg_bool _L72;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L71 */
  static kcg_bool _L71;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L70 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L70;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L69 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L69;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L68 */
  static kcg_bool _L68;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L67 */
  static kcg_bool _L67;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L66 */
  static kcg_bool _L66;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L65 */
  static mobileConnectionStatus_T_RCM_Types_Pkg _L65;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L64 */
  static kcg_bool _L64;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L63 */
  static kcg_bool _L63;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L62 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L62;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L61 */
  static kcg_bool _L61;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L60 */
  static kcg_bool _L60;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L81 */
  static kcg_bool _L81;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L82 */
  static kcg_bool _L82;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L83 */
  static kcg_bool _L83;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L84 */
  static kcg_bool _L84;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L85 */
  static kcg_bool _L85;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L86 */
  static kcg_bool _L86;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L87 */
  static kcg_bool _L87;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L88 */
  static kcg_bool _L88;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L89 */
  static kcg_bool _L89;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L90 */
  static kcg_bool _L90;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L91 */
  static kcg_bool _L91;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L92 */
  static mobileConnectionCmd_T_RCM_Types_Pkg _L92;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L93 */
  static kcg_bool _L93;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L94 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L94;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L97 */
  static kcg_bool _L97;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L98 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L98;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L99 */
  static kcg_bool _L99;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L100 */
  static kcg_bool _L100;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L101 */
  static kcg_bool _L101;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L103 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L103;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L104 */
  static mobileConnetionAction_T_RCM_Types_Pkg _L104;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L105 */
  static kcg_bool _L105;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L106 */
  static kcg_bool _L106;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L107 */
  static kcg_bool _L107;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L108 */
  static kcg_bool _L108;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L109 */
  static kcg_bool _L109;
  /* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::_L112 */
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg _L112;
  
  _L3 = kcg_true;
  /* init_connectionStatus_SM */ if (outC->init) {
    connectionStatus_SM_state_sel = SSM_st_NoConnection_connectionStatus_SM;
  }
  else {
    connectionStatus_SM_state_sel = outC->connectionStatus_SM_state_nxt;
  }
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(&_L62, connectionStatus);
  _L72 = _L62.valid;
  _L73 = _L62.status;
  _L69 = mcs_disconnected_RCM_Types_Pkg;
  _L64 = _L73 == _L69;
  _L68 = _L72 & _L64;
  /* 3 */ RisingEdge_digital(_L68, &outC->Context_3);
  _L66 = outC->Context_3.RE_Output;
  safeRadioConnection_Released = _L66;
  _L84 = safeRadioConnection_Released;
  condition_ID_5 = _L84;
  _L76 = _L62.connectionLost;
  _L75 = _L72 & _L76;
  safeRadioConnection_Lost = _L75;
  _L85 = safeRadioConnection_Lost;
  _L77 = _L62.settingUpConnectionHasFailed;
  _L67 = _L72 & _L77;
  requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason = _L67;
  _L86 = requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  _L16 = _L85 & _L86;
  condition_ID_6 = _L16;
  _L87 = safeRadioConnection_Lost;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L70, eventsAndPhases);
  _L60 = _L70.trainFrontInsideInAnAnnouncedRadioHole;
  trainfrontIsInsideAnAnnouncedRadioHole = _L60;
  _L88 = trainfrontIsInsideAnAnnouncedRadioHole;
  _L19 = _L87 & _L88;
  condition_ID_7 = _L19;
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      br_1_guard_connectionStatus_SM_ConnectionUp = condition_ID_5 |
        condition_ID_6 | condition_ID_7 | reset;
      break;
    
  }
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(&_L92, connectionCmd);
  _L93 = _L92.valid;
  _L94 = _L92.action;
  _L103 = mca_unexpectRadioHole_RCM_Types_Pkg;
  _L105 = _L94 == _L103;
  _L104 = mca_connect_RCM_Types_Pkg;
  _L106 = _L94 == _L104;
  _L107 = _L105 | _L106;
  _L108 = _L93 & _L107;
  firstRequestToSetupASafeRadioConnection = _L108;
  _L109 = firstRequestToSetupASafeRadioConnection;
  _L65 = mcs_connected_RCM_Types_Pkg;
  _L74 = _L73 == _L65;
  _L61 = _L72 & _L74;
  _L98 = mca_disconnect_RCM_Types_Pkg;
  _L97 = _L94 == _L98;
  _L99 = _L93 & _L97;
  _L100 = trainfrontIsInsideAnAnnouncedRadioHole;
  _L101 = _L61 | _L99 | _L100;
  requestsToSetupASafeRadioConnectionAreStopped = _L101;
  _L91 = requestsToSetupASafeRadioConnectionAreStopped;
  _L23 = currentTime;
  _L24 = kcg_false;
  _L27 = connectionStatusTimerInterval;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    _L109,
    _L91,
    _L23,
    _L24,
    _L27,
    &outC->Context_1);
  _L21 = outC->Context_1.expired;
  _L22 = outC->Context_1.started;
  connectionStatusTimerExpired = _L21;
  _L7 = connectionStatusTimerExpired;
  condition_ID_2 = _L7;
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionUp_connectionStatus_SM :
      br_2_guard_connectionStatus_SM_ConnectionUp = condition_ID_2;
      if (br_1_guard_connectionStatus_SM_ConnectionUp) {
        connectionStatus_SM_state_act = SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (br_2_guard_connectionStatus_SM_ConnectionUp) {
        connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act = SSM_st_ConnectionUp_connectionStatus_SM;
      }
      break;
    
  }
  _L71 = _L70.startOfMissionProcedureIsGoingOn;
  startOfMissionProcedureIsGoingOn = _L71;
  _L81 = startOfMissionProcedureIsGoingOn;
  _L9 = !_L81;
  _L82 = requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason;
  _L10 = _L9 & _L82;
  condition_ID_3 = _L10;
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      br_1_guard_connectionStatus_SM_ConnectionLost_SetupFailed =
        condition_ID_3 | reset;
      break;
    
  }
  /* 4 */ RisingEdge_digital(_L61, &outC->Context_4);
  _L63 = outC->Context_4.RE_Output;
  safeRadioConnection_Setup = _L63;
  _L83 = safeRadioConnection_Setup;
  condition_ID_4 = _L83;
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_NoConnection_connectionStatus_SM :
      br_1_guard_connectionStatus_SM_NoConnection = condition_ID_4;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      br_2_guard_connectionStatus_SM_ConnectionLost_SetupFailed =
        condition_ID_4;
      if (br_1_guard_connectionStatus_SM_ConnectionLost_SetupFailed) {
        _9_connectionStatus_SM_state_act =
          SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (br_2_guard_connectionStatus_SM_ConnectionLost_SetupFailed) {
        _9_connectionStatus_SM_state_act =
          SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else {
        _9_connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      break;
    
  }
  _L90 = startOfMissionProcedureIsGoingOn;
  finalAttemptToSetupTheSafeRadioConnectionFailed = _L67;
  _L89 = finalAttemptToSetupTheSafeRadioConnectionFailed;
  _L6 = _L90 & _L89;
  condition_ID_1 = _L6;
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_NoConnection_connectionStatus_SM :
      br_2_guard_connectionStatus_SM_NoConnection = condition_ID_1 |
        condition_ID_2;
      if (br_1_guard_connectionStatus_SM_NoConnection) {
        _12_connectionStatus_SM_state_act =
          SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if (br_2_guard_connectionStatus_SM_NoConnection) {
        _12_connectionStatus_SM_state_act =
          SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        _12_connectionStatus_SM_state_act =
          SSM_st_NoConnection_connectionStatus_SM;
      }
      _17_connectionStatus_SM_state_act = _12_connectionStatus_SM_state_act;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      _17_connectionStatus_SM_state_act = _9_connectionStatus_SM_state_act;
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      _17_connectionStatus_SM_state_act = connectionStatus_SM_state_act;
      break;
    
  }
  /* act_connectionStatus_SM */ switch (_17_connectionStatus_SM_state_act) {
    case SSM_st_NoConnection_connectionStatus_SM :
      _L1_connectionStatus_SM_NoConnection =
        srci_noConnection_RCM_Session_Types_Pkg;
      _5_indicator_l = _L1_connectionStatus_SM_NoConnection;
      _18_indicator_l = _5_indicator_l;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      _L1_connectionStatus_SM_ConnectionLost_SetupFailed =
        srci_connectionLost_setupFailed_RCM_Session_Types_Pkg;
      _1_indicator_l = _L1_connectionStatus_SM_ConnectionLost_SetupFailed;
      _18_indicator_l = _1_indicator_l;
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      _L1_connectionStatus_SM_ConnectionUp =
        srci_connectionUp_RCM_Session_Types_Pkg;
      indicator_l = _L1_connectionStatus_SM_ConnectionUp;
      _18_indicator_l = indicator_l;
      break;
    
  }
  _L1 = _18_indicator_l;
  _L112.valid = _L3;
  _L112.indicator = _L1;
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->indication,
    &_L112);
  /* init_connectionStatus_SM */ if (outC->init) {
    connectionStatus_SM_reset_sel = kcg_false;
  }
  else {
    connectionStatus_SM_reset_sel = outC->connectionStatus_SM_reset_nxt;
  }
  /* init_connectionStatus_SM */ if (outC->init) {
    connectionStatus_SM_reset_prv = kcg_false;
  }
  else {
    connectionStatus_SM_reset_prv = outC->connectionStatus_SM_reset_act;
  }
  /* sel_connectionStatus_SM */ switch (connectionStatus_SM_state_sel) {
    case SSM_st_NoConnection_connectionStatus_SM :
      if (br_1_guard_connectionStatus_SM_NoConnection) {
        _13_connectionStatus_SM_reset_act = kcg_true;
      }
      else {
        _13_connectionStatus_SM_reset_act =
          br_2_guard_connectionStatus_SM_NoConnection;
      }
      outC->connectionStatus_SM_reset_act = _13_connectionStatus_SM_reset_act;
      if (br_1_guard_connectionStatus_SM_NoConnection) {
        _14_connectionStatus_SM_fired_strong =
          SSM_TR_NoConnection_1_connectionStatus_SM;
      }
      else if (br_2_guard_connectionStatus_SM_NoConnection) {
        _14_connectionStatus_SM_fired_strong =
          SSM_TR_NoConnection_2_connectionStatus_SM;
      }
      else {
        _14_connectionStatus_SM_fired_strong =
          SSM_TR_no_trans_connectionStatus_SM;
      }
      _16_connectionStatus_SM_fired_strong =
        _14_connectionStatus_SM_fired_strong;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      if (br_1_guard_connectionStatus_SM_ConnectionLost_SetupFailed) {
        _10_connectionStatus_SM_reset_act = kcg_true;
      }
      else {
        _10_connectionStatus_SM_reset_act =
          br_2_guard_connectionStatus_SM_ConnectionLost_SetupFailed;
      }
      outC->connectionStatus_SM_reset_act = _10_connectionStatus_SM_reset_act;
      if (br_1_guard_connectionStatus_SM_ConnectionLost_SetupFailed) {
        _11_connectionStatus_SM_fired_strong =
          SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM;
      }
      else if (br_2_guard_connectionStatus_SM_ConnectionLost_SetupFailed) {
        _11_connectionStatus_SM_fired_strong =
          SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM;
      }
      else {
        _11_connectionStatus_SM_fired_strong =
          SSM_TR_no_trans_connectionStatus_SM;
      }
      _16_connectionStatus_SM_fired_strong =
        _11_connectionStatus_SM_fired_strong;
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      if (br_1_guard_connectionStatus_SM_ConnectionUp) {
        connectionStatus_SM_reset_act = kcg_true;
      }
      else {
        connectionStatus_SM_reset_act =
          br_2_guard_connectionStatus_SM_ConnectionUp;
      }
      outC->connectionStatus_SM_reset_act = connectionStatus_SM_reset_act;
      if (br_1_guard_connectionStatus_SM_ConnectionUp) {
        connectionStatus_SM_fired_strong =
          SSM_TR_ConnectionUp_1_connectionStatus_SM;
      }
      else if (br_2_guard_connectionStatus_SM_ConnectionUp) {
        connectionStatus_SM_fired_strong =
          SSM_TR_ConnectionUp_2_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_fired_strong = SSM_TR_no_trans_connectionStatus_SM;
      }
      _16_connectionStatus_SM_fired_strong = connectionStatus_SM_fired_strong;
      break;
    
  }
  /* act_connectionStatus_SM */ switch (_17_connectionStatus_SM_state_act) {
    case SSM_st_NoConnection_connectionStatus_SM :
      _6_connectionStatus_SM_state_nxt =
        SSM_st_NoConnection_connectionStatus_SM;
      outC->connectionStatus_SM_state_nxt = _6_connectionStatus_SM_state_nxt;
      _7_connectionStatus_SM_reset_nxt = kcg_false;
      outC->connectionStatus_SM_reset_nxt = _7_connectionStatus_SM_reset_nxt;
      _8_connectionStatus_SM_fired = _16_connectionStatus_SM_fired_strong;
      _15_connectionStatus_SM_fired = _8_connectionStatus_SM_fired;
      break;
    case SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      _2_connectionStatus_SM_state_nxt =
        SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      outC->connectionStatus_SM_state_nxt = _2_connectionStatus_SM_state_nxt;
      _3_connectionStatus_SM_reset_nxt = kcg_false;
      outC->connectionStatus_SM_reset_nxt = _3_connectionStatus_SM_reset_nxt;
      _4_connectionStatus_SM_fired = _16_connectionStatus_SM_fired_strong;
      _15_connectionStatus_SM_fired = _4_connectionStatus_SM_fired;
      break;
    case SSM_st_ConnectionUp_connectionStatus_SM :
      connectionStatus_SM_state_nxt = SSM_st_ConnectionUp_connectionStatus_SM;
      outC->connectionStatus_SM_state_nxt = connectionStatus_SM_state_nxt;
      connectionStatus_SM_reset_nxt = kcg_false;
      outC->connectionStatus_SM_reset_nxt = connectionStatus_SM_reset_nxt;
      connectionStatus_SM_fired = _16_connectionStatus_SM_fired_strong;
      _15_connectionStatus_SM_fired = connectionStatus_SM_fired;
      break;
    
  }
  noname = _L22;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

