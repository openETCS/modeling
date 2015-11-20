/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation */
void improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_2 */ positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_2,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::passedLinkedBG_1 */ positionedBG_T_TrainPosition_Types_Pck *passedLinkedBG_1,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_in */ positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::unlinkedBG_out */ positionedBG_T_TrainPosition_Types_Pck *unlinkedBG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L3 */
  static Q_LINK _L3;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L4 */
  static Q_LINK _L4;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L7 */
  static positionedBG_T_TrainPosition_Types_Pck _L7;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L9 */
  static positionedBG_T_TrainPosition_Types_Pck _L9;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L10 */
  static kcg_bool _L10;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L11 */
  static Q_LINK _L11;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L12 */
  static Q_LINK _L12;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L14 */
  static kcg_bool _L14;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L19 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L19;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L20 */
  static positionedBG_T_TrainPosition_Types_Pck _L20;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L21 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L21;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L23 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L23;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L24 */
  static positionedBG_T_TrainPosition_Types_Pck _L24;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L28 */
  static positionedBG_T_TrainPosition_Types_Pck _L28;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L31 */
  static kcg_bool _L31;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L30 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L30;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L32 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L32;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L34 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L34;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L35 */
  static positionedBG_T_TrainPosition_Types_Pck _L35;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L36 */
  static positionedBG_T_TrainPosition_Types_Pck _L36;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L37 */
  static kcg_bool _L37;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L41 */
  static Q_LINK _L41;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L40 */
  static kcg_bool _L40;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L39 */
  static Q_LINK _L39;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L38 */
  static kcg_bool _L38;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L43 */
  static kcg_bool _L43;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L44 */
  static kcg_bool _L44;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L45 */
  static kcg_bool _L45;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L47 */
  static kcg_bool _L47;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L48 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L48;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L51 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L51;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocation::_L52 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L52;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, passedLinkedBG_2);
  _L2 = _L1.valid;
  _L3 = _L1.q_link;
  _L4 = Q_LINK_Linked;
  _L5 = _L3 == _L4;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L7, passedLinkedBG_1);
  _L8 = _L7.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L9, unlinkedBG_in);
  _L10 = _L9.valid;
  _L11 = _L9.q_link;
  _L12 = Q_LINK_Unlinked;
  _L13 = _L11 == _L12;
  _L37 = _L1.infoFromPassing.valid;
  _L43 = _L2 & _L5 & _L37;
  _L45 = !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(&_L1, &_L7);
  _L39 = _L7.q_link;
  _L41 = Q_LINK_Linked;
  _L40 = _L39 == _L41;
  _L38 = _L7.infoFromPassing.valid;
  _L44 = _L8 & _L40 & _L38;
  _L47 = _L10 & _L13;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L20, passedLinkedBG_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L21, &_L20.location);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L24, passedLinkedBG_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L23, &_L24.location);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L48,
    &_L20.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L51,
    &_L24.infoFromPassing.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L28, unlinkedBG_in);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L52,
    &_L28.infoFromPassing.BG_Header.bgPosition.odo);
  /* 1 */
  odoLoc_2_refLocations_BasicLocationFunctions_Pkg(
    &_L21,
    &_L23,
    &_L48,
    &_L51,
    &_L52,
    &_L19);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L32, &_L28.location);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(&_L19, &_L32, &_L30, &_L31);
  _L14 = _L43 & _L45 & _L44 & _L47 & _L31;
  /* 1 */ if (_L14) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L34, &_L30);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L34, &_L32);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36, unlinkedBG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L35, &_L36);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L35.location, &_L34);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(unlinkedBG_out, &_L35);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** improveUnlinkedBGLocation_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

