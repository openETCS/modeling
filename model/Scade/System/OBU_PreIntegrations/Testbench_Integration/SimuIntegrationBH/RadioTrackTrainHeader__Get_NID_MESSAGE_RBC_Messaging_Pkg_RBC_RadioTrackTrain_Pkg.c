/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE */
NID_MESSAGE RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE::inRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE::_L1 */
  static Radio_TrackTrain_Header_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE::_L2 */
  static kcg_int _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_NID_MESSAGE::out_NID_MESSAGE */
  static NID_MESSAGE out_NID_MESSAGE;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L1, inRadioTrackTrainHeader);
  _L2 = _L1.nid_message;
  out_NID_MESSAGE = _L2;
  return out_NID_MESSAGE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

