/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageModes.h"

void ManageModes_reset(outC_ManageModes *outC)
{
  outC->init = kcg_true;
  /* 1 */ SwitchModes_reset(&outC->Context_1);
  /* 1 */ ComputeModesConditions_reset(&outC->_1_Context_1);
}

/* ManageModes */
void ManageModes(
  /* ManageModes::Current_Level */M_LEVEL Current_Level,
  /* ManageModes::Cab */cab_ID_T_TIU_Types_Pkg Cab,
  /* ManageModes::Data_From_DMI */T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* ManageModes::Data_From_F2_Functions */T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageModes::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageModes::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageModes::Data_From_STM */T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageModes::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageModes::Data_From_Track */T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* ManageModes::TripModeFromLevel */kcg_bool TripModeFromLevel,
  outC_ManageModes *outC)
{
  static T_Mode_Level_And_Mode_Types_Pkg tmp;
  /* ManageModes::_L153 */
  static kcg_bool _L153;
  /* ManageModes::_L155 */
  static kcg_bool _L155;
  /* ManageModes::_L156 */
  static kcg_bool _L156;
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
  
  /* 1 */
  InputF2Functions_Interfaces(
    Data_From_F2_Functions,
    &_L175,
    &_L163,
    &_L164,
    &_L156,
    &_L185,
    &_L184);
  /* 1 */ InputSTM_Interfaces(Data_From_STM, &_L174, &_L170);
  /* InputDMI */
  InputDMI_Interfaces(
    Data_From_DMI,
    &_L277,
    &_L279,
    &_L278,
    &_L280,
    &_L283,
    &_L281,
    &_L284,
    &_L282,
    &_L155,
    &_L285,
    &_L169,
    &_L161,
    &_L162,
    &_L173);
  /* 1 */
  InputLocalisation_Interfaces(
    Data_From_Localisation,
    &_L256,
    &_L257,
    &_L258,
    &_L259,
    &_L260,
    &_L261);
  /* 1 */
  InputTIUManagement_Interfaces(
    Data_From_TIU,
    Cab,
    &_L177,
    &_L180,
    &_L179,
    &_L181,
    &_L182,
    &_L183,
    &_L153);
  /* 1 */
  InputTrackManagement_Interfaces(
    Data_From_Track,
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
  /* 1 */
  InputSpeedAndSupervision_Interfaces(
    Data_From_Speed_and_Supervision,
    &_L226,
    &_L227,
    &_L229,
    &_L231,
    &_L232,
    &_L235);
  if (outC->init) {
    outC->init = kcg_false;
    tmp = SB_Level_And_Mode_Types_Pkg;
  }
  else {
    tmp = outC->currentMode;
  }
  /* 1 */
  ComputeModesConditions(
    Current_Level,
    tmp,
    _L177,
    _L180,
    _L179,
    _L181,
    _L182,
    _L183,
    _L153,
    _L277,
    _L279,
    _L278,
    _L280,
    _L283,
    _L281,
    _L284,
    _L282,
    _L155,
    _L285,
    _L169,
    _L161,
    _L162,
    _L173,
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
    _L174,
    _L170,
    _L175,
    _L163,
    _L164,
    _L156,
    _L185,
    _L184,
    TripModeFromLevel,
    &outC->_1_Context_1);
  _L184 = outC->_1_Context_1.Ack_LS_Req_To_Driver;
  _L163 = outC->_1_Context_1.Ack_OS_Req_To_Driver;
  _L175 = outC->_1_Context_1.Ack_RV_Req_To_Driver;
  _L164 = outC->_1_Context_1.Ack_SH_Req_To_Driver;
  _L185 = outC->_1_Context_1.Ack_SN_Req_To_Driver;
  _L156 = outC->_1_Context_1.Ack_SR_Req_To_Driver;
  _L170 = outC->_1_Context_1.Ack_TR_Req_To_Driver;
  _L174 = outC->_1_Context_1.Ack_UN_Req_To_Driver;
  _L183 = outC->_1_Context_1.Clean_BG_List_SH_Area;
  _L153 = outC->_1_Context_1.EB_Requested;
  _L173 = outC->_1_Context_1.End_Of_Mission_Procedure_Req;
  _L161 = outC->_1_Context_1.MA_Req_To_RBC;
  _L162 = outC->_1_Context_1.Request_For_SH_To_RBC;
  _L169 = outC->_1_Context_1.Service_Brake_Command;
  _L155 = outC->_1_Context_1.SH_Refused_By_RBC_To_DMI;
  /* 1 */
  SwitchModes(
    outC->_1_Context_1.Condition1,
    outC->_1_Context_1.Condition2,
    outC->_1_Context_1.Condition3,
    outC->_1_Context_1.Condition4,
    outC->_1_Context_1.Condition5,
    outC->_1_Context_1.Condition6,
    outC->_1_Context_1.Condition7,
    outC->_1_Context_1.Condition8,
    outC->_1_Context_1.Condition10,
    outC->_1_Context_1.Condition13,
    outC->_1_Context_1.Condition14,
    outC->_1_Context_1.Condition15,
    outC->_1_Context_1.Condition19,
    outC->_1_Context_1.Condition21,
    outC->_1_Context_1.Condition22,
    outC->_1_Context_1.Condition23,
    outC->_1_Context_1.Condition25,
    outC->_1_Context_1.Condition26,
    outC->_1_Context_1.Condition27,
    outC->_1_Context_1.Condition28,
    outC->_1_Context_1.Condition29,
    outC->_1_Context_1.Condition30,
    outC->_1_Context_1.Condition31,
    outC->_1_Context_1.Condition32,
    outC->_1_Context_1.Condition34,
    outC->_1_Context_1.Condition37,
    outC->_1_Context_1.Condition40,
    outC->_1_Context_1.Condition44,
    outC->_1_Context_1.Condition45,
    outC->_1_Context_1.Condition46,
    outC->_1_Context_1.Condition47,
    outC->_1_Context_1.Condition50,
    outC->_1_Context_1.Condition51,
    outC->_1_Context_1.Condition56,
    outC->_1_Context_1.Condition58,
    outC->_1_Context_1.Condition59,
    outC->_1_Context_1.Condition60,
    outC->_1_Context_1.Condition61,
    outC->_1_Context_1.Condition62,
    outC->_1_Context_1.Condition63,
    outC->_1_Context_1.Condition68,
    outC->_1_Context_1.Condition70,
    outC->_1_Context_1.Condition71,
    outC->_1_Context_1.Condition72,
    outC->_1_Context_1.Condition73,
    outC->_1_Context_1.Condition74,
    outC->_1_Context_1.Condition_Trip,
    &outC->Context_1);
  /* 1 */
  OutputManagement_Interfaces(
    outC->Context_1.currentMode,
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
    &outC->Data_To_DMI,
    &outC->Data_To_BG_Management,
    &outC->EB_Requested,
    &outC->Service_Brake_Command,
    &outC->currentMode);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageModes.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

