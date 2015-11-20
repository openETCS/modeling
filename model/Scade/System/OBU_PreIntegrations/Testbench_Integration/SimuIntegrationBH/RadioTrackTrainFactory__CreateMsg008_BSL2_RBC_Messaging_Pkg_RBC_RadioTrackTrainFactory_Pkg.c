/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2 */
void RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::in_T_TRAIN */ T_TRAIN in_T_TRAIN,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::in_M_ACK */ M_ACK in_M_ACK,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::in_NID_LRBG */ NID_LRBG in_NID_LRBG,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::in_T_TRAIN_Ref */ T_TRAIN in_T_TRAIN_Ref,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L16 */
  static NID_MESSAGE _L16;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L27 */
  static Radio_TrackTrain_Header_T_TM _L27;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L36 */
  static NID_EM _L36;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L37 */
  static Q_SCALE _L37;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L38 */
  static T_TRAIN _L38;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L39 */
  static D_REF _L39;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L40 */
  static Q_DIR _L40;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L41 */
  static D_EMERGENCYSTOP _L41;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L42 */
  static M_VERSION _L42;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L96 */
  static P015_trackside_int_T_TM _L96;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L95 */
  static P042_trackside_int_T_TM _L95;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L94 */
  static P005_trackside_int_T_TM _L94;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L93 */
  static P003V1_trackside_int_T_TM_baseline2 _L93;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L92 */
  static P058_trackside_int_T_TM _L92;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L91 */
  static P027V1_trackside_int_T_TM_baseline2 _L91;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L90 */
  static P021_trackside_int_T_TM _L90;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L89 */
  static P057_trackside_int_T_TM _L89;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L97 */
  static NID_LRBG _L97;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L98 */
  static T_TRAIN _L98;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L99 */
  static M_ACK _L99;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L100 */
  static T_TRAIN _L100;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg008_BSL2::_L102 */
  static CompressedRadioMessage_TM _L102;
  
  _L16 = 8;
  _L100 = in_T_TRAIN;
  _L99 = in_M_ACK;
  _L97 = in_NID_LRBG;
  _L98 = in_T_TRAIN_Ref;
  _L36 = NID_EM_DEFAULT;
  _L37 = Q_SCALE_DEFAULT;
  _L38 = T_TRAIN_DEFAULT;
  _L39 = D_REF_DEFAULT;
  _L40 = Q_DIR_DEFAULT;
  _L41 = D_EMERGENCYSTOP_DEFAULT;
  _L42 = M_VERSION_DEFAULT;
  /* 1 */
  RadioTrackTrainHeader__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    _L16,
    _L100,
    _L99,
    _L97,
    _L98,
    _L36,
    _L37,
    _L38,
    _L39,
    _L40,
    _L41,
    _L42,
    &_L27);
  kcg_copy_P057_trackside_int_T_TM(
    &_L89,
    (P057_trackside_int_T_TM *) &P057_DEFAULT);
  kcg_copy_P021_trackside_int_T_TM(
    &_L90,
    (P021_trackside_int_T_TM *) &P021_DEFAULT);
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(
    &_L91,
    (P027V1_trackside_int_T_TM_baseline2 *) &P027_DEFAULT);
  kcg_copy_P058_trackside_int_T_TM(
    &_L92,
    (P058_trackside_int_T_TM *) &P058_DEFAULT);
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(
    &_L93,
    (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT);
  kcg_copy_P005_trackside_int_T_TM(
    &_L94,
    (P005_trackside_int_T_TM *) &P005_DEFAULT);
  kcg_copy_P042_trackside_int_T_TM(
    &_L95,
    (P042_trackside_int_T_TM *) &P042_DEFAULT);
  kcg_copy_P015_trackside_int_T_TM(
    &_L96,
    (P015_trackside_int_T_TM *) &P015_DEFAULT);
  /* 2 */
  SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
    &_L27,
    &_L93,
    &_L94,
    &_L96,
    &_L90,
    &_L91,
    &_L95,
    &_L89,
    &_L92,
    &_L102);
  kcg_copy_CompressedRadioMessage_TM(outRadioTrackTrainMessage, &_L102);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainFactory__CreateMsg008_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

