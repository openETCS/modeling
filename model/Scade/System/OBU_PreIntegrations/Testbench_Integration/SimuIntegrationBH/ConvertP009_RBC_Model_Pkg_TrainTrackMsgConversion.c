/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009 */
void ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::newP009 */ P009_TM_TrainToTrack *newP009,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::oldP009 */ PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *oldP009)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::_L1 */
  static P009_TM_TrainToTrack _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::_L5 */
  static kcg_bool _L5;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::_L4 */
  static NID_PACKET _L4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::_L3 */
  static L_PACKET _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::_L2 */
  static NID_LTRBG _L2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP009::_L6 */
  static PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg _L6;
  
  kcg_copy_P009_TM_TrainToTrack(&_L1, newP009);
  _L5 = _L1.valid;
  _L2 = _L1.nid_ltrbg;
  _L6.valid = _L5;
  _L6.transitionInformation = _L2;
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    oldP009,
    &_L6);
  _L3 = _L1.l_packet;
  _L4 = _L1.nid_packet;
  noname = _L4;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP009_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

