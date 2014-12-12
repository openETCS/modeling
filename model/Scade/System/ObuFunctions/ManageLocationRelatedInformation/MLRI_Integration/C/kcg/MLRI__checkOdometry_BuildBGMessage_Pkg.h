/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__checkOdometry_BuildBGMessage_Pkg_H_
#define _MLRI__checkOdometry_BuildBGMessage_Pkg_H_

#include "kcg_types.h"
#include "MLRI__updateCollectorSingleBB_BuildBGMessage_Pkg_BaliseSupport.h"
#include "MLRI__checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/* BuildBGMessage_Pkg::checkOdometry */
extern void MLRI__checkOdometry_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::checkOdometry::actualOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* BuildBGMessage_Pkg::checkOdometry::inCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *inCollector,
  /* BuildBGMessage_Pkg::checkOdometry::outMessageComplete */kcg_bool *outMessageComplete,
  /* BuildBGMessage_Pkg::checkOdometry::outBGIsChangedEarly */kcg_bool *outBGIsChangedEarly,
  /* BuildBGMessage_Pkg::checkOdometry::outCollector */MLRI__BGCollector_T_BuildBGMessage_Pkg *outCollector);

#endif /* _MLRI__checkOdometry_BuildBGMessage_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__checkOdometry_BuildBGMessage_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

