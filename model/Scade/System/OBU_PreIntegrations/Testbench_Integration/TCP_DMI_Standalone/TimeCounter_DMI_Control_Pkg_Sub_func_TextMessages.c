/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

void TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  Counter_mm_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
  /* 1 */
  Counter_hh_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter */
void TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_mm */kcg_real countCommand_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_hh */kcg_real countCommand_hh,
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_real tmp1;
  kcg_real tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::hh_need_overflow */ kcg_bool hh_need_overflow;
  
  if (outC->init) {
    tmp1 = 10.0;
    outC->init = kcg_false;
    tmp = 17.0;
  }
  else {
    tmp1 = outC->mm;
    tmp = outC->hh;
  }
  hh_need_overflow = tmp1 > 60.0;
  if (hh_need_overflow) {
    tmp1 = 1.0;
  }
  else {
    tmp1 = 0.0;
  }
  /* 1 */
  Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages(
    tmp1,
    (kcg_bool) (tmp >= 24.0),
    &outC->_1_Context_1);
  outC->hh = outC->_1_Context_1.Count;
  if (isFull & insert) {
    tmp1 = 0.0;
  }
  else {
    tmp1 = countCommand_mm;
  }
  /* 1 */
  Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages(
    tmp1,
    hh_need_overflow,
    &outC->Context_1);
  outC->mm = outC->Context_1.Count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

