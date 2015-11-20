/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _sendVersion_manage_DMI_Output_Pkg_H_
#define _sendVersion_manage_DMI_Output_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg /* manage_DMI_Output_Pkg::sendVersion::VersionPkg */ VersionPkg;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* manage_DMI_Output_Pkg::sendVersion::versionSent */ versionSent;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendVersion_manage_DMI_Output_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_DMI_Output_Pkg::sendVersion */
extern void sendVersion_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendVersion::ownVersion */M_VERSION ownVersion,
  /* manage_DMI_Output_Pkg::sendVersion::dmiStatus */DMI_EVC_status_T_DMI_Types_Pkg *dmiStatus,
  /* manage_DMI_Output_Pkg::sendVersion::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendVersion_manage_DMI_Output_Pkg *outC);

extern void sendVersion_reset_manage_DMI_Output_Pkg(
  outC_sendVersion_manage_DMI_Output_Pkg *outC);

#endif /* _sendVersion_manage_DMI_Output_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendVersion_manage_DMI_Output_Pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

