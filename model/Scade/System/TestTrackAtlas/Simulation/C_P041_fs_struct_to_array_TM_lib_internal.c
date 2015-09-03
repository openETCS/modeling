/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_fs_struct_to_array_TM_lib_internal.h"

void C_P041_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P041_fs_struct_to_array */
void C_P041_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P041_fs_struct_to_array::section */P041_section_int_T_TM *section,
  outC_C_P041_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P041_section_int_T_TM(&outC->_L1, section);
  outC->_L11 = outC->_L1.L_ACKLEVELTR;
  outC->_L4 = outC->_L1.NID_NTC;
  outC->_L3 = outC->_L1.M_LEVELTR;
  outC->_L10[0] = outC->_L3;
  outC->_L10[1] = outC->_L4;
  outC->_L10[2] = outC->_L11;
  kcg_copy_P041_section_array_T_TM(&outC->section_arrays, &outC->_L10);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

