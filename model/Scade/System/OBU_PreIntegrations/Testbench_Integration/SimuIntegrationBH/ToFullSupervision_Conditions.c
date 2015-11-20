/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToFullSupervision_Conditions.h"

#ifndef KCG_USER_DEFINED_INIT
void ToFullSupervision_init_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->init = kcg_true;
  outC->rem_Current_Level = M_LEVEL_Level_0;
  outC->Condition32 = kcg_true;
  outC->Condition31 = kcg_true;
  outC->Condition25 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToFullSupervision_reset_Conditions(outC_ToFullSupervision_Conditions *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Conditions::ToFullSupervision */
void ToFullSupervision_Conditions(
  /* Conditions::ToFullSupervision::Current_Level */ M_LEVEL Current_Level,
  /* Conditions::ToFullSupervision::Trip_Order_Given_By_Balise */ kcg_bool Trip_Order_Given_By_Balise,
  /* Conditions::ToFullSupervision::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Conditions::ToFullSupervision::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  outC_ToFullSupervision_Conditions *outC)
{
  /* Conditions::ToFullSupervision::Current_Level */
  static M_LEVEL last_Current_Level;
  /* Conditions::ToFullSupervision::FS_Data_Condition */
  static kcg_bool FS_Data_Condition;
  /* Conditions::ToFullSupervision::_L277 */
  static kcg_bool _L277;
  /* Conditions::ToFullSupervision::_L276 */
  static kcg_bool _L276;
  /* Conditions::ToFullSupervision::_L275 */
  static M_LEVEL _L275;
  /* Conditions::ToFullSupervision::_L274 */
  static kcg_bool _L274;
  /* Conditions::ToFullSupervision::_L272 */
  static kcg_bool _L272;
  /* Conditions::ToFullSupervision::_L270 */
  static kcg_bool _L270;
  /* Conditions::ToFullSupervision::_L297 */
  static M_LEVEL _L297;
  /* Conditions::ToFullSupervision::_L290 */
  static kcg_bool _L290;
  /* Conditions::ToFullSupervision::_L352 */
  static kcg_bool _L352;
  /* Conditions::ToFullSupervision::_L385 */
  static kcg_bool _L385;
  /* Conditions::ToFullSupervision::_L383 */
  static M_LEVEL _L383;
  /* Conditions::ToFullSupervision::_L382 */
  static kcg_bool _L382;
  /* Conditions::ToFullSupervision::_L381 */
  static kcg_bool _L381;
  /* Conditions::ToFullSupervision::_L375 */
  static kcg_bool _L375;
  /* Conditions::ToFullSupervision::_L374 */
  static kcg_bool _L374;
  /* Conditions::ToFullSupervision::_L387 */
  static kcg_bool _L387;
  /* Conditions::ToFullSupervision::_L391 */
  static kcg_bool _L391;
  /* Conditions::ToFullSupervision::_L404 */
  static kcg_bool _L404;
  /* Conditions::ToFullSupervision::_L406 */
  static T_Mode_Profile_Level_And_Mode_Types_Pkg _L406;
  /* Conditions::ToFullSupervision::_L408 */
  static kcg_bool _L408;
  /* Conditions::ToFullSupervision::_L413 */
  static kcg_bool _L413;
  /* Conditions::ToFullSupervision::_L414 */
  static T_MA_Level_And_Mode_Types_Pkg _L414;
  /* Conditions::ToFullSupervision::_L417 */
  static kcg_bool _L417;
  /* Conditions::ToFullSupervision::_L418 */
  static kcg_bool _L418;
  /* Conditions::ToFullSupervision::_L419 */
  static kcg_bool _L419;
  /* Conditions::ToFullSupervision::_L420 */
  static M_LEVEL _L420;
  /* Conditions::ToFullSupervision::_L424 */
  static kcg_bool _L424;
  /* Conditions::ToFullSupervision::_L423 */
  static kcg_bool _L423;
  /* Conditions::ToFullSupervision::_L422 */
  static kcg_bool _L422;
  /* Conditions::ToFullSupervision::_L421 */
  static kcg_bool _L421;
  /* Conditions::ToFullSupervision::_L425 */
  static kcg_bool _L425;
  /* Conditions::ToFullSupervision::_L426 */
  static T_MA_Level_And_Mode_Types_Pkg _L426;
  /* Conditions::ToFullSupervision::_L427 */
  static M_LEVEL _L427;
  
  _L270 = kcg_false;
  _L272 = kcg_true;
  _L275 = Current_Level;
  _L276 = kcg_true;
  switch (_L275) {
    case M_LEVEL_Level_2 :
      _L274 = _L276;
      break;
    case M_LEVEL_Level_3 :
      _L274 = _L272;
      break;
    
    default :
      _L274 = _L270;
  }
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &_L406,
    Mode_Profile_On_Board);
  _L426 = _L406.Mode;
  _L414 = No_Profile_Level_And_Mode_Types_Pkg;
  _L413 = _L426 == _L414;
  _L408 = MA_SSP_Gradiant_Available;
  _L404 = _L413 & _L408;
  FS_Data_Condition = _L404;
  _L417 = FS_Data_Condition;
  _L277 = _L274 & _L417;
  _L297 = Current_Level;
  _L420 = M_LEVEL_Level_1;
  _L419 = _L297 == _L420;
  _L352 = Trip_Order_Given_By_Balise;
  _L425 = !_L352;
  _L418 = FS_Data_Condition;
  _L290 = _L419 & _L425 & _L418;
  _L383 = Current_Level;
  _L375 = kcg_true;
  _L381 = kcg_true;
  _L385 = kcg_true;
  _L382 = kcg_false;
  switch (_L383) {
    case M_LEVEL_Level_1 :
      _L387 = _L375;
      break;
    case M_LEVEL_Level_2 :
      _L387 = _L381;
      break;
    case M_LEVEL_Level_3 :
      _L387 = _L385;
      break;
    
    default :
      _L387 = _L382;
  }
  /* last_init_ck_Current_Level */ if (outC->init) {
    last_Current_Level = M_LEVEL_Level_0;
  }
  else {
    last_Current_Level = outC->rem_Current_Level;
  }
  _L427 = last_Current_Level;
  _L421 = kcg_true;
  _L423 = kcg_true;
  _L424 = kcg_false;
  switch (_L427) {
    case M_LEVEL_Level_0 :
      _L422 = _L421;
      break;
    case M_LEVEL_Level_NTC_specified_by_NID_NTC :
      _L422 = _L423;
      break;
    
    default :
      _L422 = _L424;
  }
  _L391 = FS_Data_Condition;
  _L374 = _L387 & _L422 & _L391;
  outC->Condition25 = _L374;
  outC->Condition31 = _L277;
  outC->Condition32 = _L290;
  outC->rem_Current_Level = Current_Level;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToFullSupervision_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

