/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ROOT_Integration_Testbench_Integration_H_
#define _ROOT_Integration_Testbench_Integration_H_

#include "kcg_types.h"
#include "EVC.h"
#include "TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox.h"
#include "DMI_Toolbox.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------   local probes  ------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::debugTrainPositionNominal */ debugTrainPositionNominal;
  kcg_real /* Testbench_Integration::ROOT_Integration::debugPermittedSpeed */ debugPermittedSpeed;
  kcg_real /* Testbench_Integration::ROOT_Integration::debugInterventionSpeed */ debugInterventionSpeed;
  M_MODE /* Testbench_Integration::ROOT_Integration::debugCurrentMode */ debugCurrentMode;
  M_LEVEL /* Testbench_Integration::ROOT_Integration::debugCurrentLevel */ debugCurrentLevel;
  mobileHWStatus_Type_MoRC_Pck /* Testbench_Integration::ROOT_Integration::debugMobileHwStatus */ debugMobileHwStatus;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* Testbench_Integration::ROOT_Integration::API_toDMI */ API_toDMI;
  TIU_Output_msg_API_TIU_Pkg /* Testbench_Integration::ROOT_Integration::API_toTIU */ API_toTIU;
  RadioManagement_T_API_RadioCommunication_Pkg /* Testbench_Integration::ROOT_Integration::API_toRTM_Management */ API_toRTM_Management;
  M_TrainTrack_Message_T_TM_radio_messages /* Testbench_Integration::ROOT_Integration::API_toRBC */ API_toRBC;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L11 */ _L11;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L10 */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L8 */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L7 */ _L7;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L6 */ _L6;
  TIU_Output_msg_API_TIU_Pkg /* Testbench_Integration::ROOT_Integration::_L5 */ _L5;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* Testbench_Integration::ROOT_Integration::_L4 */ _L4;
  RadioManagement_T_API_RadioCommunication_Pkg /* Testbench_Integration::ROOT_Integration::_L3 */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* Testbench_Integration::ROOT_Integration::_L2 */ _L2;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L1 */ _L1;
  M_MODE /* Testbench_Integration::ROOT_Integration::_L222 */ _L222;
  M_LEVEL /* Testbench_Integration::ROOT_Integration::_L238 */ _L238;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_InterpolatedDistanceToTarget_toDisplay */ DMI_InterpolatedDistanceToTarget_toDisplay;
  array_int_5 /* Testbench_Integration::ROOT_Integration::DMI_ArrayOfMsgIndex_toDisplay */ DMI_ArrayOfMsgIndex_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_iconGroupIndex_toDisplay */ DMI_iconGroupIndex_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_TrainSpeed_toDisplay */ DMI_TrainSpeed_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_traindataValidWinVisibility_toDisplay */ DMI_traindataValidWinVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_Vtarget_permVisibility_toDisplay */ DMI_Vtarget_permVisibility_toDisplay;
  array_real_12 /* Testbench_Integration::ROOT_Integration::DMI_GradientsStart_toDisplay */ DMI_GradientsStart_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_trainAirtightIndex_toDisplay */ DMI_trainAirtightIndex_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitTwo_toDisplay */ DMI_SpeedDigitTwo_toDisplay;
  array_int_9 /* Testbench_Integration::ROOT_Integration::DMI_DriverID_Display_toDisplay */ DMI_DriverID_Display_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_Vinterv_Color_toDisplay */ DMI_Vinterv_Color_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_DistanceToTarget_toDisplay */ DMI_DistanceToTarget_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_ModeSymbol_toDisplay */ DMI_ModeSymbol_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_modeSymbolAnnouncementIndex_toDisplay */ DMI_modeSymbolAnnouncementIndex_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_ETCS_LevelSymbol_toDisplay */ DMI_ETCS_LevelSymbol_toDisplay;
  array_int_30 /* Testbench_Integration::ROOT_Integration::DMI_ArrayButtonsEnabler_toDisplay */ DMI_ArrayButtonsEnabler_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_trainBrakePerc_toDisplay */ DMI_trainBrakePerc_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_VreleaseColor_toDisplay */ DMI_VreleaseColor_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedPermitted_toDisplay */ DMI_SpeedPermitted_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_trainCategoryIndex_toDisplay */ DMI_trainCategoryIndex_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_levelSymbolAnnouncementIndex_toDisplay */ DMI_levelSymbolAnnouncementIndex_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_TrainDataWindowVisibility_toDisplay */ DMI_TrainDataWindowVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_StatusSymbolBrake_toDisplay */ DMI_StatusSymbolBrake_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_traindataYesNoIndex_toDisplay */ DMI_traindataYesNoIndex_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_vtarget_permColor_toDisplay */ DMI_vtarget_permColor_toDisplay;
  array_real_12 /* Testbench_Integration::ROOT_Integration::DMI_GradientsEnd_toDisplay */ DMI_GradientsEnd_toDisplay;
  array_int_9 /* Testbench_Integration::ROOT_Integration::DMI_TrainRN_Display_toDisplay */ DMI_TrainRN_Display_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_trainLoadingGougeIndex_toDisplay */ DMI_trainLoadingGougeIndex_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitThree_toDisplay */ DMI_SpeedDigitThree_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_ModeSymbolVisibility_toDisplay */ DMI_ModeSymbolVisibility_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedIntervention_toDisplay */ DMI_SpeedIntervention_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_LevelSymbolVisibility_toDisplay */ DMI_LevelSymbolVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_DistanceToTargetVisible_toDisplay */ DMI_DistanceToTargetVisible_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_trainMaxspeed_toDisplay */ DMI_trainMaxspeed_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_VtargetColor_toDisplay */ DMI_VtargetColor_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedRelease_toDisplay */ DMI_SpeedRelease_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_CloseButtonEnabler_toDisplay */ DMI_CloseButtonEnabler_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_PointerColor_toDisplay */ DMI_PointerColor_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_trainAxleloadIndex_toDisplay */ DMI_trainAxleloadIndex_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitOne_toDisplay */ DMI_SpeedDigitOne_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_DistanceToTargetBarVisibility_toDisplay */ DMI_DistanceToTargetBarVisibility_toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_Vinterv_Visibility_toDisplay */ DMI_Vinterv_Visibility_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_TrainPosition_toDisplay */ DMI_TrainPosition_toDisplay;
  array_real_12 /* Testbench_Integration::ROOT_Integration::DMI_GradientsValue_toDisplay */ DMI_GradientsValue_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_trainLenght_toDisplay */ DMI_trainLenght_toDisplay;
  kcg_int /* Testbench_Integration::ROOT_Integration::DMI_VpermColor_toDisplay */ DMI_VpermColor_toDisplay;
  kcg_real /* Testbench_Integration::ROOT_Integration::DMI_SpeedTarget_toDisplay */ DMI_SpeedTarget_toDisplay;
  array_bool_15 /* Testbench_Integration::ROOT_Integration::DMI_window_mask_visibility__toDisplay */ DMI_window_mask_visibility__toDisplay;
  kcg_bool /* Testbench_Integration::ROOT_Integration::DMI_openDesk_toDisplay */ DMI_openDesk_toDisplay;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVC /* 1 */ _2_Context_1;
  outC_DMI_Toolbox /* 1 */ _1_Context_1;
  outC_TestEnvironmentSimulation_IncludingRBC_Complete_Toolbox /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Testbench_Integration::ROOT_Integration */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* Testbench_Integration::ROOT_Integration::API_fromDMI */ API_fromDMI;
  TIU_Input_msg_API_TIU_Pkg /* Testbench_Integration::ROOT_Integration::EVC_fromTIU */ EVC_fromTIU;
  kcg_bool /* Testbench_Integration::ROOT_Integration::clockEVC */ clockEVC;
  mobileHWStatus_Type_MoRC_Pck /* Testbench_Integration::ROOT_Integration::_L26 */ _L26;
  TIU_Input_msg_API_TIU_Pkg /* Testbench_Integration::ROOT_Integration::_L25 */ _L25;
  API_TrackSideInput_T_API_Msg_Pkg /* Testbench_Integration::ROOT_Integration::_L24 */ _L24;
  T_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L23 */ _L23;
  odometry_T_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L22 */ _L22;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L21 */ _L21;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L153 */ _L153;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L152 */ _L152;
  array_int_5 /* Testbench_Integration::ROOT_Integration::_L151 */ _L151;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L150 */ _L150;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L149 */ _L149;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L148 */ _L148;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L147 */ _L147;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L146 */ _L146;
  array_real_12 /* Testbench_Integration::ROOT_Integration::_L145 */ _L145;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L144 */ _L144;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L143 */ _L143;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L142 */ _L142;
  array_int_9 /* Testbench_Integration::ROOT_Integration::_L141 */ _L141;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L140 */ _L140;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L139 */ _L139;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L138 */ _L138;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L137 */ _L137;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L136 */ _L136;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L135 */ _L135;
  array_int_30 /* Testbench_Integration::ROOT_Integration::_L134 */ _L134;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L133 */ _L133;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L132 */ _L132;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L131 */ _L131;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L130 */ _L130;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L129 */ _L129;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L128 */ _L128;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L127 */ _L127;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L126 */ _L126;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L125 */ _L125;
  array_real_12 /* Testbench_Integration::ROOT_Integration::_L124 */ _L124;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L123 */ _L123;
  array_int_9 /* Testbench_Integration::ROOT_Integration::_L122 */ _L122;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L121 */ _L121;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L120 */ _L120;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L119 */ _L119;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L118 */ _L118;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L117 */ _L117;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L116 */ _L116;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L115 */ _L115;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L114 */ _L114;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L113 */ _L113;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L112 */ _L112;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L111 */ _L111;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L110 */ _L110;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L109 */ _L109;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L108 */ _L108;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L107 */ _L107;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L106 */ _L106;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L105 */ _L105;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L104 */ _L104;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L103 */ _L103;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L102 */ _L102;
  array_real_12 /* Testbench_Integration::ROOT_Integration::_L101 */ _L101;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L100 */ _L100;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L99 */ _L99;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L98 */ _L98;
  array_bool_15 /* Testbench_Integration::ROOT_Integration::_L97 */ _L97;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L96 */ _L96;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* Testbench_Integration::ROOT_Integration::_L95 */ _L95;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* Testbench_Integration::ROOT_Integration::_L94 */ _L94;
  DMI_to_EVC_Message_int_T_API_DMI_Pkg /* Testbench_Integration::ROOT_Integration::_L154 */ _L154;
  EVC_to_DMI_Message_int_T_API_DMI_Pkg /* Testbench_Integration::ROOT_Integration::_L156 */ _L156;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L157 */ _L157;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L158 */ _L158;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L159 */ _L159;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L160 */ _L160;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L161 */ _L161;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L162 */ _L162;
  array_bool_12 /* Testbench_Integration::ROOT_Integration::_L164 */ _L164;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L165 */ _L165;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L166 */ _L166;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L168 */ _L168;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L169 */ _L169;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L170 */ _L170;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L171 */ _L171;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L172 */ _L172;
  TIU_Input_msg_API_TIU_Pkg /* Testbench_Integration::ROOT_Integration::_L173 */ _L173;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L175 */ _L175;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L176 */ _L176;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L177 */ _L177;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L178 */ _L178;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L179 */ _L179;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L180 */ _L180;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L182 */ _L182;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L183 */ _L183;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L188 */ _L188;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L189 */ _L189;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L190 */ _L190;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L195 */ _L195;
  array_int_12 /* Testbench_Integration::ROOT_Integration::_L194 */ _L194;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L193 */ _L193;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg /* Testbench_Integration::ROOT_Integration::_L192 */ _L192;
  array_int_5 /* Testbench_Integration::ROOT_Integration::_L191 */ _L191;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L32 */ _L32;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L31 */ _L31;
  L_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L30 */ _L30;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L29 */ _L29;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L28 */ _L28;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L27 */ _L27;
  T_internal_Type_Obu_BasicTypes_Pkg /* Testbench_Integration::ROOT_Integration::_L196 */ _L196;
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg /* Testbench_Integration::ROOT_Integration::_L201 */ _L201;
  tScale /* Testbench_Integration::ROOT_Integration::_L214 */ _L214;
  array_bool_12 /* Testbench_Integration::ROOT_Integration::_L213 */ _L213;
  array_real_1 /* Testbench_Integration::ROOT_Integration::_L212 */ _L212;
  array_real_4 /* Testbench_Integration::ROOT_Integration::_L211 */ _L211;
  array_real_4 /* Testbench_Integration::ROOT_Integration::_L210 */ _L210;
  array_real_10 /* Testbench_Integration::ROOT_Integration::_L209 */ _L209;
  array_int_10 /* Testbench_Integration::ROOT_Integration::_L208 */ _L208;
  array_bool_10 /* Testbench_Integration::ROOT_Integration::_L207 */ _L207;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L206 */ _L206;
  array_real_5 /* Testbench_Integration::ROOT_Integration::_L205 */ _L205;
  array_real_5 /* Testbench_Integration::ROOT_Integration::_L204 */ _L204;
  array_char_30_5 /* Testbench_Integration::ROOT_Integration::_L203 */ _L203;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L215 */ _L215;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L216 */ _L216;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L217 */ _L217;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L218 */ _L218;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L219 */ _L219;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L220 */ _L220;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L221 */ _L221;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L223 */ _L223;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L224 */ _L224;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L227 */ _L227;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L228 */ _L228;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L229 */ _L229;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L230 */ _L230;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L231 */ _L231;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L232 */ _L232;
  kcg_real /* Testbench_Integration::ROOT_Integration::_L233 */ _L233;
  TIU_Output_msg_API_TIU_Pkg /* Testbench_Integration::ROOT_Integration::_L240 */ _L240;
  RadioManagement_T_API_RadioCommunication_Pkg /* Testbench_Integration::ROOT_Integration::_L241 */ _L241;
  M_TrainTrack_Message_T_TM_radio_messages /* Testbench_Integration::ROOT_Integration::_L244 */ _L244;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L245 */ _L245;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L246 */ _L246;
  kcg_int /* Testbench_Integration::ROOT_Integration::_L247 */ _L247;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L248 */ _L248;
  kcg_bool /* Testbench_Integration::ROOT_Integration::_L249 */ _L249;
  array_real_4 /* Testbench_Integration::ROOT_Integration::_L250 */ _L250;
} outC_ROOT_Integration_Testbench_Integration;

