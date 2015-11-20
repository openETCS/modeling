/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.h"

void NormalMSGQueueCounter_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter */
void NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::insert */kcg_bool insert,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::isFull */kcg_bool isFull,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::countCommand */kcg_int countCommand,
  /* DMI_Control_Pkg::Sub_func::TextMessages::NormalMSGQueueCounter::num_last */kcg_int num_last,
  outC_NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages *outC)
{
  kcg_int tmp;
  
  if (isFull & insert) {
    tmp = 0;
  }
  else {
    tmp = countCommand;
  }
  /* 1 */
  Counter_pwlinear_int(
    tmp,
    (kcg_bool)
      ((num_last <= 0) | (num_last > cDIM_MSGQueueMax_DMI_Control_Pkg)),
    &outC->Context_1);
  outC->NumElem = outC->Context_1.Count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalMSGQueueCounter_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

