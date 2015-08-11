/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_compr_onboard_se_TM_conversions_baseline2.h"

void C_P027V1_compr_onboard_se_reset_TM_conversions_baseline2(
  outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1_1 */
    C_P027V1_us_array_qdiff_reset_TM_lib_internal(&outC->Context_1_1[i]);
  }
  /* 1 */ CAST_Int_to_D_STATIC_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_Q_FRONT_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_V_STATIC_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */
void C_P027V1_compr_onboard_se_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2 *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_bool _4_noname_1;
  kcg_bool _3_noname_1;
  kcg_int noname_1;
  MetadataElement_T_Common_Types_Pkg noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int_64(&outC->_L29, (array_int_64 *) &outC->_L9[4]);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->flat_1,
    &outC->_L29);
  outC->_L28 = outC->_L9[3];
  outC->n_iter_int_1 = outC->_L28;
  outC->_L1_15 = outC->n_iter_int_1;
  outC->_6_n_iter_1 = outC->_L1_15;
  outC->_L33 = outC->_6_n_iter_1;
  outC->n_iter_1 = outC->_L33;
  kcg_copy_array_int_3(&outC->_L6, (array_int_3 *) &outC->_L9[0]);
  outC->_L16 = outC->_L6[2];
  outC->_L15 = outC->_L6[1];
  /* 1 */ CAST_Int_to_V_STATIC_TM_conversions(outC->_L15, &outC->Context_1);
  outC->_L32 = outC->Context_1.v_static;
  /* 1 */ CAST_Int_to_Q_FRONT_TM_conversions(outC->_L16, &outC->_1_Context_1);
  outC->_L31 = outC->_1_Context_1.q_front;
  outC->_L14 = outC->_L6[0];
  /* 1 */ CAST_Int_to_D_STATIC_TM_conversions(outC->_L14, &outC->_2_Context_1);
  outC->_L30 = outC->_2_Context_1.d_static;
  outC->_L27 = 0;
  outC->_L26 = outC->_L33 < outC->_L27;
  outC->_L23 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->_L3_1 = outC->n_iter_1;
  for (i2 = 0; i2 < 32; i2++) {
    outC->_L5_1[i2] = outC->_L3_1;
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L1_1,
    &outC->flat_1);
  for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
      &outC->_L6_1[i1],
      &outC->_L1_1);
  }
  outC->n_iter_ok_1 = outC->_L26;
  outC->_L11_1 = outC->n_iter_ok_1;
  if (outC->_L11_1) {
    for (i = 0; i < 32; i++) {
      /* 1_1 */
      C_P027V1_us_array_qdiff_TM_lib_internal(
        i,
        outC->_L5_1[i],
        &outC->_L6_1[i],
        &outC->Context_1_1[i]);
      kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
        &outC->_L9_1[i],
        &outC->Context_1_1[i].sections);
      outC->_L7_1 = i + 1;
      if (!outC->Context_1_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L7_1 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L7_1; i < 32; i++) {
    kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
      &outC->_L9_1[i],
      (P027V1_section_enum_qdiff_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &outC->sections_1,
    &outC->_L9_1);
  kcg_copy__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &outC->_L5,
    &outC->sections_1);
  outC->_L10.valid = outC->_L23;
  outC->_L10.d_static = outC->_L30;
  outC->_L10.v_static = outC->_L32;
  outC->_L10.q_front = outC->_L31;
  outC->_L10.n_iter = outC->_L33;
  kcg_copy__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &outC->_L10.SECTIONS_q_diff,
    &outC->_L5);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(
    &outC->P027V1_section_onbard,
    &outC->_L10);
  noname_1 = outC->_L7_1;
  outC->_4__L11_1 = 0;
  outC->_L10_1 = outC->_L1_15 < outC->_4__L11_1;
  _3_noname_1 = outC->_L10_1;
  outC->_L9_13 = 31;
  outC->_L12_1 = outC->_L1_15 > outC->_L9_13;
  _4_noname_1 = outC->_L12_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_compr_onboard_se_TM_conversions_baseline2.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

