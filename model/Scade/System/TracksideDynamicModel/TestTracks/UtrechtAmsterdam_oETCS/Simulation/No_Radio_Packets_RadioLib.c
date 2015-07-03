/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "No_Radio_Packets_RadioLib.h"

void No_Radio_Packets_reset_RadioLib(outC_No_Radio_Packets_RadioLib *outC)
{
}

/* RadioLib::No_Radio_Packets */
void No_Radio_Packets_RadioLib(
  /* RadioLib::No_Radio_Packets::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_No_Radio_Packets_RadioLib *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, Radio_packets_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L30);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Radio_Packets_RadioLib.c
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */

