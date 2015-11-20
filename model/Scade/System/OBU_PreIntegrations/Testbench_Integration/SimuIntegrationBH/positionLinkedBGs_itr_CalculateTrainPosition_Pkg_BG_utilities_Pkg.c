/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr */
void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfPrevLinkingDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedBG */ LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfLinkingDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *linkedPositionedBG)
{
  static infoFromLinking_T_TrainPosition_Types_Pck noname;
  static passedBG_T_BG_Types_Pkg _1_noname;
  static kcg_bool _2_noname;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L1 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L3 */
  static LinkedBG_T_BG_Types_Pkg _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L17 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L16 */
  static kcg_int _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L15 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L14 */
  static Q_LINK _L14;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L13 */
  static NID_BG _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L12 */
  static NID_C _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L32 */
  static positionedBG_T_TrainPosition_Types_Pck _L32;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L84 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L84;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L85 */
  static kcg_bool _L85;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L86 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L86;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L87 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L87;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L89 */
  static passedBG_T_BG_Types_Pkg _L89;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L90 */
  static LinkedBG_T_BG_Types_Pkg _L90;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L113 */
  static passedBG_T_BG_Types_Pkg _L113;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L114 */
  static kcg_int _L114;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L117 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L117;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L119 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L119;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L120 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L120;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L121 */
  static trainProperties_T_TrainPosition_Types_Pck _L121;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L122 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L122;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L123 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L123;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L124 */
  static Q_SCALE _L124;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L125 */
  static D_LINK _L125;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L126 */
  static Q_LOCACC _L126;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L127 */
  static kcg_bool _L127;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L128 */
  static NID_C _L128;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L129 */
  static LinkedBG_T_BG_Types_Pkg _L129;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L130 */
  static NID_BG _L130;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L140 */
  static kcg_bool _L140;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::_L150 */
  static kcg_bool _L150;
  
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L1, sumOfPrevLinkingDistances);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, passedPositionedBG);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L3, linkedBG);
  _L11 = _L2.valid;
  _L127 = _L3.valid;
  _L85 = _L11 & _L127;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L129, linkedBG);
  _L128 = _L129.nid_c;
  _L130 = _L129.nid_bg;
  _L14 = _L2.q_link;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L15, &_L2.location);
  _L124 = _L3.q_scale;
  _L125 = _L3.d_link;
  _L126 = _L3.q_locacc;
  /* 2 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(_L124, _L125, _L126, &_L117);
  /* 2 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L1, &_L117, &_L119);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L121, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L122,
    &_L121.centerDetectionAcc_DefaultValue);
  /* 4 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L119, &_L122, &_L123);
  /* 3 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L15, &_L123, &_L120);
  _L16 = _L2.seqNoOnTrack;
  _L13 = _L2.nid_bg;
  _L12 = _L2.nid_c;
  _L114 = 0;
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(_L124, _L125, _L114, &_L86);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L90, &_L3);
  if (kcg_true) {
    _L90.valid = _L85;
  }
  _L84.valid = _L85;
  _L84.nid_bg_fromLinkingBG = _L13;
  _L84.nid_c_fromLinkingBG = _L12;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L84.expectedLocation, &_L120);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L84.d_link, &_L86);
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&_L84.linkingInfo, &_L90);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &_L89,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  _L150 = kcg_false;
  _L32.valid = _L85;
  _L32.nid_c = _L128;
  _L32.nid_bg = _L130;
  _L32.q_link = _L14;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L32.location, &_L120);
  _L32.seqNoOnTrack = _L16;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L32.infoFromLinking,
    &_L84);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L32.infoFromPassing, &_L89);
  _L32.missed = _L150;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(linkedPositionedBG, &_L32);
  _L140 = _L2.missed;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L113, &_L2.infoFromPassing);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L17,
    &_L2.infoFromLinking);
  /* 1 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L1, &_L86, &_L87);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&noname, &_L17);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_1_noname, &_L113);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(sumOfLinkingDistances, &_L87);
  _2_noname = _L140;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

