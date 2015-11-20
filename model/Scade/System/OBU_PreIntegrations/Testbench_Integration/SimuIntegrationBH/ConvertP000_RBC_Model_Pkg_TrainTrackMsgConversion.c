/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000 */
void ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::newP000 */ P000_TM_TrainToTrack *newP000,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::oldP000 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *oldP000)
{
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L1 */
  static P000_TM_TrainToTrack _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L18 */
  static kcg_bool _L18;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L17 */
  static NID_PACKET _L17;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L16 */
  static L_PACKET _L16;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L15 */
  static Q_SCALE _L15;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L14 */
  static NID_LRBG _L14;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L13 */
  static D_LRBG _L13;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L12 */
  static Q_DIRLRBG _L12;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L11 */
  static Q_DLRBG _L11;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L10 */
  static L_DOUBTOVER _L10;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L9 */
  static L_DOUBTUNDER _L9;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L8 */
  static Q_LENGTH _L8;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L7 */
  static L_TRAININT _L7;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L6 */
  static V_TRAIN _L6;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L5 */
  static Q_DIRTRAIN _L5;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L4 */
  static M_MODE _L4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L3 */
  static M_LEVEL _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L2 */
  static NID_NTC _L2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L19 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L19;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L20 */
  static Position_Report_TrainToTrack _L20;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L22 */
  static kcg_int _L22;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L23 */
  static kcg_int _L23;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L25 */
  static kcg_int _L25;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L26 */
  static kcg_int _L26;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L28 */
  static kcg_int _L28;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L29 */
  static kcg_int _L29;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L30 */
  static kcg_int _L30;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L31 */
  static kcg_int _L31;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP000::_L32 */
  static kcg_int _L32;
  
  kcg_copy_P000_TM_TrainToTrack(&_L1, newP000);
  _L18 = _L1.valid;
  _L17 = _L1.nid_packet;
  _L22 = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(_L17);
  _L16 = _L1.l_packet;
  _L23 = /* 1 */ CAST_L_PACKET_to_int_TM_conversions(_L16);
  _L15 = _L1.q_scale;
  _L14 = _L1.nid_lrbg;
  _L25 = /* 1 */ CAST_NID_LRBG_to_int_TM_conversions(_L14);
  _L13 = _L1.d_lrbg;
  _L26 = /* 1 */ CAST_D_LRBG_to_int_TM_conversions(_L13);
  _L12 = _L1.q_dirlrbg;
  _L11 = _L1.q_dlrbg;
  _L10 = _L1.l_doubtover;
  _L28 = /* 1 */ CAST_L_DOUBTOVER_to_int_TM_conversions(_L10);
  _L9 = _L1.l_doubtunder;
  _L29 = /* 1 */ CAST_L_DOUBTUNDER_to_int_TM_conversions(_L9);
  _L8 = _L1.q_length;
  _L7 = _L1.l_trainint;
  _L30 = /* 1 */ CAST_L_TRAININT_to_int_TM_conversions(_L7);
  _L6 = _L1.v_train;
  _L31 = /* 1 */ CAST_V_TRAIN_to_int_TM_conversions(_L6);
  _L5 = _L1.q_dirtrain;
  _L4 = _L1.m_mode;
  _L3 = _L1.m_level;
  _L2 = _L1.nid_ntc;
  _L32 = /* 1 */ CAST_NID_NTC_to_int_TM_conversions(_L2);
  _L20.NID_PACKET = _L22;
  _L20.L_PACKET = _L23;
  _L20.qscale = _L15;
  _L20.NID_LRBG = _L25;
  _L20.D_LRBG = _L26;
  _L20.dirlrbg = _L12;
  _L20.dlrbg = _L11;
  _L20.L_DOUBTOVER = _L28;
  _L20.L_DOUBTUNDER = _L29;
  _L20.length = _L8;
  _L20.L_TRAININT = _L30;
  _L20.V_TRAIN = _L31;
  _L20.dirtrain = _L5;
  _L20.mode = _L4;
  _L20.level = _L3;
  _L20.NID_NTC = _L32;
  _L19.valid = _L18;
  kcg_copy_Position_Report_TrainToTrack(&_L19.packet0, &_L20);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(oldP000, &_L19);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP000_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

