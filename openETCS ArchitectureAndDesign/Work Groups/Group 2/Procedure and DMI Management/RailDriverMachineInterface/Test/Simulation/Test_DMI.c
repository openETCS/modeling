/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Test_DMI.h"

void Test_DMI_init(outC_Test_DMI *outC)
{
  int i;
  
  outC->_L44 = kcg_true;
  for (i = 0; i < 12; i++) {
    outC->_L39[i] = kcg_true;
  }
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = 0.0;
  outC->_L34 = kcg_true;
  outC->_L33 = 0.0;
  for (i = 0; i < 12; i++) {
    outC->_L26[i] = kcg_true;
  }
  outC->_L32 = 0.0;
  outC->_L21 = 0.0;
  outC->_L25 = 0.0;
  outC->_L23 = 0.0;
  outC->_L22 = 0.0;
  for (i = 0; i < 12; i++) {
    outC->_L19[i] = 0.0;
  }
  for (i = 0; i < 12; i++) {
    outC->_L18[i] = 0.0;
  }
  for (i = 0; i < 12; i++) {
    outC->_L17[i] = 0.0;
  }
  outC->_L12 = kcg_true;
  outC->_L10 = 0.0;
  outC->_L7 = 0.0;
  outC->_L8 = 0.0;
  outC->_L9 = 0.0;
  outC->_L6 = 0.0;
  outC->_L4 = 0.0;
  outC->_L3 = 0.0;
  outC->_L2 = 0.0;
  outC->localTrainPosition = 0.0;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_VisibleState_SM1;
  outC->SM1_state_sel = SSM_st_VisibleState_SM1;
  outC->ShowDistanceToTarget_fired = SSM_TR_no_trans_ShowDistanceToTarget;
  outC->ShowDistanceToTarget_fired_strong =
    SSM_TR_no_trans_ShowDistanceToTarget;
  outC->ShowDistanceToTarget_state_act =
    SSM_st_VisibleState_ShowDistanceToTarget;
  outC->ShowDistanceToTarget_state_sel =
    SSM_st_VisibleState_ShowDistanceToTarget;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_ShowDistanceToTarget_InvisibleState = kcg_true;
  outC->_L1_ShowDistanceToTarget_VisibleState = kcg_true;
  outC->_L12_PointerColor = 0;
  outC->_L13_PointerColor = 0;
  outC->else_clock_PointerColor = kcg_true;
  outC->_L1_PointerColor = 0;
  outC->_L1_SM1_InvisibleState = kcg_true;
  outC->_L1_SM1_VisibleState = kcg_true;
  for (i = 0; i < 1; i++) {
    outC->_L1_IfBlock1[i] = 0;
  }
  outC->PointerColor_clock = kcg_true;
  outC->init = kcg_true;
  outC->isKey1 = kcg_true;
  outC->SM1_reset_nxt = kcg_true;
  outC->SM1_reset_act = kcg_true;
  outC->SM1_state_nxt = SSM_st_VisibleState_SM1;
  outC->ShowDistanceToTarget_reset_nxt = kcg_true;
  outC->ShowDistanceToTarget_reset_act = kcg_true;
  outC->ShowDistanceToTarget_state_nxt =
    SSM_st_VisibleState_ShowDistanceToTarget;
  for (i = 0; i < 1; i++) {
    outC->digit1_view[i] = 0;
  }
  outC->showlala = kcg_true;
  outC->PointerColor = 0;
  outC->StatusSymbolBrake = kcg_true;
  outC->InterpolatedDistanceToTarget = 0.0;
  outC->DistanceToTargetVisible = kcg_true;
  outC->DistanceToTarget = 0.0;
  for (i = 0; i < 12; i++) {
    outC->GradientsValue[i] = 0.0;
  }
  for (i = 0; i < 12; i++) {
    outC->GradientsEnd[i] = 0.0;
  }
  for (i = 0; i < 12; i++) {
    outC->GradientsStart[i] = 0.0;
  }
  outC->SpeedRelease = 0.0;
  outC->SpeedPermitted = 0.0;
  outC->SpeedTarget = 0.0;
  outC->SpeedDigitThree = 0.0;
  outC->SpeedDigitTwo = 0.0;
  outC->SpeedDigitOne = 0.0;
  outC->TrainSpeed = 0.0;
  outC->TrainPosition = 0.0;
  Train_init(&outC->Context_1);
  CalculateDistanceToTarget_init(&outC->Context_2);
  SpeedToDigit_init(&outC->_1_Context_1);
}


