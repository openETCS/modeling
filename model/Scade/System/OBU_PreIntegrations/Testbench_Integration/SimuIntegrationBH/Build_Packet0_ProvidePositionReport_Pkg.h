/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Build_Packet0_ProvidePositionReport_Pkg_H_
#define _Build_Packet0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"
#include "CalculateSafeTrainLength_ProvidePositionReport_Pkg.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"
#include "scaleInternalType_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Position_Report_TrainToTrack /* ProvidePositionReport_Pkg::Build_Packet0::packet0 */ packet0;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ rem_modeLevelStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_Packet0_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packet0 */
extern void Build_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet0::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packet0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Packet0_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Packet0_init_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_Packet0_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet0_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

