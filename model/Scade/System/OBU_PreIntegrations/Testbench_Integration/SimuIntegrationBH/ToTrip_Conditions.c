/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToTrip_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToTrip_init_Conditions(outC_ToTrip_Conditions *outC)
{
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
  outC->Condition2Trip = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToTrip_reset_Conditions(outC_ToTrip_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToTrip */
void ToTrip_Conditions(
  /* Conditions::ToTrip::BG_In_Expected_List_In_SH */ kcg_bool BG_In_Expected_List_In_SH,
  /* Conditions::ToTrip::BG_In_Expected_List_In_SR */ kcg_bool BG_In_Expected_List_In_SR,
  /* Conditions::ToTrip::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToTrip::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Conditions::ToTrip::Driver_Select_SH */ kcg_bool Driver_Select_SH,
  /* Conditions::ToTrip::Emergency_Stop_Message_Received */ kcg_bool Emergency_Stop_Message_Received,
  /* Conditions::ToTrip::Error_BG_System_Version */ kcg_bool Error_BG_System_Version,
  /* Conditions::ToTrip::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool Estimated_Front_End_Overpass_SR_Distance,
  /* Conditions::ToTrip::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Conditions::ToTrip::Interface_To_National_System */ kcg_bool Interface_To_National_System,
  /* Conditions::ToTrip::Linked_BG_Pased_In_Wrong_Direction */ kcg_bool Linked_BG_Pased_In_Wrong_Direction,
  /* Conditions::ToTrip::Linking_Reaction_To_Trip */ kcg_bool Linking_Reaction_To_Trip,
  /* Conditions::ToTrip::List_BG_Related_To_SR_Empty */ kcg_bool List_BG_Related_To_SR_Empty,
  /* Conditions::ToTrip::MA_Available */ kcg_bool MA_Available,
  /* Conditions::ToTrip::National_Trip_Order */ kcg_bool National_Trip_Order,
  /* Conditions::ToTrip::Override_Function_Active */ kcg_bool Override_Function_Active,
  /* Conditions::ToTrip::Override_Function_Former_Active */ kcg_bool Override_Function_Former_Active,
  /* Conditions::ToTrip::Stop_If_In_Shunting */ kcg_bool Stop_If_In_Shunting,
  /* Conditions::ToTrip::Stop_If_In_SR */ kcg_bool Stop_If_In_SR,
  /* Conditions::ToTrip::T_NVCONTACT_Overpass */ kcg_bool T_NVCONTACT_Overpass,
  /* Conditions::ToTrip::Train_Overpass_EOA_Antenna */ kcg_bool Train_Overpass_EOA_Antenna,
  /* Conditions::ToTrip::Train_Overpass_EOA_Front_End */ kcg_bool Train_Overpass_EOA_Front_End,
  /* Conditions::ToTrip::Train_Overpass_Former_EOA_Antenna */ kcg_bool Train_Overpass_Former_EOA_Antenna,
  /* Conditions::ToTrip::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToTrip::TripModeFromLevel */ kcg_bool TripModeFromLevel,
  outC_ToTrip_Conditions *outC)
{
  /* Conditions::ToTrip::Current_Level */
  static M_LEVEL last_Current_Level;
  /* Conditions::ToTrip::Condition12 */
  static kcg_bool Condition12;
  /* Conditions::ToTrip::Condition16 */
  static kcg_bool Condition16;
  /* Conditions::ToTrip::Condition18 */
  static kcg_bool Condition18;
  /* Conditions::ToTrip::Condition17 */
  static kcg_bool Condition17;
  /* Conditions::ToTrip::Condition20 */
  static kcg_bool Condition20;
  /* Conditions::ToTrip::Condition35 */
  static kcg_bool Condition35;
  /* Conditions::ToTrip::Condition36 */
  static kcg_bool Condition36;
  /* Conditions::ToTrip::Condition38 */
  static kcg_bool Condition38;
  /* Conditions::ToTrip::Condition39 */
  static kcg_bool Condition39;
  /* Conditions::ToTrip::Condition41 */
  static kcg_bool Condition41;
  /* Conditions::ToTrip::Condition42 */
  static kcg_bool Condition42;
  /* Conditions::ToTrip::Condition43 */
  static kcg_bool Condition43;
  /* Conditions::ToTrip::Condition49 */
  static kcg_bool Condition49;
  /* Conditions::ToTrip::Condition52 */
  static kcg_bool Condition52;
  /* Conditions::ToTrip::Condition54 */
  static kcg_bool Condition54;
  /* Conditions::ToTrip::Condition65 */
  static kcg_bool Condition65;
  /* Conditions::ToTrip::Condition66 */
  static kcg_bool Condition66;
  /* Conditions::ToTrip::Condition67 */
  static kcg_bool Condition67;
  /* Conditions::ToTrip::Condition69 */
  static kcg_bool Condition69;
  /* Conditions::ToTrip::Mode_FS_LS_OS */
  static kcg_bool Mode_FS_LS_OS;
  /* Conditions::ToTrip::Mode_SR */
  static kcg_bool Mode_SR;
  /* Conditions::ToTrip::Mode_SN */
  static kcg_bool Mode_SN;
  /* Conditions::ToTrip::Mode_SH */
  static kcg_bool Mode_SH;
  /* Conditions::ToTrip::Mode_UN */
  static kcg_bool Mode_UN;
  /* Conditions::ToTrip::Level_L1_L2_L3 */
  static kcg_bool Level_L1_L2_L3;
  /* Conditions::ToTrip::Level_L2_L3 */
  static kcg_bool Level_L2_L3;
  /* Conditions::ToTrip::Level_LNTC */
  static kcg_bool Level_LNTC;
  /* Conditions::ToTrip::Level_prev_L0_LNTC */
  static kcg_bool Level_prev_L0_LNTC;
  /* Conditions::ToTrip::Level_prev_L1 */
  static kcg_bool Level_prev_L1;
  /* Conditions::ToTrip::Level_L1 */
  static kcg_bool Level_L1;
  /* Conditions::ToTrip::_L17 */
  static kcg_bool _L17;
  /* Conditions::ToTrip::_L21 */
  static kcg_bool _L21;
  /* Conditions::ToTrip::_L22 */
  static kcg_bool _L22;
  /* Conditions::ToTrip::_L28 */
  static kcg_bool _L28;
  /* Conditions::ToTrip::_L29 */
  static kcg_bool _L29;
  /* Conditions::ToTrip::_L30 */
  static kcg_bool _L30;
  /* Conditions::ToTrip::_L31 */
  static kcg_bool _L31;
  /* Conditions::ToTrip::_L32 */
  static kcg_bool _L32;
  /* Conditions::ToTrip::_L33 */
  static kcg_bool _L33;
  /* Conditions::ToTrip::_L34 */
  static kcg_bool _L34;
  /* Conditions::ToTrip::_L35 */
  static kcg_bool _L35;
  /* Conditions::ToTrip::_L37 */
  static kcg_bool _L37;
  /* Conditions::ToTrip::_L38 */
  static kcg_bool _L38;
  /* Conditions::ToTrip::_L39 */
  static kcg_bool _L39;
  /* Conditions::ToTrip::_L40 */
  static kcg_bool _L40;
  /* Conditions::ToTrip::_L41 */
  static kcg_bool _L41;
  /* Conditions::ToTrip::_L42 */
  static kcg_bool _L42;
  /* Conditions::ToTrip::_L43 */
  static kcg_bool _L43;
  /* Conditions::ToTrip::_L44 */
  static kcg_bool _L44;
  /* Conditions::ToTrip::_L45 */
  static kcg_bool _L45;
  /* Conditions::ToTrip::_L46 */
  static kcg_bool _L46;
  /* Conditions::ToTrip::_L47 */
  static kcg_bool _L47;
  /* Conditions::ToTrip::_L48 */
  static kcg_bool _L48;
  /* Conditions::ToTrip::_L49 */
  static kcg_bool _L49;
  /* Conditions::ToTrip::_L50 */
  static kcg_bool _L50;
  /* Conditions::ToTrip::_L51 */
  static kcg_bool _L51;
  /* Conditions::ToTrip::_L55 */
  static kcg_bool _L55;
  /* Conditions::ToTrip::_L62 */
  static kcg_bool _L62;
  /* Conditions::ToTrip::_L63 */
  static kcg_bool _L63;
  /* Conditions::ToTrip::_L64 */
  static kcg_bool _L64;
  /* Conditions::ToTrip::_L65 */
  static kcg_bool _L65;
  /* Conditions::ToTrip::_L76 */
  static kcg_bool _L76;
  /* Conditions::ToTrip::_L79 */
  static kcg_bool _L79;
  /* Conditions::ToTrip::_L80 */
  static kcg_bool _L80;
  /* Conditions::ToTrip::_L82 */
  static kcg_bool _L82;
  /* Conditions::ToTrip::_L83 */
  static kcg_bool _L83;
  /* Conditions::ToTrip::_L84 */
  static kcg_bool _L84;
  /* Conditions::ToTrip::_L85 */
  static kcg_bool _L85;
  /* Conditions::ToTrip::_L86 */
  static kcg_bool _L86;
  /* Conditions::ToTrip::_L87 */
  static kcg_bool _L87;
  /* Conditions::ToTrip::_L88 */
  static kcg_bool _L88;
  /* Conditions::ToTrip::_L89 */
  static kcg_bool _L89;
  /* Conditions::ToTrip::_L90 */
  static kcg_bool _L90;
  /* Conditions::ToTrip::_L91 */
  static kcg_bool _L91;
  /* Conditions::ToTrip::_L92 */
  static kcg_bool _L92;
  /* Conditions::ToTrip::_L93 */
  static kcg_bool _L93;
  /* Conditions::ToTrip::_L94 */
  static kcg_bool _L94;
  /* Conditions::ToTrip::_L95 */
  static kcg_bool _L95;
  /* Conditions::ToTrip::_L96 */
  static kcg_bool _L96;
  /* Conditions::ToTrip::_L97 */
  static kcg_bool _L97;
  /* Conditions::ToTrip::_L98 */
  static kcg_bool _L98;
  /* Conditions::ToTrip::_L102 */
  static kcg_bool _L102;
  /* Conditions::ToTrip::_L101 */
  static kcg_bool _L101;
  /* Conditions::ToTrip::_L100 */
  static kcg_bool _L100;
  /* Conditions::ToTrip::_L99 */
  static kcg_bool _L99;
  /* Conditions::ToTrip::_L104 */
  static kcg_bool _L104;
  /* Conditions::ToTrip::_L105 */
  static kcg_bool _L105;
  /* Conditions::ToTrip::_L110 */
  static kcg_bool _L110;
  /* Conditions::ToTrip::_L109 */
  static kcg_bool _L109;
  /* Conditions::ToTrip::_L108 */
  static kcg_bool _L108;
  /* Conditions::ToTrip::_L106 */
  static kcg_bool _L106;
  /* Conditions::ToTrip::_L111 */
  static kcg_bool _L111;
  /* Conditions::ToTrip::_L112 */
  static kcg_bool _L112;
  /* Conditions::ToTrip::_L113 */
  static kcg_bool _L113;
  /* Conditions::ToTrip::_L114 */
  static kcg_bool _L114;
  /* Conditions::ToTrip::_L115 */
  static kcg_bool _L115;
  /* Conditions::ToTrip::_L122 */
  static kcg_bool _L122;
  /* Conditions::ToTrip::_L124 */
  static kcg_bool _L124;
  /* Conditions::ToTrip::_L125 */
  static kcg_bool _L125;
  /* Conditions::ToTrip::_L126 */
  static kcg_bool _L126;
  /* Conditions::ToTrip::_L127 */
  static kcg_bool _L127;
  /* Conditions::ToTrip::_L130 */
  static kcg_bool _L130;
  /* Conditions::ToTrip::_L128 */
  static kcg_bool _L128;
  /* Conditions::ToTrip::_L138 */
  static kcg_bool _L138;
  /* Conditions::ToTrip::_L139 */
  static kcg_bool _L139;
  /* Conditions::ToTrip::_L140 */
  static kcg_bool _L140;
  /* Conditions::ToTrip::_L141 */
  static kcg_bool _L141;
  /* Conditions::ToTrip::_L142 */
  static kcg_bool _L142;
  /* Conditions::ToTrip::_L149 */
  static kcg_bool _L149;
  /* Conditions::ToTrip::_L152 */
  static kcg_bool _L152;
  /* Conditions::ToTrip::_L156 */
  static M_LEVEL _L156;
  /* Conditions::ToTrip::_L164 */
  static kcg_bool _L164;
  /* Conditions::ToTrip::_L166 */
  static kcg_bool _L166;
  /* Conditions::ToTrip::_L177 */
  static kcg_bool _L177;
  /* Conditions::ToTrip::_L179 */
  static kcg_bool _L179;
  /* Conditions::ToTrip::_L183 */
  static kcg_bool _L183;
  /* Conditions::ToTrip::_L184 */
  static kcg_bool _L184;
  /* Conditions::ToTrip::_L185 */
  static kcg_bool _L185;
  /* Conditions::ToTrip::_L186 */
  static kcg_bool _L186;
  /* Conditions::ToTrip::_L187 */
  static kcg_bool _L187;
  /* Conditions::ToTrip::_L188 */
  static kcg_bool _L188;
  /* Conditions::ToTrip::_L189 */
  static kcg_bool _L189;
  /* Conditions::ToTrip::_L190 */
  static kcg_bool _L190;
  /* Conditions::ToTrip::_L193 */
  static kcg_bool _L193;
  /* Conditions::ToTrip::_L194 */
  static kcg_bool _L194;
  /* Conditions::ToTrip::_L195 */
  static kcg_bool _L195;
  /* Conditions::ToTrip::_L196 */
  static kcg_bool _L196;
  /* Conditions::ToTrip::_L197 */
  static kcg_bool _L197;
  /* Conditions::ToTrip::_L198 */
  static kcg_bool _L198;
  /* Conditions::ToTrip::_L199 */
  static kcg_bool _L199;
  /* Conditions::ToTrip::_L200 */
  static kcg_bool _L200;
  /* Conditions::ToTrip::_L201 */
  static kcg_bool _L201;
  /* Conditions::ToTrip::_L202 */
  static kcg_bool _L202;
  /* Conditions::ToTrip::_L203 */
  static kcg_bool _L203;
  /* Conditions::ToTrip::_L204 */
  static kcg_bool _L204;
  /* Conditions::ToTrip::_L205 */
  static kcg_bool _L205;
  /* Conditions::ToTrip::_L206 */
  static kcg_bool _L206;
  /* Conditions::ToTrip::_L207 */
  static kcg_bool _L207;
  /* Conditions::ToTrip::_L208 */
  static kcg_bool _L208;
  /* Conditions::ToTrip::_L209 */
  static kcg_bool _L209;
  /* Conditions::ToTrip::_L210 */
  static kcg_bool _L210;
  /* Conditions::ToTrip::_L211 */
  static kcg_bool _L211;
  /* Conditions::ToTrip::_L212 */
  static kcg_bool _L212;
  /* Conditions::ToTrip::_L213 */
  static kcg_bool _L213;
  /* Conditions::ToTrip::_L214 */
  static kcg_bool _L214;
  /* Conditions::ToTrip::_L215 */
  static kcg_bool _L215;
  /* Conditions::ToTrip::_L216 */
  static kcg_bool _L216;
  /* Conditions::ToTrip::_L219 */
  static kcg_bool _L219;
  /* Conditions::ToTrip::_L218 */
  static kcg_bool _L218;
  /* Conditions::ToTrip::_L217 */
  static kcg_bool _L217;
  /* Conditions::ToTrip::_L220 */
  static kcg_bool _L220;
  /* Conditions::ToTrip::_L221 */
  static kcg_bool _L221;
  /* Conditions::ToTrip::_L222 */
  static kcg_bool _L222;
  /* Conditions::ToTrip::_L223 */
  static kcg_bool _L223;
  /* Conditions::ToTrip::_L225 */
  static kcg_bool _L225;
  /* Conditions::ToTrip::_L226 */
  static kcg_bool _L226;
  /* Conditions::ToTrip::_L227 */
  static kcg_bool _L227;
  /* Conditions::ToTrip::_L231 */
  static kcg_bool _L231;
  /* Conditions::ToTrip::_L230 */
  static kcg_bool _L230;
  /* Conditions::ToTrip::_L241 */
  static kcg_bool _L241;
  /* Conditions::ToTrip::_L242 */
  static kcg_bool _L242;
  /* Conditions::ToTrip::_L243 */
  static kcg_bool _L243;
  /* Conditions::ToTrip::_L244 */
  static kcg_bool _L244;
  /* Conditions::ToTrip::_L245 */
  static M_LEVEL _L245;
  /* Conditions::ToTrip::_L246 */
  static kcg_bool _L246;
  /* Conditions::ToTrip::_L247 */
  static kcg_bool _L247;
  /* Conditions::ToTrip::_L248 */
  static kcg_bool _L248;
  /* Conditions::ToTrip::_L249 */
  static kcg_bool _L249;
  /* Conditions::ToTrip::_L251 */
  static kcg_bool _L251;
  /* Conditions::ToTrip::_L252 */
  static kcg_bool _L252;
  /* Conditions::ToTrip::_L253 */
  static kcg_bool _L253;
  /* Conditions::ToTrip::_L255 */
  static kcg_bool _L255;
  /* Conditions::ToTrip::_L257 */
  static kcg_bool _L257;
  
  _L17 = Train_Overpass_EOA_Antenna;
  _L225 = Current_Level == M_LEVEL_Level_1;
  Level_L1 = _L225;
  _L241 = Level_L1;
  _L183 = (Current_Mode == FS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
      LS_Level_And_Mode_Types_Pkg) | (Current_Mode ==
      OS_Level_And_Mode_Types_Pkg);
  Mode_FS_LS_OS = _L183;
  _L184 = Mode_FS_LS_OS;
  _L21 = _L17 & _L241 & _L184;
  Condition12 = _L21;
  _L22 = Condition12;
  _L28 = Train_Overpass_EOA_Front_End;
  _L226 = (Current_Level == M_LEVEL_Level_2) | (Current_Level ==
      M_LEVEL_Level_3);
  Level_L2_L3 = _L226;
  _L242 = Level_L2_L3;
  _L185 = Mode_FS_LS_OS;
  _L29 = _L28 & _L242 & _L185;
  Condition16 = _L29;
  _L30 = Condition16;
  _L31 = Linking_Reaction_To_Trip;
  _L186 = Mode_FS_LS_OS;
  _L149 = _L31 & _L186;
  Condition17 = _L149;
  _L32 = Condition17;
  _L33 = Override_Function_Active;
  _L34 = Trip_Order_Given_By_Balise;
  _L45 = !_L33;
  _L202 = Mode_FS_LS_OS;
  _L187 = Current_Mode == SR_Level_And_Mode_Types_Pkg;
  Mode_SR = _L187;
  _L203 = Mode_SR;
  _L201 = _L202 | _L203;
  _L35 = _L45 & _L34 & _L201;
  Condition18 = _L35;
  _L37 = Condition18;
  _L38 = Emergency_Stop_Message_Received;
  _L189 = Current_Mode == SH_Level_And_Mode_Types_Pkg;
  Mode_SH = _L189;
  _L199 = Mode_SH;
  _L200 = !_L199;
  _L152 = _L38 & _L200;
  Condition20 = _L152;
  _L39 = Condition20;
  _L41 = Driver_Select_SH;
  _L42 = Interface_To_National_System;
  _L43 = National_Trip_Order;
  _L188 = Current_Mode == SN_Level_And_Mode_Types_Pkg;
  Mode_SN = _L188;
  _L198 = Mode_SN;
  _L40 = _L41 & _L42 & _L43 & _L198;
  Condition35 = _L40;
  _L44 = Condition35;
  _L48 = BG_In_Expected_List_In_SR;
  _L49 = !_L48;
  _L47 = Override_Function_Active;
  _L50 = !_L47;
  _L197 = Mode_SR;
  _L46 = _L49 & _L50 & _L197;
  Condition36 = _L46;
  _L51 = Condition36;
  /* last_init_ck_Current_Level */ if (outC->init) {
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  _L156 = last_Current_Level;
  _L245 = Current_Level;
  _L55 = _L156 == _L245;
  _L62 = Interface_To_National_System;
  _L63 = National_Trip_Order;
  _L227 = Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  Level_LNTC = _L227;
  _L243 = Level_LNTC;
  _L244 = !_L243;
  _L196 = Mode_SN;
  _L64 = _L244 & _L55 & _L62 & _L63 & _L196;
  Condition38 = _L64;
  _L65 = Condition38;
  _L223 = (Current_Level == M_LEVEL_Level_1) | (Current_Level ==
      M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
  Level_L1_L2_L3 = _L223;
  _L246 = Level_L1_L2_L3;
  _L230 = (last_Current_Level == M_LEVEL_Level_0) | (last_Current_Level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  Level_prev_L0_LNTC = _L230;
  _L247 = Level_prev_L0_LNTC;
  _L79 = MA_Available;
  _L253 = !_L79;
  _L194 = Mode_SN;
  _L190 = Current_Mode == UN_Level_And_Mode_Types_Pkg;
  Mode_UN = _L190;
  _L195 = Mode_UN;
  _L193 = _L194 | _L195;
  _L76 = _L246 & _L247 & _L253 & _L193;
  _L257 = TripModeFromLevel;
  _L255 = _L76 | _L257;
  Condition39 = _L255;
  _L80 = Condition39;
  _L166 = T_NVCONTACT_Overpass;
  _L204 = Mode_FS_LS_OS;
  _L164 = _L166 & _L204;
  Condition41 = _L164;
  _L82 = Condition41;
  _L83 = Estimated_Front_End_Overpass_SR_Distance;
  _L84 = Override_Function_Active;
  _L85 = !_L84;
  _L205 = Mode_SR;
  _L86 = _L83 & _L85 & _L205;
  Condition42 = _L86;
  _L87 = Condition42;
  _L88 = Train_Overpass_Former_EOA_Antenna;
  _L89 = Override_Function_Former_Active;
  _L90 = Override_Function_Active;
  _L91 = !_L90;
  _L206 = Mode_SR;
  _L92 = _L88 & _L89 & _L91 & _L206;
  Condition43 = _L92;
  _L93 = Condition43;
  _L94 = Stop_If_In_Shunting;
  _L95 = Override_Function_Active;
  _L96 = !_L95;
  _L207 = Mode_SH;
  _L97 = _L94 & _L96 & _L207;
  Condition49 = _L97;
  _L98 = Condition49;
  _L100 = Override_Function_Active;
  _L99 = !_L100;
  _L104 = BG_In_Expected_List_In_SH;
  _L101 = !_L104;
  _L208 = Mode_SH;
  _L102 = _L101 & _L99 & _L208;
  Condition52 = _L102;
  _L105 = Condition52;
  _L106 = Override_Function_Active;
  _L112 = BG_In_Expected_List_In_SR;
  _L108 = !_L112;
  _L114 = Stop_If_In_SR;
  _L113 = List_BG_Related_To_SR_Empty;
  _L111 = _L113 | _L108;
  _L110 = !_L106;
  _L209 = Mode_SR;
  _L109 = _L114 & _L111 & _L110 & _L209;
  Condition54 = _L109;
  _L115 = Condition54;
  _L124 = Error_BG_System_Version;
  _L248 = Level_L1_L2_L3;
  _L211 = Mode_FS_LS_OS;
  _L212 = Mode_SH;
  _L213 = Mode_SR;
  _L210 = _L211 | _L212 | _L213;
  _L122 = _L124 & _L248 & _L210;
  Condition65 = _L122;
  _L125 = Condition65;
  _L126 = Linked_BG_Pased_In_Wrong_Direction;
  _L215 = Mode_FS_LS_OS;
  _L216 = Mode_SR;
  _L214 = _L215 | _L216;
  _L177 = _L126 & _L214;
  Condition66 = _L177;
  _L127 = Condition66;
  _L249 = Level_L1;
  _L231 = (Current_Level == M_LEVEL_Level_1) | (Current_Level ==
      M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
  Level_prev_L1 = _L231;
  _L251 = Level_prev_L1;
  _L130 = Trip_Order_Given_By_Balise;
  _L138 = National_Trip_Order;
  _L139 = !_L138;
  _L221 = Mode_SN;
  _L222 = Mode_UN;
  _L220 = _L221 | _L222;
  _L128 = _L249 & _L251 & _L130 & _L139 & _L220;
  Condition67 = _L128;
  _L140 = Condition67;
  _L141 = Estimated_Front_End_Rear_Location_SSP_Or_Gradient;
  _L218 = Mode_FS_LS_OS;
  _L219 = Mode_SR;
  _L217 = _L218 | _L219;
  _L179 = _L141 & _L217;
  Condition69 = _L179;
  _L142 = Condition69;
  _L252 = _L22 | _L30 | _L32 | _L37 | _L39 | _L44 | _L51 | _L65 | _L80 | _L82 |
    _L87 | _L93 | _L98 | _L105 | _L115 | _L125 | _L127 | _L140 | _L142;
  outC->Condition2Trip = _L252;
  outC->rem_Current_Level = Current_Level;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToTrip_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