void Test_DMI_reset(outC_Test_DMI *outC)
{
  outC->init = kcg_true;
  /* 1 */ SpeedToDigit_reset(&outC->_1_Context_1);
  /* 2 */ CalculateDistanceToTarget_reset(&outC->Context_2);
  /* 1 */ Train_reset(&outC->Context_1);
}

/* Test_DMI */
void Test_DMI(inC_Test_DMI *inC, outC_Test_DMI *outC)
{
  /* Test_DMI::digit1_view */ array_int_1 _1_digit1_view;
  /* Test_DMI::digit1_view */ array_int_1 digit1_view;
  /* Test_DMI::SM1 */ SSM_TR_SM1 _5_SM1_fired;
  /* Test_DMI::SM1 */ kcg_bool _4_SM1_reset_nxt;
  /* Test_DMI::SM1 */ SSM_ST_SM1 _3_SM1_state_nxt;
  /* Test_DMI::showlala */ kcg_bool _2_showlala;
  /* Test_DMI::SM1 */ SSM_TR_SM1 SM1_fired;
  /* Test_DMI::SM1 */ kcg_bool SM1_reset_nxt;
  /* Test_DMI::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* Test_DMI::showlala */ kcg_bool showlala;
  /* Test_DMI::SM1 */ SSM_TR_SM1 _8_SM1_fired_strong;
  /* Test_DMI::SM1 */ kcg_bool _7_SM1_reset_act;
  /* Test_DMI::SM1 */ SSM_ST_SM1 _6_SM1_state_act;
  /* Test_DMI::SM1::VisibleState */ kcg_bool br_1_guard_SM1_VisibleState;
  /* Test_DMI::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* Test_DMI::SM1 */ kcg_bool SM1_reset_act;
  /* Test_DMI::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* Test_DMI::SM1::InvisibleState */ kcg_bool br_1_guard_SM1_InvisibleState;
  /* Test_DMI::PointerColor */ kcg_int _9_PointerColor;
  /* Test_DMI::PointerColor */ kcg_int PointerColor;
  /* Test_DMI::PointerColor */ kcg_int _10_PointerColor;
  /* Test_DMI::PointerColor */ kcg_int _11_PointerColor;
  /* Test_DMI::ShowDistanceToTarget */ SSM_TR_ShowDistanceToTarget _15_ShowDistanceToTarget_fired;
  /* Test_DMI::ShowDistanceToTarget */ kcg_bool _14_ShowDistanceToTarget_reset_nxt;
  /* Test_DMI::ShowDistanceToTarget */ SSM_ST_ShowDistanceToTarget _13_ShowDistanceToTarget_state_nxt;
  /* Test_DMI::DistanceToTargetVisible */ kcg_bool _12_DistanceToTargetVisible;
  /* Test_DMI::ShowDistanceToTarget */ SSM_TR_ShowDistanceToTarget ShowDistanceToTarget_fired;
  /* Test_DMI::ShowDistanceToTarget */ kcg_bool ShowDistanceToTarget_reset_nxt;
  /* Test_DMI::ShowDistanceToTarget */ SSM_ST_ShowDistanceToTarget ShowDistanceToTarget_state_nxt;
  /* Test_DMI::DistanceToTargetVisible */ kcg_bool DistanceToTargetVisible;
  /* Test_DMI::ShowDistanceToTarget */ SSM_TR_ShowDistanceToTarget _18_ShowDistanceToTarget_fired_strong;
  /* Test_DMI::ShowDistanceToTarget */ kcg_bool _17_ShowDistanceToTarget_reset_act;
  /* Test_DMI::ShowDistanceToTarget */ SSM_ST_ShowDistanceToTarget _16_ShowDistanceToTarget_state_act;
  /* Test_DMI::ShowDistanceToTarget::VisibleState */ kcg_bool _19_br_1_guard_ShowDistanceToTarget_VisibleState;
  /* Test_DMI::ShowDistanceToTarget */ SSM_TR_ShowDistanceToTarget ShowDistanceToTarget_fired_strong;
  /* Test_DMI::ShowDistanceToTarget */ kcg_bool ShowDistanceToTarget_reset_act;
  /* Test_DMI::ShowDistanceToTarget */ SSM_ST_ShowDistanceToTarget ShowDistanceToTarget_state_act;
  /* Test_DMI::ShowDistanceToTarget::InvisibleState */ kcg_bool br_1_guard_ShowDistanceToTarget_InvisibleState;
  array_bool_12 noname;
  /* Test_DMI::isKey1 */ kcg_bool last_isKey1;
  /* Test_DMI::digit1_view */ array_int_1 last_digit1_view;
  /* Test_DMI::ShowDistanceToTarget */ kcg_bool ShowDistanceToTarget_reset_sel;
  /* Test_DMI::ShowDistanceToTarget */ kcg_bool ShowDistanceToTarget_reset_prv;
  /* Test_DMI::SM1 */ kcg_bool SM1_reset_sel;
  /* Test_DMI::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init) {
    last_isKey1 = kcg_false;
  }
  else {
    last_isKey1 = outC->isKey1;
  }
  if (outC->init) {
    last_digit1_view[0] = 1;
  }
  else {
    kcg_copy_array_int_1(&last_digit1_view, &outC->digit1_view);
  }
  kcg_copy_array_bool_12(&outC->_L39, &inC->arraykey);
  outC->_L44 = outC->_L39[0];
  outC->_L37 = inC->MousePressed;
  outC->_L36 = outC->_L37 & outC->_L44;
  outC->isKey1 = outC->_L36;
  outC->IfBlock1_clock = outC->isKey1;
  if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1[0] = 1;
    kcg_copy_array_int_1(&_1_digit1_view, &outC->_L1_IfBlock1);
    kcg_copy_array_int_1(&outC->digit1_view, &_1_digit1_view);
  }
  else {
    kcg_copy_array_int_1(&digit1_view, &last_digit1_view);
    kcg_copy_array_int_1(&outC->digit1_view, &digit1_view);
  }
  if (outC->init) {
    outC->SM1_state_sel = SSM_st_InvisibleState_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_VisibleState_SM1 :
      br_1_guard_SM1_VisibleState = inC->MousePressed & inC->lala;
      if (br_1_guard_SM1_VisibleState) {
        _6_SM1_state_act = SSM_st_InvisibleState_SM1;
      }
      else {
        _6_SM1_state_act = SSM_st_VisibleState_SM1;
      }
      outC->SM1_state_act = _6_SM1_state_act;
      if (br_1_guard_SM1_VisibleState) {
        _8_SM1_fired_strong = SSM_TR_VisibleState_1_SM1;
      }
      else {
        _8_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _8_SM1_fired_strong;
      break;
    case SSM_st_InvisibleState_SM1 :
      br_1_guard_SM1_InvisibleState = inC->MousePressed & inC->lala;
      if (br_1_guard_SM1_InvisibleState) {
        SM1_state_act = SSM_st_VisibleState_SM1;
      }
      else {
        SM1_state_act = SSM_st_InvisibleState_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      if (br_1_guard_SM1_InvisibleState) {
        SM1_fired_strong = SSM_TR_InvisibleState_1_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_VisibleState_SM1 :
      _5_SM1_fired = outC->SM1_fired_strong;
      _4_SM1_reset_nxt = kcg_false;
      _3_SM1_state_nxt = SSM_st_VisibleState_SM1;
      outC->_L1_SM1_VisibleState = kcg_true;
      _2_showlala = outC->_L1_SM1_VisibleState;
      outC->SM1_fired = _5_SM1_fired;
      break;
    case SSM_st_InvisibleState_SM1 :
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_InvisibleState_SM1;
      outC->_L1_SM1_InvisibleState = kcg_false;
      showlala = outC->_L1_SM1_InvisibleState;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_VisibleState_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt;
      outC->SM1_state_nxt = _3_SM1_state_nxt;
      outC->showlala = _2_showlala;
      break;
    case SSM_st_InvisibleState_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      outC->showlala = showlala;
      break;
    
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_VisibleState_SM1 :
      _7_SM1_reset_act = br_1_guard_SM1_VisibleState;
      break;
    case SSM_st_InvisibleState_SM1 :
      SM1_reset_act = br_1_guard_SM1_InvisibleState;
      break;
    
  }
  if (outC->init) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_VisibleState_SM1 :
      outC->SM1_reset_act = _7_SM1_reset_act;
      break;
    case SSM_st_InvisibleState_SM1 :
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  outC->_L10 = inC->RP_SpeedTarget;
  outC->_L32 = inC->Brake;
  outC->_L12 = kcg_false;
  /* 1 */ Train(outC->_L10, outC->_L32, outC->_L12, &outC->Context_1);
  outC->localTrainPosition = outC->Context_1.TrainPosition;
  outC->_L6 = outC->Context_1.TrainSpeed;
  outC->TrainSpeed = outC->_L6;
  outC->_L3 = inC->RP_SpeedPermitted;
  outC->SpeedPermitted = outC->_L3;
  outC->PointerColor_clock = outC->TrainSpeed > outC->SpeedPermitted;
  outC->_L4 = inC->RP_SpeedRelease;
  outC->SpeedRelease = outC->_L4;
  if (outC->PointerColor_clock) {
    outC->_L1_PointerColor = 10;
    _9_PointerColor = outC->_L1_PointerColor;
    outC->PointerColor = _9_PointerColor;
  }
  else {
    outC->else_clock_PointerColor = outC->TrainSpeed > outC->SpeedRelease;
    if (outC->else_clock_PointerColor) {
      outC->_L12_PointerColor = 8;
      _11_PointerColor = outC->_L12_PointerColor;
      PointerColor = _11_PointerColor;
    }
    else {
      outC->_L13_PointerColor = 1;
      _10_PointerColor = outC->_L13_PointerColor;
      PointerColor = _10_PointerColor;
    }
    outC->PointerColor = PointerColor;
  }
  outC->_L35 = 0.0;
  outC->_L33 = inC->Brake;
  outC->_L34 = outC->_L33 > outC->_L35;
  outC->StatusSymbolBrake = outC->_L34;
  kcg_copy_array_bool_12(&outC->_L26, &inC->VisibleGradients);
  kcg_copy_array_bool_12(&noname, &outC->_L26);
  outC->_L21 = outC->localTrainPosition;
  outC->_L23 = 4000.0;
  outC->_L22 = outC->_L23 - outC->_L21;
  outC->DistanceToTarget = outC->_L22;
  /* 2 */ CalculateDistanceToTarget(outC->_L22, &outC->Context_2);
  outC->_L25 = outC->Context_2.InterpolatedDistanceToTarget;
  if (outC->init) {
    outC->ShowDistanceToTarget_state_sel =
      SSM_st_VisibleState_ShowDistanceToTarget;
  }
  else {
    outC->ShowDistanceToTarget_state_sel = outC->ShowDistanceToTarget_state_nxt;
  }
  switch (outC->ShowDistanceToTarget_state_sel) {
    case SSM_st_VisibleState_ShowDistanceToTarget :
      _19_br_1_guard_ShowDistanceToTarget_VisibleState = inC->MousePressed &
        (inC->OverA | inC->insideButton);
      if (_19_br_1_guard_ShowDistanceToTarget_VisibleState) {
        _16_ShowDistanceToTarget_state_act =
          SSM_st_InvisibleState_ShowDistanceToTarget;
      }
      else {
        _16_ShowDistanceToTarget_state_act =
          SSM_st_VisibleState_ShowDistanceToTarget;
      }
      outC->ShowDistanceToTarget_state_act = _16_ShowDistanceToTarget_state_act;
      if (_19_br_1_guard_ShowDistanceToTarget_VisibleState) {
        _18_ShowDistanceToTarget_fired_strong =
          SSM_TR_VisibleState_1_ShowDistanceToTarget;
      }
      else {
        _18_ShowDistanceToTarget_fired_strong =
          SSM_TR_no_trans_ShowDistanceToTarget;
      }
      outC->ShowDistanceToTarget_fired_strong =
        _18_ShowDistanceToTarget_fired_strong;
      break;
    case SSM_st_InvisibleState_ShowDistanceToTarget :
      br_1_guard_ShowDistanceToTarget_InvisibleState = inC->MousePressed &
        (inC->OverA | inC->insideButton);
      if (br_1_guard_ShowDistanceToTarget_InvisibleState) {
        ShowDistanceToTarget_state_act =
          SSM_st_VisibleState_ShowDistanceToTarget;
      }
      else {
        ShowDistanceToTarget_state_act =
          SSM_st_InvisibleState_ShowDistanceToTarget;
      }
      outC->ShowDistanceToTarget_state_act = ShowDistanceToTarget_state_act;
      if (br_1_guard_ShowDistanceToTarget_InvisibleState) {
        ShowDistanceToTarget_fired_strong =
          SSM_TR_InvisibleState_1_ShowDistanceToTarget;
      }
      else {
        ShowDistanceToTarget_fired_strong =
          SSM_TR_no_trans_ShowDistanceToTarget;
      }
      outC->ShowDistanceToTarget_fired_strong =
        ShowDistanceToTarget_fired_strong;
      break;
    
  }
  switch (outC->ShowDistanceToTarget_state_act) {
    case SSM_st_VisibleState_ShowDistanceToTarget :
      _15_ShowDistanceToTarget_fired = outC->ShowDistanceToTarget_fired_strong;
      _14_ShowDistanceToTarget_reset_nxt = kcg_false;
      _13_ShowDistanceToTarget_state_nxt =
        SSM_st_VisibleState_ShowDistanceToTarget;
      outC->_L1_ShowDistanceToTarget_VisibleState = kcg_true;
      _12_DistanceToTargetVisible = outC->_L1_ShowDistanceToTarget_VisibleState;
      outC->ShowDistanceToTarget_fired = _15_ShowDistanceToTarget_fired;
      break;
    case SSM_st_InvisibleState_ShowDistanceToTarget :
      ShowDistanceToTarget_fired = outC->ShowDistanceToTarget_fired_strong;
      ShowDistanceToTarget_reset_nxt = kcg_false;
      ShowDistanceToTarget_state_nxt =
        SSM_st_InvisibleState_ShowDistanceToTarget;
      outC->_L1_ShowDistanceToTarget_InvisibleState = kcg_false;
      DistanceToTargetVisible = outC->_L1_ShowDistanceToTarget_InvisibleState;
      outC->ShowDistanceToTarget_fired = ShowDistanceToTarget_fired;
      break;
    
  }
  if (outC->init) {
    ShowDistanceToTarget_reset_sel = kcg_false;
  }
  else {
    ShowDistanceToTarget_reset_sel = outC->ShowDistanceToTarget_reset_nxt;
  }
  switch (outC->ShowDistanceToTarget_state_act) {
    case SSM_st_VisibleState_ShowDistanceToTarget :
      outC->ShowDistanceToTarget_reset_nxt = _14_ShowDistanceToTarget_reset_nxt;
      outC->ShowDistanceToTarget_state_nxt = _13_ShowDistanceToTarget_state_nxt;
      outC->DistanceToTargetVisible = _12_DistanceToTargetVisible;
      break;
    case SSM_st_InvisibleState_ShowDistanceToTarget :
      outC->ShowDistanceToTarget_reset_nxt = ShowDistanceToTarget_reset_nxt;
      outC->ShowDistanceToTarget_state_nxt = ShowDistanceToTarget_state_nxt;
      outC->DistanceToTargetVisible = DistanceToTargetVisible;
      break;
    
  }
  switch (outC->ShowDistanceToTarget_state_sel) {
    case SSM_st_VisibleState_ShowDistanceToTarget :
      _17_ShowDistanceToTarget_reset_act =
        _19_br_1_guard_ShowDistanceToTarget_VisibleState;
      break;
    case SSM_st_InvisibleState_ShowDistanceToTarget :
      ShowDistanceToTarget_reset_act =
        br_1_guard_ShowDistanceToTarget_InvisibleState;
      break;
    
  }
  if (outC->init) {
    ShowDistanceToTarget_reset_prv = kcg_false;
  }
  else {
    ShowDistanceToTarget_reset_prv = outC->ShowDistanceToTarget_reset_act;
  }
  switch (outC->ShowDistanceToTarget_state_sel) {
    case SSM_st_VisibleState_ShowDistanceToTarget :
      outC->ShowDistanceToTarget_reset_act = _17_ShowDistanceToTarget_reset_act;
      break;
    case SSM_st_InvisibleState_ShowDistanceToTarget :
      outC->ShowDistanceToTarget_reset_act = ShowDistanceToTarget_reset_act;
      break;
    
  }
  outC->InterpolatedDistanceToTarget = outC->_L25;
  kcg_copy_array_real_12(&outC->_L19, (array_real_12 *) &GRADIENTSVALUE);
  kcg_copy_array_real_12(&outC->_L18, (array_real_12 *) &GRADIENTSEND);
  kcg_copy_array_real_12(&outC->_L17, (array_real_12 *) &GRADIENTSSTART);
  kcg_copy_array_real_12(&outC->GradientsValue, &outC->_L19);
  kcg_copy_array_real_12(&outC->GradientsEnd, &outC->_L18);
  kcg_copy_array_real_12(&outC->GradientsStart, &outC->_L17);
  /* 1 */ SpeedToDigit(outC->_L6, &outC->_1_Context_1);
  outC->_L7 = outC->_1_Context_1.SpeedDigitOne;
  outC->_L8 = outC->_1_Context_1.SpeedDigitTwo;
  outC->_L9 = outC->_1_Context_1.SpeedDigitThree;
  outC->_L2 = inC->RP_SpeedTarget;
  outC->SpeedTarget = outC->_L2;
  outC->SpeedDigitThree = outC->_L9;
  outC->SpeedDigitTwo = outC->_L8;
  outC->SpeedDigitOne = outC->_L7;
  outC->TrainPosition = outC->localTrainPosition;
  outC->init = kcg_false;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Test_DMI.c
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

