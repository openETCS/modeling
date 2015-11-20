/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_Toolbox.h"

#ifndef KCG_USER_DEFINED_INIT
void DMI_init_Toolbox(outC_DMI_Toolbox *outC)
{
  static kcg_int i23;
  static kcg_int i22;
  static kcg_int i21;
  static kcg_int i20;
  static kcg_int i19;
  static kcg_int i18;
  static kcg_int i17;
  static kcg_int i16;
  static kcg_int i15;
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 4; i++) {
    outC->DMI_TimeArray[i] = 0.0;
  }
  outC->DMI_ScrollUpEnableIndex = 0;
  outC->DMI_ScrollDownEnableIndex = 0;
  outC->DMI_PlanningAreaVisibility_toDisplay = kcg_true;
  for (i1 = 0; i1 < 9; i1++) {
    outC->DMI_D_Scale_toDisplay[i1] = 0.0;
  }
  for (i2 = 0; i2 < 12; i2++) {
    outC->DMI_D_GradientVisible_toDisplay[i2] = kcg_true;
  }
  for (i3 = 0; i3 < 1; i3++) {
    outC->DMI_D_PASP_IndicationMarker_toDisplay[i3] = 0.0;
  }
  for (i4 = 0; i4 < 4; i4++) {
    outC->DMI_D_PASP_Distances_toDisplay[i4] = 0.0;
  }
  for (i5 = 0; i5 < 4; i5++) {
    outC->DMI_D_PASP_Speeds_toDisplay[i5] = 0.0;
  }
  for (i6 = 0; i6 < 10; i6++) {
    outC->DMI_D_SPDI_SpeedChangePosition_toDisplay[i6] = 0.0;
  }
  for (i7 = 0; i7 < 10; i7++) {
    outC->DMI_D_SPDI_SpeedChangeIndex_toDisplay[i7] = 0;
  }
  for (i8 = 0; i8 < 10; i8++) {
    outC->DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay[i8] = kcg_true;
  }
  outC->DMI_isAuxiliarMsg_toDisplay = kcg_true;
  for (i9 = 0; i9 < 5; i9++) {
    outC->DMI_Array_mm_toDisplay[i9] = 0.0;
  }
  for (i10 = 0; i10 < 5; i10++) {
    outC->DMI_Array_hh_toDisplay[i10] = 0.0;
  }
  for (i12 = 0; i12 < 5; i12++) {
    for (i11 = 0; i11 < 30; i11++) {
      outC->DMI_PlainText_toDisplay[i12][i11] = ' ';
    }
  }
  outC->DMI_levelMenuVisibility_toDisplay = kcg_true;
  for (i13 = 0; i13 < 12; i13++) {
    outC->DMI_ArrayLevelIndex_toDisplay[i13] = 0;
  }
  outC->DMI_IndexLevel_toDisplay = 0;
  outC->DMI_level_data.valid = kcg_true;
  outC->DMI_level_data.systemTime = 0;
  outC->DMI_level_data.level.level = M_LEVEL_Level_0;
  outC->DMI_level_data.level.nid_stm = 0;
  for (i14 = 0; i14 < 5; i14++) {
    outC->DMI_IndexFixedMsg_toDisplay[i14] = 0;
  }
  outC->DMI_SingleMsgAckRequiredVisibility_toDysplay = kcg_true;
  outC->DMI_InterpolatedDistanceToTarget_toDisplay = 0.0;
  for (i15 = 0; i15 < 5; i15++) {
    outC->DMI_ArrayOfMsgIndex_toDisplay[i15] = 0;
  }
  outC->DMI_iconGroupIndex_toDisplay = 0;
  outC->DMI_TrainSpeed_toDisplay = 0.0;
  outC->DMI_StatusSymbolVisibility_toDisplay = kcg_true;
  outC->DMI_traindataValidWinVisibility_toDisplay = kcg_true;
  outC->DMI_Vtarget_permVisibility_toDisplay = kcg_true;
  for (i16 = 0; i16 < 12; i16++) {
    outC->DMI_GradientsStart_toDisplay[i16] = 0.0;
  }
  outC->DMI_trainAirtightIndex_toDisplay = 0;
  outC->DMI_yellowBorderC1Area_toDisplay = kcg_true;
  outC->DMI_SpeedDigitTwo_toDisplay = 0.0;
  for (i17 = 0; i17 < 9; i17++) {
    outC->DMI_DriverID_Display_toDisplay[i17] = 0;
  }
  outC->DMI_yellowBorderMsg_toDisplay = kcg_true;
  outC->DMI_Vinterv_Color_toDisplay = 0;
  outC->DMI_DistanceToTarget_toDisplay = 0.0;
  outC->DMI_ModeSymbol_toDisplay = 0;
  outC->DMI_modeSymbolAnnouncementIndex_toDisplay = 0;
  outC->DMI_ETCS_LevelSymbol_toDisplay = 0;
  for (i18 = 0; i18 < 30; i18++) {
    outC->DMI_ArrayButtonsEnabler_toDisplay[i18] = 0;
  }
  outC->DMI_trainBrakePerc_toDisplay = 0.0;
  outC->DMI_VreleaseColor_toDisplay = 0;
  outC->DMI_SpeedPermitted_toDisplay = 0.0;
  outC->DMI_trainCategoryIndex_toDisplay = 0;
  outC->DMI_levelSymbolAnnouncementIndex_toDisplay = 0;
  outC->DMI_TrainDataWindowVisibility_toDisplay = kcg_true;
  outC->DMI_StatusSymbolBrake_toDisplay = kcg_true;
  outC->DMI_traindataYesNoIndex_toDisplay = 0;
  outC->DMI_vtarget_permColor_toDisplay = 0;
  for (i19 = 0; i19 < 12; i19++) {
    outC->DMI_GradientsEnd_toDisplay[i19] = 0.0;
  }
  outC->DMI_RBC_status_symbol_toDisplay = 0;
  for (i20 = 0; i20 < 9; i20++) {
    outC->DMI_TrainRN_Display_toDisplay[i20] = 0;
  }
  outC->DMI_trainLoadingGougeIndex_toDisplay = 0;
  outC->DMI_hourGlassCounter_toDisplay = 0.0;
  outC->DMI_SpeedDigitThree_toDisplay = 0.0;
  outC->DMI_ModeSymbolVisibility_toDisplay = kcg_true;
  outC->DMI_closeButtonIndex_toDisplay = 0;
  outC->DMI_yellowBorderBrakeSymbol_toDisplay = kcg_true;
  outC->DMI_SpeedIntervention_toDisplay = 0.0;
  outC->DMI_LevelSymbolVisibility_toDisplay = kcg_true;
  outC->DMI_DistanceToTargetVisible_toDisplay = kcg_true;
  outC->DMI_trainMaxspeed_toDisplay = 0.0;
  outC->DMI_VtargetColor_toDisplay = 0;
  outC->DMI_SpeedRelease_toDisplay = 0.0;
  outC->DMI_CloseButtonEnabler_toDisplay = 0;
  outC->DMI_PointerColor_toDisplay = 0;
  outC->DMI_trainAxleloadIndex_toDisplay = 0;
  outC->DMI_hourGlassVisibility_toDisplay = kcg_true;
  outC->DMI_SpeedDigitOne_toDisplay = 0.0;
  outC->DMI_DistanceToTargetBarVisibility_toDisplay = kcg_true;
  outC->DMI_Vinterv_Visibility_toDisplay = kcg_true;
  outC->DMI_TrainPosition_toDisplay = 0.0;
  for (i21 = 0; i21 < 12; i21++) {
    outC->DMI_GradientsValue_toDisplay[i21] = 0.0;
  }
  outC->DMI_trainLenght_toDisplay = 0.0;
  outC->DMI_VpermColor_toDisplay = 0;
  outC->DMI_SpeedTarget_toDisplay = 0.0;
  for (i22 = 0; i22 < 15; i22++) {
    outC->DMI_window_mask_visibility__toDisplay[i22] = kcg_true;
  }
  outC->DMI_openDesk_toDisplay = kcg_true;
  outC->DMI_icons_ack.valid = kcg_true;
  outC->DMI_icons_ack.systemTime = 0;
  outC->DMI_icons_ack.DMI_nid_icon_identifier = 0;
  for (i23 = 0; i23 < 311; i23++) {
    outC->EVC_fromDMI[i23] = 0;
  }
  /* 2 */ DMI_Controller_init_DMI_Control_Pkg(&outC->Context_2);
  /* 1 */ manageTIU_input_init_input_from_TIU_API_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DMI_reset_Toolbox(outC_DMI_Toolbox *outC)
{
  /* 2 */ DMI_Controller_reset_DMI_Control_Pkg(&outC->Context_2);
  /* 1 */ manageTIU_input_reset_input_from_TIU_API_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::DMI */
void DMI_Toolbox(
  /* Toolbox::DMI::GUI_reset */ kcg_bool _25_GUI_reset,
  /* Toolbox::DMI::EVC_toDMI */ EVC_to_DMI_Message_int_T_API_DMI_Pkg *EVC_toDMI,
  /* Toolbox::DMI::DMI_MousePressed */ kcg_bool _24_DMI_MousePressed,
  /* Toolbox::DMI::DMI_startRequest */ kcg_bool _23_DMI_startRequest,
  /* Toolbox::DMI::DMI_openTrainRN */ kcg_bool _22_DMI_openTrainRN,
  /* Toolbox::DMI::DMI_traindataYesAck */ kcg_bool _21_DMI_traindataYesAck,
  /* Toolbox::DMI::DMI_keypad */ array_bool_12 *_20_DMI_keypad,
  /* Toolbox::DMI::DMI_openTrainDataWindow */ kcg_bool _19_DMI_openTrainDataWindow,
  /* Toolbox::DMI::DMI_openDriverID */ kcg_bool _18_DMI_openDriverID,
  /* Toolbox::DMI::DMI_traindataNoAck */ kcg_bool _17_DMI_traindataNoAck,
  /* Toolbox::DMI::DMI_traindataAck */ kcg_bool _16_DMI_traindataAck,
  /* Toolbox::DMI::DMI_closeButton */ kcg_bool _15_DMI_closeButton,
  /* Toolbox::DMI::DMI_confirmTrainData */ kcg_bool _14_DMI_confirmTrainData,
  /* Toolbox::DMI::DMI_textMsgAck */ kcg_bool _13_DMI_textMsgAck,
  /* Toolbox::DMI::TIU_Message */ TIU_Input_msg_API_TIU_Pkg *TIU_Message,
  /* Toolbox::DMI::DMI_openLevelMenu */ kcg_bool _12_DMI_openLevelMenu,
  /* Toolbox::DMI::DMI_InputFieldAck */ kcg_bool _11_DMI_InputFieldAck,
  /* Toolbox::DMI::DMI_openMainMenu_fromDisplay */ kcg_bool _10_DMI_openMainMenu_fromDisplay,
  /* Toolbox::DMI::DMI_OverD9_fromDisplay */ kcg_bool _9_DMI_OverD9_fromDisplay,
  /* Toolbox::DMI::DMI_OverD12_frpmDisplay */ kcg_bool _8_DMI_OverD12_frpmDisplay,
  /* Toolbox::DMI::DMI_HidePlanningArea_fromDisplay */ kcg_bool _7_DMI_HidePlanningArea_fromDisplay,
  /* Toolbox::DMI::DMI_ShowPlanningArea_fromDisplay */ kcg_bool _6_DMI_ShowPlanningArea_fromDisplay,
  /* Toolbox::DMI::DMI_closeButtonMain */ kcg_bool _5_DMI_closeButtonMain,
  /* Toolbox::DMI::DMI_C1AreaAck */ kcg_bool _4_DMI_C1AreaAck,
  /* Toolbox::DMI::DMI_ScrollUp */ kcg_bool _3_DMI_ScrollUp,
  /* Toolbox::DMI::DMI_ScrollDown */ kcg_bool _2_DMI_ScrollDown,
  outC_DMI_Toolbox *outC)
{
  static kcg_int i;
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg noname;
  static kcg_bool _1_noname;
  /* Toolbox::DMI::_L17 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L17;
  /* Toolbox::DMI::_L5 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L5;
  /* Toolbox::DMI::_L6 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L6;
  /* Toolbox::DMI::_L118 */
  static TIU_Input_msg_API_TIU_Pkg _L118;
  /* Toolbox::DMI::_L234 */
  static kcg_bool _L234;
  /* Toolbox::DMI::_L212 */
  static array_bool_12 _L212;
  /* Toolbox::DMI::_L210 */
  static array_bool_12 _L210;
  /* Toolbox::DMI::_L209 */
  static kcg_bool _L209;
  /* Toolbox::DMI::_L138 */
  static kcg_real _L138;
  /* Toolbox::DMI::_L139 */
  static kcg_int _L139;
  /* Toolbox::DMI::_L140 */
  static kcg_bool _L140;
  /* Toolbox::DMI::_L141 */
  static kcg_real _L141;
  /* Toolbox::DMI::_L142 */
  static kcg_bool _L142;
  /* Toolbox::DMI::_L143 */
  static kcg_real _L143;
  /* Toolbox::DMI::_L144 */
  static kcg_real _L144;
  /* Toolbox::DMI::_L145 */
  static kcg_real _L145;
  /* Toolbox::DMI::_L146 */
  static kcg_real _L146;
  /* Toolbox::DMI::_L147 */
  static kcg_real _L147;
  /* Toolbox::DMI::_L148 */
  static kcg_real _L148;
  /* Toolbox::DMI::_L149 */
  static kcg_real _L149;
  /* Toolbox::DMI::_L150 */
  static kcg_real _L150;
  /* Toolbox::DMI::_L151 */
  static kcg_bool _L151;
  /* Toolbox::DMI::_L152 */
  static kcg_real _L152;
  /* Toolbox::DMI::_L153 */
  static kcg_bool _L153;
  /* Toolbox::DMI::_L154 */
  static kcg_int _L154;
  /* Toolbox::DMI::_L155 */
  static array_int_9 _L155;
  /* Toolbox::DMI::_L156 */
  static array_int_9 _L156;
  /* Toolbox::DMI::_L157 */
  static array_bool_15 _L157;
  /* Toolbox::DMI::_L158 */
  static array_int_30 _L158;
  /* Toolbox::DMI::_L159 */
  static kcg_int _L159;
  /* Toolbox::DMI::_L160 */
  static kcg_bool _L160;
  /* Toolbox::DMI::_L161 */
  static kcg_int _L161;
  /* Toolbox::DMI::_L162 */
  static kcg_bool _L162;
  /* Toolbox::DMI::_L163 */
  static kcg_int _L163;
  /* Toolbox::DMI::_L164 */
  static kcg_bool _L164;
  /* Toolbox::DMI::_L165 */
  static array_int_5 _L165;
  /* Toolbox::DMI::_L166 */
  static kcg_int _L166;
  /* Toolbox::DMI::_L167 */
  static kcg_int _L167;
  /* Toolbox::DMI::_L168 */
  static kcg_int _L168;
  /* Toolbox::DMI::_L169 */
  static kcg_int _L169;
  /* Toolbox::DMI::_L170 */
  static kcg_real _L170;
  /* Toolbox::DMI::_L171 */
  static kcg_real _L171;
  /* Toolbox::DMI::_L172 */
  static kcg_real _L172;
  /* Toolbox::DMI::_L173 */
  static kcg_bool _L173;
  /* Toolbox::DMI::_L174 */
  static kcg_int _L174;
  /* Toolbox::DMI::_L175 */
  static kcg_bool _L175;
  /* Toolbox::DMI::_L176 */
  static kcg_int _L176;
  /* Toolbox::DMI::_L177 */
  static kcg_bool _L177;
  /* Toolbox::DMI::_L178 */
  static kcg_bool _L178;
  /* Toolbox::DMI::_L179 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L179;
  /* Toolbox::DMI::_L180 */
  static kcg_bool _L180;
  /* Toolbox::DMI::_L181 */
  static kcg_int _L181;
  /* Toolbox::DMI::_L182 */
  static kcg_int _L182;
  /* Toolbox::DMI::_L183 */
  static kcg_int _L183;
  /* Toolbox::DMI::_L184 */
  static kcg_real _L184;
  /* Toolbox::DMI::_L185 */
  static kcg_bool _L185;
  /* Toolbox::DMI::_L186 */
  static kcg_int _L186;
  /* Toolbox::DMI::_L187 */
  static kcg_int _L187;
  /* Toolbox::DMI::_L188 */
  static kcg_int _L188;
  /* Toolbox::DMI::_L189 */
  static kcg_bool _L189;
  /* Toolbox::DMI::_L190 */
  static kcg_bool _L190;
  /* Toolbox::DMI::_L191 */
  static kcg_int _L191;
  /* Toolbox::DMI::_L192 */
  static kcg_int _L192;
  /* Toolbox::DMI::_L193 */
  static kcg_bool _L193;
  /* Toolbox::DMI::_L194 */
  static array_int_12 _L194;
  /* Toolbox::DMI::_L195 */
  static kcg_int _L195;
  /* Toolbox::DMI::_L196 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L196;
  /* Toolbox::DMI::_L197 */
  static array_int_5 _L197;
  /* Toolbox::DMI::_L198 */
  static array_char_30_5 _L198;
  /* Toolbox::DMI::_L199 */
  static array_real_5 _L199;
  /* Toolbox::DMI::_L200 */
  static array_real_5 _L200;
  /* Toolbox::DMI::_L201 */
  static kcg_bool _L201;
  /* Toolbox::DMI::_L202 */
  static array_bool_10 _L202;
  /* Toolbox::DMI::_L203 */
  static array_int_10 _L203;
  /* Toolbox::DMI::_L204 */
  static array_real_10 _L204;
  /* Toolbox::DMI::_L205 */
  static array_real_1 _L205;
  /* Toolbox::DMI::_L206 */
  static array_real_4 _L206;
  /* Toolbox::DMI::_L207 */
  static array_real_4 _L207;
  /* Toolbox::DMI::_L208 */
  static array_bool_12 _L208;
  /* Toolbox::DMI::_L137 */
  static kcg_bool _L137;
  /* Toolbox::DMI::_L135 */
  static kcg_bool _L135;
  /* Toolbox::DMI::_L133 */
  static kcg_bool _L133;
  /* Toolbox::DMI::_L132 */
  static kcg_bool _L132;
  /* Toolbox::DMI::_L130 */
  static kcg_real _L130;
  /* Toolbox::DMI::_L129 */
  static kcg_bool _L129;
  /* Toolbox::DMI::_L127 */
  static kcg_bool _L127;
  /* Toolbox::DMI::_L125 */
  static kcg_bool _L125;
  /* Toolbox::DMI::_L122 */
  static kcg_bool _L122;
  /* Toolbox::DMI::_L121 */
  static kcg_bool _L121;
  /* Toolbox::DMI::_L119 */
  static kcg_bool _L119;
  /* Toolbox::DMI::_L241 */
  static array_real_12 _L241;
  /* Toolbox::DMI::_L240 */
  static kcg_bool _L240;
  /* Toolbox::DMI::_L239 */
  static tScale _L239;
  /* Toolbox::DMI::_L238 */
  static array_real_12 _L238;
  /* Toolbox::DMI::_L237 */
  static array_real_12 _L237;
  /* Toolbox::DMI::_L267 */
  static kcg_bool _L267;
  /* Toolbox::DMI::_L269 */
  static kcg_bool _L269;
  /* Toolbox::DMI::_L270 */
  static kcg_bool _L270;
  /* Toolbox::DMI::_L271 */
  static kcg_bool _L271;
  /* Toolbox::DMI::_L272 */
  static kcg_bool _L272;
  /* Toolbox::DMI::_L273 */
  static kcg_bool _L273;
  /* Toolbox::DMI::_L274 */
  static kcg_bool _L274;
  /* Toolbox::DMI::_L276 */
  static kcg_bool _L276;
  /* Toolbox::DMI::_L277 */
  static kcg_bool _L277;
  /* Toolbox::DMI::_L278 */
  static kcg_bool _L278;
  /* Toolbox::DMI::_L279 */
  static trainData_T_TIU_Types_Pkg _L279;
  /* Toolbox::DMI::_L280 */
  static kcg_bool _L280;
  /* Toolbox::DMI::_L281 */
  static kcg_int _L281;
  /* Toolbox::DMI::_L282 */
  static kcg_int _L282;
  /* Toolbox::DMI::_L283 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L283;
  /* Toolbox::DMI::_L284 */
  static kcg_bool _L284;
  /* Toolbox::DMI::_L285 */
  static kcg_bool _L285;
  /* Toolbox::DMI::_L286 */
  static array_real_4 _L286;
  
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&_L118, TIU_Message);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &_L279,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData_trainData_Types_pkg);
  /* 1 */
  manageTIU_input_input_from_TIU_API_Pkg(&_L118, &_L279, &outC->Context_1);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&_L5, &outC->Context_1.outTIUStatus);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &_L6,
    &outC->Context_1.outTIUCurrentInfo);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&_L17, EVC_toDMI);
  _L135 = _24_DMI_MousePressed;
  /* pow */ for (i = 0; i < 12; i++) {
    _L212[i] = kcg_false;
  }
  _L130 = 0.0;
  kcg_copy_array_bool_12(&_L210, _20_DMI_keypad);
  _L132 = _14_DMI_confirmTrainData;
  _L122 = _19_DMI_openTrainDataWindow;
  _L127 = _23_DMI_startRequest;
  _L209 = _16_DMI_traindataAck;
  _L121 = _21_DMI_traindataYesAck;
  _L133 = _17_DMI_traindataNoAck;
  _L125 = _13_DMI_textMsgAck;
  _L137 = _18_DMI_openDriverID;
  _L119 = _22_DMI_openTrainRN;
  _L129 = _15_DMI_closeButton;
  _L276 = _5_DMI_closeButtonMain;
  _L267 = _10_DMI_openMainMenu_fromDisplay;
  _L274 = kcg_false;
  _L277 = _4_DMI_C1AreaAck;
  _L234 = _12_DMI_openLevelMenu;
  _L278 = _11_DMI_InputFieldAck;
  _L269 = _9_DMI_OverD9_fromDisplay;
  _L270 = _8_DMI_OverD12_frpmDisplay;
  _L271 = _7_DMI_HidePlanningArea_fromDisplay;
  _L272 = _6_DMI_ShowPlanningArea_fromDisplay;
  _L284 = _3_DMI_ScrollUp;
  _L285 = _2_DMI_ScrollDown;
  /* 2 */
  DMI_Controller_DMI_Control_Pkg(
    _L135,
    &_L212,
    _L130,
    &_L210,
    _L132,
    _L122,
    _L127,
    _L209,
    _L121,
    _L133,
    _L125,
    _L137,
    _L119,
    _L129,
    _L276,
    _L267,
    &_L5,
    _L274,
    _L277,
    _L234,
    _L278,
    _L269,
    _L270,
    _L271,
    _L272,
    &_L17,
    _L284,
    _L285,
    &outC->Context_2);
  _L138 = outC->Context_2.TrainPosition_toDisplay;
  _L139 = outC->Context_2.ETCS_LevelSymbol_toDisplay;
  _L140 = outC->Context_2.LevelSymbolVisibility_toDisplay;
  _L141 = outC->Context_2.TrainSpeed_toDisplay;
  _L142 = outC->Context_2.TrainDataWindowVisibility_toDisplay;
  _L143 = outC->Context_2.SpeedDigitOne_toDisplay;
  _L144 = outC->Context_2.SpeedDigitTwo_toDisplay;
  _L145 = outC->Context_2.SpeedDigitThree_toDisplay;
  _L146 = outC->Context_2.SpeedTarget_toDisplay;
  _L147 = outC->Context_2.SpeedPermitted_toDisplay;
  _L148 = outC->Context_2.SpeedRelease_toDisplay;
  _L149 = outC->Context_2.SpeedIntervention_toDisplay;
  _L150 = outC->Context_2.DistanceToTarget_toDisplay;
  _L151 = outC->Context_2.DistanceToTargetVisibilityDigital_toDisplay;
  _L152 = outC->Context_2.InterpolatedDistanceToTarget_toDisplay;
  _L153 = outC->Context_2.StatusSymbolBrake_toDisplay;
  _L154 = outC->Context_2.PointerColor_toDisplay;
  kcg_copy_array_int_9(&_L155, &outC->Context_2.DriverID_Display_toDisplay);
  kcg_copy_array_int_9(&_L156, &outC->Context_2.TrainRN_Display_toDisplay);
  kcg_copy_array_bool_15(
    &_L157,
    &outC->Context_2.window_mask_visibility__toDisplay);
  kcg_copy_array_int_30(&_L158, &outC->Context_2.ArrayButtonsEnabler_toDisplay);
  _L159 = outC->Context_2.CloseButtonEnabler_toDisplay;
  _L160 = outC->Context_2.StatusSymbolVisibility_toDisplay;
  _L161 = outC->Context_2.RBC_status_symbol_toDisplay;
  _L162 = outC->Context_2.DistanceToTargetBarVisibility_toDisplay;
  _L163 = outC->Context_2.ModeSymbol_toDisplay;
  _L164 = outC->Context_2.ModeSymbolVisibility_toDisplay;
  kcg_copy_array_int_5(&_L165, &outC->Context_2.ArrayOfMsgIndex_toDisplay);
  _L166 = outC->Context_2.trainCategoryIndex_toDisplay;
  _L167 = outC->Context_2.trainAxleloadIndex_toDisplay;
  _L168 = outC->Context_2.trainAirtightIndex_toDisplay;
  _L169 = outC->Context_2.trainLoadingGougeIndex_toDisplay;
  _L170 = outC->Context_2.trainLenght_toDisplay;
  _L171 = outC->Context_2.trainBrakePerc_toDisplay;
  _L172 = outC->Context_2.trainMaxspeed_toDisplay;
  _L173 = outC->Context_2.traindataValidWinVisibility_toDisplay;
  _L174 = outC->Context_2.traindataYesNoIndex_toDisplay;
  _L175 = outC->Context_2.yellowBorderMsg_toDisplay;
  _L176 = outC->Context_2.closeButtonIndex_toDisplay;
  _L177 = outC->Context_2.openDesk_toDisplay;
  _L178 = outC->Context_2.yellowBorderBrakeSymbol_toDisplay;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L179,
    &outC->Context_2.DMI_icons_ack);
  _L180 = outC->Context_2.yellowBorderC1Area_toDisplay;
  _L181 = outC->Context_2.iconGroupIndex_toDisplay;
  _L182 = outC->Context_2.levelSymbolAnnouncementIndex_toDisplay;
  _L183 = outC->Context_2.modeSymbolAnnouncementIndex_toDisplay;
  _L184 = outC->Context_2.hourGlassCounter_toDisplay;
  _L185 = outC->Context_2.hourGlassVisibility_toDisplay;
  _L186 = outC->Context_2.VpermColor_toDisplay;
  _L187 = outC->Context_2.VreleaseColor_toDisplay;
  _L188 = outC->Context_2.VtargetColor_toDisplay;
  _L189 = outC->Context_2.Vtarget_permVisibility_toDisplay;
  _L190 = outC->Context_2.Vinterv_Visibility_toDisplay;
  _L191 = outC->Context_2.vtarget_permColor_toDisplay;
  _L192 = outC->Context_2.Vinterv_Color_toDisplay;
  _L193 = outC->Context_2.levelMenuVisibility_toDisplay;
  kcg_copy_array_int_12(&_L194, &outC->Context_2.ArrayLevelIndex_toDisplay);
  _L195 = outC->Context_2.IndexLevel_toDisplay;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &_L196,
    &outC->Context_2.DMI_level_data);
  kcg_copy_array_int_5(&_L197, &outC->Context_2.IndexFixedMsg_toDisplay);
  kcg_copy_array_char_30_5(&_L198, &outC->Context_2.PlainText_toDisplay);
  kcg_copy_array_real_5(&_L199, &outC->Context_2.Array_hh_toDisplay);
  kcg_copy_array_real_5(&_L200, &outC->Context_2.Array_mm_toDisplay);
  _L201 = outC->Context_2.isAuxiliarMsg_toDisplay;
  kcg_copy_array_bool_10(
    &_L202,
    &outC->Context_2.D_SPDI_SpeedChangeSymbolsVisible_toDisplay);
  kcg_copy_array_int_10(
    &_L203,
    &outC->Context_2.D_SPDI_SpeedChangeIndex_toDisplay);
  kcg_copy_array_real_10(
    &_L204,
    &outC->Context_2.D_SPDI_SpeedChangePosition_toDisplay);
  kcg_copy_array_real_1(
    &_L205,
    &outC->Context_2.D_PASP_IndicatorMarker_toDisplay);
  kcg_copy_array_real_4(&_L206, &outC->Context_2.D_PASP_Speeds_toDisplay);
  kcg_copy_array_real_4(&_L207, &outC->Context_2.D_PASP_Distances_toDisplay);
  kcg_copy_array_bool_12(&_L208, &outC->Context_2.D_GradientVisible_toDisplay);
  kcg_copy_array_real_12(
    &_L237,
    &outC->Context_2.D_GradientEndInterpolated_toDisplay);
  kcg_copy_array_real_12(
    &_L238,
    &outC->Context_2.D_GradientStartInterpolated_toDisplay);
  kcg_copy_tScale(&_L239, &outC->Context_2.D_Scale_toDisplay);
  _L240 = outC->Context_2.PlanningAreaVisibility_toDisplay;
  kcg_copy_array_real_12(&_L241, &outC->Context_2.D_GradientsValue_toDisplay);
  _L281 = outC->Context_2.ScrollDownEnableTypeIndex;
  _L282 = outC->Context_2.ScrollUpEnableTypeIndex;
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &_L283,
    &outC->Context_2.Output83);
  kcg_copy_array_real_4(&_L286, &outC->Context_2.TimeArray);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->EVC_fromDMI, &_L283);
  outC->DMI_PointerColor_toDisplay = _L154;
  outC->DMI_trainAxleloadIndex_toDisplay = _L167;
  outC->DMI_yellowBorderC1Area_toDisplay = _L180;
  outC->DMI_SpeedDigitOne_toDisplay = _L143;
  outC->DMI_DistanceToTargetBarVisibility_toDisplay = _L162;
  outC->DMI_yellowBorderMsg_toDisplay = _L175;
  outC->DMI_modeSymbolAnnouncementIndex_toDisplay = _L183;
  outC->DMI_Vinterv_Color_toDisplay = _L192;
  outC->DMI_TrainPosition_toDisplay = _L138;
  outC->DMI_trainLenght_toDisplay = _L170;
  outC->DMI_VreleaseColor_toDisplay = _L187;
  _L273 = kcg_false;
  outC->DMI_SingleMsgAckRequiredVisibility_toDysplay = _L273;
  outC->DMI_SpeedTarget_toDisplay = _L146;
  kcg_copy_array_bool_15(&outC->DMI_window_mask_visibility__toDisplay, &_L157);
  outC->DMI_levelMenuVisibility_toDisplay = _L193;
  outC->DMI_InterpolatedDistanceToTarget_toDisplay = _L152;
  kcg_copy_array_int_5(&outC->DMI_ArrayOfMsgIndex_toDisplay, &_L165);
  outC->DMI_levelSymbolAnnouncementIndex_toDisplay = _L182;
  outC->DMI_TrainSpeed_toDisplay = _L141;
  outC->DMI_StatusSymbolVisibility_toDisplay = _L160;
  outC->DMI_traindataValidWinVisibility_toDisplay = _L173;
  outC->DMI_vtarget_permColor_toDisplay = _L191;
  outC->DMI_trainAirtightIndex_toDisplay = _L168;
  outC->DMI_hourGlassCounter_toDisplay = _L184;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->DMI_level_data,
    &_L196);
  outC->DMI_SpeedDigitTwo_toDisplay = _L144;
  kcg_copy_array_int_9(&outC->DMI_DriverID_Display_toDisplay, &_L155);
  outC->DMI_closeButtonIndex_toDisplay = _L176;
  outC->DMI_SpeedIntervention_toDisplay = _L149;
  outC->DMI_DistanceToTarget_toDisplay = _L150;
  outC->DMI_ModeSymbol_toDisplay = _L163;
  outC->DMI_yellowBorderBrakeSymbol_toDisplay = _L178;
  outC->DMI_ETCS_LevelSymbol_toDisplay = _L139;
  kcg_copy_array_int_30(&outC->DMI_ArrayButtonsEnabler_toDisplay, &_L158);
  outC->DMI_trainBrakePerc_toDisplay = _L171;
  outC->DMI_VtargetColor_toDisplay = _L188;
  outC->DMI_SpeedPermitted_toDisplay = _L147;
  outC->DMI_trainCategoryIndex_toDisplay = _L166;
  outC->DMI_hourGlassVisibility_toDisplay = _L185;
  kcg_copy_array_int_12(&outC->DMI_ArrayLevelIndex_toDisplay, &_L194);
  outC->DMI_TrainDataWindowVisibility_toDisplay = _L142;
  outC->DMI_StatusSymbolBrake_toDisplay = _L153;
  outC->DMI_traindataYesNoIndex_toDisplay = _L174;
  outC->DMI_Vinterv_Visibility_toDisplay = _L190;
  outC->DMI_RBC_status_symbol_toDisplay = _L161;
  kcg_copy_array_int_5(&outC->DMI_IndexFixedMsg_toDisplay, &_L197);
  kcg_copy_array_int_9(&outC->DMI_TrainRN_Display_toDisplay, &_L156);
  outC->DMI_trainLoadingGougeIndex_toDisplay = _L169;
  outC->DMI_VpermColor_toDisplay = _L186;
  outC->DMI_SpeedDigitThree_toDisplay = _L145;
  outC->DMI_ModeSymbolVisibility_toDisplay = _L164;
  outC->DMI_openDesk_toDisplay = _L177;
  outC->DMI_iconGroupIndex_toDisplay = _L181;
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->DMI_icons_ack,
    &_L179);
  outC->DMI_LevelSymbolVisibility_toDisplay = _L140;
  outC->DMI_DistanceToTargetVisible_toDisplay = _L151;
  outC->DMI_trainMaxspeed_toDisplay = _L172;
  outC->DMI_Vtarget_permVisibility_toDisplay = _L189;
  outC->DMI_SpeedRelease_toDisplay = _L148;
  outC->DMI_CloseButtonEnabler_toDisplay = _L159;
  outC->DMI_IndexLevel_toDisplay = _L195;
  kcg_copy_array_real_12(&outC->DMI_GradientsValue_toDisplay, &_L241);
  kcg_copy_array_real_12(&outC->DMI_GradientsEnd_toDisplay, &_L237);
  kcg_copy_array_real_12(&outC->DMI_GradientsStart_toDisplay, &_L238);
  kcg_copy_array_char_30_5(&outC->DMI_PlainText_toDisplay, &_L198);
  kcg_copy_array_real_5(&outC->DMI_Array_hh_toDisplay, &_L199);
  kcg_copy_array_real_5(&outC->DMI_Array_mm_toDisplay, &_L200);
  outC->DMI_isAuxiliarMsg_toDisplay = _L201;
  kcg_copy_array_bool_10(
    &outC->DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay,
    &_L202);
  kcg_copy_array_int_10(&outC->DMI_D_SPDI_SpeedChangeIndex_toDisplay, &_L203);
  kcg_copy_array_real_10(
    &outC->DMI_D_SPDI_SpeedChangePosition_toDisplay,
    &_L204);
  kcg_copy_array_real_4(&outC->DMI_D_PASP_Speeds_toDisplay, &_L206);
  kcg_copy_array_real_4(&outC->DMI_D_PASP_Distances_toDisplay, &_L207);
  kcg_copy_array_bool_12(&outC->DMI_D_GradientVisible_toDisplay, &_L208);
  kcg_copy_tScale(&outC->DMI_D_Scale_toDisplay, &_L239);
  outC->DMI_PlanningAreaVisibility_toDisplay = _L240;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&noname, &_L6);
  _L280 = _25_GUI_reset;
  _1_noname = _L280;
  kcg_copy_array_real_1(&outC->DMI_D_PASP_IndicationMarker_toDisplay, &_L205);
  outC->DMI_ScrollDownEnableIndex = _L281;
  outC->DMI_ScrollUpEnableIndex = _L282;
  kcg_copy_array_real_4(&outC->DMI_TimeArray, &_L286);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_Toolbox.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

