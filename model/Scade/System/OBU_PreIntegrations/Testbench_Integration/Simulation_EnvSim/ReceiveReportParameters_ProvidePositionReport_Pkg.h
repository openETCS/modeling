/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _ReceiveReportParameters_ProvidePositionReport_Pkg_H_
#define _ReceiveReportParameters_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Read_P058_Legacy_TM_specific.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::ReceiveReportParameters::out_reportedBGs */ out_reportedBGs;
  kcg_bool /* ProvidePositionReport_Pkg::ReceiveReportParameters::present */ present;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* ProvidePositionReport_Pkg::ReceiveReportParameters::posRepParam */ posRepParam;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ReceiveReportParameters_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ReceiveReportParameters */
extern void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);

extern void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);

#endif /* _ReceiveReportParameters_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ReceiveReportParameters_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

