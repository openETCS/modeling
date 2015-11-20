/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CalcBrakeCmd_init_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->trigSB = kcg_true;
  outC->trigEB = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcBrakeCmd_reset_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::CalcBrakeCmd */
void CalcBrakeCmd_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcBrakeCmd::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcBrakeCmd::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcBrakeCmd::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::CalcBrakeCmd::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::CalcBrakeCmd::trigSB */
  static kcg_bool last_trigSB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::trigEB */
  static kcg_bool last_trigEB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::NoSBinTSM */
  static kcg_bool NoSBinTSM;
  /* SDM_Commands_Pkg::CalcBrakeCmd::RevokeEBBeforeStandStill */
  static kcg_bool RevokeEBBeforeStandStill;
  /* SDM_Commands_Pkg::CalcBrakeCmd::TSM */
  static kcg_bool TSM;
  /* SDM_Commands_Pkg::CalcBrakeCmd::SB2EB */
  static kcg_bool SB2EB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::SB2SB */
  static kcg_bool SB2SB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::revSB */
  static kcg_bool revSB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::revEB */
  static kcg_bool revEB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L1 */
  static SDM_Commands_T_SDM_Types_Pkg _L1;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L2 */
  static kcg_bool _L2;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L3 */
  static kcg_bool _L3;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L4 */
  static kcg_bool _L4;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L5 */
  static kcg_bool _L5;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L6 */
  static kcg_bool _L6;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L7 */
  static SDM_Types_T_SDM_Types_Pkg _L7;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L8 */
  static P3_NationalValues_T_Packet_Types_Pkg _L8;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L9 */
  static Speeds_T_SDM_Types_Pkg _L9;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L10 */
  static kcg_bool _L10;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L14 */
  static Q_NVEMRRLS _L14;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L15 */
  static trainData_internal_t_SDM_Types_Pkg _L15;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L16 */
  static kcg_bool _L16;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L17 */
  static Q_NVSBTSMPERM _L17;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L18 */
  static kcg_bool _L18;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L19 */
  static Q_NVEMRRLS _L19;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L20 */
  static Q_NVSBTSMPERM _L20;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L21 */
  static kcg_bool _L21;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L28 */
  static kcg_bool _L28;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L29 */
  static SDM_Types_T_SDM_Types_Pkg _L29;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L30 */
  static kcg_bool _L30;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L33 */
  static kcg_bool _L33;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L34 */
  static kcg_bool _L34;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L35 */
  static kcg_bool _L35;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L36 */
  static kcg_bool _L36;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L37 */
  static kcg_bool _L37;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L38 */
  static kcg_bool _L38;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L39 */
  static kcg_bool _L39;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L41 */
  static kcg_bool _L41;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L42 */
  static kcg_bool _L42;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L43 */
  static kcg_bool _L43;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L44 */
  static kcg_bool _L44;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L45 */
  static kcg_bool _L45;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L46 */
  static kcg_bool _L46;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L47 */
  static kcg_bool _L47;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L48 */
  static kcg_bool _L48;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L49 */
  static kcg_bool _L49;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L50 */
  static kcg_bool _L50;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L51 */
  static kcg_bool _L51;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L52 */
  static kcg_bool _L52;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L66 */
  static kcg_bool _L66;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L65 */
  static kcg_bool _L65;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L64 */
  static kcg_bool _L64;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L63 */
  static Brake_command_T_TIU_Types_Pkg _L63;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L61 */
  static kcg_bool _L61;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L57 */
  static kcg_bool _L57;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L56 */
  static kcg_bool _L56;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L55 */
  static kcg_bool _L55;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L54 */
  static kcg_bool _L54;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L53 */
  static kcg_bool _L53;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L69 */
  static kcg_bool _L69;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L70 */
  static kcg_bool _L70;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L71 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L71;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L73 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L73;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L74 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L74;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L75 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L75;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L77 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L77;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L82 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L82;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L81 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L81;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L80 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L80;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L79 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L79;
  /* SDM_Commands_Pkg::CalcBrakeCmd::_L78 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L78;
  
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&_L1, in_sdmCmd);
  _L2 = _L1.triggeredEB;
  _L3 = _L1.ebCmd;
  _L4 = _L1.revokedEB;
  _L5 = _L1.triggeredSB;
  _L6 = _L1.revokedSB;
  _L7 = _L1.sdmType;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L8, NationalValues);
  kcg_copy_Speeds_T_SDM_Types_Pkg(&_L9, speeds);
  _L10 = _L9.OdoStandStill;
  _L14 = _L8.q_nvemrrls;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L15, TrainData_int);
  _L19 =
    Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceed;
  _L16 = _L14 == _L19;
  _L17 = _L8.q_nvsbtsmperm;
  _L20 = Q_NVSBTSMPERM_No;
  _L18 = _L17 == _L20;
  NoSBinTSM = _L18;
  RevokeEBBeforeStandStill = _L16;
  _L21 = _L2 | _L3;
  _L22 = RevokeEBBeforeStandStill;
  _L23 = _L22 | _L10;
  _L52 = _L15.isSB_CmdAvailable;
  _L34 = !_L52;
  _L31 = NoSBinTSM;
  _L29 = TSM_SDM_Types_Pkg;
  _L28 = _L7 == _L29;
  TSM = _L28;
  _L32 = TSM;
  _L33 = _L31 & _L32;
  _L30 = _L34 | _L33;
  SB2EB = _L30;
  _L48 = SB2EB;
  _L47 = _L48 & _L6;
  _L51 = _L4 | _L47;
  _L27 = _L51 & _L23;
  _L35 = TSM;
  _L36 = !_L35;
  _L37 = NoSBinTSM;
  _L38 = !_L37;
  _L39 = _L38 & _L35;
  _L40 = _L39 | _L36;
  _L41 = _L40 & _L52;
  SB2SB = _L41;
  _L43 = SB2SB;
  _L42 = _L5 & _L43;
  _L45 = SB2EB;
  _L44 = _L45 & _L5;
  _L49 = SB2SB;
  _L46 = _L6 & _L49;
  _L50 = _L21 | _L44;
  _L53 = kcg_true;
  /* last_init_ck_trigEB */ if (outC->init) {
    last_trigEB = kcg_false;
  }
  else {
    last_trigEB = outC->trigEB;
  }
  _L64 = last_trigEB;
  revEB = _L27;
  _L69 = revEB;
  _L55 = !_L69;
  _L65 = _L64 & _L55;
  _L54 = _L50 | _L65;
  revSB = _L46;
  _L70 = revSB;
  _L56 = !_L70;
  /* last_init_ck_trigSB */ if (outC->init) {
    last_trigSB = kcg_false;
  }
  else {
    last_trigSB = outC->trigSB;
  }
  _L66 = last_trigSB;
  _L57 = _L66 & _L56;
  outC->trigEB = _L54;
  _L61 = _L42 | _L57;
  _L73 = apply_brake_TIU_Types_Pkg;
  _L75 = release_brake_TIU_Types_Pkg;
  _L77 = brake_signal_command_not_defined_TIU_Types_Pkg;
  /* 2 */ if (_L70) {
    _L74 = _L75;
  }
  else {
    _L74 = _L77;
  }
  /* 1 */ if (_L61) {
    _L71 = _L73;
  }
  else {
    _L71 = _L74;
  }
  _L79 = apply_brake_TIU_Types_Pkg;
  _L82 = release_brake_TIU_Types_Pkg;
  _L78 = brake_signal_command_not_defined_TIU_Types_Pkg;
  /* 4 */ if (_L69) {
    _L81 = _L82;
  }
  else {
    _L81 = _L78;
  }
  /* 3 */ if (_L54) {
    _L80 = _L79;
  }
  else {
    _L80 = _L81;
  }
  _L63.valid = _L53;
  _L63.m_servicebrake_cm = _L71;
  _L63.m_emergencybrake_cm = _L80;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->brakeCmd, &_L63);
  outC->trigSB = _L61;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcBrakeCmd_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

