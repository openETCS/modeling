/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DMI_status_DMI_Control_Pkg_Sub_func_H_
#define _DMI_status_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  outC_Counter_pwlinear_int /* 1 */ _1_Context_1;
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::TimeIsOver */ TimeIsOver;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L15 */ _L15;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L14 */ _L14;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::Sub_func::DMI_status::_L21 */ _L21;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L22 */ _L22;
  DMI_StatusSet_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::DMI_status::_L24 */ _L24;
  kcg_int /* DMI_Control_Pkg::Sub_func::DMI_status::_L25 */ _L25;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L26 */ _L26;
  kcg_int /* DMI_Control_Pkg::Sub_func::DMI_status::_L27 */ _L27;
  kcg_int /* DMI_Control_Pkg::Sub_func::DMI_status::_L28 */ _L28;
  kcg_int /* DMI_Control_Pkg::Sub_func::DMI_status::_L29 */ _L29;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L30 */ _L30;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L31 */ _L31;
  T_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::DMI_status::_L32 */ _L32;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_status::_L34 */ _L34;
} outC_DMI_status_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_status */
extern void DMI_status_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_status::currentTime */ T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);

extern void DMI_status_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_status_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DMI_status_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_status_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

