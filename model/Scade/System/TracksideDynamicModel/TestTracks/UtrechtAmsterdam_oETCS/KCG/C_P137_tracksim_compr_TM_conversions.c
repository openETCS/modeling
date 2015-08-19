/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P137_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P137_tracksim_compr */
void C_P137_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P137_tracksim_compr::P137_from_track */P137_trackside_int_T_TM *P137_from_track,
  /* TM_conversions::C_P137_tracksim_compr::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P137_tracksim_compr::P137_compressed */CompressedPacketData_T_Common_Types_Pkg *P137_compressed)
{
  static nid_packet_meta_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  
  (*Header).valid = (*P137_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = DIM_MaxElementsPacket137_TM - 1;
  (&(*P137_compressed)[0])[0] = (*P137_from_track).NID_PACKET;
  (&(*P137_compressed)[0])[1] = (*P137_from_track).Q_DIR;
  (&(*P137_compressed)[0])[2] = (*P137_from_track).L_PACKET;
  (&(*P137_compressed)[0])[3] = (*P137_from_track).Q_SRSTOP;
  for (tmp = 0; tmp < 496; tmp++) {
    (&(*P137_compressed)[4])[tmp] = 0;
  }
  IfBlock1_clock_1 = (*P137_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  tmp = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P137_from_track).NID_PACKET,
      (*P137_from_track).Q_DIR,
      0,
      137,
      INT_M_VERSION_2_0_TM);
  (*Header).nid_packet = tmp;
  if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P137_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P137_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P137_tracksim_compr_TM_conversions.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

