/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__AggregatePacket_5_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePacket_5 */
void MLRI__AggregatePacket_5_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_5::trainProps */MLRI__trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::AggregatePacket_5::packet5 */MLRI__Packet5_T_ProvidePositionReport_Pkg *packet5)
{
  (*packet5).valid = kcg_true;
  (*packet5).packet5.NID_PACKET = 5;
  (*packet5).packet5.L_PACKET = 0;
  (*packet5).packet5.NID_OPERATIONAL = (*trainProps).nid_operational;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_5_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

