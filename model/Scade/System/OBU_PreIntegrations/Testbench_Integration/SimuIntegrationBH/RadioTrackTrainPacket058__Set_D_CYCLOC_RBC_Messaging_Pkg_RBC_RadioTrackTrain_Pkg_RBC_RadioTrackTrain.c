/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC */
void RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC::inRadioTrackTrainPacket */ P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC::in_D_CYCLOC */ D_CYCLOC in_D_CYCLOC,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC::_L1 */
  static P058_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC::_L2 */
  static D_CYCLOC _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__Set_D_CYCLOC::_L3 */
  static P058_trackside_int_T_TM _L3;
  
  kcg_copy_P058_trackside_int_T_TM(&_L1, inRadioTrackTrainPacket);
  _L2 = in_D_CYCLOC;
  kcg_copy_P058_trackside_int_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.D_CYCLOC = _L2;
  }
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__Set_D_CYCLOC_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrain.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

