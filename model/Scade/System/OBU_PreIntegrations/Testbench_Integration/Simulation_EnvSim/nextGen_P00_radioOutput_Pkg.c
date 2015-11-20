/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_P00_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_P00 */
void nextGen_P00_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_P00::inP0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *inP0,
  /* radioOutput_Pkg::nextGen_P00::outP0 */P000_TM_TrainToTrack *outP0)
{
  (*outP0).valid = (*inP0).valid;
  (*outP0).nid_packet = (*inP0).packet0.NID_PACKET;
  (*outP0).l_packet = 0;
  (*outP0).q_scale = (*inP0).packet0.qscale;
  (*outP0).nid_lrbg = (*inP0).packet0.NID_LRBG;
  (*outP0).d_lrbg = (*inP0).packet0.D_LRBG;
  (*outP0).q_dirlrbg = (*inP0).packet0.dirlrbg;
  (*outP0).q_dlrbg = (*inP0).packet0.dlrbg;
  (*outP0).l_doubtover = (*inP0).packet0.L_DOUBTOVER;
  (*outP0).l_doubtunder = (*inP0).packet0.L_DOUBTUNDER;
  (*outP0).q_length = (*inP0).packet0.length;
  (*outP0).l_trainint = (*inP0).packet0.L_TRAININT;
  (*outP0).v_train = (*inP0).packet0.V_TRAIN;
  (*outP0).q_dirtrain = (*inP0).packet0.dirtrain;
  (*outP0).m_mode = (*inP0).packet0.mode;
  (*outP0).m_level = (*inP0).packet0.level;
  (*outP0).nid_ntc = (*inP0).packet0.NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nextGen_P00_radioOutput_Pkg.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

