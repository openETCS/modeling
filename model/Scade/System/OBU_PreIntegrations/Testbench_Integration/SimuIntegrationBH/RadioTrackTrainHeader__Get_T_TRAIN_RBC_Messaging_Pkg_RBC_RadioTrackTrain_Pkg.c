/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN */
T_TRAIN RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::inRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::_L1 */
  static Radio_TrackTrain_Header_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::_L2 */
  static kcg_int _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::_L3 */
  static T_TRAIN _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN::out_T_TRAIN */
  static T_TRAIN out_T_TRAIN;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L1, inRadioTrackTrainHeader);
  _L2 = _L1.t_train;
  _L3 = /* 1 */ CAST_Int_to_T_TRAIN_TM_conversions(_L2);
  out_T_TRAIN = _L3;
  return out_T_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

