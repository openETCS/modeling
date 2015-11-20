/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal */
kcg_bool nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_c_2 */ NID_C nid_c_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_bg_2 */ NID_BG nid_bg_2,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_c_1 */ NID_C nid_c_1,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::nid_bg_1 */ NID_BG nid_bg_1)
{
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L1 */
  static NID_C _L1;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L2 */
  static NID_C _L2;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L3 */
  static NID_BG _L3;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L4 */
  static NID_BG _L4;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L5 */
  static kcg_bool _L5;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L6 */
  static kcg_bool _L6;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::_L7 */
  static kcg_bool _L7;
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidBG_nidc_equal::isEqual */
  static kcg_bool isEqual;
  
  _L1 = nid_c_2;
  _L2 = nid_c_1;
  _L3 = nid_bg_2;
  _L4 = nid_bg_1;
  _L5 = _L1 == _L2;
  _L6 = _L3 == _L4;
  _L7 = _L5 & _L6;
  isEqual = _L7;
  return isEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nidBG_nidc_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

