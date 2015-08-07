/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_us_array_TM_lib_internal.h"

/* TM_lib_internal::C_P021_us_array */
void C_P021_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P021_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P021_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P021_us_array::flat */P021_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P021_us_array::cont */kcg_bool *cont,
  /* TM_lib_internal::C_P021_us_array::sections */P021_section_enum_T_TM *sections)
{
  G_A tmp;
  
  (*sections).valid = kcg_true;
  *cont = n_iter_int > i;
  tmp = i * DIM_P021_n_sections_TM_lib_internal;
  (*sections).d_gradient = /* 1 */
    CAST_Int_to_D_GRADIENT_TM_conversions(
      /* 1 */ C_P021_extract_el_section_TM_lib_internal(tmp, flat, 0));
  (*sections).q_gdir = /* 1 */
    CAST_Int_to_Q_GDIR_TM_conversions(
      /* 2 */ C_P021_extract_el_section_TM_lib_internal(tmp, flat, 1));
  (*sections).g_a = /* 1 */
    CAST_Int_to_G_A_TM_conversions(
      /* 3 */ C_P021_extract_el_section_TM_lib_internal(tmp, flat, 2));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_us_array_TM_lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

