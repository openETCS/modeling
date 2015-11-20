/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal */
kcg_bool positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_2 */ positionedBG_T_TrainPosition_Types_Pck *bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::bg_1 */ positionedBG_T_TrainPosition_Types_Pck *bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L1 */
  static positionedBG_T_TrainPosition_Types_Pck _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L2 */
  static positionedBG_T_TrainPosition_Types_Pck _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L3 */
  static kcg_bool _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L4 */
  static NID_C _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L5 */
  static NID_BG _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L6 */
  static NID_C _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L7 */
  static NID_BG _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L8 */
  static kcg_bool _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L9 */
  static kcg_bool _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::_L10 */
  static kcg_bool _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal::idsEqual */
  static kcg_bool idsEqual;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L1, bg_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L2, bg_1);
  _L9 = _L1.valid;
  _L4 = _L1.nid_c;
  _L5 = _L1.nid_bg;
  _L6 = _L2.nid_c;
  _L7 = _L2.nid_bg;
  _L3 = /* 1 */
    nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L4,
      _L5,
      _L6,
      _L7);
  _L8 = _L2.valid;
  _L10 = _L9 & _L3 & _L8;
  idsEqual = _L10;
  return idsEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

