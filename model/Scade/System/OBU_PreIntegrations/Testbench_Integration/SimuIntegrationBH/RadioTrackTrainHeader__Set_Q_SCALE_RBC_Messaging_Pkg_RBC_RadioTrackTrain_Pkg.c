/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE */
void RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::inRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::in_Q_SCALE */ Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::outRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::_L2 */
  static Radio_TrackTrain_Header_T_TM _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::_L1 */
  static Radio_TrackTrain_Header_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::_L3 */
  static Q_SCALE _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::_L4 */
  static kcg_int _L4;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L1, inRadioTrackTrainHeader);
  _L3 = in_Q_SCALE;
  _L4 = /* 1 */ CAST_Q_SCALE_to_int_TM_conversions(_L3);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L2, &_L1);
  if (kcg_true) {
    _L2.q_scale = _L4;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(outRadioTrackTrainHeader, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

