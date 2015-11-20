/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"

void nextGen_Msg136_reset_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  /* 2 */ Send_M136_reset_TM_radio_messages(&outC->Context_2);
}

/* radioOutput_Pkg::nextGen_Msg136 */
void nextGen_Msg136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_Msg136::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::nextGen_Msg136::inFromPositionReport */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::nextGen_Msg136::inVersion */M_VERSION inVersion,
  /* radioOutput_Pkg::nextGen_Msg136::inT_TRAIN */T_TRAIN inT_TRAIN,
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  static M_136_T_TM_radio_messages tmp4;
  static P000_TM_TrainToTrack tmp3;
  static P001_TM_TrainToTrack tmp2;
  static P004_TM_TrainToTrack tmp1;
  static P005_TM_TrainToTrack tmp;
  
  if ((*inFromPositionReport).present) {
    /* 2 */
    nextGen_MsgHdr136_radioOutput_Pkg(&(*inFromPositionReport).header, &tmp4);
    if ((*inFromPositionReport).packets.p0.valid) {
      /* 1 */
      nextGen_P00_radioOutput_Pkg(&(*inFromPositionReport).packets.p0, &tmp3);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(
        &tmp3,
        (P000_TM_TrainToTrack *) &noP000_radioOutput_Pkg);
    }
    if ((*inFromPositionReport).packets.p1.valid) {
      /* 2 */
      nextGen_P01_radioOutput_Pkg(&(*inFromPositionReport).packets.p1, &tmp2);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(
        &tmp2,
        (P001_TM_TrainToTrack *) &noP001_radioOutput_Pkg);
    }
    /* 1 */
    nextGen_P04_radioOutput_Pkg(&(*inFromPositionReport).packets.p4, &tmp1);
    /* 1 */
    nextGen_P05_radioOutput_Pkg(&(*inFromPositionReport).packets.p5, &tmp);
    /* 2 */
    Send_M136_TM_radio_messages(
      inT_TRAIN,
      MessageBus,
      &tmp4,
      &tmp3,
      &tmp2,
      &tmp1,
      &tmp,
      (P044_TM_TrainToTrack *) &noP044_radioOutput_Pkg,
      inVersion,
      &outC->Context_2);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->MessageBus_out,
      &outC->Context_2.MessageBus_out);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->MessageBus_out,
      MessageBus);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** nextGen_Msg136_radioOutput_Pkg.c
** Generation date: 2015-11-20T19:47:15
*************************************************************$ */

