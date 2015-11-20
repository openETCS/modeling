/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P042_onboard_legacy_to_int_TM_conversions.h"

/* TM_conversions::C_P042_onboard_legacy_to_int */
void C_P042_onboard_legacy_to_int_TM_conversions(
  /* TM_conversions::C_P042_onboard_legacy_to_int::PacketData */ P42_SessionManagement_T_Packet_Types_Pkg *PacketData,
  /* TM_conversions::C_P042_onboard_legacy_to_int::P042_int */ P042_trackside_int_T_TM *P042_int)
{
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L11 */
  static kcg_int _L11;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L10 */
  static P042_trackside_int_T_TM _L10;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L9 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L9;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L4 */
  static kcg_int _L4;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L21 */
  static kcg_int _L21;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L27 */
  static kcg_int _L27;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L29 */
  static kcg_int _L29;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L31 */
  static kcg_int _L31;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L33 */
  static kcg_int _L33;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L40 */
  static Q_SLEEPSESSION _L40;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L39 */
  static NID_RADIO _L39;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L38 */
  static NID_RBC _L38;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L37 */
  static NID_C _L37;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L36 */
  static Q_RBC _L36;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L35 */
  static Q_DIR _L35;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L34 */
  static kcg_bool _L34;
  /* TM_conversions::C_P042_onboard_legacy_to_int::_L48 */
  static kcg_int _L48;
  
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&_L9, PacketData);
  _L36 = _L9.q_rbc;
  _L4 = /* 1 */ CAST_Q_RBC_to_int_TM_conversions(_L36);
  _L34 = _L9.valid;
  _L21 = 42;
  _L35 = _L9.q_dir;
  _L11 = /* 1 */ CAST_Q_DIR_to_int_TM_conversions(_L35);
  _L48 = 0;
  _L37 = _L9.nid_c;
  _L27 = /* 1 */ CAST_NID_C_to_int_TM_conversions(_L37);
  _L38 = _L9.nid_rbc;
  _L29 = /* 1 */ CAST_NID_RBC_to_int_TM_conversions(_L38);
  _L39 = _L9.nid_radio;
  _L31 = /* 1 */ CAST_NID_RADIO_to_int_TM_conversions(_L39);
  _L40 = _L9.q_sleepsession;
  _L33 = /* 1 */ CAST_Q_SLEEPSESSION_to_int_TM_conversions(_L40);
  _L10.valid = _L34;
  _L10.NID_PACKET = _L21;
  _L10.Q_DIR = _L11;
  _L10.L_PACKET = _L48;
  _L10.Q_RBC = _L4;
  _L10.NID_C = _L27;
  _L10.NID_RBC = _L29;
  _L10.NID_RADIO = _L31;
  _L10.Q_SLEEPSESSION = _L33;
  kcg_copy_P042_trackside_int_T_TM(P042_int, &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P042_onboard_legacy_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

