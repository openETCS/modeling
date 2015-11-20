/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_T_Cycloc_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->lastTime = 0;
  outC->trigger = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervision_T_Cycloc */
void Supervision_T_Cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::present */ kcg_bool present,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::tcycloc */ T_CYCLOC tcycloc,
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_Supervision_T_Cycloc_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::lastTime */
  static T_internal_Type_Obu_BasicTypes_Pkg last_lastTime;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L27 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L27;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L28 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L28;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L29 */
  static SystemTime_T_ProvidePositionReport_Pkg _L29;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L31 */
  static kcg_int _L31;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L32 */
  static kcg_bool _L32;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L33 */
  static T_CYCLOC _L33;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L34 */
  static kcg_int _L34;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L35 */
  static kcg_bool _L35;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L36 */
  static T_CYCLOC _L36;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L37 */
  static kcg_bool _L37;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L38 */
  static kcg_int _L38;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L39 */
  static kcg_bool _L39;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L42 */
  static kcg_bool _L42;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L41 */
  static kcg_int _L41;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L40 */
  static T_CYCLOC _L40;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L43 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L43;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L44 */
  static SystemTime_T_ProvidePositionReport_Pkg _L44;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L45 */
  static SystemTime_T_ProvidePositionReport_Pkg _L45;
  /* ProvidePositionReport_Pkg::Supervision_T_Cycloc::_L46 */
  static kcg_bool _L46;
  
  /* last_init_ck_lastTime */ if (outC->init) {
    last_lastTime = 0;
  }
  else {
    last_lastTime = outC->lastTime;
  }
  _L27 = last_lastTime;
  _L28 = cTimeToElapse_ProvidePositionReport_Pkg;
  _L29 = systemTime;
  _L31 = _L29 - _L27;
  _L33 = tcycloc;
  _L34 = _L33 * _L28;
  _L32 = _L31 >= _L34;
  _L36 = tcycloc;
  _L38 = 0;
  _L37 = _L36 > _L38;
  _L40 = tcycloc;
  _L41 = 255;
  _L42 = _L40 < _L41;
  _L39 = _L37 & _L42;
  _L35 = _L39 & _L32;
  outC->trigger = _L35;
  _L43 = last_lastTime;
  _L45 = systemTime;
  /* 1 */ if (_L35) {
    _L44 = _L45;
  }
  else {
    _L44 = _L43;
  }
  outC->lastTime = _L44;
  _L46 = present;
  noname = _L46;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervision_T_Cycloc_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

