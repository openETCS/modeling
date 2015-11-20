/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_MA_request_TA_MA_Request.h"

void Build_MA_request_reset_TA_MA_Request(
  outC_Build_MA_request_TA_MA_Request *outC)
{
  /* 1 */ Send_M132_reset_TM_radio_messages(&outC->Context_1);
}

/* TA_MA_Request::Build_MA_request */
void Build_MA_request_TA_MA_Request(
  /* TA_MA_Request::Build_MA_request::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Build_MA_request::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_MA_Request::Build_MA_request::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_MA_Request::Build_MA_request::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_MA_Request::Build_MA_request::t_train */T_TRAIN t_train,
  /* TA_MA_Request::Build_MA_request::bus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Build_MA_request_TA_MA_Request *outC)
{
  static struct__156901 tmp;
  static Q_MARQSTREASON tmp3;
  static P000_TM_TrainToTrack tmp2;
  static P001_TM_TrainToTrack tmp1;
  
  if (trackDescrDeleted) {
    tmp3 = Q_MARQSTREASON_Track_description_deleted;
  }
  else {
    tmp3 = Q_MARQSTREASON_Start_selected_by_driver;
  }
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(packet0, &tmp2);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(packet1, &tmp1);
  tmp.valid = kcg_true;
  tmp.nid_message = 132;
  tmp.l_message = 0;
  tmp.t_train = 0;
  tmp.nid_engine = (*trainProps).nid_engine;
  tmp.q_marqstreason = tmp3;
  /* 1 */
  Send_M132_TM_radio_messages(
    t_train,
    bus_in,
    &tmp,
    &tmp2,
    &tmp1,
    (P009_TM_TrainToTrack *) &DEFAULT_P009_TA_MA_Request,
    cM_version_TA_MA_Request,
    &outC->Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->Context_1.MessageBus_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_TA_MA_Request.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

