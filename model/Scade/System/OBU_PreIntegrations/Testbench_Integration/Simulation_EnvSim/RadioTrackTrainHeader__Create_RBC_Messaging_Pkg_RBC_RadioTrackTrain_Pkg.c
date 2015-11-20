/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create */
void RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_MESSAGE */NID_MESSAGE in_NID_MESSAGE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN */T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_M_ACK */M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_LRBG */NID_LRBG in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN_Ref */T_TRAIN in_T_TRAIN_Ref,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_NID_EM */NID_EM in_NID_EM,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_Q_SCALE */Q_SCALE in_Q_SCALE,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_T_TRAIN_Sh */T_TRAIN in_T_TRAIN_Sh,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_D_REF */D_REF in_D_REF,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_Q_DIR */Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_D_EMERGENCYSTOP */D_EMERGENCYSTOP in_D_EMERGENCYSTOP,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::in_M_VERSION */M_VERSION in_M_VERSION,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Create::outRadioTrackTrainHeader */Radio_TrackTrain_Header_T_TM *outRadioTrackTrainHeader)
{
  static Radio_TrackTrain_Header_T_TM tmp1;
  static Radio_TrackTrain_Header_T_TM tmp;
  
  /* 1 */
  RadioTrackTrainHeader__Set_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    (Radio_TrackTrain_Header_T_TM *) &RADIO_TRACK_TRAIN_HEADER_DEFAULT,
    in_NID_MESSAGE,
    &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp,
    in_T_TRAIN,
    &tmp1);
  /* 1 */
  RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp1,
    in_M_ACK,
    &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp,
    in_NID_LRBG,
    &tmp1);
  /* 1 */
  RadioTrackTrainHeader__Set_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp1,
    in_T_TRAIN_Ref,
    &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp,
    in_NID_EM,
    &tmp1);
  /* 1 */
  RadioTrackTrainHeader__Set_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp1,
    in_Q_SCALE,
    &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_T_TRAIN_Sh_Req_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp,
    in_T_TRAIN_Sh,
    &tmp1);
  /* 1 */
  RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp1,
    in_D_REF,
    &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_Q_DIR_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp,
    in_Q_DIR,
    &tmp1);
  /* 1 */
  RadioTrackTrainHeader__Set_D_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp1,
    in_D_EMERGENCYSTOP,
    &tmp);
  /* 1 */
  RadioTrackTrainHeader__Set_M_VERSION_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &tmp,
    in_M_VERSION,
    outRadioTrackTrainHeader);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

