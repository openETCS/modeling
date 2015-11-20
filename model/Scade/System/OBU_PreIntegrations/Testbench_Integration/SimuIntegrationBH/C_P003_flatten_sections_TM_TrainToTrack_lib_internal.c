/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_flatten_sections */
void C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::MergedSections */ P003_nid_radio_list_t_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::Flattened */ P003_nid_radio_list_int_t_TM_TrainToTrack *Flattened)
{
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::_L75 */
  static P003_nid_radio_list_t_TM_TrainToTrack _L75;
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::_L74 */
  static array_int_5 _L74;
  
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(&_L75, MergedSections);
  /* 2 */ for (i = 0; i < 5; i++) {
    _L74[i] = /* 1 */
      C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(_L75[i]);
  }
  kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(Flattened, &_L74);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_flatten_sections_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

