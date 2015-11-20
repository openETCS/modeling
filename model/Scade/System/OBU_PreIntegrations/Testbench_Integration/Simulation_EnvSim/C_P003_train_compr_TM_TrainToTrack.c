/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P003_train_compr */
void C_P003_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P003_train_compr::P003_in */P003_TM_TrainToTrack *P003_in,
  /* TM_TrainToTrack::C_P003_train_compr::P003_int */P003_TrainTrack_int_TM_TrainToTrack *P003_int)
{
  (&(*P003_int)[0])[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P003_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P003_in).nid_packet));
  (&(*P003_int)[0])[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P003_in).l_packet);
  (&(*P003_int)[0])[2] = /* 1 */
    CAST_N_ITER_to_int_TM_conversions((*P003_in).n_iter);
  /* 1 */
  C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
    &(*P003_in).nid_radio,
    (P003_nid_radio_list_int_t_TM_TrainToTrack *) &(*P003_int)[3]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:21
*************************************************************$ */

