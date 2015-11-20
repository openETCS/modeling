/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG */
void NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::valid */ kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidLRBG */ NID_LRBG nidLRBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidC */ NID_C *nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::nidBG */ NID_BG *nidBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L6 */
  static NID_LRBG _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L9 */
  static kcg_int _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L10 */
  static NID_BG _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L17 */
  static NID_LRBG _L17;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L21 */
  static kcg_int _L21;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG::_L22 */
  static kcg_int _L22;
  
  _L13 = valid;
  _L6 = cNID_LRBG_unknown_BG_Types_Pkg;
  _L17 = nidLRBG;
  _L11 = _L6 != _L17;
  _L12 = _L13 & _L11;
  _L9 = cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  _L7 = _L17 / _L9;
  _L21 = _L7 * _L9;
  _L22 = _L17 - _L21;
  _L10 = cNID_BG_unknown_BG_Types_Pkg;
  /* 1 */ if (_L12) {
    _L5 = _L22;
  }
  else {
    _L5 = _L10;
  }
  *nidC = _L7;
  *nidBG = _L5;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

