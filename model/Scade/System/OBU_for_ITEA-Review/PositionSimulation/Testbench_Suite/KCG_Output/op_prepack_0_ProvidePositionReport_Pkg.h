/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_prepack_0_ProvidePositionReport_Pkg_H_
#define _op_prepack_0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"
#include "op_LRBG_ProvidePositionReport_Pkg.h"
#include "op_rep0_or_rep1_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::op_prepack_0 */
extern void op_prepack_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_prepack_0::TrainRearEndPos3 */ L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::op_prepack_0::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_prepack_0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::op_prepack_0::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_prepack_0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::op_prepack_0::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::op_prepack_0::valid */ kcg_bool *valid,
  /* ProvidePositionReport_Pkg::op_prepack_0::posRep */ Position_Report_TrainToTrack *posRep);

#endif /* _op_prepack_0_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_prepack_0_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

