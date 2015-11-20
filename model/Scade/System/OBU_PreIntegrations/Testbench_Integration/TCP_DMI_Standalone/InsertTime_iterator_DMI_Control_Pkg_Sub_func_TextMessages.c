/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

void InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator */
void InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::Position */kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_hh */kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_mm */kcg_real new_mm,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::_L4 */ kcg_bool _L4;
  
  _L4 = index == Position;
  outC->condition = !_L4;
  if (_L4) {
    outC->mm = new_mm;
    outC->hh = new_hh;
  }
  else if (outC->init) {
    outC->mm = 10.0;
    outC->hh = 17.0;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

