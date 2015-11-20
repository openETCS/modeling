/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers */
void RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::inRadioTrackTrainPacket */ P058_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::inIncrementalDistancesAndQualifiers */ array_169739 *inIncrementalDistancesAndQualifiers,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::outRadioTrackTrainPacket */ P058_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  static kcg_int i;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::_L1 */
  static array_169739 _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::_L4 */
  static array_168785 _L4;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::_L8 */
  static P058_trackside_int_T_TM _L8;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers::_L9 */
  static P058_trackside_int_T_TM _L9;
  
  kcg_copy_array_169739(&_L1, inIncrementalDistancesAndQualifiers);
  for (i = 0; i < 32; i++) {
    /* 1 */
    RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr(
      &_L1[i],
      &_L4[i]);
  }
  kcg_copy_P058_trackside_int_T_TM(&_L9, inRadioTrackTrainPacket);
  kcg_copy_P058_trackside_int_T_TM(&_L8, &_L9);
  if (kcg_true) {
    kcg_copy_P058_trackide_sectionlist_T_TM(&_L8.SECTIONS, &_L4);
  }
  kcg_copy_P058_trackside_int_T_TM(outRadioTrackTrainPacket, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiers_RBC_Messaging_Pkg_RBC_RadioTrackTrain.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

