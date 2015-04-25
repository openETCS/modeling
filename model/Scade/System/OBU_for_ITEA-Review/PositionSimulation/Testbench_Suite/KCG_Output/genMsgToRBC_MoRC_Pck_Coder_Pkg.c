/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::genMsgToRBC */
void genMsgToRBC_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::present */ kcg_bool present,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::nid_message */ NID_MESSAGE nid_message,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::nid_engine */ NID_ENGINE nid_engine,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::radioMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *radioMessage)
{
  (*radioMessage).present = present;
  (*radioMessage).header.t_train = t_train;
  (*radioMessage).header.nid_engine = nid_engine;
  (*radioMessage).header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  (*radioMessage).header.xT_TRAIN = (*radioMessage).header.t_train;
  (*radioMessage).header.present = present;
  (*radioMessage).header.nid_message = nid_message;
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &(*radioMessage).packets,
    (outPackets_T_Common_Types_Pkg *) &cEmptyOutPackets_MoRC_Pck_Coder_Pkg);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** genMsgToRBC_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

