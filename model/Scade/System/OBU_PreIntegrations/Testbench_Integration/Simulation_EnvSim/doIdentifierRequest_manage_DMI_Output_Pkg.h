/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _doIdentifierRequest_manage_DMI_Output_Pkg_H_
#define _doIdentifierRequest_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* manage_DMI_Output_Pkg::doIdentifierRequest::TIU_TrainStatus */TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::doIdentifierRequest::ownVersion */M_VERSION ownVersion,
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);

extern void doIdentifierRequest_reset_manage_DMI_Output_Pkg(
  outC_doIdentifierRequest_manage_DMI_Output_Pkg *outC);

#endif /* _doIdentifierRequest_manage_DMI_Output_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** doIdentifierRequest_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

