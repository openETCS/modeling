/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern */
void recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::prevLinkedBG */ positionedBG_T_TrainPosition_Types_Pck *prevLinkedBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::refBG */ positionedBG_T_TrainPosition_Types_Pck *refBG,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::sumOfBestDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfBestDistances,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L162 */
  static positionedBG_T_TrainPosition_Types_Pck _L162;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L164 */
  static positionedBG_T_TrainPosition_Types_Pck _L164;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L165 */
  static kcg_bool _L165;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L166 */
  static kcg_bool _L166;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L168 */
  static kcg_bool _L168;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L171 */
  static positionedBG_T_TrainPosition_Types_Pck _L171;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L172 */
  static positionedBG_T_TrainPosition_Types_Pck _L172;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L176 */
  static Q_LINK _L176;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L175 */
  static Q_LINK _L175;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L174 */
  static kcg_bool _L174;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L177 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L177;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L178 */
  static positionedBG_T_TrainPosition_Types_Pck _L178;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L179 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L179;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L180 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L180;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L181 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L181;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L182 */
  static kcg_bool _L182;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L183 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L183;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L184 */
  static trainProperties_T_TrainPosition_Types_Pck _L184;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L185 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L185;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L186 */
  static positionedBG_T_TrainPosition_Types_Pck _L186;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L187 */
  static positionedBG_T_TrainPosition_Types_Pck _L187;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L188 */
  static passedBG_T_BG_Types_Pkg _L188;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L189 */
  static kcg_bool _L189;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L190 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L190;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L191 */
  static positionedBG_T_TrainPosition_Types_Pck _L191;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L194 */
  static passedBG_T_BG_Types_Pkg _L194;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L193 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L193;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L192 */
  static kcg_bool _L192;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L195 */
  static kcg_bool _L195;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L196 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L196;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L197 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L197;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L198 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L198;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L199 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L199;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L200 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L200;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L203 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L203;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L204 */
  static positionedBG_T_TrainPosition_Types_Pck _L204;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L205 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L205;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L208 */
  static kcg_bool _L208;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L210 */
  static kcg_bool _L210;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L212 */
  static kcg_bool _L212;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L211 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L211;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L213 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L213;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_astern::_L214 */
  static kcg_bool _L214;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L162, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L164, refBG);
  _L166 = _L162.valid;
  _L168 = _L164.valid;
  _L165 = _L166 & _L168;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L171, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L172, BG_in);
  _L176 = _L172.q_link;
  _L175 = Q_LINK_Linked;
  _L174 = _L176 == _L175;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L177, sumOfBestDistances);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L178, refBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L179, &_L178.location);
  /* 1 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L179, &_L177, &_L180);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L184, trainProperties);
  /* 1 */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L172,
    &_L184,
    &_L183);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L180, &_L183, &_L181);
  _L182 = _L165 & _L174;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L191, prevLinkedBG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L197, &_L191.location);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L187, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L188, &_L187.infoFromPassing);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L198,
    &_L188.BG_Header.BG_centerDetectionInaccuraccuracies);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L194, &_L191.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L193,
    &_L194.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L190,
    &_L188.BG_Header.bgPosition.odo);
  /* 1 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L193, &_L190, &_L196);
  /* 3 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L198, &_L196, &_L199);
  /* 3 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L197, &_L199, &_L200);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &_L181,
    &_L200,
    &_L211,
    &_L212);
  _L208 = _L187.valid;
  _L189 = _L188.valid;
  _L210 = _L191.valid;
  _L192 = _L194.valid;
  _L195 = _L208 & _L189 & _L210 & _L192;
  _L214 = _L212 & _L195;
  /* 3 */ if (_L214) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L213, &_L211);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L213, &_L181);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L204, BG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L205, &_L204.location);
  /* 2 */ if (_L195) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L203, &_L200);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L203, &_L205);
  }
  /* 1 */ if (_L182) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L185, &_L213);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L185, &_L203);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L186, &_L171);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L186.location, &_L185);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &_L186);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

