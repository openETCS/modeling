/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2 */
void C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::P027V1_section_onbard */P027V1_section_enum_T_TM_baseline2 *P027V1_section_onbard)
{
  static kcg_bool tmp2;
  static D_STATIC tmp1;
  static V_STATIC tmp;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L6 */
  static array_int_3 _L6;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L5 */
  static P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 _L5;
  /* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2::_L29 */
  static array_int_64 _L29;
  
  (*P027V1_section_onbard).valid = kcg_true;
  (*P027V1_section_onbard).n_iter = (*PacketData)[3];
  kcg_copy_array_int_64(&_L29, (array_int_64 *) &(*PacketData)[4]);
  kcg_copy_array_int_3(&_L6, (array_int_3 *) &(*PacketData)[0]);
  if ((*PacketData)[3] < 0) {
    for (tmp1 = 0; tmp1 < 32; tmp1++) {
      /* 1_1 */
      C_P027V1_us_array_qdiff_TM_lib_internal(
        tmp1,
        (*PacketData)[3],
        &_L29,
        &tmp2,
        &_L5[tmp1]);
      tmp = tmp1 + 1;
      if (!tmp2) {
        break;
      }
    }
  }
  else {
    tmp = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (tmp1 = tmp; tmp1 < 32; tmp1++) {
    kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
      &_L5[tmp1],
      (P027V1_section_enum_qdiff_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
    &(*P027V1_section_onbard).SECTIONS_q_diff,
    &_L5);
  tmp1 = /* 1 */ CAST_Int_to_D_STATIC_TM_conversions(_L6[0]);
  (*P027V1_section_onbard).d_static = tmp1;
  (*P027V1_section_onbard).v_static = /* 1 */
    CAST_Int_to_V_STATIC_TM_conversions(_L6[1]);
  (*P027V1_section_onbard).q_front = /* 1 */
    CAST_Int_to_Q_FRONT_TM_conversions(_L6[2]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

