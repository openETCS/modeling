/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body */
void C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_from_track */P027V1_trackside_int_T_TM_baseline2 *P027V1_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_body_compressed */CompressedPacketData_T_Common_Types_Pkg *P027V1_body_compressed,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::P027V1_sections */P027V1_OBU_sectionlist_int_T_TM_baseline2 *P027V1_sections,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::n_iter_k_out */kcg_int *n_iter_k_out,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_body::meta_first_section */kcg_int *meta_first_section)
{
  static nid_packet_meta_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  
  (*Header).valid = (*P027V1_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = 6 - 1;
  (&(*P027V1_body_compressed)[0])[0] = (*P027V1_from_track).NID_PACKET;
  (&(*P027V1_body_compressed)[0])[1] = (*P027V1_from_track).Q_DIR;
  (&(*P027V1_body_compressed)[0])[2] = (*P027V1_from_track).L_PACKET;
  (&(*P027V1_body_compressed)[0])[3] = (*P027V1_from_track).Q_SCALE;
  (&(*P027V1_sections)[0])[0].D_STATIC = (*P027V1_from_track).D_STATIC;
  (&(*P027V1_sections)[0])[0].V_STATIC = (*P027V1_from_track).V_STATIC;
  (&(*P027V1_sections)[0])[0].Q_FRONT = (*P027V1_from_track).Q_FRONT;
  (&(*P027V1_sections)[0])[0].N_ITER = (*P027V1_from_track).N_ITER_n;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &(&(*P027V1_sections)[0])[0].SECTIONS_q_diff,
    &(*P027V1_from_track).SECTIONS_q_diff);
  *n_iter_k_out = (*P027V1_from_track).N_ITER_k;
  (&(*P027V1_body_compressed)[0])[4] = *n_iter_k_out;
  *meta_first_section = /* 3 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P027V1_from_track).NID_PACKET,
      (*P027V1_from_track).Q_DIR,
      100,
      27,
      INT_M_VERSION_1_0_TM);
  (&(*P027V1_body_compressed)[0])[5] = *meta_first_section;
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
    &(*P027V1_sections)[1],
    &(*P027V1_from_track).SECTIONS_SSP);
  for (tmp = 0; tmp < 494; tmp++) {
    (&(*P027V1_body_compressed)[6])[tmp] = 0;
  }
  IfBlock1_clock_1 = (*P027V1_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  tmp = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P027V1_from_track).NID_PACKET,
      (*P027V1_from_track).Q_DIR,
      0,
      27,
      INT_M_VERSION_1_0_TM);
  (*Header).nid_packet = tmp;
  if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P027V1_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P027V1_from_track).Q_DIR ==
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
** C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

