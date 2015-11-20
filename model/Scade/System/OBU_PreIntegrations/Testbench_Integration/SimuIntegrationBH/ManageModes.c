/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageModes.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageModes_init(outC_ManageModes *outC)
{
  outC->init = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
  outC->Data_To_DMI.Ack_LS = kcg_true;
  outC->Data_To_DMI.Ack_OS = kcg_true;
  outC->Data_To_DMI.Ack_RV = kcg_true;
  outC->Data_To_DMI.Ack_SH = kcg_true;
  outC->Data_To_DMI.Ack_SN = kcg_true;
  outC->Data_To_DMI.Ack_SR = kcg_true;
  outC->Data_To_DMI.Ack_TR = kcg_true;
  outC->Data_To_DMI.Ack_UN = kcg_true;
  outC->Data_To_DMI.SH_Refused_By_RBC = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->currentMode = NP_Level_And_Mode_Types_Pkg;
  /* 1 */ SwitchModes_init(&outC->_1_Context_1);
  /* 1 */ ComputeModesConditions_init(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageModes_reset(outC_ManageModes *outC)
{
  outC->init = kcg_true;
  /* 1 */ SwitchModes_reset(&outC->_1_Context_1);
  /* 1 */ ComputeModesConditions_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageModes */
void ManageModes(
  /* ManageModes::Current_Level */ M_LEVEL Current_Level,
  /* ManageModes::Cab */ cab_ID_T_TIU_Types_Pkg Cab,
  /* ManageModes::Data_From_DMI */ T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* ManageModes::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageModes::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageModes::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageModes::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageModes::Data_From_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageModes::Data_From_Track */ T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* ManageModes::TripModeFromLevel */ kcg_bool TripModeFromLevel,
  outC_ManageModes *outC)
{
  /* ManageModes::currentMode */
  static T_Mode_Level_And_Mode_Types_Pkg last_currentMode;
  /* ManageModes::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1;
  /* ManageModes::_L20 */
  static kcg_bool _L20;
  /* ManageModes::_L21 */
  static kcg_bool _L21;
  /* ManageModes::_L22 */
  static kcg_bool _L22;
  /* ManageModes::_L23 */
  static kcg_bool _L23;
  /* ManageModes::_L24 */
  static kcg_bool _L24;
  /* ManageModes::_L25 */
  static kcg_bool _L25;
  /* ManageModes::_L26 */
  static kcg_bool _L26;
  /* ManageModes::_L27 */
  static kcg_bool _L27;
  /* ManageModes::_L28 */
  static kcg_bool _L28;
  /* ManageModes::_L29 */
  static kcg_bool _L29;
  /* ManageModes::_L30 */
  static kcg_bool _L30;
  /* ManageModes::_L31 */
  static kcg_bool _L31;
  /* ManageModes::_L32 */
  static kcg_bool _L32;
  /* ManageModes::_L33 */
  static kcg_bool _L33;
  /* ManageModes::_L34 */
  static kcg_bool _L34;
  /* ManageModes::_L35 */
  static kcg_bool _L35;
  /* ManageModes::_L36 */
  static kcg_bool _L36;
  /* ManageModes::_L37 */
  static kcg_bool _L37;
  /* ManageModes::_L38 */
  static kcg_bool _L38;
  /* ManageModes::_L39 */
  static kcg_bool _L39;
  /* ManageModes::_L40 */
  static kcg_bool _L40;
  /* ManageModes::_L41 */
  static kcg_bool _L41;
  /* ManageModes::_L42 */
  static kcg_bool _L42;
  /* ManageModes::_L43 */
  static kcg_bool _L43;
  /* ManageModes::_L44 */
  static kcg_bool _L44;
  /* ManageModes::_L45 */
  static kcg_bool _L45;
  /* ManageModes::_L46 */
  static kcg_bool _L46;
  /* ManageModes::_L47 */
  static kcg_bool _L47;
  /* ManageModes::_L48 */
  static kcg_bool _L48;
  /* ManageModes::_L49 */
  static kcg_bool _L49;
  /* ManageModes::_L50 */
  static kcg_bool _L50;
  /* ManageModes::_L51 */
  static kcg_bool _L51;
  /* ManageModes::_L52 */
  static kcg_bool _L52;
  /* ManageModes::_L53 */
  static kcg_bool _L53;
  /* ManageModes::_L54 */
  static kcg_bool _L54;
  /* ManageModes::_L55 */
  static kcg_bool _L55;
  /* ManageModes::_L56 */
  static kcg_bool _L56;
  /* ManageModes::_L57 */
  static kcg_bool _L57;
  /* ManageModes::_L58 */
  static kcg_bool _L58;
  /* ManageModes::_L59 */
  static kcg_bool _L59;
  /* ManageModes::_L60 */
  static kcg_bool _L60;
  /* ManageModes::_L61 */
  static kcg_bool _L61;
  /* ManageModes::_L62 */
  static kcg_bool _L62;
  /* ManageModes::_L63 */
  static kcg_bool _L63;
  /* ManageModes::_L64 */
  static kcg_bool _L64;
  /* ManageModes::_L65 */
  static kcg_bool _L65;
  /* ManageModes::_L83 */
  static M_LEVEL _L83;
  /* ManageModes::_L153 */
  static kcg_bool _L153;
  /* ManageModes::_L154 */
  static kcg_bool _L154;
  /* ManageModes::_L155 */
  static kcg_bool _L155;
  /* ManageModes::_L156 */
  static kcg_bool _L156;
  /* ManageModes::_L157 */
  static T_Mode_Level_And_Mode_Types_Pkg _L157;
  /* ManageModes::_L161 */
  static kcg_bool _L161;
  /* ManageModes::_L162 */
  static kcg_bool _L162;
  /* ManageModes::_L163 */
  static kcg_bool _L163;
  /* ManageModes::_L164 */
  static kcg_bool _L164;
  /* ManageModes::_L169 */
  static kcg_bool _L169;
  /* ManageModes::_L170 */
  static kcg_bool _L170;
  /* ManageModes::_L173 */
  static kcg_bool _L173;
  /* ManageModes::_L174 */
  static kcg_bool _L174;
  /* ManageModes::_L175 */
  static kcg_bool _L175;
  /* ManageModes::_L177 */
  static kcg_bool _L177;
  /* ManageModes::_L179 */
  static kcg_bool _L179;
  /* ManageModes::_L180 */
  static kcg_bool _L180;
  /* ManageModes::_L181 */
  static kcg_bool _L181;
  /* ManageModes::_L182 */
  static kcg_bool _L182;
  /* ManageModes::_L183 */
  static kcg_bool _L183;
  /* ManageModes::_L184 */
  static kcg_bool _L184;
  /* ManageModes::_L185 */
  static kcg_bool _L185;
  /* ManageModes::_L190 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L190;
  /* ManageModes::_L205 */
  static cab_ID_T_TIU_Types_Pkg _L205;
  /* ManageModes::_L206 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L206;
  /* ManageModes::_L210 */
  static kcg_bool _L210;
  /* ManageModes::_L212 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L212;
  /* ManageModes::_L213 */
  static kcg_bool _L213;
  /* ManageModes::_L214 */
  static kcg_bool _L214;
  /* ManageModes::_L215 */
  static kcg_bool _L215;
  /* ManageModes::_L216 */
  static kcg_bool _L216;
  /* ManageModes::_L217 */
  static kcg_bool _L217;
  /* ManageModes::_L220 */
  static T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg _L220;
  /* ManageModes::_L221 */
  static kcg_bool _L221;
  /* ManageModes::_L222 */
  static kcg_bool _L222;
  /* ManageModes::_L223 */
  static T_Reversing_Data_Level_And_Mode_Types_Pkg _L223;
  /* ManageModes::_L235 */
  static kcg_bool _L235;
  /* ManageModes::_L231 */
  static kcg_bool _L231;
  /* ManageModes::_L229 */
  static kcg_bool _L229;
  /* ManageModes::_L227 */
  static kcg_bool _L227;
  /* ManageModes::_L226 */
  static kcg_bool _L226;
  /* ManageModes::_L237 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L237;
  /* ManageModes::_L253 */
  static T_Mode_Level_And_Mode_Types_Pkg _L253;
  /* ManageModes::_L252 */
  static kcg_bool _L252;
  /* ManageModes::_L251 */
  static kcg_bool _L251;
  /* ManageModes::_L250 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L250;
  /* ManageModes::_L254 */
  static kcg_bool _L254;
  /* ManageModes::_L261 */
  static kcg_bool _L261;
  /* ManageModes::_L260 */
  static Speed_T_Obu_BasicTypes_Pkg _L260;
  /* ManageModes::_L259 */
  static trainPosition_T_TrainPosition_Types_Pck _L259;
  /* ManageModes::_L258 */
  static kcg_bool _L258;
  /* ManageModes::_L257 */
  static kcg_bool _L257;
  /* ManageModes::_L256 */
  static kcg_bool _L256;
  /* ManageModes::_L232 */
  static kcg_bool _L232;
  /* ManageModes::_L262 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L262;
  /* ManageModes::_L277 */
  static kcg_bool _L277;
  /* ManageModes::_L278 */
  static kcg_bool _L278;
  /* ManageModes::_L279 */
  static kcg_bool _L279;
  /* ManageModes::_L280 */
  static kcg_bool _L280;
  /* ManageModes::_L281 */
  static kcg_bool _L281;
  /* ManageModes::_L282 */
  static kcg_bool _L282;
  /* ManageModes::_L283 */
  static kcg_bool _L283;
  /* ManageModes::_L284 */
  static kcg_bool _L284;
  /* ManageModes::_L285 */
  static kcg_bool _L285;
  /* ManageModes::_L286 */
  static kcg_bool _L286;
  /* ManageModes::_L287 */
  static kcg_bool _L287;
  /* ManageModes::_L288 */
  static kcg_bool _L288;
  /* ManageModes::_L289 */
  static kcg_bool _L289;
  /* ManageModes::_L290 */
  static kcg_bool _L290;
  /* ManageModes::_L291 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L291;
  /* ManageModes::_L292 */
  static kcg_bool _L292;
  /* ManageModes::_L293 */
  static kcg_bool _L293;
  /* ManageModes::_L294 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L294;
  /* ManageModes::_L295 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L295;
  /* ManageModes::_L296 */
  static kcg_bool _L296;
  /* ManageModes::_L297 */
  static kcg_bool _L297;
  /* ManageModes::_L298 */
  static kcg_bool _L298;
  /* ManageModes::_L299 */
  static kcg_bool _L299;
  /* ManageModes::_L300 */
  static kcg_bool _L300;
  /* ManageModes::_L301 */
  static kcg_bool _L301;
  /* ManageModes::_L302 */
  static kcg_bool _L302;
  /* ManageModes::_L303 */
  static kcg_bool _L303;
  /* ManageModes::_L304 */
  static kcg_bool _L304;
  
  _L83 = Current_Level;
  /* last_init_ck_currentMode */ if (outC->init) {
    last_currentMode = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    last_currentMode = outC->currentMode;
  }
  _L157 = last_currentMode;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &_L206,
    Data_From_TIU);
  _L205 = Cab;
  /* 1 */
  InputTIUManagement_Interfaces(
    &_L206,
    _L205,
    &_L177,
    &_L180,
    &_L179,
    &_L181,
    &_L182,
    &_L293,
    &_L292);
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(&_L190, Data_From_DMI);
  /* InputDMI */
  InputDMI_Interfaces(
    &_L190,
    &_L277,
    &_L279,
    &_L278,
    &_L280,
    &_L283,
    &_L281,
    &_L284,
    &_L282,
    &_L286,
    &_L285,
    &_L287,
    &_L289,
    &_L288,
    &_L290);
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &_L220,
    Data_From_Track);
  /* 1 */
  InputTrackManagement_Interfaces(
    &_L220,
    &_L210,
    &_L212,
    &_L213,
    &_L214,
    &_L215,
    &_L216,
    &_L217,
    &_L221,
    &_L222,
    &_L223,
    &_L254);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &_L237,
    Data_From_Speed_and_Supervision);
  /* 1 */
  InputSpeedAndSupervision_Interfaces(
    &_L237,
    &_L226,
    &_L227,
    &_L229,
    &_L231,
    &_L232,
    &_L235);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &_L262,
    Data_From_Localisation);
  /* 1 */
  InputLocalisation_Interfaces(
    &_L262,
    &_L256,
    &_L257,
    &_L258,
    &_L259,
    &_L260,
    &_L261);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&_L294, Data_From_STM);
  /* 1 */ InputSTM_Interfaces(&_L294, &_L296, &_L297);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &_L295,
    Data_From_F2_Functions);
  /* 1 */
  InputF2Functions_Interfaces(
    &_L295,
    &_L301,
    &_L302,
    &_L300,
    &_L298,
    &_L299,
    &_L303);
  _L304 = TripModeFromLevel;
  /* 1 */
  ComputeModesConditions(
    _L83,
    _L157,
    _L177,
    _L180,
    _L179,
    _L181,
    _L182,
    _L293,
    _L292,
    _L277,
    _L279,
    _L278,
    _L280,
    _L283,
    _L281,
    _L284,
    _L282,
    _L286,
    _L285,
    _L287,
    _L289,
    _L288,
    _L290,
    _L210,
    &_L212,
    _L213,
    _L214,
    _L215,
    _L216,
    _L217,
    _L221,
    _L222,
    &_L223,
    _L254,
    _L226,
    _L227,
    _L229,
    _L231,
    _L232,
    _L235,
    _L256,
    _L257,
    _L258,
    &_L259,
    _L260,
    _L261,
    _L296,
    _L297,
    _L301,
    _L302,
    _L300,
    _L298,
    _L299,
    _L303,
    _L304,
    &outC->Context_1);
  _L55 = outC->Context_1.Condition1;
  _L29 = outC->Context_1.Condition2;
  _L28 = outC->Context_1.Condition3;
  _L27 = outC->Context_1.Condition4;
  _L37 = outC->Context_1.Condition5;
  _L36 = outC->Context_1.Condition6;
  _L61 = outC->Context_1.Condition7;
  _L46 = outC->Context_1.Condition8;
  _L41 = outC->Context_1.Condition10;
  _L56 = outC->Context_1.Condition13;
  _L54 = outC->Context_1.Condition14;
  _L53 = outC->Context_1.Condition15;
  _L26 = outC->Context_1.Condition19;
  _L60 = outC->Context_1.Condition21;
  _L25 = outC->Context_1.Condition22;
  _L35 = outC->Context_1.Condition23;
  _L40 = outC->Context_1.Condition25;
  _L30 = outC->Context_1.Condition26;
  _L24 = outC->Context_1.Condition27;
  _L23 = outC->Context_1.Condition28;
  _L20 = outC->Context_1.Condition29;
  _L22 = outC->Context_1.Condition30;
  _L39 = outC->Context_1.Condition31;
  _L38 = outC->Context_1.Condition32;
  _L52 = outC->Context_1.Condition34;
  _L47 = outC->Context_1.Condition37;
  _L51 = outC->Context_1.Condition40;
  _L49 = outC->Context_1.Condition44;
  _L48 = outC->Context_1.Condition45;
  _L57 = outC->Context_1.Condition46;
  _L21 = outC->Context_1.Condition47;
  _L34 = outC->Context_1.Condition50;
  _L33 = outC->Context_1.Condition51;
  _L64 = outC->Context_1.Condition56;
  _L63 = outC->Context_1.Condition58;
  _L65 = outC->Context_1.Condition59;
  _L59 = outC->Context_1.Condition60;
  _L32 = outC->Context_1.Condition61;
  _L58 = outC->Context_1.Condition62;
  _L62 = outC->Context_1.Condition63;
  _L31 = outC->Context_1.Condition68;
  _L44 = outC->Context_1.Condition70;
  _L43 = outC->Context_1.Condition71;
  _L42 = outC->Context_1.Condition72;
  _L50 = outC->Context_1.Condition73;
  _L45 = outC->Context_1.Condition74;
  _L154 = outC->Context_1.Condition_Trip;
  _L184 = outC->Context_1.Ack_LS_Req_To_Driver;
  _L163 = outC->Context_1.Ack_OS_Req_To_Driver;
  _L175 = outC->Context_1.Ack_RV_Req_To_Driver;
  _L164 = outC->Context_1.Ack_SH_Req_To_Driver;
  _L185 = outC->Context_1.Ack_SN_Req_To_Driver;
  _L156 = outC->Context_1.Ack_SR_Req_To_Driver;
  _L170 = outC->Context_1.Ack_TR_Req_To_Driver;
  _L174 = outC->Context_1.Ack_UN_Req_To_Driver;
  _L183 = outC->Context_1.Clean_BG_List_SH_Area;
  _L153 = outC->Context_1.EB_Requested;
  _L173 = outC->Context_1.End_Of_Mission_Procedure_Req;
  _L161 = outC->Context_1.MA_Req_To_RBC;
  _L162 = outC->Context_1.Request_For_SH_To_RBC;
  _L169 = outC->Context_1.Service_Brake_Command;
  _L155 = outC->Context_1.SH_Refused_By_RBC_To_DMI;
  /* 1 */
  SwitchModes(
    _L55,
    _L29,
    _L28,
    _L27,
    _L37,
    _L36,
    _L61,
    _L46,
    _L41,
    _L56,
    _L54,
    _L53,
    _L26,
    _L60,
    _L25,
    _L35,
    _L40,
    _L30,
    _L24,
    _L23,
    _L20,
    _L22,
    _L39,
    _L38,
    _L52,
    _L47,
    _L51,
    _L49,
    _L48,
    _L57,
    _L21,
    _L34,
    _L33,
    _L64,
    _L63,
    _L65,
    _L59,
    _L32,
    _L58,
    _L62,
    _L31,
    _L44,
    _L43,
    _L42,
    _L50,
    _L45,
    _L154,
    &outC->_1_Context_1);
  _L1 = outC->_1_Context_1.currentMode;
  /* 1 */
  OutputManagement_Interfaces(
    _L1,
    _L184,
    _L163,
    _L175,
    _L164,
    _L185,
    _L156,
    _L170,
    _L174,
    _L183,
    _L153,
    _L173,
    _L161,
    _L162,
    _L169,
    _L155,
    &_L291,
    &_L250,
    &_L251,
    &_L252,
    &_L253);
  outC->currentMode = _L253;
  outC->Service_Brake_Command = _L252;
  outC->EB_Requested = _L251;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(&outC->Data_To_DMI, &_L291);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &_L250);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageModes.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

