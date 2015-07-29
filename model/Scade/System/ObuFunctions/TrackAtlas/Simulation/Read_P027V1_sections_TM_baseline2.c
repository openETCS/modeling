/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_sections_TM_baseline2.h"

void Read_P027V1_sections_reset_TM_baseline2(
  outC_Read_P027V1_sections_TM_baseline2 *outC)
{
  /* 1 */
  C_P027V1_compr_onboard_se_reset_TM_conversions_baseline2(&outC->_2_Context_1);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ T_Decode_Metadata_L2_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_baseline2::Read_P027V1_sections */
void Read_P027V1_sections_TM_baseline2(
  /* TM_baseline2::Read_P027V1_sections::i */kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */kcg_int meta_sections,
  outC_Read_P027V1_sections_TM_baseline2 *outC)
{
  kcg_bool noname;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L175, Message_IN);
  outC->_L171 = meta_sections;
  outC->_L179 = i;
  /* 1 */
  T_Decode_Metadata_L2_TM_lib_internal(
    outC->_L171,
    outC->_L179,
    &outC->Context_1);
  outC->_L176 = outC->Context_1.nid_packet;
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L175,
    outC->_L176,
    kcg_true,
    kcg_true,
    &outC->_1_Context_1);
  kcg_copy_array_int_500(&outC->_L172, &outC->_1_Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L173,
    &outC->_1_Context_1.Metadata);
  outC->_L181 = outC->_1_Context_1.received;
  noname = outC->_L181;
  outC->_L174 = n_iter_outer;
  outC->_L180 = outC->_L179 < outC->_L174;
  outC->cont = outC->_L180;
  /* 1 */
  C_P027V1_compr_onboard_se_TM_conversions_baseline2(
    &outC->_L172,
    &outC->_L173,
    &outC->_2_Context_1);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->_L177,
    &outC->_2_Context_1.P027V1_section_onbard);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->P027V1_OBU_section_out,
    &outC->_L177);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_sections_TM_baseline2.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

