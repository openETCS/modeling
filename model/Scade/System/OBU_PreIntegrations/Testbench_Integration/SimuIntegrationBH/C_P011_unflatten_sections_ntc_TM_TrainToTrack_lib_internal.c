/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc */
void C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::P011 */ P011_ntc_list_array_T_TM_TrainToTrack *P011,
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::sections */ P011_ntc_list_TM_TrainToTrack *sections)
{
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::_L1 */
  static P011_ntc_list_array_T_TM_TrainToTrack _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::_L9 */
  static array_int_5 _L9;
  
  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(&_L1, P011);
  /* 1 */ for (i = 0; i < 5; i++) {
    _L9[i] = /* 1 */ C_P011_us_array_ntc_TM_TrainToTrack_lib_internal(_L1[i]);
  }
  kcg_copy_P011_ntc_list_TM_TrainToTrack(sections, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

