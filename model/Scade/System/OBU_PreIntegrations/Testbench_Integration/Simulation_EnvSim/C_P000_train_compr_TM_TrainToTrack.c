/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P000_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P000_train_compr */
void C_P000_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P000_train_compr::P000_in */P000_TM_TrainToTrack *P000_in,
  /* TM_TrainToTrack::C_P000_train_compr::P000_int */P000_TrainTrack_int_TM_TrainToTrack *P000_int)
{
  (*P000_int)[16] = 0;
  (*P000_int)[0] = /* 2 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P000_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P000_in).nid_packet));
  (*P000_int)[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P000_in).l_packet);
  (*P000_int)[2] = /* 1 */
    CAST_Q_SCALE_to_int_TM_conversions((*P000_in).q_scale);
  (*P000_int)[3] = /* 1 */
    CAST_NID_LRBG_to_int_TM_conversions((*P000_in).nid_lrbg);
  (*P000_int)[4] = /* 1 */ CAST_D_LRBG_to_int_TM_conversions((*P000_in).d_lrbg);
  (*P000_int)[5] = /* 1 */
    CAST_Q_DIRLRBG_to_int_TM_conversions((*P000_in).q_dirlrbg);
  (*P000_int)[6] = /* 2 */
    CAST_Q_DRLRBG_to_int_TM_conversions((*P000_in).q_dlrbg);
  (*P000_int)[7] = /* 2 */
    CAST_L_DOUBTOVER_to_int_TM_conversions((*P000_in).l_doubtover);
  (*P000_int)[8] = /* 1 */
    CAST_L_DOUBTUNDER_to_int_TM_conversions((*P000_in).l_doubtunder);
  (*P000_int)[9] = /* 1 */
    CAST_Q_LENGTH_to_int_TM_conversions((*P000_in).q_length);
  (*P000_int)[10] = /* 1 */
    CAST_L_TRAININT_to_int_TM_conversions((*P000_in).l_trainint);
  (*P000_int)[11] = /* 1 */
    CAST_V_TRAIN_to_int_TM_conversions((*P000_in).v_train);
  (*P000_int)[12] = /* 1 */
    CAST_Q_DIRTRAIN_to_int_TM_conversions((*P000_in).q_dirtrain);
  (*P000_int)[13] = /* 1 */
    CAST_M_MODE_to_int_TM_conversions((*P000_in).m_mode);
  (*P000_int)[14] = /* 1 */
    CAST_M_LEVEL_to_int_TM_conversions((*P000_in).m_level);
  (*P000_int)[15] = /* 1 */
    CAST_NID_NTC_to_int_TM_conversions((*P000_in).nid_ntc);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P000_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

