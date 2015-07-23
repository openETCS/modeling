/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section */
void C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::i */kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::meta_first_section_in */kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_compressed */CompressedPacketData_T_Common_Types_Pkg *P027V1_sections_compressed)
{
  static kcg_int tmp;
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::_L209 */
  static array_int_432 _L209;
  
  (*Header).nid_packet = meta_first_section_in + i;
  (*Header).q_dir = ENUM_Q_DIR_both_QDIR_TM;
  (*Header).valid = kcg_true;
  (*Header).startAddress = 0;
  (&(&(*P027V1_sections_compressed)[0])[0])[0] =
    (*P027V1_sections_from_track).D_STATIC;
  (&(&(*P027V1_sections_compressed)[0])[0])[1] =
    (*P027V1_sections_from_track).V_STATIC;
  (&(&(*P027V1_sections_compressed)[0])[0])[2] =
    (*P027V1_sections_from_track).Q_FRONT;
  (&(&(*P027V1_sections_compressed)[0])[0])[3] =
    (*P027V1_sections_from_track).N_ITER;
  for (tmp = 0; tmp < 432; tmp++) {
    _L209[tmp] = 0;
  }
  /* 1 */
  C_P027_flatten_sections_qdiff_TM_lib_internal(
    &(*P027V1_sections_from_track).SECTIONS_q_diff,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &(&(*P027V1_sections_compressed)[0])[4]);
  kcg_copy_array_int_432(&(*P027V1_sections_compressed)[68], &_L209);
  tmp = /* 1 */
    T_DeterminePacketSizeInt_TM_lib_internal(
      (*P027V1_sections_from_track).N_ITER,
      4,
      2);
  (*Header).endAddress = tmp - 1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

