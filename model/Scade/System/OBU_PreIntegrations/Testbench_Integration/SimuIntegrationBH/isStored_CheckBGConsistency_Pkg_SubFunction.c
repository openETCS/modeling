/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored */
void isStored_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored::recivedBG_header */ BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::storedBG */ positionedBG_T_TrainPosition_Types_Pck *storedBG,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::go_on */ kcg_bool *go_on,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::acc_out */ BG_Header_T_BG_Types_Pkg *acc_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L4 */
  static positionedBG_T_TrainPosition_Types_Pck _L4;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L5 */
  static NID_BG _L5;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L6 */
  static NID_C _L6;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L7 */
  static BG_Header_T_BG_Types_Pkg _L7;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L9 */
  static NID_BG _L9;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L10 */
  static kcg_bool _L10;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L11 */
  static kcg_bool _L11;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L12 */
  static NID_C _L12;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L13 */
  static kcg_bool _L13;
  /* CheckBGConsistency_Pkg::SubFunction::isStored::_L14 */
  static BG_Header_T_BG_Types_Pkg _L14;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L4, storedBG);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L14, recivedBG_header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(acc_out, &_L14);
  _L5 = _L4.nid_bg;
  _L6 = _L4.nid_c;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L7, recivedBG_header);
  _L9 = _L7.nid_bg;
  _L10 = _L5 != _L9;
  _L12 = _L7.nid_c;
  _L11 = _L12 != _L6;
  _L13 = _L10 | _L11;
  *go_on = _L13;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isStored_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

