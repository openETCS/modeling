/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _checkOdometry_Receive_TrackSide_Msg_Pkg_H_
#define _checkOdometry_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::checkOdometry */
extern void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::actualOdometry */ odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outMessageComplete */ kcg_bool *_7_outMessageComplete,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outBGIsChangedEarly */ kcg_bool *_6_outBGIsChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::checkOdometry::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *_5_outCollector);

#endif /* _checkOdometry_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** checkOdometry_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

