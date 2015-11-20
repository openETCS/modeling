/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:31
*************************************************************$ */
#ifndef _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_
#define _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "RisingEdge_digital.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ _2_Context_1;
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_Counter_pwlinear_int /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::HourGlassAnimation */
extern void HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::start */kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::stop */kcg_bool stop,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::actualtime */time_Type_MoRC_Pck actualtime,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);

extern void HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);

#endif /* _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** HourGlassAnimation_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T19:43:31
*************************************************************$ */

