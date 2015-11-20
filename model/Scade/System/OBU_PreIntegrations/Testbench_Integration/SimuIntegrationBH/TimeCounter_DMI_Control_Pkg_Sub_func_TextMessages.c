/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void TimeCounter_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L85 = 0.0;
  outC->_L84 = 0.0;
  outC->_L82 = 0.0;
  outC->_L81 = 0.0;
  outC->_L79 = 0.0;
  outC->_L78 = 0.0;
  outC->_L77 = kcg_true;
  outC->_L76 = 0.0;
  outC->_L75 = 0.0;
  outC->_L74 = 0.0;
  outC->_L60 = 0.0;
  outC->_L59 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L28 = 0.0;
  outC->_L30 = 0.0;
  outC->_L36 = 0.0;
  outC->_L37 = kcg_true;
  outC->hh_need_overflow = kcg_true;
  outC->init = kcg_true;
  outC->hh = 0.0;
  outC->mm = 0.0;
  /* 1 */
  Counter_hh_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
  /* 1 */
  Counter_mm_init_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void TimeCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
  /* 1 */
  Counter_hh_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->_1_Context_1);
  /* 1 */
  Counter_mm_reset_DMI_Control_Pkg_Sub_func_TextMessages(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter */
void TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::insert */ kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::isFull */ kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_mm */ kcg_real countCommand_mm,
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::countCommand_hh */ kcg_real countCommand_hh,
  outC_TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  static kcg_real noname;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::hh */
  static kcg_real last_hh;
  /* DMI_Control_Pkg::Sub_func::TextMessages::TimeCounter::mm */
  static kcg_real last_mm;
  
  outC->_L21 = isFull;
  /* last_init_ck_mm */ if (outC->init) {
    last_mm = 10.0;
  }
  else {
    last_mm = outC->mm;
  }
  outC->_L76 = last_mm;
  outC->_L28 = 60.0;
  outC->_L23 = outC->_L76 > outC->_L28;
  outC->_L26 = insert;
  outC->_L37 = outC->_L21 & outC->_L26;
  outC->_L36 = 0.0;
  outC->_L79 = countCommand_mm;
  /* 1 */ if (outC->_L37) {
    outC->_L30 = outC->_L36;
  }
  else {
    outC->_L30 = outC->_L79;
  }
  /* 1 */
  Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L30,
    outC->_L23,
    &outC->Context_1);
  outC->_L81 = outC->Context_1.Count;
  outC->mm = outC->_L81;
  outC->hh_need_overflow = outC->_L23;
  outC->_L59 = outC->hh_need_overflow;
  outC->_L84 = 1.0;
  outC->_L74 = 0.0;
  /* 2 */ if (outC->_L59) {
    outC->_L60 = outC->_L84;
  }
  else {
    outC->_L60 = outC->_L74;
  }
  /* last_init_ck_hh */ if (outC->init) {
    last_hh = 17.0;
  }
  else {
    last_hh = outC->hh;
  }
  outC->_L75 = last_hh;
  outC->_L78 = 24.0;
  outC->_L77 = outC->_L75 >= outC->_L78;
  /* 1 */
  Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages(
    outC->_L60,
    outC->_L77,
    &outC->_1_Context_1);
  outC->_L82 = outC->_1_Context_1.Count;
  outC->hh = outC->_L82;
  outC->_L85 = countCommand_hh;
  noname = outC->_L85;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TimeCounter_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

