/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */
#ifndef _TargetManagement_TargetManagement_pkg_H_
#define _TargetManagement_TargetManagement_pkg_H_

#include "kcg_types.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"
#include "calcMATargets_TargetManagement_pkg_internalOperators.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TargetCollection_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::targetCollection */ targetCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Target_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::_L12 */ _L12;
  Target_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::_L93 */ _L93;
  Target_list_MRSP_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::MRSPTargetList */ rem_MRSPTargetList;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TargetManagement_TargetManagement_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::TargetManagement */
extern void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC);

extern void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);

#endif /* _TargetManagement_TargetManagement_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetManagement_TargetManagement_pkg.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */

