/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"

/* MoRC_Pck::Coder_Pkg::genMsgToRBC */
void genMsgToRBC_MoRC_Pck_Coder_Pkg(
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::present */ kcg_bool present,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::nid_message */ NID_MESSAGE nid_message,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::t_train */ T_TRAIN t_train,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::xt_train */ T_TRAIN xt_train,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::nid_engine */ NID_ENGINE nid_engine,
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::radioMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *radioMessage)
{
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L1 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L1;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L3 */
  static kcg_bool _L3;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L4 */
  static NID_MESSAGE _L4;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L5 */
  static T_TRAIN _L5;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L6 */
  static NID_ENGINE _L6;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L7 */
  static outPackets_T_Common_Types_Pkg _L7;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L8 */
  static Q_MARQSTREASON _L8;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L10 */
  static kcg_int _L10;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L11 */
  static Q_EMERGENCYSTOP _L11;
  /* MoRC_Pck::Coder_Pkg::genMsgToRBC::_L12 */
  static T_TRAIN _L12;
  
  _L3 = present;
  _L4 = nid_message;
  _L5 = t_train;
  _L6 = nid_engine;
  _L8 = Q_MARQSTREASON_Start_selected_by_driver;
  _L12 = xt_train;
  _L10 = 0;
  _L11 = Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  _L1.present = _L3;
  _L1.nid_message = _L4;
  _L1.t_train = _L5;
  _L1.nid_engine = _L6;
  _L1.xQ_MARQSTREASON = _L8;
  _L1.xT_TRAIN = _L12;
  _L1.xNID_EM = _L10;
  _L1.xQ_EMERGENCYSTOP = _L11;
  _L1.xNID_TEXTMESSAGE = _L10;
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &_L7,
    (outPackets_T_Common_Types_Pkg *) &cEmptyOutPackets_MoRC_Pck_Coder_Pkg);
  _L2.present = _L3;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L2.header, &_L1);
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L2.packets, &_L7);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(radioMessage, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** genMsgToRBC_MoRC_Pck_Coder_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