/* ===========  node initialization and cycle functions  =========== */
/* Testbench_Integration::ROOT_Integration */
extern void ROOT_Integration_Testbench_Integration(void);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ROOT_Integration_reset_Testbench_Integration(void);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ROOT_Integration_init_Testbench_Integration(void);
#endif /* KCG_USER_DEFINED_INIT */

extern outC_ROOT_Integration_Testbench_Integration Ctxt_ROOT_Integration_Testbench_Integration;

/* Testbench_Integration::ROOT_Integration::GUI_reset */
extern kcg_bool GUI_reset;
/* Testbench_Integration::ROOT_Integration::GUI_targetSpeed */
extern kcg_real GUI_targetSpeed;
/* Testbench_Integration::ROOT_Integration::GUI_traction */
extern kcg_real GUI_traction;
/* Testbench_Integration::ROOT_Integration::GUI_brake */
extern kcg_real GUI_brake;
/* Testbench_Integration::ROOT_Integration::GUI_initialPosition */
extern kcg_real GUI_initialPosition;
/* Testbench_Integration::ROOT_Integration::GUI_initialVelocity */
extern kcg_real GUI_initialVelocity;
/* Testbench_Integration::ROOT_Integration::GUI_mode */
extern kcg_int GUI_mode;
/* Testbench_Integration::ROOT_Integration::GUI_level */
extern kcg_int GUI_level;
/* Testbench_Integration::ROOT_Integration::GUI_mobileHWStatus */
extern kcg_int GUI_mobileHWStatus;
/* Testbench_Integration::ROOT_Integration::GUI_openDesk */
extern kcg_bool GUI_openDesk;
/* Testbench_Integration::ROOT_Integration::DMI_MousePressed */
extern kcg_bool DMI_MousePressed;
/* Testbench_Integration::ROOT_Integration::DMI_startRequest */
extern kcg_bool DMI_startRequest;
/* Testbench_Integration::ROOT_Integration::DMI_openTrainRN */
extern kcg_bool DMI_openTrainRN;
/* Testbench_Integration::ROOT_Integration::DMI_traindataYesAck */
extern kcg_bool DMI_traindataYesAck;
/* Testbench_Integration::ROOT_Integration::DMI_TrainRN_Ack */
extern kcg_bool DMI_TrainRN_Ack;
/* Testbench_Integration::ROOT_Integration::DMI_keypad */
extern array_bool_12 DMI_keypad;
/* Testbench_Integration::ROOT_Integration::DMI_openTrainDataWindow */
extern kcg_bool DMI_openTrainDataWindow;
/* Testbench_Integration::ROOT_Integration::DMI_openDriverID */
extern kcg_bool DMI_openDriverID;
/* Testbench_Integration::ROOT_Integration::DMI_DriverID_Ack */
extern kcg_bool DMI_DriverID_Ack;
/* Testbench_Integration::ROOT_Integration::DMI_traindataNoAck */
extern kcg_bool DMI_traindataNoAck;
/* Testbench_Integration::ROOT_Integration::DMI_traindataAck */
extern kcg_bool DMI_traindataAck;
/* Testbench_Integration::ROOT_Integration::DMI_OverD9_fromDisplay */
extern kcg_bool DMI_OverD9_fromDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_closeButton */
extern kcg_bool DMI_closeButton;
/* Testbench_Integration::ROOT_Integration::DMI_confirmTrainData */
extern kcg_bool DMI_confirmTrainData;
/* Testbench_Integration::ROOT_Integration::DMI_textMsgAck */
extern kcg_bool DMI_textMsgAck;
/* Testbench_Integration::ROOT_Integration::DMI_openLevelMenu */
extern kcg_bool DMI_openLevelMenu;
/* Testbench_Integration::ROOT_Integration::DMI_InputFieldAck */
extern kcg_bool DMI_InputFieldAck;
/* Testbench_Integration::ROOT_Integration::DMI_openMainMenu_fromDisplay */
extern kcg_bool DMI_openMainMenu_fromDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_OverD12_frpmDisplay */
extern kcg_bool DMI_OverD12_frpmDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_HidePlanningArea_fromDisplay */
extern kcg_bool DMI_HidePlanningArea_fromDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ShowPlanningArea_fromDisplay */
extern kcg_bool DMI_ShowPlanningArea_fromDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_closeButtonMain */
extern kcg_bool DMI_closeButtonMain;
/* Testbench_Integration::ROOT_Integration::DMI_C1AreaAck */
extern kcg_bool DMI_C1AreaAck;
/* Testbench_Integration::ROOT_Integration::DMI_ScrollUp */
extern kcg_bool DMI_ScrollUp;
/* Testbench_Integration::ROOT_Integration::DMI_ScrollDown */
extern kcg_bool DMI_ScrollDown;

