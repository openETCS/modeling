/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable */
void RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::inIncrementalDistanceAndQualifier */ IterPacket58_T_Packet_Types_Pkg *inIncrementalDistanceAndQualifier,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::outIncrementalDistanceAndQualifier */ P058_section_int_T_TM *outIncrementalDistanceAndQualifier)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L3 */
  static kcg_int _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L4 */
  static P058_section_int_T_TM _L4;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L5 */
  static P058_section_int_T_TM _L5;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L6 */
  static P058_section_int_T_TM _L6;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L8 */
  static D_LOC _L8;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L7 */
  static IterPacket58_T_Packet_Types_Pkg _L7;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket058_Pkg::RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable::_L9 */
  static Q_LGTLOC _L9;
  
  kcg_copy_IterPacket58_T_Packet_Types_Pkg(
    &_L7,
    inIncrementalDistanceAndQualifier);
  _L9 = _L7.q_lgtloc;
  _L3 = /* 1 */ CAST_Q_LGTLOC_to_int_TM_conversions(_L9);
  kcg_copy_P058_section_int_T_TM(
    &_L4,
    (P058_section_int_T_TM *) &P058_SECTIONS_DEFAULT);
  _L8 = _L7.d_loc;
  kcg_copy_P058_section_int_T_TM(&_L5, &_L4);
  if (kcg_true) {
    _L5.D_LOC = _L8;
  }
  kcg_copy_P058_section_int_T_TM(&_L6, &_L5);
  if (kcg_true) {
    _L6.Q_LGTLOC = _L3;
  }
  kcg_copy_P058_section_int_T_TM(outIncrementalDistanceAndQualifier, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket058__SetIncrementalDistancesAndQualifiersIterable_RBC_Messaging_Pkg_RBC_RadioTr.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

