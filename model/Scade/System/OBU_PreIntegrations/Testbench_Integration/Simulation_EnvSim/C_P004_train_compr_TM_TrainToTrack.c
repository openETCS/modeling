/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P004_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P004_train_compr */
void C_P004_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P004_train_compr::P004_in */P004_TM_TrainToTrack *P004_in,
  /* TM_TrainToTrack::C_P004_train_compr::P004_int */P004_TrainTrack_int_TM_TrainToTrack *P004_int)
{
  (*P004_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P004_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P004_in).nid_packet));
  (*P004_int)[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P004_in).l_packet);
  (*P004_int)[2] = /* 1 */
    CAST_M_ERROR_to_int_TM_conversions((*P004_in).m_error);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P004_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

