/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_fs_struct_to_array_TM_lib_internal.h"

void C_P015_fs_struct_to_array_reset_TM_lib_internal(
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P015_fs_struct_to_array */
void C_P015_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P015_fs_struct_to_array::section */P015_section_int_T_TM *section,
  outC_C_P015_fs_struct_to_array_TM_lib_internal *outC)
{
  kcg_copy_P015_section_int_T_TM(&outC->_L1, section);
  outC->_L6 = outC->_L1.D_SECTIONTIMERSTOPLOC;
  outC->_L5 = outC->_L1.T_SECTIONTIMER;
  outC->_L4 = outC->_L1.Q_SECTIONTIMER;
  outC->_L3 = outC->_L1.L_SECTION;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  outC->_L2[2] = outC->_L5;
  outC->_L2[3] = outC->_L6;
  kcg_copy_P015_section_array_T_TM(&outC->section_arrays, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P015_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

