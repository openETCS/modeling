/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getParameterPositionReport_packagesSupport_Pkg.h"

/* packagesSupport_Pkg::getParameterPositionReport */
void getParameterPositionReport_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getParameterPositionReport::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* packagesSupport_Pkg::getParameterPositionReport::outPositionReportParam */ PositionReportParameter_T_Common_Types_Pkg *outPositionReportParam)
{
  (*outPositionReportParam).present = kcg_true;
  (*outPositionReportParam).nidBG = (*inMessage).BG_Common_Header.nid_bg;
  (*outPositionReportParam).bgLocation =
    (*inMessage).BG_Common_Header.bgPosition.odo.o_nominal;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &(*outPositionReportParam).packet58,
    (P58_PositionReportParameters_T_Packet_Types_Pkg *)
      &cEmptyP58_packagesSupport_Pkg);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getParameterPositionReport_packagesSupport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

