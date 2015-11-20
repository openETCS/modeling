/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CheckValidityPacket58_init_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 8; i++) {
    outC->rem_reportedBGs[i].valid = kcg_true;
    outC->rem_reportedBGs[i].nidBG = 0;
    outC->rem_reportedBGs[i].location.nominal = 0;
    outC->rem_reportedBGs[i].location.d_min = 0;
    outC->rem_reportedBGs[i].location.d_max = 0;
  }
  for (i1 = 0; i1 < 8; i1++) {
    outC->updatedBGs[i1].valid = kcg_true;
    outC->updatedBGs[i1].nidBG = 0;
    outC->updatedBGs[i1].location.nominal = 0;
    outC->updatedBGs[i1].location.d_min = 0;
    outC->updatedBGs[i1].location.d_max = 0;
  }
  outC->found = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckValidityPacket58_reset_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */ BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */
  static ReportedBGList_T_ProvidePositionReport_Pkg last_reportedBGs;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L5 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L5;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L31 */
  static odometry_T_Obu_BasicTypes_Pkg _L31;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L32 */
  static NID_BG _L32;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L33 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L33;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L35 */
  static kcg_bool _L35;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L49 */
  static BG_Header_T_BG_Types_Pkg _L49;
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::_L50 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L50;
  
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_L5, reportedBGs);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L49, bgCommonHeader);
  _L32 = _L49.nid_bg;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L31, &_L49.bgPosition);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_L50, &_L31.odo);
  /* 1 */
  BG_hasBeenReported_ProvidePositionReport_Pkg(&_L5, _L32, &_L50, &_L35, &_L33);
  outC->found = _L35;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->updatedBGs, &_L33);
  /* last_init_ck_reportedBGs */ if (outC->init) {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &last_reportedBGs,
      (ReportedBGList_T_ProvidePositionReport_Pkg *)
        &cReportedBGList_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &last_reportedBGs,
      &outC->rem_reportedBGs);
  }
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->rem_reportedBGs,
    reportedBGs);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckValidityPacket58_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

