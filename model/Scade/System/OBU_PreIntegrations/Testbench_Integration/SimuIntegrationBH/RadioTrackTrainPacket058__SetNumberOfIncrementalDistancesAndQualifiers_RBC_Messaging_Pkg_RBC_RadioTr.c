/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers */
void RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::inRadioTrackTrainPacket */ P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::inNumberOfIncrementalDistancesAndQualifiers */ N_ITER inNumberOfIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::_L1 */
  static P058_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::_L2 */
  static N_ITER _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers::_L3 */
  static P058_trackside_int_T_TM _L3;
  
  kcg_copy_P058_trackside_int_T_TM(&_L1, inRadioTrackTrainPacket);
  _L2 = inNumberOfIncrementalDistancesAndQualifiers;
  kcg_copy_P058_trackside_int_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.N_ITER = _L2;
  }
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__SetNumberOfIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTr.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

