/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _SDMLimitLocations_TargetLimits_Pkg_H_
#define _SDMLimitLocations_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"
#include "P_SpeedRelatedToEBD_SDM_Types_Pkg.h"
#include "P_SpeedRelatedToSBD_SDM_Types_Pkg.h"
#include "d_SBI1_TargetLimits_Pkg.h"
#include "d_limits_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"
#include "d_RSM_start_TargetLimits_Pkg.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"
#include "TargetSelector_TargetLimits_Pkg.h"
#include "v_bec_TargetLimits_Pkg.h"
#include "d_P_target_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */


/* TargetLimits_Pkg::SDMLimitLocations */
extern void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::v_release */ V_internal_real_Type_SDM_Types_Pkg v_release,
  /* TargetLimits_Pkg::SDMLimitLocations::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::SDMLimitLocations::inhibitUnderReadingCompensation */ Q_NVINHSMICPERM inhibitUnderReadingCompensation,
  /* TargetLimits_Pkg::SDMLimitLocations::isTractionCutOffImplemented */ kcg_bool isTractionCutOffImplemented,
  /* TargetLimits_Pkg::SDMLimitLocations::T_traction_cut_off */ T_internal_real_Type_SDM_Types_Pkg T_traction_cut_off,
  /* TargetLimits_Pkg::SDMLimitLocations::T_be */ T_internal_real_Type_SDM_Types_Pkg T_be,
  /* TargetLimits_Pkg::SDMLimitLocations::T_bs */ T_internal_real_Type_SDM_Types_Pkg T_bs,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveTarget */ Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */ kcg_bool *FLOIisSBI1,
  /* TargetLimits_Pkg::SDMLimitLocations::v_target */ V_internal_real_Type_SDM_Types_Pkg *v_target,
  /* TargetLimits_Pkg::SDMLimitLocations::v_MRSP */ V_internal_real_Type_SDM_Types_Pkg *v_MRSP,
  /* TargetLimits_Pkg::SDMLimitLocations::v_P_SBD */ V_internal_real_Type_SDM_Types_Pkg *v_P_SBD,
  /* TargetLimits_Pkg::SDMLimitLocations::v_P_EBD */ V_internal_real_Type_SDM_Types_Pkg *v_P_EBD,
  /* TargetLimits_Pkg::SDMLimitLocations::v_P_EBD_valid */ kcg_bool *v_P_EBD_valid);

#endif /* _SDMLimitLocations_TargetLimits_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDMLimitLocations_TargetLimits_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

