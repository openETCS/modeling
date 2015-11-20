/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RequestAck_Acknowledgement.h"

#ifndef KCG_USER_DEFINED_INIT
void RequestAck_init_Acknowledgement(outC_RequestAck_Acknowledgement *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
  outC->service_brake = kcg_true;
  outC->needsAckFromDriver = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RequestAck_reset_Acknowledgement(outC_RequestAck_Acknowledgement *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Acknowledgement::RequestAck */
void RequestAck_Acknowledgement(
  /* Acknowledgement::RequestAck::isAckNeeded */ kcg_bool isAckNeeded,
  /* Acknowledgement::RequestAck::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::RequestAck::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Acknowledgement::RequestAck::levelAck */ kcg_bool levelAck,
  /* Acknowledgement::RequestAck::IsNewLevel */ kcg_bool IsNewLevel,
  outC_RequestAck_Acknowledgement *outC)
{
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 _10_SM1_fired;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool _9_SM1_reset_nxt;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 _8_SM1_state_nxt;
  /* Acknowledgement::RequestAck::service_brake */
  static kcg_bool _7_service_brake;
  /* Acknowledgement::RequestAck::needsAckFromDriver */
  static kcg_bool _6_needsAckFromDriver;
  /* Acknowledgement::RequestAck::SM1::Waiting::_L2 */
  static kcg_bool _L2_SM1_Waiting;
  /* Acknowledgement::RequestAck::SM1::Waiting::_L1 */
  static kcg_bool _L1_SM1_Waiting;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 _5_SM1_fired;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool _4_SM1_reset_nxt;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 _3_SM1_state_nxt;
  /* Acknowledgement::RequestAck::service_brake */
  static kcg_bool _2_service_brake;
  /* Acknowledgement::RequestAck::needsAckFromDriver */
  static kcg_bool _1_needsAckFromDriver;
  /* Acknowledgement::RequestAck::SM1::LaunchRequest::_L13 */
  static kcg_bool _L13_SM1_LaunchRequest;
  /* Acknowledgement::RequestAck::SM1::LaunchRequest::_L12 */
  static kcg_bool _L12_SM1_LaunchRequest;
  /* Acknowledgement::RequestAck::SM1::LaunchRequest::_L11 */
  static kcg_bool _L11_SM1_LaunchRequest;
  /* Acknowledgement::RequestAck::SM1::LaunchRequest::_L10 */
  static kcg_bool _L10_SM1_LaunchRequest;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 SM1_fired;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool SM1_reset_nxt;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 SM1_state_nxt;
  /* Acknowledgement::RequestAck::service_brake */
  static kcg_bool service_brake;
  /* Acknowledgement::RequestAck::needsAckFromDriver */
  static kcg_bool needsAckFromDriver;
  /* Acknowledgement::RequestAck::SM1::AckReceived::_L2 */
  static kcg_bool _L2_SM1_AckReceived;
  /* Acknowledgement::RequestAck::SM1::AckReceived::_L1 */
  static kcg_bool _L1_SM1_AckReceived;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 _16_SM1_fired_strong;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool _15_SM1_reset_act;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 _14_SM1_state_act;
  /* Acknowledgement::RequestAck::SM1::Waiting */
  static kcg_bool br_1_guard_SM1_Waiting;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 _13_SM1_fired_strong;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool _12_SM1_reset_act;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 _11_SM1_state_act;
  /* Acknowledgement::RequestAck::SM1::LaunchRequest */
  static kcg_bool br_2_guard_SM1_LaunchRequest;
  /* Acknowledgement::RequestAck::SM1::LaunchRequest */
  static kcg_bool br_1_guard_SM1_LaunchRequest;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 SM1_fired_strong;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool SM1_reset_act;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 SM1_state_act;
  /* Acknowledgement::RequestAck::SM1::AckReceived */
  static kcg_bool br_1_guard_SM1_AckReceived;
  static M_LEVEL noname;
  static T_TransitionType_Level_And_Mode_Types_Pkg _17_noname;
  static NID_LRBG _18_noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _19_noname;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 SM1_state_sel;
  /* Acknowledgement::RequestAck::SM1 */
  static _46_SSM_ST_SM1 _22_SM1_state_act;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool SM1_reset_sel;
  /* Acknowledgement::RequestAck::SM1 */
  static kcg_bool SM1_reset_prv;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 _21_SM1_fired_strong;
  /* Acknowledgement::RequestAck::SM1 */
  static _48_SSM_TR_SM1 _20_SM1_fired;
  /* Acknowledgement::RequestAck::Loc_MaxSafeFrontEnd */
  static Location_T_Obu_BasicTypes_Pkg Loc_MaxSafeFrontEnd;
  /* Acknowledgement::RequestAck::Loc_Position */
  static M_POSITION Loc_Position;
  /* Acknowledgement::RequestAck::Loc_Immediate */
  static kcg_bool Loc_Immediate;
  /* Acknowledgement::RequestAck::Loc_AckLength */
  static Location_T_Obu_BasicTypes_Pkg Loc_AckLength;
  /* Acknowledgement::RequestAck::Loc_PositionInAckArea */
  static kcg_bool Loc_PositionInAckArea;
  /* Acknowledgement::RequestAck::Loc_isSet */
  static kcg_bool Loc_isSet;
  /* Acknowledgement::RequestAck::_L14 */
  static trainPosition_T_TrainPosition_Types_Pck _L14;
  /* Acknowledgement::RequestAck::_L13 */
  static Location_T_Obu_BasicTypes_Pkg _L13;
  /* Acknowledgement::RequestAck::_L17 */
  static M_LEVEL _L17;
  /* Acknowledgement::RequestAck::_L18 */
  static M_POSITION _L18;
  /* Acknowledgement::RequestAck::_L19 */
  static T_TransitionType_Level_And_Mode_Types_Pkg _L19;
  /* Acknowledgement::RequestAck::_L20 */
  static kcg_bool _L20;
  /* Acknowledgement::RequestAck::_L21 */
  static Location_T_Obu_BasicTypes_Pkg _L21;
  /* Acknowledgement::RequestAck::_L16 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L16;
  /* Acknowledgement::RequestAck::_L22 */
  static kcg_bool _L22;
  /* Acknowledgement::RequestAck::_L23 */
  static M_POSITION _L23;
  /* Acknowledgement::RequestAck::_L24 */
  static Location_T_Obu_BasicTypes_Pkg _L24;
  /* Acknowledgement::RequestAck::_L25 */
  static Location_T_Obu_BasicTypes_Pkg _L25;
  /* Acknowledgement::RequestAck::_L29 */
  static kcg_bool _L29;
  /* Acknowledgement::RequestAck::_L28 */
  static T_LevelTansitionInfo_Level_And_Mode_Types_Pkg _L28;
  /* Acknowledgement::RequestAck::_L27 */
  static NID_LRBG _L27;
  /* Acknowledgement::RequestAck::_L26 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L26;
  
  /* init_SM1 */ if (outC->init) {
    SM1_state_sel = SSM_st_Waiting_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  /* init_SM1 */ if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L14, trainPosition);
  _L13 = _L14.maxSafeFrontEndPostion;
  Loc_MaxSafeFrontEnd = _L13;
  _L24 = Loc_MaxSafeFrontEnd;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L16,
    selected_level_transition);
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &_L28,
    &_L16.transition);
  _L18 = _L28.position;
  Loc_Position = _L18;
  _L23 = Loc_Position;
  _L21 = _L28.AckLength;
  Loc_AckLength = _L21;
  _L25 = Loc_AckLength;
  _L22 = /* 1 */ Position_In_Ack_Area_Acknowledgement(_L24, _L23, _L25);
  Loc_PositionInAckArea = _L22;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_LaunchRequest_SM1 :
      br_1_guard_SM1_LaunchRequest = (levelAck & !Loc_PositionInAckArea) |
        !isAckNeeded;
      br_2_guard_SM1_LaunchRequest = levelAck & Loc_PositionInAckArea;
      if (br_1_guard_SM1_LaunchRequest) {
        _11_SM1_state_act = SSM_st_Waiting_SM1;
      }
      else if (br_2_guard_SM1_LaunchRequest) {
        _11_SM1_state_act = SSM_st_AckReceived_SM1;
      }
      else {
        _11_SM1_state_act = SSM_st_LaunchRequest_SM1;
      }
      break;
    case SSM_st_AckReceived_SM1 :
      br_1_guard_SM1_AckReceived = !Loc_PositionInAckArea | !isAckNeeded;
      if (br_1_guard_SM1_AckReceived) {
        SM1_state_act = SSM_st_Waiting_SM1;
      }
      else {
        SM1_state_act = SSM_st_AckReceived_SM1;
      }
      break;
    
  }
  _L29 = _L16.is_set;
  Loc_isSet = _L29;
  /* sel_SM1 */ switch (SM1_state_sel) {
    case SSM_st_Waiting_SM1 :
      br_1_guard_SM1_Waiting = isAckNeeded & Loc_isSet;
      if (br_1_guard_SM1_Waiting) {
        _14_SM1_state_act = SSM_st_LaunchRequest_SM1;
      }
      else {
        _14_SM1_state_act = SSM_st_Waiting_SM1;
      }
      _22_SM1_state_act = _14_SM1_state_act;
      _15_SM1_reset_act = br_1_guard_SM1_Waiting;
      outC->SM1_reset_act = _15_SM1_reset_act;
      if (br_1_guard_SM1_Waiting) {
        _16_SM1_fired_strong = SSM_TR_Waiting_1_SM1;
      }
      else {
        _16_SM1_fired_strong = _47_SSM_TR_no_trans_SM1;
      }
      _21_SM1_fired_strong = _16_SM1_fired_strong;
      break;
    case SSM_st_LaunchRequest_SM1 :
      _22_SM1_state_act = _11_SM1_state_act;
      if (br_1_guard_SM1_LaunchRequest) {
        _12_SM1_reset_act = kcg_true;
      }
      else {
        _12_SM1_reset_act = br_2_guard_SM1_LaunchRequest;
      }
      outC->SM1_reset_act = _12_SM1_reset_act;
      if (br_1_guard_SM1_LaunchRequest) {
        _13_SM1_fired_strong = SSM_TR_LaunchRequest_1_SM1;
      }
      else if (br_2_guard_SM1_LaunchRequest) {
        _13_SM1_fired_strong = SSM_TR_LaunchRequest_2_SM1;
      }
      else {
        _13_SM1_fired_strong = _47_SSM_TR_no_trans_SM1;
      }
      _21_SM1_fired_strong = _13_SM1_fired_strong;
      break;
    case SSM_st_AckReceived_SM1 :
      _22_SM1_state_act = SM1_state_act;
      SM1_reset_act = br_1_guard_SM1_AckReceived;
      outC->SM1_reset_act = SM1_reset_act;
      if (br_1_guard_SM1_AckReceived) {
        SM1_fired_strong = SSM_TR_AckReceived_1_SM1;
      }
      else {
        SM1_fired_strong = _47_SSM_TR_no_trans_SM1;
      }
      _21_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  /* act_SM1 */ switch (_22_SM1_state_act) {
    case SSM_st_AckReceived_SM1 :
      _L1_SM1_AckReceived = kcg_false;
      needsAckFromDriver = _L1_SM1_AckReceived;
      break;
    
  }
  _L20 = _L28.immediateAck;
  Loc_Immediate = _L20;
  /* act_SM1 */ switch (_22_SM1_state_act) {
    case SSM_st_Waiting_SM1 :
      _L1_SM1_Waiting = kcg_false;
      _6_needsAckFromDriver = _L1_SM1_Waiting;
      outC->needsAckFromDriver = _6_needsAckFromDriver;
      _L2_SM1_Waiting = kcg_false;
      _7_service_brake = _L2_SM1_Waiting;
      outC->service_brake = _7_service_brake;
      _8_SM1_state_nxt = SSM_st_Waiting_SM1;
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      _9_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      _10_SM1_fired = _21_SM1_fired_strong;
      _20_SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_LaunchRequest_SM1 :
      _L11_SM1_LaunchRequest = Loc_Immediate;
      _L12_SM1_LaunchRequest = Loc_PositionInAckArea;
      _L10_SM1_LaunchRequest = _L11_SM1_LaunchRequest | _L12_SM1_LaunchRequest;
      _1_needsAckFromDriver = _L10_SM1_LaunchRequest;
      outC->needsAckFromDriver = _1_needsAckFromDriver;
      _L13_SM1_LaunchRequest = IsNewLevel;
      _2_service_brake = _L13_SM1_LaunchRequest;
      outC->service_brake = _2_service_brake;
      _3_SM1_state_nxt = SSM_st_LaunchRequest_SM1;
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      _4_SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      _5_SM1_fired = _21_SM1_fired_strong;
      _20_SM1_fired = _5_SM1_fired;
      break;
    case SSM_st_AckReceived_SM1 :
      outC->needsAckFromDriver = needsAckFromDriver;
      _L2_SM1_AckReceived = kcg_false;
      service_brake = _L2_SM1_AckReceived;
      outC->service_brake = service_brake;
      SM1_state_nxt = SSM_st_AckReceived_SM1;
      outC->SM1_state_nxt = SM1_state_nxt;
      SM1_reset_nxt = kcg_false;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      SM1_fired = _21_SM1_fired_strong;
      _20_SM1_fired = SM1_fired;
      break;
    
  }
  _L17 = _L28.level;
  noname = _L17;
  _L19 = _L28.transitionType;
  _17_noname = _L19;
  _L26 = _L16.referenceLocation;
  _L27 = _L16.LRBG;
  _18_noname = _L27;
  _19_noname = _L26;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RequestAck_Acknowledgement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

