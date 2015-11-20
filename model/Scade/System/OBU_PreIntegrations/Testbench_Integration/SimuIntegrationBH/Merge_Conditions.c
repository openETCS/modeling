/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_Conditions.h"

/* Merge_Conditions */
void Merge_Conditions(
  /* Merge_Conditions::SH_Ref_SH */ kcg_bool SH_Ref_SH,
  /* Merge_Conditions::SH_Ref_SoM */ kcg_bool SH_Ref_SoM,
  /* Merge_Conditions::SH_ref_TR */ kcg_bool SH_ref_TR,
  /* Merge_Conditions::Ack_LS_LS */ kcg_bool Ack_LS_LS,
  /* Merge_Conditions::Ack_LS_SoM */ kcg_bool Ack_LS_SoM,
  /* Merge_Conditions::Ack_LS_TR */ kcg_bool Ack_LS_TR,
  /* Merge_Conditions::Ack_OS_OS */ kcg_bool Ack_OS_OS,
  /* Merge_Conditions::Ack_OS_SoM */ kcg_bool Ack_OS_SoM,
  /* Merge_Conditions::Ack_OS_TR */ kcg_bool Ack_OS_TR,
  /* Merge_Conditions::Ack_SH_SH */ kcg_bool Ack_SH_SH,
  /* Merge_Conditions::Ack_SH_SoM */ kcg_bool Ack_SH_SoM,
  /* Merge_Conditions::Ack_SH_TR */ kcg_bool Ack_SH_TR,
  /* Merge_Conditions::Ack_SR_SoM */ kcg_bool Ack_SR_SoM,
  /* Merge_Conditions::Ack_SR_TR */ kcg_bool Ack_SR_TR,
  /* Merge_Conditions::Clean_BG_SoM */ kcg_bool Clean_BG_SoM,
  /* Merge_Conditions::Clean_BG_SH */ kcg_bool Clean_BG_SH,
  /* Merge_Conditions::Clean_BG_TR */ kcg_bool Clean_BG_TR,
  /* Merge_Conditions::EoM_SB */ kcg_bool EoM_SB,
  /* Merge_Conditions::EoM_SH */ kcg_bool EoM_SH,
  /* Merge_Conditions::EoM_SoM */ kcg_bool EoM_SoM,
  /* Merge_Conditions::EoM_TR */ kcg_bool EoM_TR,
  /* Merge_Conditions::MA_SoM */ kcg_bool MA_SoM,
  /* Merge_Conditions::MA_TR */ kcg_bool MA_TR,
  /* Merge_Conditions::Req_SH_SH */ kcg_bool Req_SH_SH,
  /* Merge_Conditions::Req_SH_SoM */ kcg_bool Req_SH_SoM,
  /* Merge_Conditions::Req_SH_TR */ kcg_bool Req_SH_TR,
  /* Merge_Conditions::SB_LS */ kcg_bool SB_LS,
  /* Merge_Conditions::SB_OS */ kcg_bool SB_OS,
  /* Merge_Conditions::SB_SH */ kcg_bool SB_SH,
  /* Merge_Conditions::C15_OS */ kcg_bool C15_OS,
  /* Merge_Conditions::C15_SoM */ kcg_bool C15_SoM,
  /* Merge_Conditions::C15_TR */ kcg_bool C15_TR,
  /* Merge_Conditions::C31_FS */ kcg_bool C31_FS,
  /* Merge_Conditions::C31_TR */ kcg_bool C31_TR,
  /* Merge_Conditions::C46_NL */ kcg_bool C46_NL,
  /* Merge_Conditions::C46_SoM */ kcg_bool C46_SoM,
  /* Merge_Conditions::C50_SH */ kcg_bool C50_SH,
  /* Merge_Conditions::C50_SoM */ kcg_bool C50_SoM,
  /* Merge_Conditions::C50_TR */ kcg_bool C50_TR,
  /* Merge_Conditions::C5_SH */ kcg_bool C5_SH,
  /* Merge_Conditions::C5_SoM */ kcg_bool C5_SoM,
  /* Merge_Conditions::C5_TR */ kcg_bool C5_TR,
  /* Merge_Conditions::C6_SH */ kcg_bool C6_SH,
  /* Merge_Conditions::C6_SoM */ kcg_bool C6_SoM,
  /* Merge_Conditions::C6_TR */ kcg_bool C6_TR,
  /* Merge_Conditions::C70_LS */ kcg_bool C70_LS,
  /* Merge_Conditions::C70_SoM */ kcg_bool C70_SoM,
  /* Merge_Conditions::C70_TR */ kcg_bool C70_TR,
  /* Merge_Conditions::C8_SoM */ kcg_bool C8_SoM,
  /* Merge_Conditions::C8_TR */ kcg_bool C8_TR,
  /* Merge_Conditions::SH_Refused_By_RBC_To_DMI */ kcg_bool *SH_Refused_By_RBC_To_DMI,
  /* Merge_Conditions::Ack_LS_Req_To_Driver */ kcg_bool *Ack_LS_Req_To_Driver,
  /* Merge_Conditions::Ack_OS_Req_To_Driver */ kcg_bool *Ack_OS_Req_To_Driver,
  /* Merge_Conditions::Ack_SH_Req_To_Driver */ kcg_bool *Ack_SH_Req_To_Driver,
  /* Merge_Conditions::Ack_SR_Req_To_Driver */ kcg_bool *Ack_SR_Req_To_Driver,
  /* Merge_Conditions::Clean_BG_List_SH_Area */ kcg_bool *Clean_BG_List_SH_Area,
  /* Merge_Conditions::End_Of_Mission_Procedure_Req */ kcg_bool *End_Of_Mission_Procedure_Req,
  /* Merge_Conditions::MA_Req_To_RBC */ kcg_bool *MA_Req_To_RBC,
  /* Merge_Conditions::Request_For_SH_To_RBC */ kcg_bool *Request_For_SH_To_RBC,
  /* Merge_Conditions::Service_Brake_Command */ kcg_bool *Service_Brake_Command,
  /* Merge_Conditions::Condition15 */ kcg_bool *Condition15,
  /* Merge_Conditions::Condition31 */ kcg_bool *Condition31,
  /* Merge_Conditions::Condition46 */ kcg_bool *Condition46,
  /* Merge_Conditions::Condition50 */ kcg_bool *Condition50,
  /* Merge_Conditions::Condition5 */ kcg_bool *Condition5,
  /* Merge_Conditions::Condition6 */ kcg_bool *Condition6,
  /* Merge_Conditions::Condition70 */ kcg_bool *Condition70,
  /* Merge_Conditions::Condition8 */ kcg_bool *Condition8)
{
  /* Merge_Conditions::_L48 */
  static kcg_bool _L48;
  /* Merge_Conditions::_L47 */
  static kcg_bool _L47;
  /* Merge_Conditions::_L46 */
  static kcg_bool _L46;
  /* Merge_Conditions::_L45 */
  static kcg_bool _L45;
  /* Merge_Conditions::_L44 */
  static kcg_bool _L44;
  /* Merge_Conditions::_L43 */
  static kcg_bool _L43;
  /* Merge_Conditions::_L42 */
  static kcg_bool _L42;
  /* Merge_Conditions::_L41 */
  static kcg_bool _L41;
  /* Merge_Conditions::_L40 */
  static kcg_bool _L40;
  /* Merge_Conditions::_L39 */
  static kcg_bool _L39;
  /* Merge_Conditions::_L38 */
  static kcg_bool _L38;
  /* Merge_Conditions::_L37 */
  static kcg_bool _L37;
  /* Merge_Conditions::_L36 */
  static kcg_bool _L36;
  /* Merge_Conditions::_L35 */
  static kcg_bool _L35;
  /* Merge_Conditions::_L34 */
  static kcg_bool _L34;
  /* Merge_Conditions::_L33 */
  static kcg_bool _L33;
  /* Merge_Conditions::_L32 */
  static kcg_bool _L32;
  /* Merge_Conditions::_L31 */
  static kcg_bool _L31;
  /* Merge_Conditions::_L30 */
  static kcg_bool _L30;
  /* Merge_Conditions::_L29 */
  static kcg_bool _L29;
  /* Merge_Conditions::_L28 */
  static kcg_bool _L28;
  /* Merge_Conditions::_L27 */
  static kcg_bool _L27;
  /* Merge_Conditions::_L26 */
  static kcg_bool _L26;
  /* Merge_Conditions::_L25 */
  static kcg_bool _L25;
  /* Merge_Conditions::_L24 */
  static kcg_bool _L24;
  /* Merge_Conditions::_L23 */
  static kcg_bool _L23;
  /* Merge_Conditions::_L22 */
  static kcg_bool _L22;
  /* Merge_Conditions::_L21 */
  static kcg_bool _L21;
  /* Merge_Conditions::_L20 */
  static kcg_bool _L20;
  /* Merge_Conditions::_L19 */
  static kcg_bool _L19;
  /* Merge_Conditions::_L18 */
  static kcg_bool _L18;
  /* Merge_Conditions::_L17 */
  static kcg_bool _L17;
  /* Merge_Conditions::_L16 */
  static kcg_bool _L16;
  /* Merge_Conditions::_L15 */
  static kcg_bool _L15;
  /* Merge_Conditions::_L14 */
  static kcg_bool _L14;
  /* Merge_Conditions::_L13 */
  static kcg_bool _L13;
  /* Merge_Conditions::_L12 */
  static kcg_bool _L12;
  /* Merge_Conditions::_L11 */
  static kcg_bool _L11;
  /* Merge_Conditions::_L10 */
  static kcg_bool _L10;
  /* Merge_Conditions::_L9 */
  static kcg_bool _L9;
  /* Merge_Conditions::_L8 */
  static kcg_bool _L8;
  /* Merge_Conditions::_L7 */
  static kcg_bool _L7;
  /* Merge_Conditions::_L6 */
  static kcg_bool _L6;
  /* Merge_Conditions::_L5 */
  static kcg_bool _L5;
  /* Merge_Conditions::_L4 */
  static kcg_bool _L4;
  /* Merge_Conditions::_L3 */
  static kcg_bool _L3;
  /* Merge_Conditions::_L2 */
  static kcg_bool _L2;
  /* Merge_Conditions::_L1 */
  static kcg_bool _L1;
  /* Merge_Conditions::_L71 */
  static kcg_bool _L71;
  /* Merge_Conditions::_L69 */
  static kcg_bool _L69;
  /* Merge_Conditions::_L72 */
  static kcg_bool _L72;
  /* Merge_Conditions::_L73 */
  static kcg_bool _L73;
  /* Merge_Conditions::_L74 */
  static kcg_bool _L74;
  /* Merge_Conditions::_L75 */
  static kcg_bool _L75;
  /* Merge_Conditions::_L76 */
  static kcg_bool _L76;
  /* Merge_Conditions::_L77 */
  static kcg_bool _L77;
  /* Merge_Conditions::_L78 */
  static kcg_bool _L78;
  /* Merge_Conditions::_L79 */
  static kcg_bool _L79;
  /* Merge_Conditions::_L80 */
  static kcg_bool _L80;
  /* Merge_Conditions::_L81 */
  static kcg_bool _L81;
  /* Merge_Conditions::_L82 */
  static kcg_bool _L82;
  /* Merge_Conditions::_L83 */
  static kcg_bool _L83;
  /* Merge_Conditions::_L84 */
  static kcg_bool _L84;
  /* Merge_Conditions::_L85 */
  static kcg_bool _L85;
  /* Merge_Conditions::_L86 */
  static kcg_bool _L86;
  /* Merge_Conditions::_L87 */
  static kcg_bool _L87;
  /* Merge_Conditions::_L88 */
  static kcg_bool _L88;
  /* Merge_Conditions::_L89 */
  static kcg_bool _L89;
  
  _L48 = C70_TR;
  _L47 = C70_SoM;
  _L46 = C70_LS;
  _L76 = _L46 | _L47 | _L48;
  *Condition70 = _L76;
  _L45 = C6_TR;
  _L44 = C6_SoM;
  _L43 = C6_SH;
  _L78 = _L43 | _L44 | _L45;
  *Condition6 = _L78;
  _L42 = C5_TR;
  _L41 = C5_SoM;
  _L40 = C5_SH;
  _L89 = _L40 | _L41 | _L42;
  *Condition5 = _L89;
  _L39 = C50_TR;
  _L38 = C50_SoM;
  _L37 = C50_SH;
  _L77 = _L37 | _L38 | _L39;
  *Condition50 = _L77;
  _L36 = C46_SoM;
  _L35 = C46_NL;
  _L74 = _L35 | _L36;
  *Condition46 = _L74;
  _L34 = C31_TR;
  _L33 = C31_FS;
  _L73 = _L33 | _L34;
  *Condition31 = _L73;
  _L32 = C15_TR;
  _L31 = C15_SoM;
  _L30 = C15_OS;
  _L72 = _L30 | _L31 | _L32;
  *Condition15 = _L72;
  _L29 = SB_SH;
  _L28 = SB_OS;
  _L27 = SB_LS;
  _L81 = _L27 | _L28 | _L29;
  *Service_Brake_Command = _L81;
  _L26 = Req_SH_TR;
  _L25 = Req_SH_SoM;
  _L24 = Req_SH_SH;
  _L80 = _L24 | _L25 | _L26;
  *Request_For_SH_To_RBC = _L80;
  _L23 = MA_TR;
  _L22 = MA_SoM;
  _L79 = _L22 | _L23;
  *MA_Req_To_RBC = _L79;
  _L21 = EoM_TR;
  _L20 = EoM_SoM;
  _L19 = EoM_SH;
  _L18 = EoM_SB;
  _L83 = _L18 | _L19 | _L20 | _L21;
  *End_Of_Mission_Procedure_Req = _L83;
  _L17 = Clean_BG_TR;
  _L16 = Clean_BG_SH;
  _L15 = Clean_BG_SoM;
  _L82 = _L15 | _L16 | _L17;
  *Clean_BG_List_SH_Area = _L82;
  _L14 = Ack_SR_TR;
  _L13 = Ack_SR_SoM;
  _L86 = _L13 | _L14;
  *Ack_SR_Req_To_Driver = _L86;
  _L12 = Ack_SH_TR;
  _L11 = Ack_SH_SoM;
  _L10 = Ack_SH_SH;
  _L84 = _L10 | _L11 | _L12;
  *Ack_SH_Req_To_Driver = _L84;
  _L9 = Ack_OS_TR;
  _L8 = Ack_OS_SoM;
  _L7 = Ack_OS_OS;
  _L88 = _L7 | _L8 | _L9;
  *Ack_OS_Req_To_Driver = _L88;
  _L6 = Ack_LS_TR;
  _L5 = Ack_LS_SoM;
  _L4 = Ack_LS_LS;
  _L87 = _L4 | _L5 | _L6;
  *Ack_LS_Req_To_Driver = _L87;
  _L3 = SH_ref_TR;
  _L2 = SH_Ref_SoM;
  _L1 = SH_Ref_SH;
  _L85 = _L1 | _L2 | _L3;
  *SH_Refused_By_RBC_To_DMI = _L85;
  _L69 = C8_SoM;
  _L71 = C8_TR;
  _L75 = _L69 | _L71;
  *Condition8 = _L75;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Merge_Conditions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

