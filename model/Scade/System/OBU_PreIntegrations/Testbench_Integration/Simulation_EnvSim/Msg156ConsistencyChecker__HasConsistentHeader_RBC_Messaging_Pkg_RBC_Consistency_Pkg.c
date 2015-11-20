/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader */
kcg_bool Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader::inRadioTrainTrackHeader */Radio_TrainTrack_Header_T_Radio_Types_Pkg *inRadioTrainTrackHeader)
{
  /* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg156ConsistencyChecker__HasConsistentHeader::outIsConsistent */
  static kcg_bool outIsConsistent;
  
  outIsConsistent = (/* 1 */
      RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        inRadioTrainTrackHeader) == T_TRAIN_MIN) & (/* 1 */
      RadioTrainTrackHeader__Get_Q_MARQSTREASON_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
        inRadioTrainTrackHeader) == Q_MARQSTREASON_DEFAULT);
  return outIsConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Msg156ConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

