/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_us_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_us_array_qdiff */
void C_P027V1_us_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_us_array_qdiff::i */kcg_int i,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::flat */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::cont */kcg_bool *cont,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::sections */P027V1_section_enum_qdiff_T_TM_baseline2 *sections)
{
  static V_DIFF tmp;
  
  (*sections).valid = kcg_true;
  *cont = n_iter_int > i;
  tmp = i * DIM_P027V1_n_sections_qdiff_TM_lib_internal;
  (*sections).nc_diff = /* 1 */
    CAST_Int_to_NC_DIFF_TM_conversions(
      /* 1 */ C_P027V1_extract_el_section_TM_lib_internal(tmp, flat, 0));
  (*sections).v_diff = /* 1 */
    CAST_Int_to_V_DIFF_TM_conversions(
      /* 2 */ C_P027V1_extract_el_section_TM_lib_internal(tmp, flat, 1));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_us_array_qdiff_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

