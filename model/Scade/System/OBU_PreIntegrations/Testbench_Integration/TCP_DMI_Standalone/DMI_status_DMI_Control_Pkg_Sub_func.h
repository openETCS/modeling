/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _DMI_status_DMI_Control_Pkg_Sub_func_H_
#define _DMI_status_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::Sub_func::DMI_status::StatusOutput */ StatusOutput;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L35 */ _L35;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ _1_Context_1;
  outC_Counter_pwlinear_int /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_DMI_status_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_status */
extern void DMI_status_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_status::currentTime */T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);

extern void DMI_status_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);

#endif /* _DMI_status_DMI_Control_Pkg_Sub_func_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DMI_status_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */

