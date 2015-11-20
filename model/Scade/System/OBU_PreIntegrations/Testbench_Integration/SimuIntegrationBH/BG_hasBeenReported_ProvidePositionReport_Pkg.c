/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::BG_hasBeenReported */
void BG_hasBeenReported_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::nidBg */ NID_BG nidBg,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::location */ OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::found */ kcg_bool *found,
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::updatedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs)
{
  static kcg_int i2;
  static kcg_int i1;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported */
  static kcg_bool acc;
  static kcg_int i;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L9 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L9;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L2 */
  static array_int_8 _L2;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L1 */
  static NID_BG _L1;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L16 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L16;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L18 */
  static array_168713 _L18;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L21 */
  static kcg_bool _L21;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L23 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L23;
  /* ProvidePositionReport_Pkg::BG_hasBeenReported::_L22 */
  static kcg_bool _L22;
  
  _L1 = nidBg;
  /* pow */ for (i2 = 0; i2 < 8; i2++) {
    _L2[i2] = _L1;
  }
  _L21 = kcg_false;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_L9, reportedBGs);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L16, location);
  /* pow */ for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L18[i1], &_L16);
  }
  _L22 = _L21;
  for (i = 0; i < 8; i++) {
    acc = _L22;
    /* 3 */
    UpdateReportedBG_ProvidePositionReport_Pkg(
      acc,
      &_L9[i],
      _L2[i],
      &_L18[i],
      &_L22,
      &_L23[i]);
  }
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(updatedBGs, &_L23);
  *found = _L22;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BG_hasBeenReported_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

