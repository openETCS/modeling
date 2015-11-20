/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "HourGlassAnimation_DMI_Control_Pkg_Sub_func.h"

#ifndef KCG_USER_DEFINED_INIT
void HourGlassAnimation_init_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L15 = kcg_true;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L10 = 0;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = 0;
  outC->_L6 = kcg_true;
  outC->_L5 = 0;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = 0;
  outC->Output1 = 0;
  /* 1 */ Counter_init_pwlinear_int(&outC->_2_Context_1);
  /* 1 */ RisingEdge_init_digital(&outC->_1_Context_1);
  /* 1 */ countDownTimer_init_MoRC_Pck_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  /* 1 */ Counter_reset_pwlinear_int(&outC->_2_Context_1);
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->Context_1);
}

/* DMI_Control_Pkg::Sub_func::HourGlassAnimation */
void HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::start */ kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::stop */ kcg_bool stop,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::actualtime */ time_Type_MoRC_Pck actualtime,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_bool noname;
  
  outC->_L3 = actualtime;
  outC->_L2 = stop;
  outC->_L1 = start;
  outC->_L5 = 0;
  outC->_L15 = kcg_true;
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L15,
    20,
    &outC->Context_1);
  outC->_L8 = outC->Context_1.expired;
  outC->_L9 = outC->Context_1.started;
  /* 1 */ RisingEdge_digital(outC->_L8, &outC->_1_Context_1);
  outC->_L6 = outC->_1_Context_1.RE_Output;
  outC->_L10 = 10;
  /* 1 */ if (outC->_L6) {
    outC->_L13 = outC->_L10;
  }
  else {
    outC->_L13 = outC->_L5;
  }
  /* 1 */ Counter_pwlinear_int(outC->_L13, kcg_false, &outC->_2_Context_1);
  outC->_L14 = outC->_2_Context_1.Count;
  outC->_L12 = 40;
  outC->_L7 = outC->_L14 % outC->_L12;
  noname = outC->_L9;
  outC->Output1 = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** HourGlassAnimation_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

