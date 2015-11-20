/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _SDMLimitLocations_TargetLimits_Pkg_H_
#define _SDMLimitLocations_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"
#include "dV_warning_for_V_SDM_Types_Pkg.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"
#include "d_limits_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "d_RSM_start_TargetLimits_Pkg.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"
#include "v_release_TargetLimits_Pkg.h"
#include "TargetSelector_TargetLimits_Pkg.h"
#include "TargetDistance_TargetLimits_Pkg.h"
#include "d_P_target_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TargetLimits_Pkg::SDMLimitLocations */
extern void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::SDMLimitLocations::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveDisplayedTarget */ Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */ kcg_bool *FLOIisSBI1);

#endif /* _SDMLimitLocations_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SDMLimitLocations_TargetLimits_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

