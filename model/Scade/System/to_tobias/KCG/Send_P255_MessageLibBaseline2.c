/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P255_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P255 */
void Send_P255_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P255::packet_data_in */CompressedPackets_T_Common_Types_Pkg *packet_data_in,
  /* MessageLibBaseline2::Send_P255::P255 */P255_trackside_int_T_TM *P255,
  /* MessageLibBaseline2::Send_P255::packet_data_out */CompressedPackets_T_Common_Types_Pkg *packet_data_out)
{
  static kcg_bool tmp;
  
  if ((*P255).valid) {
    /* 1 */
    Write_P255_TM_trackside(P255, packet_data_in, &tmp, packet_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      packet_data_out,
      packet_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P255_MessageLibBaseline2.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

