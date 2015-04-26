/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePacket_5_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePacket_5 */
void AggregatePacket_5_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_5::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::AggregatePacket_5::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  (*packet5).valid = kcg_true;
  (*packet5).TrainRunningNumber = (*trainProps).nid_operational;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregatePacket_5_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

