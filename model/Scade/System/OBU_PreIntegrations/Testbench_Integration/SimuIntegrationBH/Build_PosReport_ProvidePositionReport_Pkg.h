/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Build_PosReport_ProvidePositionReport_Pkg_H_
#define _Build_PosReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Build_SinglePosReport_ProvidePositionReport_Pkg.h"
#include "IsError_ProvidePositionReport_Pkg.h"
#include "SinglePosReport2_9_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::Build_PosReport */
extern void Build_PosReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_PosReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::errorVector */ array_168990 *errorVector,
  /* ProvidePositionReport_Pkg::Build_PosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_PosReport::posRepHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5);

#endif /* _Build_PosReport_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_PosReport_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

