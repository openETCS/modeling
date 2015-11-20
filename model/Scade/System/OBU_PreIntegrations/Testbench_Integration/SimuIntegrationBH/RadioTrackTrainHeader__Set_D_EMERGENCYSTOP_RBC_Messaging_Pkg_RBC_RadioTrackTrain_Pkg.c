/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP */
void RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP::inRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP::in_D_EMERGENCYSTOP */ kcg_int in_D_EMERGENCYSTOP,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP::outRadioTrackTrainHeader */ Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP::_L1 */
  static Radio_TrackTrain_Header_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP::_L2 */
  static kcg_int _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_EMERGENCYSTOP::_L3 */
  static Radio_TrackTrain_Header_T_TM _L3;
  
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L1, inRadioTrackTrainHeader);
  _L2 = in_D_EMERGENCYSTOP;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.d_emergencystop = _L2;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(outRadioTrackTrainHeader, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

