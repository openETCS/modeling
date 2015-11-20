/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc */
void C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc::MergedSections */ P011_ntc_list_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc::Flattened */ P011_ntc_list_array_T_TM_TrainToTrack *Flattened)
{
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc::_L75 */
  static P011_ntc_list_TM_TrainToTrack _L75;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_ntc::_L74 */
  static array_int_5 _L74;
  
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_L75, MergedSections);
  /* 2 */ for (i = 0; i < 5; i++) {
    _L74[i] = /* 1 */
      C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal(_L75[i]);
  }
  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(Flattened, &_L74);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

