/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void ScrollController_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  outC->scrollDownTypeIndex = 0;
  outC->scrollLevel = 0;
  outC->scrollUpTypeIndex = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


void ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController */
void ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollUp */ kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollDown */ kcg_bool scrollDown,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::isMoreThanFive */ kcg_bool isMoreThanFive,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::numE */ kcg_int numE,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollLevel */
  static kcg_int _1_scrollLevel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::then::_L2 */
  static kcg_int _L2_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::then::_L1 */
  static kcg_int _L1_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollLevel */
  static kcg_int scrollLevel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::else::else::_L1 */
  static kcg_int _L17_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollLevel */
  static kcg_int _2_scrollLevel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::else::then::_L1 */
  static kcg_int _L16_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::else::then::_L2 */
  static kcg_int _L25_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::else::then::_L3 */
  static kcg_int _L34_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollLevel */
  static kcg_int _3_scrollLevel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollDownTypeIndex */
  static kcg_int last_scrollDownTypeIndex;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollLevel */
  static kcg_int last_scrollLevel;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollUpTypeIndex */
  static kcg_int last_scrollUpTypeIndex;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L5 */
  static kcg_bool _L5;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L6 */
  static kcg_int _L6;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L7 */
  static kcg_int _L7;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L9 */
  static kcg_int _L9;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L10 */
  static kcg_bool _L10;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L12 */
  static kcg_bool _L12;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L13 */
  static kcg_bool _L13;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L14 */
  static kcg_int _L14;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L15 */
  static kcg_bool _L15;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L16 */
  static kcg_int _L16;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L17 */
  static kcg_int _L17;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L8 */
  static kcg_int _L8;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L20 */
  static kcg_int _L20;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L21 */
  static kcg_int _L21;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L22 */
  static kcg_int _L22;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L24 */
  static kcg_bool _L24;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L25 */
  static kcg_bool _L25;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L26 */
  static kcg_bool _L26;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L27 */
  static kcg_int _L27;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L28 */
  static kcg_int _L28;
  
  /* last_init_ck_scrollUpTypeIndex */ if (outC->init) {
    last_scrollUpTypeIndex = 0;
  }
  else {
    last_scrollUpTypeIndex = outC->scrollUpTypeIndex;
  }
  _L25 = isMoreThanFive;
  _L26 = !_L25;
  /* last_init_ck_scrollLevel */ if (outC->init) {
    last_scrollLevel = 0;
  }
  else {
    last_scrollLevel = outC->scrollLevel;
  }
  _L14 = last_scrollLevel;
  _L16 = 0;
  _L15 = _L14 <= _L16;
  _L24 = _L26 | _L15;
  _L21 = 0;
  _L22 = 1;
  /* 2 */ if (_L24) {
    _L20 = _L21;
  }
  else {
    _L20 = _L22;
  }
  outC->scrollUpTypeIndex = _L20;
  _L5 = isMoreThanFive;
  _L13 = !_L5;
  _L9 = last_scrollLevel;
  _L17 = numE;
  _L28 = cDIM_MSGQueue_DMI_Control_Pkg;
  _L27 = _L17 - _L28;
  _L10 = _L9 >= _L27;
  _L12 = _L13 | _L10;
  _L7 = 0;
  _L8 = 1;
  /* 1 */ if (_L12) {
    _L6 = _L7;
  }
  else {
    _L6 = _L8;
  }
  IfBlock1_clock = scrollUp & (outC->scrollUpTypeIndex == 1);
  /* last_init_ck_scrollDownTypeIndex */ if (outC->init) {
    last_scrollDownTypeIndex = 0;
  }
  else {
    last_scrollDownTypeIndex = outC->scrollDownTypeIndex;
  }
  outC->scrollDownTypeIndex = _L6;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = last_scrollLevel;
    _L3_IfBlock1 = 1;
    _L1_IfBlock1 = _L2_IfBlock1 - _L3_IfBlock1;
    _1_scrollLevel = _L1_IfBlock1;
    outC->scrollLevel = _1_scrollLevel;
  }
  else {
    else_clock_IfBlock1 = scrollDown & (outC->scrollDownTypeIndex == 1);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L34_IfBlock1 = last_scrollLevel;
      _L25_IfBlock1 = 1;
      _L16_IfBlock1 = _L34_IfBlock1 + _L25_IfBlock1;
      _3_scrollLevel = _L16_IfBlock1;
      scrollLevel = _3_scrollLevel;
    }
    else {
      _L17_IfBlock1 = last_scrollLevel;
      _2_scrollLevel = _L17_IfBlock1;
      scrollLevel = _2_scrollLevel;
    }
    outC->scrollLevel = scrollLevel;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

