/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeterminePacketValidity_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::DeterminePacketValidity */
void DeterminePacketValidity_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::lrbg */positionedBG_T_TrainPosition_Types_Pck *lrbg,
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::sendPacket0 */kcg_bool *sendPacket0,
  /* ProvidePositionReport_Pkg::DeterminePacketValidity::sendPacket1 */kcg_bool *sendPacket1)
{
  *sendPacket1 =
    (*lrbg).infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned &
    ((*lrbg).infoFromPassing.BG_Header.n_total ==
      N_TOTAL_1_balise_in_the_group) & (*lrbg).valid;
  *sendPacket0 = !*sendPacket1 & (*lrbg).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DeterminePacketValidity_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

