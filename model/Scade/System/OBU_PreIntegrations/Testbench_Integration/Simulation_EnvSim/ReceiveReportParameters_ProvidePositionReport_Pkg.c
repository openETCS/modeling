/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReceiveReportParameters_ProvidePositionReport_Pkg.h"

void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}

/* ProvidePositionReport_Pkg::ReceiveReportParameters */
void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L69 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L69;
  
  /* 1 */ Read_P058_Legacy_TM_specific(&(*inMessage).packets, &_L69);
  outC->present = _L69.valid;
  /* 1 */
  CheckValidityPacket58_ProvidePositionReport_Pkg(
    &(*inMessage).BG_Common_Header,
    reportedBGs,
    &_L8,
    &outC->out_reportedBGs);
  if (outC->present) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->posRepParam,
      &_L69);
  }
  else if (outC->init) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->posRepParam,
      (P58_PositionReportParameters_T_Packet_Types_Pkg *)
        &emptyPacket58_ProvidePositionReport_Pkg);
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ReceiveReportParameters_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

