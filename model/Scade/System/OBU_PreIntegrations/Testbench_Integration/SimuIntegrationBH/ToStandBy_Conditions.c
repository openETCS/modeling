/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStandBy_Conditions.h"

/* Conditions::ToStandBy */
void ToStandBy_Conditions(
  /* Conditions::ToStandBy::Desk_Open */ kcg_bool Desk_Open,
  /* Conditions::ToStandBy::All_Desks_Closed */ kcg_bool All_Desks_Closed,
  /* Conditions::ToStandBy::Train_Standstill */ kcg_bool Train_Standstill,
  /* Conditions::ToStandBy::Train_Req_SL */ kcg_bool Train_Req_SL,
  /* Conditions::ToStandBy::OnBoard_Powered */ kcg_bool OnBoard_Powered,
  /* Conditions::ToStandBy::Train_Permitted_PS */ kcg_bool Train_Permitted_PS,
  /* Conditions::ToStandBy::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* Conditions::ToStandBy::Continue_Shunting_function_Active */ kcg_bool Continue_Shunting_function_Active,
  /* Conditions::ToStandBy::Driver_Req_Exit_SH */ kcg_bool Driver_Req_Exit_SH,
  /* Conditions::ToStandBy::Stop_Shunting_Stored */ kcg_bool Stop_Shunting_Stored,
  /* Conditions::ToStandBy::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Conditions::ToStandBy::Condition2 */ kcg_bool *Condition2,
  /* Conditions::ToStandBy::Condition3 */ kcg_bool *Condition3,
  /* Conditions::ToStandBy::Condition4 */ kcg_bool *Condition4,
  /* Conditions::ToStandBy::Condition19 */ kcg_bool *Condition19,
  /* Conditions::ToStandBy::Condition22 */ kcg_bool *Condition22,
  /* Conditions::ToStandBy::Condition27 */ kcg_bool *Condition27,
  /* Conditions::ToStandBy::Condition28 */ kcg_bool *Condition28,
  /* Conditions::ToStandBy::Condition30 */ kcg_bool *Condition30,
  /* Conditions::ToStandBy::Condition47 */ kcg_bool *Condition47,
  /* Conditions::ToStandBy::End_Of_Mission_Procedure_Req */ kcg_bool *End_Of_Mission_Procedure_Req)
{
  /* Conditions::ToStandBy::_L3 */
  static kcg_bool _L3;
  /* Conditions::ToStandBy::_L4 */
  static kcg_bool _L4;
  /* Conditions::ToStandBy::_L7 */
  static kcg_bool _L7;
  /* Conditions::ToStandBy::_L8 */
  static kcg_bool _L8;
  /* Conditions::ToStandBy::_L10 */
  static kcg_bool _L10;
  /* Conditions::ToStandBy::_L23 */
  static kcg_bool _L23;
  /* Conditions::ToStandBy::_L24 */
  static kcg_bool _L24;
  /* Conditions::ToStandBy::_L32 */
  static kcg_bool _L32;
  /* Conditions::ToStandBy::_L34 */
  static kcg_bool _L34;
  /* Conditions::ToStandBy::_L55 */
  static kcg_bool _L55;
  /* Conditions::ToStandBy::_L62 */
  static kcg_bool _L62;
  /* Conditions::ToStandBy::_L63 */
  static kcg_bool _L63;
  /* Conditions::ToStandBy::_L64 */
  static kcg_bool _L64;
  /* Conditions::ToStandBy::_L80 */
  static kcg_bool _L80;
  /* Conditions::ToStandBy::_L79 */
  static kcg_bool _L79;
  /* Conditions::ToStandBy::_L77 */
  static kcg_bool _L77;
  /* Conditions::ToStandBy::_L96 */
  static kcg_bool _L96;
  /* Conditions::ToStandBy::_L97 */
  static kcg_bool _L97;
  /* Conditions::ToStandBy::_L98 */
  static kcg_bool _L98;
  /* Conditions::ToStandBy::_L102 */
  static kcg_bool _L102;
  /* Conditions::ToStandBy::_L106 */
  static kcg_bool _L106;
  /* Conditions::ToStandBy::_L125 */
  static kcg_bool _L125;
  /* Conditions::ToStandBy::_L146 */
  static kcg_bool _L146;
  /* Conditions::ToStandBy::_L147 */
  static kcg_bool _L147;
  /* Conditions::ToStandBy::_L148 */
  static kcg_bool _L148;
  /* Conditions::ToStandBy::_L149 */
  static kcg_bool _L149;
  /* Conditions::ToStandBy::_L150 */
  static kcg_bool _L150;
  /* Conditions::ToStandBy::_L151 */
  static kcg_bool _L151;
  
  _L3 = Train_Standstill;
  _L4 = Train_Req_SL;
  _L7 = Train_Permitted_PS;
  _L8 = Train_Permitted_NL;
  _L10 = Driver_Req_Exit_SH;
  _L23 = !_L4;
  _L24 = OnBoard_Powered;
  _L32 = Train_Standstill;
  _L34 = _L32 & _L10;
  _L62 = All_Desks_Closed;
  _L63 = Continue_Shunting_function_Active;
  _L64 = !_L63;
  _L55 = _L62 & _L64;
  _L77 = !_L7;
  _L79 = All_Desks_Closed;
  _L80 = _L79 & _L77;
  _L97 = Desk_Open;
  _L98 = Stop_Shunting_Stored;
  _L96 = _L97 & _L98;
  _L106 = !_L8;
  _L148 = Train_Standstill;
  _L102 = _L106 & _L148;
  _L125 = All_Desks_Closed;
  _L146 = Desk_Open;
  _L147 = _L3 & _L23;
  *Condition2 = _L146;
  *Condition3 = _L147;
  *Condition4 = _L24;
  *Condition19 = _L34;
  *Condition22 = _L96;
  *Condition27 = _L55;
  *Condition28 = _L125;
  *Condition30 = _L80;
  *Condition47 = _L102;
  _L149 = On_Going_Mission;
  _L150 = _L146 | _L147 | _L24 | _L34 | _L96 | _L55 | _L125 | _L80 | _L102;
  _L151 = _L149 & _L150;
  *End_Of_Mission_Procedure_Req = _L151;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ToStandBy_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

