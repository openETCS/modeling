/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _CheckValidityPacket58_ProvidePositionReport_Pkg_H_
#define _CheckValidityPacket58_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::CheckValidityPacket58::found */ found;
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::CheckValidityPacket58::updatedBGs */ updatedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ rem_reportedBGs;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_CheckValidityPacket58_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
extern void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */ BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckValidityPacket58_reset_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckValidityPacket58_init_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _CheckValidityPacket58_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** CheckValidityPacket58_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

