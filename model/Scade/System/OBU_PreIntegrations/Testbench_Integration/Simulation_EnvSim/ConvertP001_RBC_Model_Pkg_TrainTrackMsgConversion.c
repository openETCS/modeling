/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001 */
void ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001::newP001 */P001_TM_TrainToTrack *newP001,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001::oldP001 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *oldP001)
{
  (*oldP001).valid = (*newP001).valid;
  (*oldP001).packet1.NID_PACKET = /* 1 */
    CAST_NID_PACKET_to_int_TM_conversions((*newP001).nid_packet);
  (*oldP001).packet1.L_PACKET = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*newP001).l_packet);
  (*oldP001).packet1.qscale = (*newP001).q_scale;
  (*oldP001).packet1.NID_LRBG = /* 1 */
    CAST_NID_LRBG_to_int_TM_conversions((*newP001).nid_lrbg);
  (*oldP001).packet1.NID_PRVLRBG = /* 1 */
    CAST_NID_PRVLRBG_to_int_TM_conversions((*newP001).nid_prvlrbg);
  (*oldP001).packet1.D_LRBG = /* 2 */
    CAST_D_LRBG_to_int_TM_conversions((*newP001).d_lrbg);
  (*oldP001).packet1.dirlrbg = (*newP001).q_dirlrbg;
  (*oldP001).packet1.dlrbg = (*newP001).q_dlrbg;
  (*oldP001).packet1.L_DOUBTOVER = /* 1 */
    CAST_L_DOUBTOVER_to_int_TM_conversions((*newP001).l_doubtover);
  (*oldP001).packet1.L_DOUBTUNDER = /* 1 */
    CAST_L_DOUBTUNDER_to_int_TM_conversions((*newP001).l_doubtunder);
  (*oldP001).packet1.length = (*newP001).q_length;
  (*oldP001).packet1.L_TRAININT = /* 1 */
    CAST_V_TRAIN_to_int_TM_conversions((*newP001).l_trainint);
  (*oldP001).packet1.V_TRAIN = (*newP001).v_train;
  (*oldP001).packet1.dirtrain = (*newP001).q_dirtrain;
  (*oldP001).packet1.mode = (*newP001).m_mode;
  (*oldP001).packet1.level = (*newP001).m_level;
  (*oldP001).packet1.NID_NTC = /* 2 */
    CAST_NID_NTC_to_int_TM_conversions((*newP001).nid_ntc);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

