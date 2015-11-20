/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Activate_Packet0_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Activate_Packet0 */
void Activate_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Activate_Packet0::in_packet0 */Position_Report_TrainToTrack *in_packet0,
  /* ProvidePositionReport_Pkg::Activate_Packet0::out_packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *out_packet0)
{
  (*out_packet0).valid = kcg_true;
  kcg_copy_Position_Report_TrainToTrack(&(*out_packet0).packet0, in_packet0);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Activate_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

