/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m39_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m39 */
void dec_m39_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m39::msg_in */msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m39::m39_acknowledgementOfTerminationOfACommunicationSession */m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m39_acknowledgementOfTerminationOfACommunicationSession)
{
  (*m39_acknowledgementOfTerminationOfACommunicationSession).valid =
    (*msg_in).valid & (((*msg_in).source == msrc_Euroradio_Common_Types_Pkg) |
      ((*msg_in).source == msrc_RadioInfillUnit_Common_Types_Pkg)) &
    ((*msg_in).Radio_Common_Header.nid_message ==
      cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg);
  (*m39_acknowledgementOfTerminationOfACommunicationSession).msgSrc =
    (*msg_in).source;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*m39_acknowledgementOfTerminationOfACommunicationSession).origin,
    &(*msg_in).sendingRBC);
  (*m39_acknowledgementOfTerminationOfACommunicationSession).lrbg =
    (*msg_in).Radio_Common_Header.nid_lrbg;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** dec_m39_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

