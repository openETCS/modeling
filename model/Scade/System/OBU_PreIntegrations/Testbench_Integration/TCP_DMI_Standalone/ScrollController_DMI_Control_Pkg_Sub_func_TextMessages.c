/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.h"

void ScrollController_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController */
void ScrollController_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollUp */kcg_bool scrollUp,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::scrollDown */kcg_bool scrollDown,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::isMoreThanFive */kcg_bool isMoreThanFive,
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::numE */kcg_int numE,
  outC_ScrollController_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DMI_Control_Pkg::Sub_func::TextMessages::ScrollController::_L9 */ kcg_int _L9;
  
  IfBlock1_clock = !isMoreThanFive;
  if (outC->init) {
    outC->init = kcg_false;
    _L9 = 0;
  }
  else {
    _L9 = outC->scrollLevel;
  }
  if (IfBlock1_clock | (_L9 >= numE - cDIM_MSGQueue_DMI_Control_Pkg)) {
    outC->scrollDownTypeIndex = 0;
  }
  else {
    outC->scrollDownTypeIndex = 1;
  }
  if (IfBlock1_clock | (_L9 <= 0)) {
    outC->scrollUpTypeIndex = 0;
  }
  else {
    outC->scrollUpTypeIndex = 1;
  }
  IfBlock1_clock = scrollUp & (outC->scrollUpTypeIndex == 1);
  if (IfBlock1_clock) {
    outC->scrollLevel = _L9 - 1;
  }
  else {
    else_clock_IfBlock1 = scrollDown & (outC->scrollDownTypeIndex == 1);
    if (else_clock_IfBlock1) {
      outC->scrollLevel = _L9 + 1;
    }
    else {
      outC->scrollLevel = _L9;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScrollController_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

