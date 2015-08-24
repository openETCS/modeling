/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P255_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P255_tracksim_compr */
void UAB_C_P255_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P255_tracksim_compr::P255_from_track */UAB_P255_trackside_int_T_TM *P255_from_track,
  /* TM_conversions::C_P255_tracksim_compr::Header */UAB_MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P255_tracksim_compr::P005_compressed */UAB_CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  static UAB_nid_packet_meta_TM tmp;
  
  (*Header).valid = (*P255_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = UAB_DIM_MaxElementsPacket255_TM - 1;
  (&(*P005_compressed)[0])[0] = (*P255_from_track).NID_PACKET;
  for (tmp = 0; tmp < 499; tmp++) {
    (&(*P005_compressed)[1])[tmp] = 0;
  }
  tmp = /* 1 */
    UAB_T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P255_from_track).NID_PACKET,
      UAB_INT_Q_DIR_both_TM,
      0,
      255,
      UAB_INT_M_VERSION_2_0_TM);
  (*Header).nid_packet = tmp;
  (*Header).q_dir = UAB_ENUM_Q_DIR_both_TM_conversions;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P255_tracksim_compr_TM_conversions.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

