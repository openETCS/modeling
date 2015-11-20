/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P005_train_compr */
void C_P005_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P005_train_compr::P005_in */P005_TM_TrainToTrack *P005_in,
  /* TM_TrainToTrack::C_P005_train_compr::P005_int */P005_TrainTrack_int_TM_TrainToTrack *P005_int)
{
  (*P005_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P005_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P005_in).nid_packet));
  (*P005_int)[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P005_in).l_packet);
  (*P005_int)[2] = /* 1 */
    CAST_NID_OPERATIONAL_to_int_TM_conversions((*P005_in).nid_opeartional);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

