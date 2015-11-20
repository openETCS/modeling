/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Header_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Header */
void Build_Header_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Header::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Header::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_Header::posRepHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader)
{
  /* ProvidePositionReport_Pkg::Build_Header::_L8 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L8;
  /* ProvidePositionReport_Pkg::Build_Header::_L7 */
  static Q_MARQSTREASON _L7;
  /* ProvidePositionReport_Pkg::Build_Header::_L5 */
  static trainProperties_T_TrainPosition_Types_Pck _L5;
  /* ProvidePositionReport_Pkg::Build_Header::_L4 */
  static T_TRAIN _L4;
  /* ProvidePositionReport_Pkg::Build_Header::_L3 */
  static kcg_int _L3;
  /* ProvidePositionReport_Pkg::Build_Header::_L2 */
  static NID_ENGINE _L2;
  /* ProvidePositionReport_Pkg::Build_Header::_L1 */
  static kcg_bool _L1;
  /* ProvidePositionReport_Pkg::Build_Header::_L9 */
  static NID_EM _L9;
  /* ProvidePositionReport_Pkg::Build_Header::_L10 */
  static NID_TEXTMESSAGE _L10;
  /* ProvidePositionReport_Pkg::Build_Header::_L11 */
  static Q_EMERGENCYSTOP _L11;
  /* ProvidePositionReport_Pkg::Build_Header::_L12 */
  static T_TRAIN _L12;
  
  _L1 = kcg_true;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L5, trainProps);
  _L2 = _L5.nid_engine;
  _L3 = 136;
  _L12 = t_train;
  _L7 = cxQ_MARQSTREASON_ProvidePositionReport_Pkg;
  _L4 = cxT_TRAIN_ProvidePositionReport_Pkg;
  _L9 = cxNID_EM_ProvidePositionReport_Pkg;
  _L11 = cxQ_EMERGENCYSTOP_ProvidePositionReport_Pkg;
  _L10 = cxNID_TEXTMESSAGE_ProvidePositionReport_Pkg;
  _L8.present = _L1;
  _L8.nid_message = _L3;
  _L8.t_train = _L12;
  _L8.nid_engine = _L2;
  _L8.xQ_MARQSTREASON = _L7;
  _L8.xT_TRAIN = _L4;
  _L8.xNID_EM = _L9;
  _L8.xQ_EMERGENCYSTOP = _L11;
  _L8.xNID_TEXTMESSAGE = _L10;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(posRepHeader, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Header_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

