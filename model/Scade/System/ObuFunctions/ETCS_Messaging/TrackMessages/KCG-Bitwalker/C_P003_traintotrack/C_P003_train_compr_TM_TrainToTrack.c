/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/C_P003_traintotrack\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_train_compr_TM_TrainToTrack.h"

void C_P003_train_compr_reset_TM_TrainToTrack(
  outC_C_P003_train_compr_TM_TrainToTrack *outC)
{
}

/* TM_TrainToTrack::C_P003_train_compr */
void C_P003_train_compr_TM_TrainToTrack(
  inC_C_P003_train_compr_TM_TrainToTrack *inC,
  outC_C_P003_train_compr_TM_TrainToTrack *outC)
{
  kcg_int tmp;
  /* TM_TrainToTrack::C_P003_train_compr::_L87 */ array_int_165 _L87;
  
  outC->meta.start_addr = 0;
  outC->meta.end_addr = DIM_max_elements_P003_TM_TrainToTrack - 1;
  for (tmp = 0; tmp < 165; tmp++) {
    _L87[tmp] = 0;
  }
  tmp = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(inC->P001_in.nid_packet);
  (&(&outC->P000_int[0])[0])[0] = tmp;
  (&(&outC->P000_int[0])[0])[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions(inC->P001_in.l_packet);
  (&(&outC->P000_int[0])[0])[2] = /* 1 */
    CAST_N_ITER_to_int_TM_conversions(inC->P001_in.n_iter);
  /* 1 */
  C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
    &inC->P001_in.nid_radio,
    (P003_nid_radio_list_int_t_TM_TrainToTrack *) &(&outC->P000_int[0])[3]);
  kcg_copy_array_int_165(&outC->P000_int[35], &_L87);
  tmp = /* 1 */ EncodeMeta_TM_TrainToTrack(inC->P001_in.nid_packet, 0);
  outC->meta.meta_id = tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003_train_compr_TM_TrainToTrack.c
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

