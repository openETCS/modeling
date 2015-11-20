/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */
void C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::P027V1_section_onbard */ P027V1_section_enum_T_TM_baseline2 *P027V1_section_onbard)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::sections */
  static P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 sections_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::flat */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 flat_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::n_iter */
  static kcg_int _8_n_iter_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::n_iter_ok */
  static kcg_bool n_iter_ok_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L11 */
  static kcg_bool _4__L11_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L9 */
  static P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 _L9_15;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L7 */
  static kcg_int _L7_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L6 */
  static array_int_64_32 _L6_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L5 */
  static array_int_32 _L5_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L3 */
  static kcg_int _L3_1;
  /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L1 */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 _L1_16;
  static kcg_int _7_noname_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter */
  static N_ITER n_iter_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */
  static kcg_int n_iter_int_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L9 */
  static kcg_int _L9_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L10 */
  static kcg_bool _L10_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L11 */
  static kcg_int _L11_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L12 */
  static kcg_bool _L12_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L1 */
  static kcg_int _L1_1;
  static kcg_bool noname_1;
  static kcg_bool _3_noname_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L14 */
  static kcg_int _L14;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L15 */
  static kcg_int _L15;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L16 */
  static kcg_int _L16;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L10 */
  static P027V1_section_enum_T_TM_baseline2 _L10;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L9 */
  static CompressedPacketData_T_Common_Types_Pkg _L9;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L6 */
  static array_int_3 _L6;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L5 */
  static P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 _L5;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L20 */
  static MetadataElement_T_Common_Types_Pkg _L20;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L23 */
  static kcg_bool _L23;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L26 */
  static kcg_bool _L26;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L27 */
  static kcg_int _L27;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L28 */
  static kcg_int _L28;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L29 */
  static array_int_64 _L29;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L32 */
  static V_STATIC _L32;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L31 */
  static Q_FRONT _L31;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L30 */
  static D_STATIC _L30;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L33 */
  static N_ITER _L33;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L9, PacketData);
  _L28 = _L9[3];
  n_iter_int_1 = _L28;
  _L1_1 = n_iter_int_1;
  n_iter_1 = _L1_1;
  _L33 = n_iter_1;
  _8_n_iter_1 = _L33;
  _L3_1 = _8_n_iter_1;
  /* pow */ for (i2 = 0; i2 < 32; i2++) {
    _L5_1[i2] = _L3_1;
  }
  kcg_copy_array_int_64(&_L29, (array_int_64 *) &_L9[4]);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&flat_1, &_L29);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&_L1_16, &flat_1);
  /* pow */ for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
      &_L6_1[i1],
      &_L1_16);
  }
  _L27 = 0;
  _L26 = _L33 < _L27;
  n_iter_ok_1 = _L26;
  _4__L11_1 = n_iter_ok_1;
  /* 1 */ if (_4__L11_1) {
    /* 1 */ for (i = 0; i < 32; i++) {
      /* 1_1 */
      C_P027V1_us_array_qdiff_TM_lib_internal(
        i,
        _L5_1[i],
        &_L6_1[i],
        &cond_iterw,
        &_L9_15[i]);
      _L7_1 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7_1 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L7_1; i < 32; i++) {
    kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
      &_L9_15[i],
      (P027V1_section_enum_qdiff_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &sections_1,
    &_L9_15);
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(&_L5, &sections_1);
  kcg_copy_array_int_3(&_L6, (array_int_3 *) &_L9[0]);
  _L23 = kcg_true;
  _L14 = _L6[0];
  _L30 = /* 1 */ CAST_Int_to_D_STATIC_TM_conversions(_L14);
  _L15 = _L6[1];
  _L32 = /* 1 */ CAST_Int_to_V_STATIC_TM_conversions(_L15);
  _L16 = _L6[2];
  _L31 = /* 1 */ CAST_Int_to_Q_FRONT_TM_conversions(_L16);
  _L10.valid = _L23;
  _L10.d_static = _L30;
  _L10.v_static = _L32;
  _L10.q_front = _L31;
  _L10.n_iter = _L33;
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &_L10.SECTIONS_q_diff,
    &_L5);
  kcg_copy_P027V1_section_enum_T_TM_baseline2(P027V1_section_onbard, &_L10);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L20);
  _L9_1 = 31;
  _L11_1 = 0;
  _L10_1 = _L1_1 < _L11_1;
  _L12_1 = _L1_1 > _L9_1;
  _3_noname_1 = _L12_1;
  noname_1 = _L10_1;
  _7_noname_1 = _L7_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

