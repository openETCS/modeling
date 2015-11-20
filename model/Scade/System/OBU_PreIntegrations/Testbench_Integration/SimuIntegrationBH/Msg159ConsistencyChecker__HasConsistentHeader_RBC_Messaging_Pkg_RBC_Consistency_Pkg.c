/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader */
kcg_bool Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::inRadioTrainTrackHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L1 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L2 */
  static T_TRAIN _L2;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L3 */
  static kcg_bool _L3;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L4 */
  static T_TRAIN _L4;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L5 */
  static Q_MARQSTREASON _L5;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L6 */
  static kcg_bool _L6;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L7 */
  static Q_MARQSTREASON _L7;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::_L8 */
  static kcg_bool _L8;
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L1,
    inRadioTrainTrackHeader);
  _L2 = /* 1 */
    RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L1);
  _L4 = T_TRAIN_MIN;
  _L3 = _L2 == _L4;
  _L5 = /* 1 */
    RadioTrainTrackHeader__Get_Q_MARQSTREASON_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
      &_L1);
  _L7 = Q_MARQSTREASON_DEFAULT;
  _L6 = _L5 == _L7;
  _L8 = _L3 & _L6;
  outIsConsistent = _L8;
  return outIsConsistent;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Msg159ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

