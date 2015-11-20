/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id */
void indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG */ passedBG_T_BG_Types_Pkg *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::enable */ kcg_bool enable,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexOfBG */ kcg_int *indexOfBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::BG_found */ kcg_bool *BG_found,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::indexValid */ kcg_bool *indexValid)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L2 */
  static kcg_bool _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L1 */
  static kcg_int _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L4 */
  static kcg_bool _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L6 */
  static passedBG_T_BG_Types_Pkg _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L19 */
  static positionedBG_T_TrainPosition_Types_Pck _L19;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L20 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L20;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L21 */
  static NID_C _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L22 */
  static NID_BG _L22;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L23 */
  static Q_LINK _L23;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L25 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L25;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L86 */
  static kcg_int _L86;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L87 */
  static kcg_bool _L87;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L88 */
  static BG_Header_T_BG_Types_Pkg _L88;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L89 */
  static kcg_bool _L89;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L90 */
  static kcg_bool _L90;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfPassedBG_by_id::_L91 */
  static kcg_bool _L91;
  
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L6, BG);
  _L87 = _L6.valid;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L88, &_L6.BG_Header);
  _L89 = _L88.valid;
  _L90 = _L87 & _L89;
  _L21 = _L88.nid_c;
  _L22 = _L88.nid_bg;
  _L23 = _L88.q_link;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L20,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  _L86 = 0;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L25,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  _L91 = kcg_false;
  _L19.valid = _L90;
  _L19.nid_c = _L21;
  _L19.nid_bg = _L22;
  _L19.q_link = _L23;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L19.location, &_L20);
  _L19.seqNoOnTrack = _L86;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L19.infoFromLinking,
    &_L25);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L19.infoFromPassing, &_L6);
  _L19.missed = _L91;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L5, BGs);
  _L4 = enable;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L19,
    &_L5,
    _L4,
    &_L1,
    &_L2,
    &_L3);
  *indexOfBG = _L1;
  *BG_found = _L2;
  *indexValid = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** indexOfPassedBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

