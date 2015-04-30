/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_status_DMI_Control_Pkg_Sub_func.h"

void DMI_status_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
  outC->_L35 = kcg_true;
  outC->StatusOutput.nAlive = 0;
  outC->StatusOutput.statusSet = Running_state_DMI_Types_Pkg;
  outC->StatusOutput.systemTime = 0;
  outC->StatusOutput.valid = kcg_true;
  countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
  Counter_init_pwlinear_int(&outC->_1_Context_1);
}


void DMI_status_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  outC->init = kcg_true;
  /* 1 */ Counter_reset_pwlinear_int(&outC->_1_Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::DMI_status */
void DMI_status_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_status::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
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
    &outC->Context_1);
  outC->StatusOutput.valid = outC->Context_1.expired;
  if (outC->Context_1.expired) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  /* 1 */ Counter_pwlinear_int(tmp, kcg_false, &outC->_1_Context_1);
  outC->StatusOutput.nAlive = outC->_1_Context_1.Count;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** DMI_status_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

