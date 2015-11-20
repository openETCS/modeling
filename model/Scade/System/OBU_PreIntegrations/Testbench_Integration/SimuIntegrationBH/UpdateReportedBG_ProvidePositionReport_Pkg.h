/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _UpdateReportedBG_ProvidePositionReport_Pkg_H_
#define _UpdateReportedBG_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ProvidePositionReport_Pkg::UpdateReportedBG */
extern void UpdateReportedBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::UpdateReportedBG::foldedFound */ kcg_bool foldedFound,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::reportedBG */ ReportedBG_T_ProvidePositionReport_Pkg *reportedBG,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::BG_IDToCheck */ NID_BG BG_IDToCheck,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::location */ OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::out_reportedBG */ ReportedBG_T_ProvidePositionReport_Pkg *out_reportedBG);

#endif /* _UpdateReportedBG_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** UpdateReportedBG_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

