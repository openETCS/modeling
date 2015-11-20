/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _maintainTrainProperties_EVC_Support_Pkg_H_
#define _maintainTrainProperties_EVC_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainProperties_T_TrainPosition_Types_Pck /* EVC_Support_Pkg::maintainTrainProperties::UpdatedtrainProperties */ UpdatedtrainProperties;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L10 */ _L10;
  kcg_bool /* EVC_Support_Pkg::maintainTrainProperties::_L11 */ _L11;
  NID_OPERATIONAL /* EVC_Support_Pkg::maintainTrainProperties::_L13 */ _L13;
  NID_OPERATIONAL /* EVC_Support_Pkg::maintainTrainProperties::_L14 */ _L14;
  trainProperties_T_TrainPosition_Types_Pck /* EVC_Support_Pkg::maintainTrainProperties::_L15 */ _L15;
  NID_OPERATIONAL /* EVC_Support_Pkg::maintainTrainProperties::_L16 */ _L16;
  trainProperties_T_TrainPosition_Types_Pck /* EVC_Support_Pkg::maintainTrainProperties::_L17 */ _L17;
  trainData_T_TIU_Types_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L18 */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L19 */ _L19;
  kcg_int /* EVC_Support_Pkg::maintainTrainProperties::_L21 */ _L21;
  kcg_int /* EVC_Support_Pkg::maintainTrainProperties::_L22 */ _L22;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L23 */ _L23;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L24 */ _L24;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L25 */ _L25;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* EVC_Support_Pkg::maintainTrainProperties::_L26 */ _L26;
  NID_ENGINE /* EVC_Support_Pkg::maintainTrainProperties::_L27 */ _L27;
} outC_maintainTrainProperties_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::maintainTrainProperties */
extern void maintainTrainProperties_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainTrainProperties::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* EVC_Support_Pkg::maintainTrainProperties::trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *trainRunningNumber,
  /* EVC_Support_Pkg::maintainTrainProperties::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* EVC_Support_Pkg::maintainTrainProperties::nid_engine */ NID_ENGINE nid_engine,
  outC_maintainTrainProperties_EVC_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void maintainTrainProperties_reset_EVC_Support_Pkg(
  outC_maintainTrainProperties_EVC_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void maintainTrainProperties_init_EVC_Support_Pkg(
  outC_maintainTrainProperties_EVC_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _maintainTrainProperties_EVC_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** maintainTrainProperties_EVC_Support_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

