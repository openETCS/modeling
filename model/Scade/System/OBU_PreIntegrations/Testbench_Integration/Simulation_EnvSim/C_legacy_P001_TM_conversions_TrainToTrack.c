/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"

/* TM_conversions_TrainToTrack::C_legacy_P001 */
void C_legacy_P001_TM_conversions_TrainToTrack(
  /* TM_conversions_TrainToTrack::C_legacy_P001::legacy_in */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *legacy_in,
  /* TM_conversions_TrainToTrack::C_legacy_P001::p */P001_TM_TrainToTrack *p)
{
  (*p).valid = (*legacy_in).valid;
  (*p).nid_packet = (*legacy_in).packet1.NID_PACKET;
  (*p).l_packet = (*legacy_in).packet1.L_PACKET;
  (*p).q_scale = (*legacy_in).packet1.qscale;
  (*p).nid_lrbg = (*legacy_in).packet1.NID_LRBG;
  (*p).nid_prvlrbg = (*legacy_in).packet1.NID_PRVLRBG;
  (*p).d_lrbg = (*legacy_in).packet1.D_LRBG;
  (*p).q_dirlrbg = (*legacy_in).packet1.dirlrbg;
  (*p).q_dlrbg = (*legacy_in).packet1.dlrbg;
  (*p).l_doubtover = (*legacy_in).packet1.L_DOUBTOVER;
  (*p).l_doubtunder = (*legacy_in).packet1.L_DOUBTUNDER;
  (*p).q_length = (*legacy_in).packet1.length;
  (*p).l_trainint = (*legacy_in).packet1.L_TRAININT;
  (*p).v_train = (*legacy_in).packet1.V_TRAIN;
  (*p).q_dirtrain = (*legacy_in).packet1.dirtrain;
  (*p).m_mode = (*legacy_in).packet1.mode;
  (*p).m_level = (*legacy_in).packet1.level;
  (*p).nid_ntc = (*legacy_in).packet1.NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_legacy_P001_TM_conversions_TrainToTrack.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

