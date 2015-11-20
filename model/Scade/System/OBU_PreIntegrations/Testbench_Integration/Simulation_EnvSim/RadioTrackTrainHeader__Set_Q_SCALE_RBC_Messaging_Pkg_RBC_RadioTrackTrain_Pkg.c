/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE */
void RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::inRadioTrackTrainHeader */Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::in_Q_SCALE */Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_Q_SCALE::outRadioTrackTrainHeader */Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    outRadioTrackTrainHeader,
    inRadioTrackTrainHeader);
  (*outRadioTrackTrainHeader).q_scale = /* 1 */
    CAST_Q_SCALE_to_int_TM_conversions(in_Q_SCALE);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

