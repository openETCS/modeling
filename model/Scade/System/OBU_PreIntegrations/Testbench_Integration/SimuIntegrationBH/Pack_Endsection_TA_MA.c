/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pack_Endsection_TA_MA.h"

/* TA_MA::Pack_Endsection */
void Pack_Endsection_TA_MA(
  /* TA_MA::Pack_Endsection::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Pack_Endsection::endsection */ P015_section_enum_T_TM *endsection)
{
  /* TA_MA::Pack_Endsection::_L1 */
  static P015_OBU_T_TM _L1;
  /* TA_MA::Pack_Endsection::_L46 */
  static P015_section_enum_T_TM _L46;
  /* TA_MA::Pack_Endsection::_L47 */
  static kcg_bool _L47;
  /* TA_MA::Pack_Endsection::_L48 */
  static L_ENDSECTION _L48;
  /* TA_MA::Pack_Endsection::_L52 */
  static D_SECTIONTIMERSTOPLOC _L52;
  /* TA_MA::Pack_Endsection::_L54 */
  static Q_SECTIONTIMER _L54;
  /* TA_MA::Pack_Endsection::_L53 */
  static T_SECTIONTIMER _L53;
  
  kcg_copy_P015_OBU_T_TM(&_L1, Packet15_in);
  _L47 = kcg_true;
  _L48 = _L1.l_endsection;
  _L54 = _L1.q_sectiontimer;
  _L53 = _L1.t_sectiontimer;
  _L52 = _L1.d_sectiontimerstoploc;
  _L46.valid = _L47;
  _L46.l_section = _L48;
  _L46.q_sectiontimer = _L54;
  _L46.t_sectiontimer = _L53;
  _L46.d_sectiontimerstoploc = _L52;
  kcg_copy_P015_section_enum_T_TM(endsection, &_L46);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Pack_Endsection_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

