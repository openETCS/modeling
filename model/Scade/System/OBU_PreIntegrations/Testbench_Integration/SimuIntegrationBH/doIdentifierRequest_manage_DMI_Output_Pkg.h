/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _doIdentifierRequest_manage_DMI_Output_Pkg_H_
#define _doIdentifierRequest_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg /* manage_DMI_Output_Pkg::doIdentifierRequest::identifierRequest */ identifierRequest;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_doIdentifierRequest_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::doIdentifierRequest */
extern void doIdentifierRequest_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */ M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void doIdentifierRequest_init_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _doIdentifierRequest_manage_DMI_Output_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** doIdentifierRequest_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

