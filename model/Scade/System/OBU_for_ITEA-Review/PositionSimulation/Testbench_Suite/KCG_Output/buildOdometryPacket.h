/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _buildOdometryPacket_H_
#define _buildOdometryPacket_H_

#include "kcg_types.h"
#include "genOdometryLocations.h"
#include "genSpeedInaccuracies.h"

/* =====================  no input structure  ====================== */


/* buildOdometryPacket */
extern void buildOdometryPacket(
  /* buildOdometryPacket::timestamp */ T_internal_Type_Obu_BasicTypes_Pkg timestamp,
  /* buildOdometryPacket::velocity */ Speed_T_Obu_BasicTypes_Pkg velocity,
  /* buildOdometryPacket::acceleration */ A_internal_Type_Obu_BasicTypes_Pkg acceleration,
  /* buildOdometryPacket::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* buildOdometryPacket::motionDirection */ odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection,
  /* buildOdometryPacket::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry);

#endif /* _buildOdometryPacket_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** buildOdometryPacket.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

