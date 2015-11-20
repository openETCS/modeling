/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::found */kcg_bool *found,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::updatedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs)
{
  /* 1 */
  BG_hasBeenReported_ProvidePositionReport_Pkg(
    reportedBGs,
    (*bgCommonHeader).nid_bg,
    &(*bgCommonHeader).bgPosition.odo,
    found,
    updatedBGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckValidityPacket58_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

