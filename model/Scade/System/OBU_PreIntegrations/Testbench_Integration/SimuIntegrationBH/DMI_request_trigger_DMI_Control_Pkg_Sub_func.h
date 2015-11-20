/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DMI_request_trigger_DMI_Control_Pkg_Sub_func_H_
#define _DMI_request_trigger_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::dmi_driver_request */ dmi_driver_request;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::_L1 */ _L1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::_L2 */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::_L3 */ _L3;
  DMI_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::_L4 */ _L4;
} outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DMI_request_trigger */
extern void DMI_request_trigger_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::trigger */ kcg_bool trigger,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* DMI_Control_Pkg::Sub_func::DMI_request_trigger::dmi_request */ DMI_Request_T_DMI_Types_Pkg dmi_request,
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DMI_request_trigger_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DMI_request_trigger_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_request_trigger_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DMI_request_trigger_DMI_Control_Pkg_Sub_func_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DMI_request_trigger_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

