/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_Send_P003V1_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P003V1 */
void UAB_Send_P003V1_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P003V1::B_data_in */UAB_CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P003V1::P003V1 */UAB_P003V1_trackside_int_T_TM_baseline2 *P003V1,
  /* MessageLibBaseline2::Send_P003V1::B_data_out */UAB_CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  static kcg_bool tmp;
  
  if ((*P003V1).valid) {
    /* 1 */
    UAB_Write_P003V1_TM_trackside_baseline2(
      P003V1,
      B_data_in,
      &tmp,
      B_data_out);
  }
  else {
    UAB_kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_Send_P003V1_MessageLibBaseline2.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

