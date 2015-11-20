/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */ BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */ kcg_bool *_8_isAnnounced,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */ Q_LINKORIENTATION *_7_q_linkorintation)
{
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */
  static Q_LINKORIENTATION _2_q_linkorintation;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */
  static kcg_bool _1_isAnnounced;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L5 */
  static Q_LINKORIENTATION _L5_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L1 */
  static positionedBGs_T_TrainPosition_Types_Pck _L1_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */
  static Q_LINKORIENTATION q_linkorintation;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */
  static kcg_bool isAnnounced;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L12 */
  static kcg_int _L12_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L13 */
  static positionedBG_T_TrainPosition_Types_Pck _L13_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L14 */
  static Q_LINKORIENTATION _L14_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L15 */
  static positionedBGs_T_TrainPosition_Types_Pck _L15_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L1 */
  static kcg_bool _L16_IfBlock1;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isStored */
  static kcg_bool isStored;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::indexLocal */
  static kcg_int indexLocal;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L15 */
  static positionedBGs_T_TrainPosition_Types_Pck _L15;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L16 */
  static BG_Header_T_BG_Types_Pkg _L16;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L18 */
  static kcg_bool _L18;
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L17 */
  static kcg_int _L17;
  
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L15, storedBGs);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L16, recivedBG_header);
  /* 1 */
  isStored_iter_CheckBGConsistency_Pkg_SubFunction(&_L15, &_L16, &_L17, &_L18);
  isStored = _L18;
  indexLocal = _L17;
  IfBlock1_clock = isStored;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L1_IfBlock1, storedBGs);
    _L3_IfBlock1 = indexLocal;
    if ((0 <= _L3_IfBlock1) & (_L3_IfBlock1 < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L2_IfBlock1,
        &_L1_IfBlock1[_L3_IfBlock1]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L2_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    _L4_IfBlock1 = _L2_IfBlock1.infoFromLinking.valid;
    _1_isAnnounced = _L4_IfBlock1;
    *_8_isAnnounced = _1_isAnnounced;
    _L5_IfBlock1 = _L2_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
    _2_q_linkorintation = _L5_IfBlock1;
    *_7_q_linkorintation = _2_q_linkorintation;
  }
  else {
    _L16_IfBlock1 = kcg_false;
    isAnnounced = _L16_IfBlock1;
    *_8_isAnnounced = isAnnounced;
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L15_IfBlock1, storedBGs);
    _L12_IfBlock1 = indexLocal;
    if ((0 <= _L12_IfBlock1) & (_L12_IfBlock1 < 41)) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L13_IfBlock1,
        &_L15_IfBlock1[_L12_IfBlock1]);
    }
    else {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &_L13_IfBlock1,
        (positionedBG_T_TrainPosition_Types_Pck *)
          &cNoStoredBG_CheckBGConsistency_Pkg);
    }
    _L14_IfBlock1 = _L13_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation;
    q_linkorintation = _L14_IfBlock1;
    *_7_q_linkorintation = q_linkorintation;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

