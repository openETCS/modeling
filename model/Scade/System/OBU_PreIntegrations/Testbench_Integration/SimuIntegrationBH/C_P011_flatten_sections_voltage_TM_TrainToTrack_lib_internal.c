/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
void C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::MergedSections */ P011_voltage_list_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::Flattened */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *Flattened)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack acc;
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L76 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L76;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L75 */
  static P011_voltage_list_TM_TrainToTrack _L75;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L74 */
  static P011_voltage_sectionlist_array_T_TM_TrainToTrack _L74;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L78 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L78;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L80 */
  static array_int_2_4_8 _L80;
  
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &_L76,
    (P011_voltage_sections_array_flat_t_TM_TrainToTrack *)
      &DEFAULT_P011_voltage_sections_array_flat_TM_TrainToTrack);
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_L75, MergedSections);
  /* 2 */ for (i2 = 0; i2 < 4; i2++) {
    /* 1 */
    C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
      &_L75[i2],
      &_L74[i2]);
  }
  /* pow */ for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack(&_L80[i1], &_L74);
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L78, &_L76);
  /* 1 */ for (i = 0; i < 8; i++) {
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&acc, &_L78);
    /* 1 */
    C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
      i,
      &acc,
      &_L80[i],
      &_L78);
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(Flattened, &_L78);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

