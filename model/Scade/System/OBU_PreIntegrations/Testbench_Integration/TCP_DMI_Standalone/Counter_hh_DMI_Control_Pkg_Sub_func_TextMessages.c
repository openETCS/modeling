/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages.h"

void Counter_hh_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh */
void Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Incr */kcg_real Incr,
  /* DMI_Control_Pkg::Sub_func::TextMessages::Counter_hh::Reset */kcg_bool Reset,
  outC_Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_real tmp;
  
  if (Reset) {
    tmp = 17.0;
  }
  else if (outC->init) {
    tmp = 17.0;
  }
  else {
    tmp = outC->Count;
  }
  outC->init = kcg_false;
  outC->Count = tmp + Incr;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Counter_hh_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

