/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */
#ifndef _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_
#define _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::Output1 */ Output1;
  kcg_bool /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::Output2 */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::storeTrainData */ storeTrainData;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::CheckDeskStatus */
extern void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* DMI_Control_Pkg::Sub_func::CheckDeskStatus::TIU_trainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);

extern void CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);

#endif /* _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.h
** Generation date: 2015-11-20T19:43:33
*************************************************************$ */

