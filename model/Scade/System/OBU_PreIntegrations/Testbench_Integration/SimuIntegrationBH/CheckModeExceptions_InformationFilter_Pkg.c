/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::CheckModeExceptions */
kcg_bool CheckModeExceptions_InformationFilter_Pkg(
  /* InformationFilter_Pkg::CheckModeExceptions::inAction */ ModeDecisionTableActionKind_DataDictionary_Pkg inAction)
{
  /* InformationFilter_Pkg::CheckModeExceptions::_L1 */
  static ModeDecisionTableActionKind_DataDictionary_Pkg _L1;
  /* InformationFilter_Pkg::CheckModeExceptions::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::CheckModeExceptions::_L4 */
  static kcg_bool _L4;
  /* InformationFilter_Pkg::CheckModeExceptions::_L5 */
  static kcg_bool _L5;
  /* InformationFilter_Pkg::CheckModeExceptions::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::CheckModeExceptions::_L7 */
  static kcg_bool _L7;
  /* InformationFilter_Pkg::CheckModeExceptions::_L8 */
  static kcg_bool _L8;
  /* InformationFilter_Pkg::CheckModeExceptions::_L9 */
  static kcg_bool _L9;
  /* InformationFilter_Pkg::CheckModeExceptions::_L10 */
  static kcg_bool _L10;
  /* InformationFilter_Pkg::CheckModeExceptions::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::CheckModeExceptions::_L12 */
  static kcg_bool _L12;
  /* InformationFilter_Pkg::CheckModeExceptions::_L14 */
  static kcg_bool _L14;
  /* InformationFilter_Pkg::CheckModeExceptions::_L15 */
  static kcg_bool _L15;
  /* InformationFilter_Pkg::CheckModeExceptions::_L16 */
  static kcg_bool _L16;
  /* InformationFilter_Pkg::CheckModeExceptions::_L17 */
  static kcg_bool _L17;
  /* InformationFilter_Pkg::CheckModeExceptions::_L18 */
  static kcg_bool _L18;
  /* InformationFilter_Pkg::CheckModeExceptions::_L19 */
  static kcg_bool _L19;
  /* InformationFilter_Pkg::CheckModeExceptions::outAccept */
  static kcg_bool outAccept;
  
  _L1 = inAction;
  _L4 = kcg_false;
  _L5 = kcg_true;
  _L6 = kcg_false;
  _L7 = kcg_false;
  _L8 = kcg_true;
  _L9 = kcg_true;
  _L10 = kcg_true;
  _L11 = kcg_true;
  _L12 = kcg_true;
  _L14 = kcg_true;
  _L15 = kcg_true;
  _L16 = kcg_true;
  _L17 = kcg_true;
  _L18 = kcg_true;
  _L19 = kcg_true;
  switch (_L1) {
    case MD_Invalid_DataDictionary_Pkg :
      _L3 = _L4;
      break;
    case MD_Accept_DataDictionary_Pkg :
      _L3 = _L5;
      break;
    case MD_Reject_DataDictionary_Pkg :
      _L3 = _L6;
      break;
    case MD_NotRelevant_DataDictionary_Pkg :
      _L3 = _L7;
      break;
    case MD_01IfFollowingExitTRMode_DataDictionary_Pkg :
      _L3 = _L8;
      break;
    case MD_02IfCabActive_DataDictionary_Pkg :
      _L3 = _L9;
      break;
    case MD_03StoreRBCIDAndPhone_DataDictionary_Pkg :
      _L3 = _L10;
      break;
    case MD_04IfValidTrainDataStored_DataDictionary_Pkg :
      _L3 = _L11;
      break;
    case MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg :
      _L3 = _L12;
      break;
    case MD_06RejectIfOverrideActive_DataDictionary_Pkg :
      _L3 = _L14;
      break;
    case MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg :
      _L3 = _L15;
      break;
    case MD_08NullDistanceRBCTransition_DataDictionary_Pkg :
      _L3 = _L16;
      break;
    case MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg :
      _L3 = _L17;
      break;
    case MD_0204Accept_DataDictionary_Pkg :
      _L3 = _L18;
      break;
    case MD_0105Accept_DataDictionary_Pkg :
      _L3 = _L19;
      break;
    
  }
  outAccept = _L3;
  return outAccept;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckModeExceptions_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

