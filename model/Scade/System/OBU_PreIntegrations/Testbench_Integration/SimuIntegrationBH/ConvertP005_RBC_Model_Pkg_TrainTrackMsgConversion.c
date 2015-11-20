/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005 */
void ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::newP005 */ P005_TM_TrainToTrack *newP005,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::oldP005 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *oldP005)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::_L1 */
  static P005_TM_TrainToTrack _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::_L5 */
  static kcg_bool _L5;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::_L4 */
  static NID_PACKET _L4;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::_L3 */
  static L_PACKET _L3;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::_L2 */
  static NID_OPERATIONAL _L2;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP005::_L7 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L7;
  
  kcg_copy_P005_TM_TrainToTrack(&_L1, newP005);
  _L5 = _L1.valid;
  _L2 = _L1.nid_opeartional;
  _L7.valid = _L5;
  _L7.TrainRunningNumber = _L2;
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(oldP005, &_L7);
  _L3 = _L1.l_packet;
  _L4 = _L1.nid_packet;
  noname = _L4;
  _1_noname = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP005_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

