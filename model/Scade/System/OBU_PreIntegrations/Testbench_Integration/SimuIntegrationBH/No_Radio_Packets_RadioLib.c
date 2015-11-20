/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Radio_Packets_RadioLib.h"

/* RadioLib::No_Radio_Packets */
void No_Radio_Packets_RadioLib(
  /* RadioLib::No_Radio_Packets::Radio_packets_in */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* RadioLib::No_Radio_Packets::Radio_packets_out */ CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  /* RadioLib::No_Radio_Packets::_L30 */
  static CompressedPackets_T_Common_Types_Pkg _L30;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L30, Radio_packets_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Radio_packets_out, &_L30);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** No_Radio_Packets_RadioLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

