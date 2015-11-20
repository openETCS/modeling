/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _TargetManagement_TargetManagement_pkg_H_
#define _TargetManagement_TargetManagement_pkg_H_

#include "kcg_types.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"
#include "calcMATargets_TargetManagement_pkg_internalOperators.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TargetCollection_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::targetCollection */ targetCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Target_list_MRSP_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::MRSPTargetList */ MRSPTargetList;
  Target_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::_L12 */ _L12;
  Target_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::_L93 */ _L93;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TargetManagement_TargetManagement_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::TargetManagement */
extern void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _TargetManagement_TargetManagement_pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** TargetManagement_TargetManagement_pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

