/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2 */
void initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::eventsAndPhases */ obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::p42_SessionManagement */ p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::m38_initiationOfACommunicationSessionMsg */ m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfACommunicationSessionMsg,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::registrationStatus */ mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::connectionStatus */ mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionStatus */ sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::lastKnownRBC */ sessionStatus_T_RCM_Session_Types_Pkg *lastKnownRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio_shortNumberStoredOnboard */ NID_RADIO nid_radio_shortNumberStoredOnboard,
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::sessionEstablishCmd */ sessionCmd_T_RCM_Session_Types_Pkg *sessionEstablishCmd)
{
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool _5_rbc_valid;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg _4_origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO _3_nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC _2_nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L17 */
  static kcg_bool _L17_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L16 */
  static kcg_bool _L16_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L15 */
  static RBC_Id_T_Common_Types_Pkg _L15_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L14 */
  static NID_RADIO _L14_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L13 */
  static NID_RADIO _L13_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L12 */
  static kcg_bool _L12_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L11 */
  static NID_RADIO _L11_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L10 */
  static NID_RADIO _L10_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L9 */
  static NID_RBC _L9_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L8 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L8_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L7 */
  static NID_RBC _L7_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L5 */
  static NID_RBC _L5_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L4 */
  static NID_RBC _L4_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L2 */
  static NID_C _L2_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::then::_L1 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L1_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool rbc_valid;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else */
  static kcg_bool _28_else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool _25_rbc_valid;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg _24_origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO _23_nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC _22_nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c21;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L16 */
  static mobileConnectionContext_T_RCM_Types_Pkg _L1635_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L14 */
  static NID_RADIO _L1436_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L9 */
  static kcg_bool _L937_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L10 */
  static NID_C _L1038_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L11 */
  static NID_RBC _L1139_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L12 */
  static kcg_int _L1240_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L8 */
  static RBC_Id_T_Common_Types_Pkg _L841_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::then::_L1 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L142_IfBlock1;
  static kcg_int _26_noname;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool _20_rbc_valid;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg _19_origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO _18_nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC _17_nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c16;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::else::_L7 */
  static kcg_int _L743_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::else::_L6 */
  static RBC_Id_T_Common_Types_Pkg _L644_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L145_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c6;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC _7_nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO _8_nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg _9_origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool _10_rbc_valid;
  static sessionPhase_T_RCM_Session_Types_Pkg _27_noname;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L1 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L134_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L7 */
  static NID_RADIO _L733_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L6 */
  static NID_RBC _L632_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L5 */
  static NID_C _L531_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L4 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L430_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1::else::then::_L13 */
  static RBC_Id_T_Common_Types_Pkg _L1329_IfBlock1;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c11;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC _12_nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO _13_nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg _14_origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool _15_rbc_valid;
  static kcg_bool noname;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionViaP42fromOBU */
  static kcg_bool initiateSessionViaP42fromOBU;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionFromOBU */
  static kcg_bool initiateSessionFromOBU;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::initiateSessionFromRBC */
  static kcg_bool initiateSessionFromRBC;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_c */
  static NID_C nid_c50;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_rbc */
  static NID_RBC _49_nid_rbc;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::nid_radio */
  static NID_RADIO _48_nid_radio;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::origin */
  static RBC_Id_T_Common_Types_Pkg _47_origin;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::rbc_valid */
  static kcg_bool _46_rbc_valid;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L96 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L96;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L97 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L97;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L99 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L99;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L106 */
  static kcg_bool _L106;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L107 */
  static Q_RBC _L107;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L108 */
  static NID_C _L108;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L109 */
  static NID_RBC _L109;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L112 */
  static kcg_bool _L112;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L113 */
  static Q_RBC _L113;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L114 */
  static kcg_bool _L114;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L115 */
  static NID_C _L115;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L116 */
  static NID_RBC _L116;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L117 */
  static kcg_bool _L117;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L118 */
  static kcg_bool _L118;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L126 */
  static M_MODE _L126;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L129 */
  static kcg_bool _L129;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L130 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L130;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L131 */
  static kcg_bool _L131;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L132 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L132;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L133 */
  static kcg_bool _L133;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L134 */
  static kcg_bool _L134;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L135 */
  static RBC_Id_T_Common_Types_Pkg _L135;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L136 */
  static kcg_bool _L136;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L137 */
  static NID_C _L137;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L138 */
  static NID_RBC _L138;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L139 */
  static kcg_bool _L139;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L140 */
  static kcg_bool _L140;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L141 */
  static kcg_bool _L141;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L142 */
  static kcg_bool _L142;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L143 */
  static kcg_bool _L143;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L144 */
  static kcg_bool _L144;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L159 */
  static kcg_bool _L159;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L158 */
  static kcg_bool _L158;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L157 */
  static kcg_bool _L157;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L156 */
  static kcg_bool _L156;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L155 */
  static kcg_bool _L155;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L154 */
  static kcg_bool _L154;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L153 */
  static kcg_bool _L153;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L152 */
  static obuEventsAndPhases_T_RCM_Session_Types_Pkg _L152;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L185 */
  static kcg_bool _L185;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L184 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L184;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L183 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L183;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L182 */
  static kcg_bool _L182;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L181 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L181;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L187 */
  static kcg_bool _L187;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L188 */
  static kcg_bool _L188;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L194 */
  static kcg_bool _L194;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L193 */
  static kcg_bool _L193;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L192 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L192;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L190 */
  static kcg_bool _L190;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L189 */
  static mobileRegistrationStatus_T_RCM_Types_Pkg _L189;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L196 */
  static MsgSource_T_Common_Types_Pkg _L196;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L197 */
  static kcg_bool _L197;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L199 */
  static MsgSource_T_Common_Types_Pkg _L199;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L200 */
  static MsgSource_T_Common_Types_Pkg _L200;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L201 */
  static MsgSource_T_Common_Types_Pkg _L201;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L202 */
  static kcg_bool _L202;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L203 */
  static kcg_bool _L203;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L204 */
  static kcg_bool _L204;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L205 */
  static kcg_bool _L205;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L206 */
  static MsgSource_T_Common_Types_Pkg _L206;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L207 */
  static kcg_bool _L207;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L208 */
  static kcg_bool _L208;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L209 */
  static kcg_bool _L209;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L210 */
  static kcg_bool _L210;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L211 */
  static kcg_bool _L211;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L212 */
  static kcg_bool _L212;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L214 */
  static kcg_bool _L214;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L215 */
  static sessionCmd_T_RCM_Session_Types_Pkg _L215;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L216 */
  static kcg_bool _L216;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L217 */
  static kcg_bool _L217;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L218 */
  static kcg_bool _L218;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L219 */
  static p42_sessionManagement_T_RCM_MsgTypes_Pkg _L219;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L220 */
  static m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg _L220;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L222 */
  static Q_RBC _L222;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L223 */
  static NID_C _L223;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L224 */
  static NID_RADIO _L224;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L225 */
  static NID_RBC _L225;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L226 */
  static RBC_Id_T_Common_Types_Pkg _L226;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L227 */
  static kcg_bool _L227;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L228 */
  static kcg_bool _L228;
  /* MoRC_Pck::Subfunc_Pkg::initiateSession_v2::_L229 */
  static mobileRegistrationContext_T_RCM_Types_Pkg _L229;
  
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L96,
    p42_SessionManagement);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L97,
    m38_initiationOfACommunicationSessionMsg);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L99, sessionStatus);
  _L106 = _L96.valid;
  _L107 = _L96.q_rbc;
  _L108 = _L96.nid_c;
  _L109 = _L96.nid_RBC;
  _L113 = Q_RBC_Establish_communication_session;
  _L112 = _L107 == _L113;
  _L114 = _L99.valid;
  _L115 = _L99.nid_c;
  _L116 = _L99.nid_rbc;
  _L117 = _L108 == _L115;
  _L118 = _L109 == _L116;
  _L126 = mode;
  _L130 = _L99.phase;
  _L132 = sp_terminated_RCM_Session_Types_Pkg;
  _L131 = _L130 != _L132;
  _L129 = _L117 & _L118 & _L131;
  _L133 = !_L129;
  _L134 = _L97.valid;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L135, &_L97.origin);
  _L136 = _L135.valid;
  _L137 = _L135.nid_c;
  _L138 = _L135.rbc_id;
  _L139 = _L115 == _L137;
  _L140 = _L116 == _L138;
  _L141 = _L131 & _L139 & _L140;
  _L142 = !_L141;
  _L210 = /* validate_q_sleepsession_v2 */
    validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(&_L96, _L126);
  _L143 = _L210 & _L106 & _L112 & _L133 & _L114;
  _L144 = _L142 & _L136 & _L134;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(&_L152, eventsAndPhases);
  _L153 = _L152.driverHasManuallyChangedLevel_to_2_or_3;
  _L154 = prevSessionTerminatedDueToLossOfSafeRadioConnection;
  _L159 = _L152.startOfMissionProcedureCompleted_in_level_2_or_3;
  _L157 = _L152.atStartOfMission;
  _L156 = _L152.modeChangeHasToBeReportedToRBC;
  _L158 = _L152.trainFrontReachesEndOfAnnouncedRadioHole;
  _L155 = _L159 | _L157 | _L156 | _L153 | _L158 | _L154;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L184, sessionStatus);
  _L181 = _L184.phase;
  _L182 = _L184.valid;
  _L183 = sp_terminated_RCM_Session_Types_Pkg;
  _L185 = _L181 == _L183;
  _L187 = _L185 & _L182;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &_L229,
    registrationStatus);
  _L193 = _L229.valid;
  _L192 = _L229.status;
  _L189 = mrs_registered_RCM_Types_Pkg;
  _L190 = _L192 == _L189;
  _L194 = _L193 & _L190;
  _L188 = _L155 & _L187 & _L194;
  _L196 = _L96.msgSrc;
  _L199 = msrc_Euroradio_Common_Types_Pkg;
  _L197 = _L199 == _L196;
  _L200 = msrc_Eurobalise_Common_Types_Pkg;
  _L201 = msrc_RadioInfillUnit_Common_Types_Pkg;
  _L202 = _L200 == _L196;
  _L203 = _L201 == _L196;
  _L204 = _L203 | _L202 | _L197;
  _L205 = _L204 & _L143;
  _L206 = msrc_OBU_Common_Types_Pkg;
  _L207 = _L206 == _L196;
  _L214 = _L207 | _L204;
  _L208 = _L214 & _L143;
  initiateSessionViaP42fromOBU = _L208;
  _L209 = initiateSessionViaP42fromOBU;
  _L212 = _L209 & _L194;
  _L211 = _L188 | _L212;
  noname = _L205;
  initiateSessionFromOBU = _L211;
  IfBlock1_clock = initiateSessionFromOBU & (*p42_SessionManagement).valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _28_else_clock_IfBlock1 = initiateSessionFromOBU;
  }
  initiateSessionFromRBC = _L144;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L5_IfBlock1 = c_nid_RBC_contactLastKnownRBC__RCM_MsgTypes_Pkg;
    kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &_L1_IfBlock1,
      p42_SessionManagement);
    _L4_IfBlock1 = _L1_IfBlock1.nid_RBC;
    _L6_IfBlock1 = _L5_IfBlock1 == _L4_IfBlock1;
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(&_L8_IfBlock1, lastKnownRBC);
    _L17_IfBlock1 = _L8_IfBlock1.valid;
    _L18_IfBlock1 = kcg_true;
    /* 3 */ if (_L6_IfBlock1) {
      _L16_IfBlock1 = _L17_IfBlock1;
    }
    else {
      _L16_IfBlock1 = _L18_IfBlock1;
    }
    _5_rbc_valid = _L16_IfBlock1;
    _46_rbc_valid = _5_rbc_valid;
  }
  else {
    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
      kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
        &_L134_IfBlock1,
        lastKnownRBC);
      _L3_IfBlock1 = _L134_IfBlock1.valid;
      _15_rbc_valid = _L3_IfBlock1;
      rbc_valid = _15_rbc_valid;
    }
    else {
      else_clock_IfBlock1 = initiateSessionFromRBC &
        (*m38_initiationOfACommunicationSessionMsg).valid;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
          &_L142_IfBlock1,
          m38_initiationOfACommunicationSessionMsg);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &_L841_IfBlock1,
          &_L142_IfBlock1.origin);
        _L937_IfBlock1 = _L841_IfBlock1.valid;
        _25_rbc_valid = _L937_IfBlock1;
        _10_rbc_valid = _25_rbc_valid;
      }
      else {
        _L145_IfBlock1 = kcg_false;
        _20_rbc_valid = _L145_IfBlock1;
        _10_rbc_valid = _20_rbc_valid;
      }
      rbc_valid = _10_rbc_valid;
    }
    _46_rbc_valid = rbc_valid;
  }
  _L228 = _46_rbc_valid;
  _L217 = initiateSessionFromRBC;
  _L216 = initiateSessionFromOBU;
  _L218 = _L217 | _L216;
  _L227 = _L228 & _L218;
  _L222 = Q_RBC_Establish_communication_session;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = _L1_IfBlock1.nid_c;
    nid_c1 = _L2_IfBlock1;
    nid_c50 = nid_c1;
  }
  else {
    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
      _L531_IfBlock1 = _L134_IfBlock1.nid_c;
      nid_c11 = _L531_IfBlock1;
      nid_c = nid_c11;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L1038_IfBlock1 = _L841_IfBlock1.nid_c;
        nid_c21 = _L1038_IfBlock1;
        nid_c6 = nid_c21;
      }
      else {
        _L743_IfBlock1 = 0;
        nid_c16 = _L743_IfBlock1;
        nid_c6 = nid_c16;
      }
      nid_c = nid_c6;
    }
    nid_c50 = nid_c;
  }
  _L223 = nid_c50;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L9_IfBlock1 = _L8_IfBlock1.nid_rbc;
    /* 1 */ if (_L6_IfBlock1) {
      _L7_IfBlock1 = _L9_IfBlock1;
    }
    else {
      _L7_IfBlock1 = _L4_IfBlock1;
    }
    _2_nid_rbc = _L7_IfBlock1;
    _49_nid_rbc = _2_nid_rbc;
  }
  else {
    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
      _L632_IfBlock1 = _L134_IfBlock1.nid_rbc;
      _12_nid_rbc = _L632_IfBlock1;
      nid_rbc = _12_nid_rbc;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L1139_IfBlock1 = _L841_IfBlock1.rbc_id;
        _22_nid_rbc = _L1139_IfBlock1;
        _7_nid_rbc = _22_nid_rbc;
      }
      else {
        _17_nid_rbc = _L743_IfBlock1;
        _7_nid_rbc = _17_nid_rbc;
      }
      nid_rbc = _7_nid_rbc;
    }
    _49_nid_rbc = nid_rbc;
  }
  _L225 = _49_nid_rbc;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L11_IfBlock1 = cNID_RADIO_useTheShortNumberStoredOnboard_RCM_MsgTypes_Pkg;
    _L10_IfBlock1 = _L1_IfBlock1.nid_radio;
    _L12_IfBlock1 = _L11_IfBlock1 == _L10_IfBlock1;
    _L14_IfBlock1 = nid_radio_shortNumberStoredOnboard;
    /* 2 */ if (_L12_IfBlock1) {
      _L13_IfBlock1 = _L14_IfBlock1;
    }
    else {
      _L13_IfBlock1 = _L10_IfBlock1;
    }
    _3_nid_radio = _L13_IfBlock1;
    _48_nid_radio = _3_nid_radio;
  }
  else {
    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
      _L733_IfBlock1 = _L134_IfBlock1.nid_radio;
      _13_nid_radio = _L733_IfBlock1;
      nid_radio = _13_nid_radio;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
          &_L1635_IfBlock1,
          connectionStatus);
        _L1436_IfBlock1 = _L1635_IfBlock1.nid_radio;
        _23_nid_radio = _L1436_IfBlock1;
        _8_nid_radio = _23_nid_radio;
      }
      else {
        _18_nid_radio = _L743_IfBlock1;
        _8_nid_radio = _18_nid_radio;
      }
      nid_radio = _8_nid_radio;
    }
    _48_nid_radio = nid_radio;
  }
  _L224 = _48_nid_radio;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L15_IfBlock1, &_L1_IfBlock1.origin);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&_4_origin, &_L15_IfBlock1);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&_47_origin, &_4_origin);
  }
  else {
    /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
      kcg_copy_RBC_Id_T_Common_Types_Pkg(
        &_L1329_IfBlock1,
        (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
      kcg_copy_RBC_Id_T_Common_Types_Pkg(&_14_origin, &_L1329_IfBlock1);
      kcg_copy_RBC_Id_T_Common_Types_Pkg(&origin, &_14_origin);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_RBC_Id_T_Common_Types_Pkg(&_24_origin, &_L841_IfBlock1);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(&_9_origin, &_24_origin);
      }
      else {
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &_L644_IfBlock1,
          (RBC_Id_T_Common_Types_Pkg *) &cNoOrigin_MoRC_Pck_Subfunc_Pkg);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(&_19_origin, &_L644_IfBlock1);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(&_9_origin, &_19_origin);
      }
      kcg_copy_RBC_Id_T_Common_Types_Pkg(&origin, &_9_origin);
    }
    kcg_copy_RBC_Id_T_Common_Types_Pkg(&_47_origin, &origin);
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L226, &_47_origin);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L220,
    m38_initiationOfACommunicationSessionMsg);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &_L219,
    p42_SessionManagement);
  _L215.valid = _L227;
  _L215.initiatedByOBU = _L216;
  _L215.initiatedByRBC = _L217;
  _L215.q_rbc = _L222;
  _L215.nid_c = _L223;
  _L215.nid_rbc = _L225;
  _L215.nid_radio = _L224;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L215.origin, &_L226);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &_L215.m38,
    &_L220);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(&_L215.p42, &_L219);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(sessionEstablishCmd, &_L215);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_28_else_clock_IfBlock1) {
    _L430_IfBlock1 = _L134_IfBlock1.phase;
    _27_noname = _L430_IfBlock1;
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    _L1240_IfBlock1 = _L841_IfBlock1.device_id;
    _26_noname = _L1240_IfBlock1;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** initiateSession_v2_MoRC_Pck_Subfunc_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

