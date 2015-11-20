/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UpdateReportedBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::UpdateReportedBG */
void UpdateReportedBG_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::UpdateReportedBG::foldedFound */ kcg_bool foldedFound,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::reportedBG */ ReportedBG_T_ProvidePositionReport_Pkg *reportedBG,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::BG_IDToCheck */ NID_BG BG_IDToCheck,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::location */ OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::UpdateReportedBG::out_reportedBG */ ReportedBG_T_ProvidePositionReport_Pkg *out_reportedBG)
{
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L9 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L9;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L5 */
  static NID_BG _L5;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L3 */
  static NID_BG _L3;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L1 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L1;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L10 */
  static kcg_bool _L10;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L11 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L11;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L24 */
  static ReportedBG_T_ProvidePositionReport_Pkg _L24;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L25 */
  static kcg_bool _L25;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L26 */
  static kcg_bool _L26;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L27 */
  static kcg_bool _L27;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L39 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L39;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L38 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L37 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L37;
  /* ProvidePositionReport_Pkg::UpdateReportedBG::_L52 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L52;
  
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L1, reportedBG);
  _L3 = BG_IDToCheck;
  _L5 = _L1.nidBG;
  _L10 = _L5 == _L3;
  _L25 = kcg_true;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L9, location);
  _L37 = _L9.o_nominal;
  _L38 = _L9.o_min;
  _L39 = _L9.o_max;
  _L52.nominal = _L37;
  _L52.d_min = _L38;
  _L52.d_max = _L39;
  _L24.valid = _L25;
  _L24.nidBG = _L3;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L24.location, &_L52);
  /* 1 */ if (_L10) {
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L11, &_L24);
  }
  else {
    kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(&_L11, &_L1);
  }
  kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(out_reportedBG, &_L11);
  _L26 = foldedFound;
  _L27 = _L26 | _L10;
  *found = _L27;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** UpdateReportedBG_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

