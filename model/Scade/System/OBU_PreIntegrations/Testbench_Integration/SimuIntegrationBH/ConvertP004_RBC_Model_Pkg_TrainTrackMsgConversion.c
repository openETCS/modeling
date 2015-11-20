/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004 */
void ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::newP004 */ P004_TM_TrainToTrack *newP004,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::oldP004 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *oldP004)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::_L1 */
  static P004_TM_TrainToTrack _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::_L5 */
  static kcg_bool _L5;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::_L4 */
  static NID_PACKET _L4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::_L3 */
  static L_PACKET _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::_L2 */
  static M_ERROR _L2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP004::_L6 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L6;
  
  kcg_copy_P004_TM_TrainToTrack(&_L1, newP004);
  _L5 = _L1.valid;
  _L2 = _L1.m_error;
  _L6.valid = _L5;
  _L6.m_error = _L2;
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(oldP004, &_L6);
  _L3 = _L1.l_packet;
  _L4 = _L1.nid_packet;
  noname = _L4;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP004_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

