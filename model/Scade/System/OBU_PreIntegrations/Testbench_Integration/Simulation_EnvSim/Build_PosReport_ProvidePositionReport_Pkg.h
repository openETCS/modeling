/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _Build_PosReport_ProvidePositionReport_Pkg_H_
#define _Build_PosReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Build_SinglePosReport_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::Build_PosReport */
extern void Build_PosReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_PosReport::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::errorVector */array__158675 *errorVector,
  /* ProvidePositionReport_Pkg::Build_PosReport::t_train */T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_PosReport::posRepHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet4 */PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet5 */PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5);

#endif /* _Build_PosReport_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_PosReport_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

