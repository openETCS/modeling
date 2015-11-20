/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage */
void C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::P011 */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *P011,
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::sections */ P011_voltage_list_TM_TrainToTrack *sections)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L1 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L6 */
  static array_int_8_4 _L6;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L9 */
  static array_169735 _L9;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L7 */
  static kcg_int _L7;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L13 */
  static kcg_bool _L13;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L14 */
  static kcg_int _L14;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_voltage::_L15 */
  static array_int_4 _L15;
  
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L1, P011);
  _L14 = DIM_voltage_list_TM_TrainToTrack;
  /* pow */ for (i2 = 0; i2 < 4; i2++) {
    _L15[i2] = _L14;
  }
  /* pow */ for (i1 = 0; i1 < 4; i1++) {
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L6[i1], &_L1);
  }
  _L13 = kcg_true;
  /* 1 */ if (_L13) {
    /* 1 */ for (i = 0; i < 4; i++) {
      /* 1 */
      C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
        i,
        _L15[i],
        &_L6[i],
        &cond_iterw,
        &_L9[i]);
      _L7 = i + 1;
      /* 1 */ if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L7 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  /* 1 */ for (i = _L7; i < 4; i++) {
    kcg_copy_P011_voltage_TM_TrainToTrack(
      &_L9[i],
      (P011_voltage_TM_TrainToTrack *)
        &DEFAULT_P011_voltage_section_TM_TrainToTrack);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P011_voltage_list_TM_TrainToTrack(sections, &_L9);
  noname = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

