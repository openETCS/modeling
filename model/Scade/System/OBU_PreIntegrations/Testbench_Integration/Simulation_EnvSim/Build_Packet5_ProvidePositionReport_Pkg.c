/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet5_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet5 */
void Build_Packet5_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet5::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet5::packet5 */PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  (*packet5).valid = kcg_true;
  (*packet5).TrainRunningNumber = (*trainProps).nid_operational;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packet5_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

