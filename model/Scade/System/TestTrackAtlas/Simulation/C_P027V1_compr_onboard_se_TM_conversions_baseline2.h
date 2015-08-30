/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */
#ifndef _C_P027V1_compr_onboard_se_TM_conversions_baseline2_H_
#define _C_P027V1_compr_onboard_se_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "C_P027V1_us_array_qdiff_TM_lib_internal.h"
#include "CAST_Int_to_D_STATIC_TM_conversions.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"
#include "CAST_Int_to_V_STATIC_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_section_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::P027V1_section_onbard */ P027V1_section_onbard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_us_array_qdiff_TM_lib_internal /* 1_1 */ Context_1_1[32];
  outC_CAST_Int_to_D_STATIC_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_Q_FRONT_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_V_STATIC_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L1 */ _L1_15;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L12 */ _L12_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L11 */ _4__L11_1;
  kcg_bool /* TM_conversions::CAST_Int_to_N_ITER::_L10 */ _L10_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::_L9 */ _L9_13;
  N_ITER /* TM_conversions::CAST_Int_to_N_ITER::n_iter */ _6_n_iter_1;
  kcg_int /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */ n_iter_int_1;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L1 */ _L1_1;
  kcg_int /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L3 */ _L3_1;
  array_int_32 /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L5 */ _L5_1;
  array_int_64_32 /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L6 */ _L6_1;
  kcg_int /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L7 */ _L7_1;
  array__2688 /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L9 */ _L9_1;
  kcg_bool /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::_L11 */ _L11_1;
  _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::sections */ sections_1;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::flat */ flat_1;
  kcg_int /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::n_iter */ n_iter_1;
  kcg_bool /* TM_lib_internal::C_P027V1_unflatten_sections_qdiff::n_iter_ok */ n_iter_ok_1;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L14 */ _L14;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L15 */ _L15;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L16 */ _L16;
  P027V1_section_enum_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L9 */ _L9;
  array_int_3 /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L6 */ _L6;
  _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L5 */ _L5;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L20 */ _L20;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L23 */ _L23;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L26 */ _L26;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L27 */ _L27;
  kcg_int /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L28 */ _L28;
  array_int_64 /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L29 */ _L29;
  V_STATIC /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L32 */ _L32;
  Q_FRONT /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L31 */ _L31;
  D_STATIC /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L30 */ _L30;
  N_ITER /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L33 */ _L33;
} outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */
extern void C_P027V1_compr_onboard_se_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2 *outC);

extern void C_P027V1_compr_onboard_se_reset_TM_conversions_baseline2(
  outC_C_P027V1_compr_onboard_se_TM_conversions_baseline2 *outC);

#endif /* _C_P027V1_compr_onboard_se_TM_conversions_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_compr_onboard_se_TM_conversions_baseline2.h
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

