/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_
#define _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int /* 1 */ _2_Context_1;
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  time_Type_MoRC_Pck /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L3 */ _L3;
  kcg_bool /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L6 */ _L6;
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L12 */ _L12;
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L13 */ _L13;
  kcg_int /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L14 */ _L14;
  kcg_bool /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::_L15 */ _L15;
} outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::HourGlassAnimation */
extern void HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::start */ kcg_bool start,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::stop */ kcg_bool stop,
  /* DMI_Control_Pkg::Sub_func::HourGlassAnimation::actualtime */ time_Type_MoRC_Pck actualtime,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);

extern void HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void HourGlassAnimation_init_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** HourGlassAnimation_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

