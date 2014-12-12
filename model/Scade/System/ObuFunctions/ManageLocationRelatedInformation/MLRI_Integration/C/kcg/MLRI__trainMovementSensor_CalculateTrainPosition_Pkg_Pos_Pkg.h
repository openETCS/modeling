/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg_H_
#define _MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MLRI__trainMovementDir_T_CalculateTrainPosition_Pkg_Pos_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::direction */ direction;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MLRI___4_SSM_ST_SM1 /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::SM1 */ SM1_state_nxt;
  MLRI__odometry_T_Obu_BasicTypes_Pkg /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::currentOdometry */ rem_currentOdometry;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor */
extern void MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg(
  /* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::currentOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  MLRI__outC_trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

extern void MLRI__trainMovementSensor_reset_CalculateTrainPosition_Pkg_Pos_Pkg(
  MLRI__outC_trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg *outC);

#endif /* _MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__trainMovementSensor_CalculateTrainPosition_Pkg_Pos_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

