/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m32 */
void dec_m32_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m32::msg_in */msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m32::systemVersionFromTracksideSupported */kcg_bool systemVersionFromTracksideSupported,
  /* RCM_Utils_Pkg::decoders::dec_m32::m32_RBC_or_RIU_System_Version */m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *m32_RBC_or_RIU_System_Version)
{
  (*m32_RBC_or_RIU_System_Version).valid = (*msg_in).valid &
    (((*msg_in).source == msrc_Euroradio_Common_Types_Pkg) |
      ((*msg_in).source == msrc_RadioInfillUnit_Common_Types_Pkg)) &
    ((*msg_in).Radio_Common_Header.nid_message ==
      cm32_RBC_RIU_System_Version_Id_Pkg);
  (*m32_RBC_or_RIU_System_Version).msgSrc = (*msg_in).source;
  (*m32_RBC_or_RIU_System_Version).versionSupported =
    systemVersionFromTracksideSupported;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*m32_RBC_or_RIU_System_Version).origin,
    &(*msg_in).sendingRBC);
  (*m32_RBC_or_RIU_System_Version).m_version =
    (*msg_in).Radio_Common_Header.m_version;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** dec_m32_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-20T19:47:20
*************************************************************$ */

