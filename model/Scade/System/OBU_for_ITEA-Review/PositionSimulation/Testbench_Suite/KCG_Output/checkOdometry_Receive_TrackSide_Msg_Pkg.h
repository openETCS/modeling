/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _checkOdometry_Receive_TrackSide_Msg_Pkg_H_
#define _checkOdometry_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::checkOdometry */
extern void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool *outMessageComplete,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool *outBGIsChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector);

#endif /* _checkOdometry_Receive_TrackSide_Msg_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** checkOdometry_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

