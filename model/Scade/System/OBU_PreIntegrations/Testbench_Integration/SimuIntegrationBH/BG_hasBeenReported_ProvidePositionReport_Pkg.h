/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _BG_hasBeenReported_ProvidePositionReport_Pkg_H_
#define _BG_hasBeenReported_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "UpdateReportedBG_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::BG_hasBeenReported */
extern void BG_hasBeenReported_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::nidBg */ NID_BG nidBg,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::location */ OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::updatedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs);

#endif /* _BG_hasBeenReported_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** BG_hasBeenReported_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

