/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P071_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P071_tracksim_compr */
void C_P071_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P071_tracksim_compr::P071_from_track */P071_trackside_int_T_TM *P071_from_track,
  /* TM_conversions::C_P071_tracksim_compr::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P071_tracksim_compr::P065_compressed */CompressedPacketData_T_Common_Types_Pkg *P065_compressed)
{
  nid_packet_meta_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  
  (*Header).valid = (*P071_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = DIM_MaxElementsPacket071_TM - 1;
  (&(*P065_compressed)[0])[0] = (*P071_from_track).NID_PACKET;
  (&(*P065_compressed)[0])[1] = (*P071_from_track).Q_DIR;
  (&(*P065_compressed)[0])[2] = (*P071_from_track).L_PACKET;
  (&(*P065_compressed)[0])[3] = (*P071_from_track).Q_SCALE;
  (&(*P065_compressed)[0])[4] = (*P071_from_track).D_ADHESION;
  (&(*P065_compressed)[0])[5] = (*P071_from_track).L_ADHESION;
  (&(*P065_compressed)[0])[6] = (*P071_from_track).M_ADHESION;
  for (tmp = 0; tmp < 493; tmp++) {
    (&(*P065_compressed)[7])[tmp] = 0;
  }
  IfBlock1_clock_1 = (*P071_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1) {
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P071_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
    }
    else {
      else_clock_1_IfBlock1 = (*P071_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
    }
  }
  tmp = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P071_from_track).NID_PACKET,
      (*P071_from_track).Q_DIR,
      0,
      71,
      INT_M_VERSION_2_0_TM);
  (*Header).nid_packet = tmp;
  if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else if (_1_else_clock_1_IfBlock1) {
    (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
  }
  else if (else_clock_1_IfBlock1) {
    (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
  }
  else {
    (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P071_tracksim_compr_TM_conversions.c
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */

