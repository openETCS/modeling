/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P003_train_compr */
void C_P003_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P003_train_compr::P003_in */ P003_TM_TrainToTrack *P003_in,
  /* TM_TrainToTrack::C_P003_train_compr::P003_int */ P003_TrainTrack_int_TM_TrainToTrack *P003_int)
{
  /* TM_TrainToTrack::C_P003_train_compr::_L1 */
  static P003_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_P003_train_compr::_L6 */
  static P003_nid_radio_list_t_TM_TrainToTrack _L6;
  /* TM_TrainToTrack::C_P003_train_compr::_L5 */
  static N_ITER _L5;
  /* TM_TrainToTrack::C_P003_train_compr::_L4 */
  static L_PACKET _L4;
  /* TM_TrainToTrack::C_P003_train_compr::_L3 */
  static NID_PACKET _L3;
  /* TM_TrainToTrack::C_P003_train_compr::_L2 */
  static kcg_bool _L2;
  /* TM_TrainToTrack::C_P003_train_compr::_L68 */
  static array_int_3 _L68;
  /* TM_TrainToTrack::C_P003_train_compr::_L69 */
  static kcg_int _L69;
  /* TM_TrainToTrack::C_P003_train_compr::_L70 */
  static kcg_int _L70;
  /* TM_TrainToTrack::C_P003_train_compr::_L71 */
  static kcg_int _L71;
  /* TM_TrainToTrack::C_P003_train_compr::_L89 */
  static P003_nid_radio_list_int_t_TM_TrainToTrack _L89;
  /* TM_TrainToTrack::C_P003_train_compr::_L90 */
  static array_int_8 _L90;
  /* TM_TrainToTrack::C_P003_train_compr::_L91 */
  static kcg_int _L91;
  
  kcg_copy_P003_TM_TrainToTrack(&_L1, P003_in);
  _L2 = _L1.valid;
  _L3 = _L1.nid_packet;
  _L69 = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(_L3);
  _L91 = /* 1 */ Encode_NID_PACKET_TM_TrainToTrack(_L2, _L69);
  _L4 = _L1.l_packet;
  _L70 = /* 1 */ CAST_L_PACKET_to_int_TM_conversions(_L4);
  _L5 = _L1.n_iter;
  _L71 = /* 1 */ CAST_N_ITER_to_int_TM_conversions(_L5);
  _L68[0] = _L91;
  _L68[1] = _L70;
  _L68[2] = _L71;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(&_L6, &_L1.nid_radio);
  /* 1 */ C_P003_flatten_sections_TM_TrainToTrack_lib_internal(&_L6, &_L89);
  kcg_copy_array_int_3(&_L90[0], &_L68);
  kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&_L90[3], &_L89);
  kcg_copy_P003_TrainTrack_int_TM_TrainToTrack(P003_int, &_L90);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

