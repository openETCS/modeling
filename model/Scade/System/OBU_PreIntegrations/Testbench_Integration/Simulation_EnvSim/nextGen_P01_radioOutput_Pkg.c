/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P01_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P01 */
void nextGen_P01_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P01::inP1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inP1,
  /* radioOutput_Pkg::nextGen_P01::outP1 */P001_TM_TrainToTrack *outP1)
{
  (*outP1).valid = (*inP1).valid;
  (*outP1).nid_packet = (*inP1).packet1.NID_PACKET;
  (*outP1).l_packet = 0;
  (*outP1).q_scale = (*inP1).packet1.qscale;
  (*outP1).nid_lrbg = (*inP1).packet1.NID_LRBG;
  (*outP1).nid_prvlrbg = (*inP1).packet1.NID_PRVLRBG;
  (*outP1).d_lrbg = (*inP1).packet1.D_LRBG;
  (*outP1).q_dirlrbg = (*inP1).packet1.dirlrbg;
  (*outP1).q_dlrbg = (*inP1).packet1.dlrbg;
  (*outP1).l_doubtover = (*inP1).packet1.L_DOUBTOVER;
  (*outP1).l_doubtunder = (*inP1).packet1.L_DOUBTUNDER;
  (*outP1).q_length = (*inP1).packet1.length;
  (*outP1).l_trainint = (*inP1).packet1.L_TRAININT;
  (*outP1).v_train = (*inP1).packet1.V_TRAIN;
  (*outP1).q_dirtrain = (*inP1).packet1.dirtrain;
  (*outP1).m_mode = (*inP1).packet1.mode;
  (*outP1).m_level = (*inP1).packet1.level;
  (*outP1).nid_ntc = (*inP1).packet1.NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nextGen_P01_radioOutput_Pkg.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

