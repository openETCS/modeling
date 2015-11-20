/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"

/* TM_conversions_TrainToTrack::C_legacy_P001 */
void C_legacy_P001_TM_conversions_TrainToTrack(
  /* TM_conversions_TrainToTrack::C_legacy_P001::legacy_in */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *legacy_in,
  /* TM_conversions_TrainToTrack::C_legacy_P001::p */ P001_TM_TrainToTrack *p)
{
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L1 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L3 */
  static Position_Report_based_on_two_balise_groups_TrainToTrack _L3;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L2 */
  static kcg_bool _L2;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L6 */
  static P001_TM_TrainToTrack _L6;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L38 */
  static M_LEVEL _L38;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L37 */
  static M_MODE _L37;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L36 */
  static Q_DIRTRAIN _L36;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L35 */
  static kcg_int _L35;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L34 */
  static kcg_int _L34;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L33 */
  static Q_LENGTH _L33;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L32 */
  static kcg_int _L32;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L31 */
  static kcg_int _L31;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L30 */
  static Q_DLRBG _L30;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L29 */
  static Q_DIRLRBG _L29;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L28 */
  static kcg_int _L28;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L27 */
  static kcg_int _L27;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L26 */
  static kcg_int _L26;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L25 */
  static Q_SCALE _L25;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L24 */
  static kcg_int _L24;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L23 */
  static kcg_int _L23;
  /* TM_conversions_TrainToTrack::C_legacy_P001::_L39 */
  static kcg_int _L39;
  
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L1, legacy_in);
  _L2 = _L1.valid;
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &_L3,
    &_L1.packet1);
  _L23 = _L3.NID_PACKET;
  _L24 = _L3.L_PACKET;
  _L25 = _L3.qscale;
  _L26 = _L3.NID_LRBG;
  _L27 = _L3.NID_PRVLRBG;
  _L28 = _L3.D_LRBG;
  _L29 = _L3.dirlrbg;
  _L30 = _L3.dlrbg;
  _L31 = _L3.L_DOUBTOVER;
  _L32 = _L3.L_DOUBTUNDER;
  _L33 = _L3.length;
  _L34 = _L3.L_TRAININT;
  _L35 = _L3.V_TRAIN;
  _L36 = _L3.dirtrain;
  _L37 = _L3.mode;
  _L38 = _L3.level;
  _L39 = _L3.NID_NTC;
  _L6.valid = _L2;
  _L6.nid_packet = _L23;
  _L6.l_packet = _L24;
  _L6.q_scale = _L25;
  _L6.nid_lrbg = _L26;
  _L6.nid_prvlrbg = _L27;
  _L6.d_lrbg = _L28;
  _L6.q_dirlrbg = _L29;
  _L6.q_dlrbg = _L30;
  _L6.l_doubtover = _L31;
  _L6.l_doubtunder = _L32;
  _L6.q_length = _L33;
  _L6.l_trainint = _L34;
  _L6.v_train = _L35;
  _L6.q_dirtrain = _L36;
  _L6.m_mode = _L37;
  _L6.m_level = _L38;
  _L6.nid_ntc = _L39;
  kcg_copy_P001_TM_TrainToTrack(p, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_legacy_P001_TM_conversions_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

