/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _TargetManagement_TargetManagement_pkg_H_
#define _TargetManagement_TargetManagement_pkg_H_

#include "kcg_types.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"
#include "extractLOATargetsFromMA_TargetManagement_pkg_internalOperators.h"
#include "extractEOASvLTargetFromMA_TargetManagement_pkg_internalOperators.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"
#include "removeOverpassedLOA_TargetManagement_pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TargetCollection_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::targetCollection */ targetCollection;
  V_internal_real_Type_SDM_Types_Pkg /* TargetManagement_pkg::TargetManagement::V_releaseFromMA */ V_releaseFromMA;
  kcg_bool /* TargetManagement_pkg::TargetManagement::V_releaseFromMAValid */ V_releaseFromMAValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Target_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::_L12 */ _L12;
  Target_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::_L93 */ _L93;
  Target_list_MRSP_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::MRSPTargetList */ rem_MRSPTargetList;
  Target_list_LOA_real_T_TargetManagement_types /* TargetManagement_pkg::TargetManagement::LOATargetList */ rem_LOATargetList;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TargetManagement_TargetManagement_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::TargetManagement */
extern void TargetManagement_TargetManagement_pkg(
  /* TargetManagement_pkg::TargetManagement::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetManagement_pkg::TargetManagement::MRSP_updated */ kcg_bool MRSP_updated,
  /* TargetManagement_pkg::TargetManagement::MA */ MAs_real_T_TargetManagement_types *MA,
  /* TargetManagement_pkg::TargetManagement::MA_updated */ kcg_bool MA_updated,
  /* TargetManagement_pkg::TargetManagement::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC);

extern void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);
extern void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC);

#endif /* _TargetManagement_TargetManagement_pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetManagement_TargetManagement_pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

