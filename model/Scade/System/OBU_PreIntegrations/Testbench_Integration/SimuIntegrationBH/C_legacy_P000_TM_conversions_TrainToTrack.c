/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"

/* TM_conversions_TrainToTrack::C_legacy_P000 */
void C_legacy_P000_TM_conversions_TrainToTrack(
  /* TM_conversions_TrainToTrack::C_legacy_P000::legacy_in */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *legacy_in,
  /* TM_conversions_TrainToTrack::C_legacy_P000::p */ P000_TM_TrainToTrack *p)
{
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L3 */
  static Position_Report_TrainToTrack _L3;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L2 */
  static kcg_bool _L2;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L6 */
  static P000_TM_TrainToTrack _L6;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L38 */
  static kcg_int _L38;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L37 */
  static M_LEVEL _L37;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L36 */
  static M_MODE _L36;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L35 */
  static Q_DIRTRAIN _L35;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L34 */
  static kcg_int _L34;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L33 */
  static kcg_int _L33;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L32 */
  static Q_LENGTH _L32;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L31 */
  static kcg_int _L31;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L30 */
  static kcg_int _L30;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L29 */
  static Q_DLRBG _L29;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L28 */
  static Q_DIRLRBG _L28;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L27 */
  static kcg_int _L27;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L26 */
  static kcg_int _L26;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L25 */
  static Q_SCALE _L25;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L24 */
  static kcg_int _L24;
  /* TM_conversions_TrainToTrack::C_legacy_P000::_L23 */
  static kcg_int _L23;
  
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L1, legacy_in);
  _L2 = _L1.valid;
  kcg_copy_Position_Report_TrainToTrack(&_L3, &_L1.packet0);
  _L23 = _L3.NID_PACKET;
  _L24 = _L3.L_PACKET;
  _L25 = _L3.qscale;
  _L26 = _L3.NID_LRBG;
  _L27 = _L3.D_LRBG;
  _L28 = _L3.dirlrbg;
  _L29 = _L3.dlrbg;
  _L30 = _L3.L_DOUBTOVER;
  _L31 = _L3.L_DOUBTUNDER;
  _L32 = _L3.length;
  _L33 = _L3.L_TRAININT;
  _L34 = _L3.V_TRAIN;
  _L35 = _L3.dirtrain;
  _L36 = _L3.mode;
  _L37 = _L3.level;
  _L38 = _L3.NID_NTC;
  _L6.valid = _L2;
  _L6.nid_packet = _L23;
  _L6.l_packet = _L24;
  _L6.q_scale = _L25;
  _L6.nid_lrbg = _L26;
  _L6.d_lrbg = _L27;
  _L6.q_dirlrbg = _L28;
  _L6.q_dlrbg = _L29;
  _L6.l_doubtover = _L30;
  _L6.l_doubtunder = _L31;
  _L6.q_length = _L32;
  _L6.l_trainint = _L33;
  _L6.v_train = _L34;
  _L6.q_dirtrain = _L35;
  _L6.m_mode = _L36;
  _L6.m_level = _L37;
  _L6.nid_ntc = _L38;
  kcg_copy_P000_TM_TrainToTrack(p, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_legacy_P000_TM_conversions_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

