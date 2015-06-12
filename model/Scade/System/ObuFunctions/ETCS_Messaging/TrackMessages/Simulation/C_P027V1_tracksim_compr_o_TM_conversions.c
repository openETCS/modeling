/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T19:50:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_o_TM_conversions.h"

void C_P027V1_tracksim_compr_o_reset_TM_conversions(
  outC_C_P027V1_tracksim_compr_o_TM_conversions *outC)
{
  /* 1 */
  C_P027_flatten_sections_qdiff_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P027V1_tracksim_compr_one_section */
void C_P027V1_tracksim_compr_o_TM_conversions(
  /* TM_conversions::C_P027V1_tracksim_compr_one_section::i */kcg_int i1,
  /* TM_conversions::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */P027V1_section_int_T_TM *P027V1_sections_from_track,
  outC_C_P027V1_tracksim_compr_o_TM_conversions *outC)
{
  kcg_int i;
  
  kcg_copy_P027V1_section_int_T_TM(&outC->_L1, P027V1_sections_from_track);
  kcg_copy_P027V1_trackide_qdifflist_T_TM(
    &outC->_L217,
    &outC->_L1.SECTIONS_q_diff);
  outC->_L216 = outC->_L1.N_ITER;
  outC->_L215 = outC->_L1.Q_FRONT;
  outC->_L387 = outC->_L1.V_STATIC;
  outC->_L427 = NID_META_P27V1_sections_TM;
  outC->_L429 = i1;
  outC->_L430 = outC->_L427 + outC->_L429;
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(outC->_L216, 4, 2, &outC->Context_1);
  outC->_L426 = outC->Context_1.p_size;
  /* 1 */
  C_P027_flatten_sections_qdiff_TM_lib_internal(
    &outC->_L217,
    &outC->_1_Context_1);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM(
    &outC->_L425,
    &outC->_1_Context_1.Flattened);
  outC->p_size = outC->_L426;
  outC->_L424 = outC->p_size;
  outC->_L423 = kcg_true;
  outC->_L422 = ENUM_Q_DIR_both_QDIR_TM;
  outC->_L214 = outC->_L1.D_STATIC;
  outC->_L373[0] = outC->_L214;
  outC->_L373[1] = outC->_L387;
  outC->_L373[2] = outC->_L215;
  outC->_L373[3] = outC->_L216;
  kcg_copy_array_int_4(&outC->_L385[0], &outC->_L373);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM(&outC->_L385[4], &outC->_L425);
  outC->_L336 = 0;
  for (i = 0; i < 432; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_68(&outC->_L383[0], &outC->_L385);
  kcg_copy_array_int_432(&outC->_L383[68], &outC->_L209);
  outC->_L213 = 1;
  outC->_L212 = outC->_L424 - outC->_L213;
  outC->_L206 = 0;
  outC->_L204.nid_packet = outC->_L430;
  outC->_L204.q_dir = outC->_L422;
  outC->_L204.valid = outC->_L423;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P027V1_sections_compressed,
    &outC->_L383);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_compr_o_TM_conversions.c
** Generation date: 2015-06-09T19:50:49
*************************************************************$ */

