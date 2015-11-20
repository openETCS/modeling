/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::BG_hasBeenReported */
void BG_hasBeenReported_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::nidBg */NID_BG nidBg,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::location */OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::found */kcg_bool *found,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::updatedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs)
{
  static kcg_bool tmp;
  static kcg_int i;
  
  *found = kcg_false;
  for (i = 0; i < 8; i++) {
    tmp = *found;
    /* 3 */
    UpdateReportedBG_ProvidePositionReport_Pkg(
      tmp,
      &(*reportedBGs)[i],
      nidBg,
      location,
      found,
      &(*updatedBGs)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BG_hasBeenReported_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

