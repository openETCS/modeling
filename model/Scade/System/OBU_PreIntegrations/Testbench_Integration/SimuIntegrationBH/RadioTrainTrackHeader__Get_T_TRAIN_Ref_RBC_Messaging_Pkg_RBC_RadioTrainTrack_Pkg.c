/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref */
T_TRAIN RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref::_L1 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref::_L2 */
  static T_TRAIN _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN_Ref::out_T_TRAIN_Ref */
  static T_TRAIN out_T_TRAIN_Ref;
  
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackHeader);
  _L2 = _L1.xT_TRAIN;
  out_T_TRAIN_Ref = _L2;
  return out_T_TRAIN_Ref;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

