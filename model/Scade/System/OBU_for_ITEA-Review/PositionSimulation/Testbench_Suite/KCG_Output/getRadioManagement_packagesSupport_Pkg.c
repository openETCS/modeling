/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getRadioManagement_packagesSupport_Pkg.h"

/* packagesSupport_Pkg::getRadioManagement */
void getRadioManagement_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getRadioManagement::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* packagesSupport_Pkg::getRadioManagement::outRadioManagement */ radioManagementMessage_T_Common_Types_Pkg *outRadioManagement)
{
  (*outRadioManagement).messageSource = (*inMessage).source;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*outRadioManagement).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &(*outRadioManagement).p42,
    (P42_SessionManagement_T_Packet_Types_Pkg *)
      &cEmptyP42_packagesSupport_Pkg);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &(*outRadioManagement).p45,
    (P45_RadioNetworkRegistration_T_Packet_Types_Pkg *)
      &cEmptyP45_packagesSupport_Pkg);
  (*outRadioManagement).valid = /* 1 */
    checkRadioManagementType_packagesSupport_Pkg(
      (*inMessage).source,
      (*inMessage).Radio_Common_Header.nid_message) & ((*inMessage).source ==
      msrc_Euroradio_Common_Types_Pkg);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** getRadioManagement_packagesSupport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

