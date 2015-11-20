/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Radio_Packets_RadioLib.h"

/* RadioLib::No_Radio_Packets */
void No_Radio_Packets_RadioLib(
  /* RadioLib::No_Radio_Packets::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* RadioLib::No_Radio_Packets::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    Radio_packets_out,
    Radio_packets_in);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Radio_Packets_RadioLib.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

