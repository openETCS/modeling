/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackInputHandler_init_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->outRadioTrainTrack.present = kcg_true;
  outC->outRadioTrainTrack.header.present = kcg_true;
  outC->outRadioTrainTrack.header.nid_message = 0;
  outC->outRadioTrainTrack.header.t_train = 0;
  outC->outRadioTrainTrack.header.nid_engine = 0;
  outC->outRadioTrainTrack.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrack.header.xT_TRAIN = 0;
  outC->outRadioTrainTrack.header.xNID_EM = 0;
  outC->outRadioTrainTrack.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrack.header.xNID_TEXTMESSAGE = 0;
  outC->outRadioTrainTrack.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_PACKET = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.L_PACKET = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_LRBG = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.D_LRBG = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrack.packets.p0.packet0.L_TRAININT = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.V_TRAIN = 0;
  outC->outRadioTrainTrack.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrack.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_NTC = 0;
  outC->outRadioTrainTrack.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_PACKET = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.L_PACKET = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_LRBG = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.D_LRBG = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrack.packets.p1.packet1.L_TRAININT = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.V_TRAIN = 0;
  outC->outRadioTrainTrack.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrack.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_NTC = 0;
  outC->outRadioTrainTrack.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p3.number = 0;
  for (i1 = 0; i1 < 1; i1++) {
    outC->outRadioTrainTrack.packets.p3.aNID_RADIO[i1].valid = kcg_true;
    for (i = 0; i < 15; i++) {
      outC->outRadioTrainTrack.packets.p3.aNID_RADIO[i1].telephoneNumber[i] = 0;
    }
  }
  outC->outRadioTrainTrack.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrack.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p5.TrainRunningNumber = 0;
  outC->outRadioTrainTrack.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p9.transitionInformation = 0;
  outC->outRadioTrainTrack.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrack.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrack.packets.p11.l_train = 0;
  outC->outRadioTrainTrack.packets.p11.v_maxtrain = 0;
  outC->outRadioTrainTrack.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrack.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrack.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrack.packets.p11.n_axle = 0;
  outC->outRadioTrainTrack.packets.p11.nIter_tractionIdentity = 0;
  for (i2 = 0; i2 < 4; i2++) {
    outC->outRadioTrainTrack.packets.p11.tractionIdentity[i2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrack.packets.p11.tractionIdentity[i2].nid_ctraction = 0;
  }
  outC->outRadioTrainTrack.packets.p11.nIter_ntc = 0;
  for (i3 = 0; i3 < 5; i3++) {
    outC->outRadioTrainTrack.packets.p11.nid_ntc[i3] = 0;
  }
  /* 1 */
  RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  /* 1 */
  RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pk(
    &outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler */
void RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::inRadioTrainTrack */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::_L3 */
  static kcg_bool _L3;
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2;
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::_L4 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L4;
  
  /* 1 */
  RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
    &_L1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L4, inRadioTrainTrack);
  /* 1 */
  RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &_L4,
    &outC->Context_1);
  _L3 = outC->Context_1.outIsConsistent;
  /* 1 */ if (_L3) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L2, &_L4);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&_L2, &_L1);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrack,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackInputHandler_RBC_Messaging_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

