/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void Counter_mm_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L1 = kcg_true;
  outC->_L2 = 0.0;
  outC->_L3 = 0.0;
  outC->_L4 = 0.0;
  outC->_L6 = 0.0;
  outC->init = kcg_true;
  outC->_L5 = 0.0;
  outC->Count = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


void Counter_mm_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::Counter_mm */
void Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_mm::Incr */ kcg_real Incr,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_mm::Reset */ kcg_bool Reset,
  outC_Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L1 = Reset;
  outC->_L4 = 0.0;
  /* fby_1_init_1 */ if (outC->init) {
    outC->_L3 = outC->_L4;
  }
  else {
    outC->_L3 = outC->_L5;
  }
  /* 1 */ if (outC->_L1) {
    outC->_L2 = outC->_L4;
  }
  else {
    outC->_L2 = outC->_L3;
  }
  outC->_L6 = Incr;
  outC->_L5 = outC->_L2 + outC->_L6;
  outC->Count = outC->_L5;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Counter_mm_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

