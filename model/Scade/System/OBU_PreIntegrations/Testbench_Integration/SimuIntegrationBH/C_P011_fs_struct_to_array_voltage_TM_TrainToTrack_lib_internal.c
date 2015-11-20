/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage */
void C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::section */ P011_voltage_TM_TrainToTrack *section,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::section_arrays */ P011_voltage_section_array_T_TM_TrainToTrack *section_arrays)
{
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::_L1 */
  static P011_voltage_TM_TrainToTrack _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::_L2 */
  static array_int_2 _L2;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::_L4 */
  static NID_CTRACTION _L4;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::_L3 */
  static M_VOLTAGE _L3;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::_L13 */
  static kcg_int _L13;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_voltage::_L14 */
  static kcg_int _L14;
  
  kcg_copy_P011_voltage_TM_TrainToTrack(&_L1, section);
  _L3 = _L1.m_voltage;
  _L13 = /* 1 */ CAST_M_VOLTAGE_to_int_TM_conversions(_L3);
  _L4 = _L1.nid_ctraction;
  _L14 = /* 1 */ CAST_NID_CTRACTION_to_int_TM_conversions(_L4);
  _L2[0] = _L13;
  _L2[1] = _L14;
  kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack(section_arrays, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

