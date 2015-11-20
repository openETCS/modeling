/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _cyclicReportToDMI_manage_DMI_Output_Pkg_H_
#define _cyclicReportToDMI_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"
#include "sendDynamic_manage_DMI_Output_Pkg.h"
#include "isSendingNeeded_manage_DMI_Output_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* manage_DMI_Output_Pkg::cyclicReportToDMI::packetDynamic */ packetDynamic;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isSendingNeeded_manage_DMI_Output_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_cyclicReportToDMI_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::cyclicReportToDMI */
extern void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNTC */ NID_NTC inNTC,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void cyclicReportToDMI_init_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _cyclicReportToDMI_manage_DMI_Output_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** cyclicReportToDMI_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

