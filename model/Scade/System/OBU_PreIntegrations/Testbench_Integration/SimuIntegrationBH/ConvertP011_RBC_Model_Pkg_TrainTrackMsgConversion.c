/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011 */
void ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::newP011 */ P011_TM_TrainToTrack *newP011,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::oldP011 */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *oldP011)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  static L_TRAIN _2_noname;
  static V_MAXTRAIN _3_noname;
  static N_ITER _4_noname;
  static P011_voltage_list_TM_TrainToTrack _5_noname;
  static N_ITER _6_noname;
  static P011_ntc_list_TM_TrainToTrack _7_noname;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L1 */
  static P011_TM_TrainToTrack _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L16 */
  static kcg_bool _L16;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L15 */
  static NID_PACKET _L15;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L14 */
  static L_PACKET _L14;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L13 */
  static NC_CDTRAIN _L13;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L12 */
  static NC_TRAIN _L12;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L11 */
  static L_TRAIN _L11;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L10 */
  static V_MAXTRAIN _L10;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L9 */
  static M_LOADINGGAUGE _L9;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L8 */
  static M_AXLELOADCAT _L8;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L7 */
  static M_AIRTIGHT _L7;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L6 */
  static N_AXLE _L6;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L5 */
  static N_ITER _L5;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L4 */
  static P011_voltage_list_TM_TrainToTrack _L4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L3 */
  static N_ITER _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L2 */
  static P011_ntc_list_TM_TrainToTrack _L2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L17 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L17;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L18 */
  static kcg_int _L18;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L19 */
  static kcg_int _L19;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L20 */
  static aTractionIdentity_T_Packet_TrainTypes_Pkg _L20;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011::_L21 */
  static aNID_NTC_T_Packet_TrainTypes_Pkg _L21;
  
  kcg_copy_P011_TM_TrainToTrack(&_L1, newP011);
  _L16 = _L1.valid;
  _L13 = _L1.nc_cdtrain;
  _L12 = _L1.nc_train;
  _L18 = 0;
  _L9 = _L1.m_loadinggauge;
  _L8 = _L1.m_axleloadcat;
  _L7 = _L1.m_airtight;
  _L6 = _L1.n_axle;
  _L19 = 0;
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &_L20,
    (aTractionIdentity_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_TRACTION_IDENTITY_RBC_Model_Pkg_TrainTrackMsgConversion);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    &_L21,
    (aNID_NTC_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_NID_NTC_RBC_Model_Pkg_TrainTrackMsgConversion);
  _L17.valid = _L16;
  _L17.nc_cdtrain = _L13;
  _L17.nc_train = _L12;
  _L17.l_train = _L18;
  _L17.v_maxtrain = _L18;
  _L17.m_loadinggoage = _L9;
  _L17.m_axleloadcat = _L8;
  _L17.m_airtight = _L7;
  _L17.n_axle = _L6;
  _L17.nIter_tractionIdentity = _L19;
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &_L17.tractionIdentity,
    &_L20);
  _L17.nIter_ntc = _L19;
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(&_L17.nid_ntc, &_L21);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(oldP011, &_L17);
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_L2, &_L1.nid_ntc_list);
  _L3 = _L1.n_iter_nid_ntc;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_L4, &_L1.voltage_list);
  _L5 = _L1.n_iter_voltage;
  _L10 = _L1.v_maxtrain;
  _L11 = _L1.l_train;
  _L14 = _L1.l_packet;
  _L15 = _L1.nid_packet;
  noname = _L15;
  _1_noname = _L14;
  _2_noname = _L11;
  _3_noname = _L10;
  _4_noname = _L5;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_5_noname, &_L4);
  _6_noname = _L3;
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_7_noname, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

