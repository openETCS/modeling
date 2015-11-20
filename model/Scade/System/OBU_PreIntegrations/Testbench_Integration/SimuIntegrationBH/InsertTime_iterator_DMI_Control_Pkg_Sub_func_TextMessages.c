/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

#ifndef KCG_USER_DEFINED_INIT
void InsertTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->_L18 = 0.0;
  outC->_L16 = 0.0;
  outC->_L17 = 0.0;
  outC->_L5 = kcg_true;
  outC->_L15 = 0.0;
  outC->_L7 = 0.0;
  outC->_L6 = 0.0;
  outC->_L4 = kcg_true;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->init = kcg_true;
  outC->mm = 0.0;
  outC->hh = 0.0;
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator */
void InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::Position */ kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_hh */ kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_mm */ kcg_real new_mm,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::mm */
  static kcg_real last_mm;
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::hh */
  static kcg_real last_hh;
  
  outC->_L1 = index;
  outC->_L2 = Position;
  /* last_init_ck_hh */ if (outC->init) {
    last_hh = 17.0;
  }
  else {
    last_hh = outC->hh;
  }
  outC->_L4 = outC->_L1 == outC->_L2;
  outC->_L15 = new_hh;
  outC->_L7 = last_hh;
  /* 1 */ if (outC->_L4) {
    outC->_L6 = outC->_L15;
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->hh = outC->_L6;
  outC->_L18 = new_mm;
  /* last_init_ck_mm */ if (outC->init) {
    last_mm = 10.0;
  }
  else {
    last_mm = outC->mm;
  }
  outC->_L17 = last_mm;
  /* 1 */ if (outC->_L4) {
    outC->_L16 = outC->_L18;
  }
  else {
    outC->_L16 = outC->_L17;
  }
  outC->_L5 = !outC->_L4;
  outC->condition = outC->_L5;
  outC->mm = outC->_L16;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

