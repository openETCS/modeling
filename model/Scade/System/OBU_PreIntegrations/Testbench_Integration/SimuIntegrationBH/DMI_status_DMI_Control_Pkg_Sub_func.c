/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_status_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void DMI_status_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L34 = kcg_true;
  outC->_L32 = 0;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = 0;
  outC->_L28 = 0;
  outC->_L27 = 0;
  outC->_L26 = kcg_true;
  outC->_L25 = 0;
  outC->_L24 = Running_state_DMI_Types_Pkg;
  outC->_L22 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.systemTime = 0;
  outC->_L21.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L21.nAlive = 0;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->TimeIsOver = kcg_true;
  outC->init = kcg_true;
  outC->_L35 = kcg_true;
  outC->StatusOutput.valid = kcg_true;
  outC->StatusOutput.systemTime = 0;
  outC->StatusOutput.statusSet = Running_state_DMI_Types_Pkg;
  outC->StatusOutput.nAlive = 0;
  /* 1 */ Counter_init_pwlinear_int(&outC->_1_Context_1);
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


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
  static kcg_bool noname;
  
  /* fby_1_init_1 */ if (outC->init) {
    outC->_L34 = kcg_true;
  }
  else {
    outC->_L34 = outC->_L35;
  }
  outC->_L31 = kcg_false;
  outC->_L32 = currentTime;
  outC->_L30 = kcg_true;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L34,
    outC->_L31,
    outC->_L32,
    outC->_L30,
    cStatusIntervalTime_DMI_Control_Pkg,
    &outC->Context_1);
  outC->_L14 = outC->Context_1.expired;
  outC->_L15 = outC->Context_1.started;
  noname = outC->_L15;
  outC->TimeIsOver = outC->_L14;
  outC->_L22 = outC->TimeIsOver;
  outC->_L24 = Running_state_DMI_Types_Pkg;
  outC->_L26 = outC->TimeIsOver;
  outC->_L28 = 1;
  outC->_L29 = 0;
  /* 1 */ if (outC->_L26) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  /* 1 */ Counter_pwlinear_int(outC->_L27, kcg_false, &outC->_1_Context_1);
  outC->_L25 = outC->_1_Context_1.Count;
  outC->_L21.valid = outC->_L22;
  outC->_L21.systemTime = outC->_L32;
  outC->_L21.statusSet = outC->_L24;
  outC->_L21.nAlive = outC->_L25;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->StatusOutput,
    &outC->_L21);
  outC->_L35 = kcg_false;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_status_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

