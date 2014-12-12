/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__op_prepack_0_ProvidePositionReport_Pkg_H_
#define _MLRI__op_prepack_0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_DOUBTUNDER_ProvidePositionReport_Pkg.h"
#include "MLRI__op_DOUBTOVER_ProvidePositionReport_Pkg.h"
#include "MLRI__op_LRBG_ProvidePositionReport_Pkg.h"
#include "MLRI__op_rep0_or_rep1_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::op_prepack_0 */
extern void MLRI__op_prepack_0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_prepack_0::TrainRearEndPos3 */MLRI__L_TRAININT TrainRearEndPos3,
  /* ProvidePositionReport_Pkg::op_prepack_0::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::op_prepack_0::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::op_prepack_0::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_prepack_0::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::op_prepack_0::valid */kcg_bool *valid,
  /* ProvidePositionReport_Pkg::op_prepack_0::posRep */MLRI__Position_Report_TrainToTrack *posRep);

#endif /* _MLRI__op_prepack_0_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__op_prepack_0_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

