/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2 */
void RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::in_T_TRAIN */ T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::in_M_ACK */ M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::in_NID_LRBG */ NID_LRBG in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L104 */
  static D_EMERGENCYSTOP _L104;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L101 */
  static Q_SCALE _L101;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L100 */
  static Radio_TrackTrain_Header_T_TM _L100;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L99 */
  static Q_DIR _L99;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L96 */
  static D_REF _L96;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L95 */
  static NID_EM _L95;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L94 */
  static T_TRAIN _L94;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L113 */
  static M_VERSION _L113;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L114 */
  static NID_MESSAGE _L114;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L126 */
  static M_ACK _L126;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L127 */
  static NID_LRBG _L127;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L108 */
  static T_TRAIN _L108;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L129 */
  static T_TRAIN _L129;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L130 */
  static P015_trackside_int_T_TM _L130;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L131 */
  static P021_trackside_int_T_TM _L131;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L132 */
  static P027V1_trackside_int_T_TM_baseline2 _L132;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L133 */
  static P003V1_trackside_int_T_TM_baseline2 _L133;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L134 */
  static P005_trackside_int_T_TM _L134;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L135 */
  static P042_trackside_int_T_TM _L135;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L136 */
  static P057_trackside_int_T_TM _L136;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L137 */
  static P058_trackside_int_T_TM _L137;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg006_BSL2::_L138 */
  static CompressedRadioMessage_TM _L138;
  
  _L94 = T_TRAIN_DEFAULT;
  _L95 = NID_EM_DEFAULT;
  _L96 = D_REF_DEFAULT;
  _L99 = Q_DIR_DEFAULT;
  _L114 = 6;
  _L129 = in_T_TRAIN;
  _L126 = in_M_ACK;
  _L127 = in_NID_LRBG;
  _L108 = T_TRAIN_DEFAULT;
  _L101 = Q_SCALE_DEFAULT;
  _L104 = D_EMERGENCYSTOP_DEFAULT;
  _L113 = M_VERSION_DEFAULT;
  /* 1 */
  RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    _L114,
    _L129,
    _L126,
    _L127,
    _L108,
    _L95,
    _L101,
    _L94,
    _L96,
    _L99,
    _L104,
    _L113,
    &_L100);
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(
    &_L133,
    (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT);
  kcg_copy_P005_trackside_int_T_TM(
    &_L134,
    (P005_trackside_int_T_TM *) &P005_DEFAULT);
  kcg_copy_P015_trackside_int_T_TM(
    &_L130,
    (P015_trackside_int_T_TM *) &P015_DEFAULT);
  kcg_copy_P021_trackside_int_T_TM(
    &_L131,
    (P021_trackside_int_T_TM *) &P021_DEFAULT);
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(
    &_L132,
    (P027V1_trackside_int_T_TM_baseline2 *) &P027_DEFAULT);
  kcg_copy_P042_trackside_int_T_TM(
    &_L135,
    (P042_trackside_int_T_TM *) &P042_DEFAULT);
  kcg_copy_P057_trackside_int_T_TM(
    &_L136,
    (P057_trackside_int_T_TM *) &P057_DEFAULT);
  kcg_copy_P058_trackside_int_T_TM(
    &_L137,
    (P058_trackside_int_T_TM *) &P058_DEFAULT);
  /* 1 */
  SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
    &_L100,
    &_L133,
    &_L134,
    &_L130,
    &_L131,
    &_L132,
    &_L135,
    &_L136,
    &_L137,
    &_L138);
  kcg_copy_CompressedRadioMessage_TM(outRadioTrackTrainMessage, &_L138);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

