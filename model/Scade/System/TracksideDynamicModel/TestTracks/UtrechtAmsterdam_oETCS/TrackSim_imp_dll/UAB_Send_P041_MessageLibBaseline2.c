/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Send_P041_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P041 */
void UAB_Send_P041_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P041::B_data_in */UAB_CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P041::P041 */UAB_P041_trackside_int_T_TM *P041,
  /* MessageLibBaseline2::Send_P041::B_data_out */UAB_CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  static kcg_bool tmp;
  
  if ((*P041).valid) {
    /* 1 */ UAB_Write_P041_TM_trackside(P041, B_data_in, &tmp, B_data_out);
  }
  else {
    UAB_kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Send_P041_MessageLibBaseline2.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

