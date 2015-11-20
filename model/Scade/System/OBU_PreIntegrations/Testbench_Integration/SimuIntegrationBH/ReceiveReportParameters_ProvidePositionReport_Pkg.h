/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ReceiveReportParameters_ProvidePositionReport_Pkg_H_
#define _ReceiveReportParameters_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Read_P058_Legacy_TM_specific.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::ReceiveReportParameters::out_reportedBGs */ out_reportedBGs;
  kcg_bool /* ProvidePositionReport_Pkg::ReceiveReportParameters::present */ present;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* ProvidePositionReport_Pkg::ReceiveReportParameters::posRepParam */ posRepParam;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  P58_PositionReportParameters_T_Packet_Types_Pkg /* linear::MemoryBasic::_L4 */ _L4_1;
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ rem_reportedBGs;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ReceiveReportParameters_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ReceiveReportParameters */
extern void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ReceiveReportParameters_init_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ReceiveReportParameters_ProvidePositionReport_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ReceiveReportParameters_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

