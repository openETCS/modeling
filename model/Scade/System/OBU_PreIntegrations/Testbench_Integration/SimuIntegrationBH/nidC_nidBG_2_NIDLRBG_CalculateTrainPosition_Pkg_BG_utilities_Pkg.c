/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG */
NID_LRBG nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::valid */ kcg_bool valid,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidC */ NID_C nidC,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidBG */ NID_BG nidBG)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L5 */
  static kcg_int _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L6 */
  static NID_LRBG _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L7 */
  static kcg_int _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L8 */
  static kcg_int _L8;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L9 */
  static kcg_int _L9;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L10 */
  static NID_BG _L10;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L11 */
  static kcg_bool _L11;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L12 */
  static kcg_bool _L12;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L13 */
  static kcg_bool _L13;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L15 */
  static NID_C _L15;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::_L16 */
  static NID_BG _L16;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG::nidLRBG */
  static NID_LRBG nidLRBG;
  
  _L13 = valid;
  _L10 = cNID_BG_unknown_BG_Types_Pkg;
  _L16 = nidBG;
  _L11 = _L10 != _L16;
  _L12 = _L13 & _L11;
  _L15 = nidC;
  _L9 = cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg;
  _L7 = _L15 * _L9;
  _L8 = _L16 + _L7;
  _L6 = cNID_LRBG_unknown_BG_Types_Pkg;
  /* 1 */ if (_L12) {
    _L5 = _L8;
  }
  else {
    _L5 = _L6;
  }
  nidLRBG = _L5;
  return nidLRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

