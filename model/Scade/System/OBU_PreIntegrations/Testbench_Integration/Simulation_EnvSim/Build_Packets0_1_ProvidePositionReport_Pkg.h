/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _Build_Packets0_1_ProvidePositionReport_Pkg_H_
#define _Build_Packets0_1_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "DeterminePacketValidity_ProvidePositionReport_Pkg.h"
#include "Build_Packet0_ProvidePositionReport_Pkg.h"
#include "Build_Packet1_ProvidePositionReport_Pkg.h"
#include "Activate_Packet0_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* ProvidePositionReport_Pkg::Build_Packets0_1::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* ProvidePositionReport_Pkg::Build_Packets0_1::packet1 */ packet1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_Packets0_1_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packets0_1 */
extern void Build_Packets0_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::prvDirTrain */Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC);

extern void Build_Packets0_1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC);

#endif /* _Build_Packets0_1_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packets0_1_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

