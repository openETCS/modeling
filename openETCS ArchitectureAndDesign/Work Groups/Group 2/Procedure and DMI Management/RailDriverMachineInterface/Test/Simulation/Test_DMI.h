/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */
#ifndef _Test_DMI_H_
#define _Test_DMI_H_

#include "kcg_types.h"
#include "Train.h"
#include "SpeedToDigit.h"
#include "CalculateDistanceToTarget.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_real /* Test_DMI::RP_SpeedTarget */ RP_SpeedTarget;
  kcg_real /* Test_DMI::RP_SpeedPermitted */ RP_SpeedPermitted;
  kcg_real /* Test_DMI::RP_SpeedRelease */ RP_SpeedRelease;
  kcg_bool /* Test_DMI::OverA */ OverA;
  kcg_bool /* Test_DMI::MousePressed */ MousePressed;
  array_bool_12 /* Test_DMI::VisibleGradients */ VisibleGradients;
  kcg_real /* Test_DMI::Brake */ Brake;
  kcg_bool /* Test_DMI::lala */ lala;
  kcg_bool /* Test_DMI::insideButton */ insideButton;
  array_bool_12 /* Test_DMI::arraykey */ arraykey;
} inC_Test_DMI;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Test_DMI::TrainPosition */ TrainPosition;
  kcg_real /* Test_DMI::TrainSpeed */ TrainSpeed;
  kcg_real /* Test_DMI::SpeedDigitOne */ SpeedDigitOne;
  kcg_real /* Test_DMI::SpeedDigitTwo */ SpeedDigitTwo;
  kcg_real /* Test_DMI::SpeedDigitThree */ SpeedDigitThree;
  kcg_real /* Test_DMI::SpeedTarget */ SpeedTarget;
  kcg_real /* Test_DMI::SpeedPermitted */ SpeedPermitted;
  kcg_real /* Test_DMI::SpeedRelease */ SpeedRelease;
  array_real_12 /* Test_DMI::GradientsStart */ GradientsStart;
  array_real_12 /* Test_DMI::GradientsEnd */ GradientsEnd;
  array_real_12 /* Test_DMI::GradientsValue */ GradientsValue;
  kcg_real /* Test_DMI::DistanceToTarget */ DistanceToTarget;
  kcg_bool /* Test_DMI::DistanceToTargetVisible */ DistanceToTargetVisible;
  kcg_real /* Test_DMI::InterpolatedDistanceToTarget */ InterpolatedDistanceToTarget;
  kcg_bool /* Test_DMI::StatusSymbolBrake */ StatusSymbolBrake;
  kcg_int /* Test_DMI::PointerColor */ PointerColor;
  kcg_bool /* Test_DMI::showlala */ showlala;
  array_int_1 /* Test_DMI::digit1_view */ digit1_view;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_ShowDistanceToTarget /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_state_nxt;
  kcg_bool /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_reset_act;
  kcg_bool /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_reset_nxt;
  SSM_ST_SM1 /* Test_DMI::SM1 */ SM1_state_nxt;
  kcg_bool /* Test_DMI::SM1 */ SM1_reset_act;
  kcg_bool /* Test_DMI::SM1 */ SM1_reset_nxt;
  kcg_bool /* Test_DMI::isKey1 */ isKey1;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SpeedToDigit /* 1 */ _1_Context_1;
  outC_CalculateDistanceToTarget /* 2 */ Context_2;
  outC_Train /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Test_DMI::PointerColor */ PointerColor_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_1 /* Test_DMI::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* Test_DMI::SM1::VisibleState::_L1 */ _L1_SM1_VisibleState;
  kcg_bool /* Test_DMI::SM1::InvisibleState::_L1 */ _L1_SM1_InvisibleState;
  kcg_int /* Test_DMI::PointerColor::then::_L1 */ _L1_PointerColor;
  kcg_bool /* Test_DMI::PointerColor::else */ else_clock_PointerColor;
  kcg_int /* Test_DMI::PointerColor::else::else::_L1 */ _L13_PointerColor;
  kcg_int /* Test_DMI::PointerColor::else::then::_L1 */ _L12_PointerColor;
  kcg_bool /* Test_DMI::ShowDistanceToTarget::VisibleState::_L1 */ _L1_ShowDistanceToTarget_VisibleState;
  kcg_bool /* Test_DMI::ShowDistanceToTarget::InvisibleState::_L1 */ _L1_ShowDistanceToTarget_InvisibleState;
  kcg_bool /* Test_DMI::IfBlock1 */ IfBlock1_clock;
  SSM_ST_ShowDistanceToTarget /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_state_sel;
  SSM_ST_ShowDistanceToTarget /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_state_act;
  SSM_TR_ShowDistanceToTarget /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_fired_strong;
  SSM_TR_ShowDistanceToTarget /* Test_DMI::ShowDistanceToTarget */ ShowDistanceToTarget_fired;
  SSM_ST_SM1 /* Test_DMI::SM1 */ SM1_state_sel;
  SSM_ST_SM1 /* Test_DMI::SM1 */ SM1_state_act;
  SSM_TR_SM1 /* Test_DMI::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* Test_DMI::SM1 */ SM1_fired;
  kcg_real /* Test_DMI::localTrainPosition */ localTrainPosition;
  kcg_real /* Test_DMI::_L2 */ _L2;
  kcg_real /* Test_DMI::_L3 */ _L3;
  kcg_real /* Test_DMI::_L4 */ _L4;
  kcg_real /* Test_DMI::_L6 */ _L6;
  kcg_real /* Test_DMI::_L9 */ _L9;
  kcg_real /* Test_DMI::_L8 */ _L8;
  kcg_real /* Test_DMI::_L7 */ _L7;
  kcg_real /* Test_DMI::_L10 */ _L10;
  kcg_bool /* Test_DMI::_L12 */ _L12;
  array_real_12 /* Test_DMI::_L17 */ _L17;
  array_real_12 /* Test_DMI::_L18 */ _L18;
  array_real_12 /* Test_DMI::_L19 */ _L19;
  kcg_real /* Test_DMI::_L22 */ _L22;
  kcg_real /* Test_DMI::_L23 */ _L23;
  kcg_real /* Test_DMI::_L25 */ _L25;
  kcg_real /* Test_DMI::_L21 */ _L21;
  kcg_real /* Test_DMI::_L32 */ _L32;
  array_bool_12 /* Test_DMI::_L26 */ _L26;
  kcg_real /* Test_DMI::_L33 */ _L33;
  kcg_bool /* Test_DMI::_L34 */ _L34;
  kcg_real /* Test_DMI::_L35 */ _L35;
  kcg_bool /* Test_DMI::_L36 */ _L36;
  kcg_bool /* Test_DMI::_L37 */ _L37;
  array_bool_12 /* Test_DMI::_L39 */ _L39;
  kcg_bool /* Test_DMI::_L44 */ _L44;
} outC_Test_DMI;

/* ===========  node initialization and cycle functions  =========== */
/* Test_DMI */
extern void Test_DMI(inC_Test_DMI *inC, outC_Test_DMI *outC);

extern void Test_DMI_reset(outC_Test_DMI *outC);
extern void Test_DMI_init(outC_Test_DMI *outC);

#endif /* _Test_DMI_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Test_DMI.h
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

