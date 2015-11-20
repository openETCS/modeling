/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK */
void RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::inRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::in_M_ACK */ M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::outRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::_L1 */
  static Radio_TrackTrain_Header_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::_L2 */
  static M_ACK _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK::_L4 */
  static kcg_int _L4;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L1, inRadioTrackTrainHeader);
  _L2 = in_M_ACK;
  _L4 = /* 1 */ CAST_M_ACK_to_int_TM_conversions(_L2);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.m_ack = _L4;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(outRadioTrackTrainHeader, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

