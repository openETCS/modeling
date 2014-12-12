/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"
#include "MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__Q_DIRTRAIN /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::trainRunningDirection */ trainRunningDirection;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef */
extern void MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::refTrainRunningDirection */MLRI__Q_DIRTRAIN refTrainRunningDirection,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::refSpeed */MLRI__Speed_T_Obu_BasicTypes_Pkg refSpeed,
  /* CalculateTrainPosition_Pkg::Pos_Pkg::runningDirectionVsRef::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  MLRI__outC_runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

extern void MLRI__runningDirectionVsRef_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  MLRI__outC_runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#endif /* _MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__runningDirectionVsRef_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

