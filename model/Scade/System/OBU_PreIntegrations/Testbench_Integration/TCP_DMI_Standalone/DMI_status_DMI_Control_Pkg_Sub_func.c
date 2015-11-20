/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_status_DMI_Control_Pkg_Sub_func.h"

void DMI_status_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
  /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->_1_Context_1);
}

/* DMI_Control_Pkg::Sub_func::DMI_status */
void DMI_status_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_status::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_bool tmp1;
  kcg_int tmp;
  
  outC->StatusOutput.systemTime = currentTime;
  outC->StatusOutput.statusSet = Running_state_DMI_Types_Pkg;
  if (outC->init) {
    outC->init = kcg_false;
    tmp1 = kcg_true;
  }
  else {
    tmp1 = outC->_L35;
  }
  outC->_L35 = kcg_false;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    tmp1,
    kcg_false,
    currentTime,
    kcg_true,
    cStatusIntervalTime_DMI_Control_Pkg,
    &outC->_1_Context_1);
  outC->StatusOutput.valid = outC->_1_Context_1.expired;
  if (outC->_1_Context_1.expired) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  /* 1 */ Counter_pwlinear_int(tmp, kcg_false, &outC->Context_1);
  outC->StatusOutput.nAlive = outC->Context_1.Count;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_status_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

