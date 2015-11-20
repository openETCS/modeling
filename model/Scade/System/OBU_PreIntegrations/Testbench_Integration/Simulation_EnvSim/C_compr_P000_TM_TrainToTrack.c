/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P000_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P000 */
void C_compr_P000_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P000::P000_in */P000_TrainTrack_int_TM_TrainToTrack *P000_in,
  /* TM_TrainToTrack::C_compr_P000::P000_out */P000_TM_TrainToTrack *P000_out)
{
  static kcg_int tmp;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_TrainToTrack::C_compr_P000::_L88 */
  static kcg_bool _L88;
  
  _L88 = /* 1 */
    Decode_NID_PACKET_TM_TrainToTrack(
      (*P000_in)[0],
      nid_meta_p000_TM_radio_messages);
  (*P000_out).valid = _L88;
  tmp = /* 4 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[2]);
  IfBlock1_clock_1 = tmp == INT_Q_SCALE_10cm_TM_conversions;
  (*P000_out).nid_packet = /* 1 */
    Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[0]);
  (*P000_out).l_packet = /* 2 */
    Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[1]);
  if (IfBlock1_clock_1) {
    (*P000_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = tmp == INT_Q_SCALE_1m_TM_conversions;
    if (_1_else_clock_1_IfBlock1) {
      (*P000_out).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = tmp == INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_1_IfBlock1) {
        (*P000_out).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P000_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*P000_out).nid_lrbg = /* 1 */
    CAST_Int_to_NID_LRBG_TM_conversions(
      /* 3 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[3]));
  (*P000_out).d_lrbg = /* 1 */
    CAST_Int_to_D_LRBG_TM_conversions(
      /* 17 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[4]));
  (*P000_out).q_dirlrbg = /* 1 */
    CAST_Int_to_Q_DIRLRBG_TM_conversions(
      /* 5 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[5]));
  (*P000_out).q_dlrbg = /* 1 */
    CAST_Int_to_Q_DRLRBG_TM_conversions(
      /* 6 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[6]));
  (*P000_out).l_doubtover = /* 1 */
    CAST_Int_to_L_DOUBTOVER_TM_conversions(
      /* 8 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[7]));
  (*P000_out).l_doubtunder = /* 1 */
    CAST_Int_to_L_DOUBTUNDER_TM_conversions(
      /* 7 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[8]));
  (*P000_out).q_length = /* 1 */
    CAST_Int_to_Q_LENGTH_TM_conversions(
      /* 10 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[9]));
  (*P000_out).l_trainint = /* 1 */
    CAST_Int_to_L_TRAININT_TM_conversions(
      /* 9 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[10]));
  (*P000_out).v_train = /* 1 */
    CAST_Int_to_V_TRAIN_TM_conversions(
      /* 12 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[11]));
  (*P000_out).q_dirtrain = /* 1 */
    CAST_Int_to_Q_DIRTRAIN_TM_conversions(
      /* 11 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[12]));
  (*P000_out).m_mode = /* 1 */
    CAST_Int_to_M_MODE_TM_conversions(
      /* 13 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[13]));
  (*P000_out).m_level = /* 1 */
    CAST_Int_to_M_LEVEL_TM_conversions(
      /* 14 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[14]));
  (*P000_out).nid_ntc = /* 1 */
    CAST_Int_to_NID_NTC_TM_conversions(
      /* 16 */ Filter_Variable_TM_TrainToTrack(_L88, (*P000_in)[15]));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_compr_P000_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

