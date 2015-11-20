/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "HourGlassAnimation_DMI_Control_Pkg_Sub_func.h"

void HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  /* 1 */ Counter_reset_pwlinear_int(&outC->Context_1);
  /* 1 */ RisingEdge_reset_digital(&outC->_1_Context_1);
  /* 1 */ countDownTimer_reset_MoRC_Pck_Utils(&outC->_2_Context_1);
}

/* DMI_Control_Pkg::Sub_func::HourGlassAnimation */
void HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::start */kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::stop */kcg_bool stop,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::actualtime */time_Type_MoRC_Pck actualtime,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_int tmp;
  
  /* 1 */
  countDownTimer_MoRC_Pck_Utils(
    start,
    stop,
    actualtime,
    kcg_true,
    20,
    &outC->_2_Context_1);
  /* 1 */ RisingEdge_digital(outC->_2_Context_1.expired, &outC->_1_Context_1);
  if (outC->_1_Context_1.RE_Output) {
    tmp = 10;
  }
  else {
    tmp = 0;
  }
  /* 1 */ Counter_pwlinear_int(tmp, kcg_false, &outC->Context_1);
  outC->Output1 = outC->Context_1.Count % 40;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** HourGlassAnimation_DMI_Control_Pkg_Sub_func.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