/* Testbench_Integration::ROOT_Integration::DMI_localTime */
extern array_real_4 DMI_localTime;
/* Testbench_Integration::ROOT_Integration::DMI_ScrollUpEnableIndex */
extern kcg_int DMI_ScrollUpEnableIndex;
/* Testbench_Integration::ROOT_Integration::DMI_ScrollDownEnableIndex */
extern kcg_int DMI_ScrollDownEnableIndex;
/* Testbench_Integration::ROOT_Integration::GUI_AFBActive */
extern kcg_bool GUI_AFBActive;
/* Testbench_Integration::ROOT_Integration::GUI_emergencyBrake */
extern kcg_bool GUI_emergencyBrake;
/* Testbench_Integration::ROOT_Integration::GUI_TrainPositionNominal */
extern kcg_real GUI_TrainPositionNominal;
/* Testbench_Integration::ROOT_Integration::GUI_timestamp */
extern kcg_int GUI_timestamp;
/* Testbench_Integration::ROOT_Integration::GUI_TrainPositionDeltaMin */
extern kcg_real GUI_TrainPositionDeltaMin;
/* Testbench_Integration::ROOT_Integration::GUI_TrainPositionDeltaMax */
extern kcg_real GUI_TrainPositionDeltaMax;
/* Testbench_Integration::ROOT_Integration::GUI_currentVelocityInKmH */
extern kcg_real GUI_currentVelocityInKmH;
/* Testbench_Integration::ROOT_Integration::GUI_currentPositionInM */
extern kcg_real GUI_currentPositionInM;
/* Testbench_Integration::ROOT_Integration::GUI_currentPositionInCm */
extern L_internal_Type_Obu_BasicTypes_Pkg GUI_currentPositionInCm;
/* Testbench_Integration::ROOT_Integration::GUI_TractionCutOff */
extern kcg_bool GUI_TractionCutOff;
/* Testbench_Integration::ROOT_Integration::GUI_serviceBrake */
extern kcg_bool GUI_serviceBrake;
/* Testbench_Integration::ROOT_Integration::DMI_PlanningAreaVisibility_toDisplay */
extern kcg_bool DMI_PlanningAreaVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_Scale_toDisplay */
extern tScale DMI_D_Scale_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_GradientVisible_toDisplay */
extern array_bool_12 DMI_D_GradientVisible_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_PASP_Distances_toDisplay */
extern array_real_4 DMI_D_PASP_Distances_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_PASP_Speeds_toDisplay */
extern array_real_4 DMI_D_PASP_Speeds_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_SPDI_SpeedChangePosition_toDisplay */
extern array_real_10 DMI_D_SPDI_SpeedChangePosition_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_SPDI_SpeedChangeIndex_toDisplay */
extern array_int_10 DMI_D_SPDI_SpeedChangeIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_PASP_IndicationMarker_toDisplay */
extern array_real_1 DMI_D_PASP_IndicationMarker_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay */
extern array_bool_10 DMI_D_SPDI_SpeedChangeSymbolsVisible_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_isAuxiliarMsg_toDisplay */
extern kcg_bool DMI_isAuxiliarMsg_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_Array_mm_toDisplay */
extern array_real_5 DMI_Array_mm_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_Array_hh_toDisplay */
extern array_real_5 DMI_Array_hh_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_PlainText_toDisplay */
extern array_char_30_5 DMI_PlainText_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_levelMenuVisibility_toDisplay */
extern kcg_bool DMI_levelMenuVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ArrayLevelIndex_toDisplay */
extern array_int_12 DMI_ArrayLevelIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_IndexLevel_toDisplay */
extern kcg_int DMI_IndexLevel_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_level_data */
extern DMI_Level_Data_T_DMI_Messages_Bothways_Pkg DMI_level_data;
/* Testbench_Integration::ROOT_Integration::DMI_IndexFixedMsg_toDisplay */
extern array_int_5 DMI_IndexFixedMsg_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SingleMsgAckRequiredVisibility_toDysplay */
extern kcg_bool DMI_SingleMsgAckRequiredVisibility_toDysplay;
/* Testbench_Integration::ROOT_Integration::DMI_InterpolatedDistanceToTarget_toDisplay */
extern kcg_real DMI_InterpolatedDistanceToTarget_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ArrayOfMsgIndex_toDisplay */
extern array_int_5 DMI_ArrayOfMsgIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_iconGroupIndex_toDisplay */
extern kcg_int DMI_iconGroupIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_TrainSpeed_toDisplay */
extern kcg_real DMI_TrainSpeed_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_StatusSymbolVisibility_toDisplay */
extern kcg_bool DMI_StatusSymbolVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_traindataValidWinVisibility_toDisplay */
extern kcg_bool DMI_traindataValidWinVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_Vtarget_permVisibility_toDisplay */
extern kcg_bool DMI_Vtarget_permVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_GradientsStart_toDisplay */
extern array_real_12 DMI_GradientsStart_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainAirtightIndex_toDisplay */
extern kcg_int DMI_trainAirtightIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_yellowBorderC1Area_toDisplay */
extern kcg_bool DMI_yellowBorderC1Area_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitTwo_toDisplay */
extern kcg_real DMI_SpeedDigitTwo_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_DriverID_Display_toDisplay */
extern array_int_9 DMI_DriverID_Display_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_yellowBorderMsg_toDisplay */
extern kcg_bool DMI_yellowBorderMsg_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_Vinterv_Color_toDisplay */
extern kcg_int DMI_Vinterv_Color_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_DistanceToTarget_toDisplay */
extern kcg_real DMI_DistanceToTarget_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ModeSymbol_toDisplay */
extern kcg_int DMI_ModeSymbol_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_modeSymbolAnnouncementIndex_toDisplay */
extern kcg_int DMI_modeSymbolAnnouncementIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ETCS_LevelSymbol_toDisplay */
extern kcg_int DMI_ETCS_LevelSymbol_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ArrayButtonsEnabler_toDisplay */
extern array_int_30 DMI_ArrayButtonsEnabler_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainBrakePerc_toDisplay */
extern kcg_real DMI_trainBrakePerc_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_VreleaseColor_toDisplay */
extern kcg_int DMI_VreleaseColor_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedPermitted_toDisplay */
extern kcg_real DMI_SpeedPermitted_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainCategoryIndex_toDisplay */
extern kcg_int DMI_trainCategoryIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_levelSymbolAnnouncementIndex_toDisplay */
extern kcg_int DMI_levelSymbolAnnouncementIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_TrainDataWindowVisibility_toDisplay */
extern kcg_bool DMI_TrainDataWindowVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_StatusSymbolBrake_toDisplay */
extern kcg_bool DMI_StatusSymbolBrake_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_traindataYesNoIndex_toDisplay */
extern kcg_int DMI_traindataYesNoIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_vtarget_permColor_toDisplay */
extern kcg_int DMI_vtarget_permColor_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_GradientsEnd_toDisplay */
extern array_real_12 DMI_GradientsEnd_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_RBC_status_symbol_toDisplay */
extern kcg_int DMI_RBC_status_symbol_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_TrainRN_Display_toDisplay */
extern array_int_9 DMI_TrainRN_Display_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainLoadingGougeIndex_toDisplay */
extern kcg_int DMI_trainLoadingGougeIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_hourGlassCounter_toDisplay */
extern kcg_real DMI_hourGlassCounter_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitThree_toDisplay */
extern kcg_real DMI_SpeedDigitThree_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_ModeSymbolVisibility_toDisplay */
extern kcg_bool DMI_ModeSymbolVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_closeButtonIndex_toDisplay */
extern kcg_int DMI_closeButtonIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_yellowBorderBrakeSymbol_toDisplay */
extern kcg_bool DMI_yellowBorderBrakeSymbol_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedIntervention_toDisplay */
extern kcg_real DMI_SpeedIntervention_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_LevelSymbolVisibility_toDisplay */
extern kcg_bool DMI_LevelSymbolVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_DistanceToTargetVisible_toDisplay */
extern kcg_bool DMI_DistanceToTargetVisible_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainMaxspeed_toDisplay */
extern kcg_real DMI_trainMaxspeed_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_VtargetColor_toDisplay */
extern kcg_int DMI_VtargetColor_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedRelease_toDisplay */
extern kcg_real DMI_SpeedRelease_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_CloseButtonEnabler_toDisplay */
extern kcg_int DMI_CloseButtonEnabler_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_PointerColor_toDisplay */
extern kcg_int DMI_PointerColor_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainAxleloadIndex_toDisplay */
extern kcg_int DMI_trainAxleloadIndex_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_hourGlassVisibility_toDisplay */
extern kcg_bool DMI_hourGlassVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedDigitOne_toDisplay */
extern kcg_real DMI_SpeedDigitOne_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_DistanceToTargetBarVisibility_toDisplay */
extern kcg_bool DMI_DistanceToTargetBarVisibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_Vinterv_Visibility_toDisplay */
extern kcg_bool DMI_Vinterv_Visibility_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_TrainPosition_toDisplay */
extern kcg_real DMI_TrainPosition_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_GradientsValue_toDisplay */
extern array_real_12 DMI_GradientsValue_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_trainLenght_toDisplay */
extern kcg_real DMI_trainLenght_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_VpermColor_toDisplay */
extern kcg_int DMI_VpermColor_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_SpeedTarget_toDisplay */
extern kcg_real DMI_SpeedTarget_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_window_mask_visibility__toDisplay */
extern array_bool_15 DMI_window_mask_visibility__toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_openDesk_toDisplay */
extern kcg_bool DMI_openDesk_toDisplay;
/* Testbench_Integration::ROOT_Integration::DMI_icons_ack */
extern DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_icons_ack;

#endif /* _ROOT_Integration_Testbench_Integration_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ROOT_Integration_Testbench_Integration.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

