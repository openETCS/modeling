/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _isSendingNeeded_manage_DMI_Output_Pkg_H_
#define _isSendingNeeded_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* manage_DMI_Output_Pkg::isSendingNeeded::sendingNeeded */ sendingNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* manage_DMI_Output_Pkg::isSendingNeeded::lastDMI_Update */ lastDMI_Update;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_isSendingNeeded_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::isSendingNeeded */
extern void isSendingNeeded_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::isSendingNeeded::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::isSendingNeeded::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC);

extern void isSendingNeeded_reset_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC);
extern void isSendingNeeded_init_manage_DMI_Output_Pkg(
  outC_isSendingNeeded_manage_DMI_Output_Pkg *outC);

#endif /* _isSendingNeeded_manage_DMI_Output_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** isSendingNeeded_manage_DMI_Output_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

