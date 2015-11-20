/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputDMI_InputManagement.h"

/* InputManagement::InputDMI */
void InputDMI_InputManagement(
  /* InputManagement::InputDMI::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* InputManagement::InputDMI::driver_level_transition1 */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition1,
  /* InputManagement::InputDMI::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* InputManagement::InputDMI::Level_Ack */ kcg_bool *Level_Ack,
  /* InputManagement::InputDMI::Data_From_DMI_To_Mode */ T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI_To_Mode)
{
  /* InputManagement::InputDMI::Loc_DMI_Req_Valid */
  static kcg_bool Loc_DMI_Req_Valid;
  /* InputManagement::InputDMI::Loc_DMI_Msg_Valid */
  static kcg_bool Loc_DMI_Msg_Valid;
  /* InputManagement::InputDMI::Loc_Acked_Mode */
  static M_MODE Loc_Acked_Mode;
  /* InputManagement::InputDMI::Loc_Ack_Mode_Valid */
  static kcg_bool Loc_Ack_Mode_Valid;
  /* InputManagement::InputDMI::Loc_Driver_Ack_LS */
  static kcg_bool Loc_Driver_Ack_LS;
  /* InputManagement::InputDMI::Loc_Driver_Ack_OS */
  static kcg_bool Loc_Driver_Ack_OS;
  /* InputManagement::InputDMI::Loc_Driver_Ack_RV */
  static kcg_bool Loc_Driver_Ack_RV;
  /* InputManagement::InputDMI::Loc_Driver_Ack_SH */
  static kcg_bool Loc_Driver_Ack_SH;
  /* InputManagement::InputDMI::Loc_Driver_Ack_SN */
  static kcg_bool Loc_Driver_Ack_SN;
  /* InputManagement::InputDMI::Loc_Driver_Ack_SR */
  static kcg_bool Loc_Driver_Ack_SR;
  /* InputManagement::InputDMI::Loc_Driver_Ack_TR */
  static kcg_bool Loc_Driver_Ack_TR;
  /* InputManagement::InputDMI::Loc_Driver_Ack_UN */
  static kcg_bool Loc_Driver_Ack_UN;
  /* InputManagement::InputDMI::Loc_Driver_Req_Exit_SH */
  static kcg_bool Loc_Driver_Req_Exit_SH;
  /* InputManagement::InputDMI::Loc_Driver_Req_NL */
  static kcg_bool Loc_Driver_Req_NL;
  /* InputManagement::InputDMI::Loc_Driver_Req_Override */
  static kcg_bool Loc_Driver_Req_Override;
  /* InputManagement::InputDMI::Loc_Driver_Req_SH */
  static kcg_bool Loc_Driver_Req_SH;
  /* InputManagement::InputDMI::Loc_Driver_Req_Start */
  static kcg_bool Loc_Driver_Req_Start;
  /* InputManagement::InputDMI::Loc_ETCS_Isolated */
  static kcg_bool Loc_ETCS_Isolated;
  /* InputManagement::InputDMI::_L16 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L16;
  /* InputManagement::InputDMI::_L61 */
  static kcg_bool _L61;
  /* InputManagement::InputDMI::_L60 */
  static DMI_DriverAck_T_DMI_Types_Pkg _L60;
  /* InputManagement::InputDMI::_L59 */
  static DMI_DriverRequest_T_DMI_Types_Pkg _L59;
  /* InputManagement::InputDMI::_L58 */
  static kcg_bool _L58;
  /* InputManagement::InputDMI::_L64 */
  static kcg_bool _L64;
  /* InputManagement::InputDMI::_L63 */
  static M_MODE _L63;
  /* InputManagement::InputDMI::_L62 */
  static kcg_bool _L62;
  /* InputManagement::InputDMI::_L71 */
  static kcg_bool _L71;
  /* InputManagement::InputDMI::_L70 */
  static kcg_bool _L70;
  /* InputManagement::InputDMI::_L69 */
  static kcg_bool _L69;
  /* InputManagement::InputDMI::_L68 */
  static kcg_bool _L68;
  /* InputManagement::InputDMI::_L67 */
  static kcg_bool _L67;
  /* InputManagement::InputDMI::_L66 */
  static kcg_bool _L66;
  /* InputManagement::InputDMI::_L65 */
  static kcg_bool _L65;
  /* InputManagement::InputDMI::_L77 */
  static kcg_bool _L77;
  /* InputManagement::InputDMI::_L76 */
  static kcg_bool _L76;
  /* InputManagement::InputDMI::_L75 */
  static kcg_bool _L75;
  /* InputManagement::InputDMI::_L74 */
  static kcg_bool _L74;
  /* InputManagement::InputDMI::_L73 */
  static kcg_bool _L73;
  /* InputManagement::InputDMI::_L72 */
  static kcg_bool _L72;
  /* InputManagement::InputDMI::_L78 */
  static kcg_bool _L78;
  /* InputManagement::InputDMI::_L79 */
  static kcg_bool _L79;
  /* InputManagement::InputDMI::_L80 */
  static kcg_bool _L80;
  /* InputManagement::InputDMI::_L81 */
  static kcg_bool _L81;
  /* InputManagement::InputDMI::_L82 */
  static kcg_bool _L82;
  /* InputManagement::InputDMI::_L83 */
  static kcg_bool _L83;
  /* InputManagement::InputDMI::_L84 */
  static kcg_bool _L84;
  /* InputManagement::InputDMI::_L85 */
  static kcg_bool _L85;
  /* InputManagement::InputDMI::_L86 */
  static kcg_bool _L86;
  /* InputManagement::InputDMI::_L87 */
  static kcg_bool _L87;
  /* InputManagement::InputDMI::_L88 */
  static kcg_bool _L88;
  /* InputManagement::InputDMI::_L91 */
  static kcg_bool _L91;
  /* InputManagement::InputDMI::_L92 */
  static kcg_bool _L92;
  /* InputManagement::InputDMI::_L98 */
  static kcg_bool _L98;
  /* InputManagement::InputDMI::_L97 */
  static kcg_bool _L97;
  /* InputManagement::InputDMI::_L96 */
  static kcg_bool _L96;
  /* InputManagement::InputDMI::_L101 */
  static kcg_bool _L101;
  /* InputManagement::InputDMI::_L100 */
  static kcg_bool _L100;
  /* InputManagement::InputDMI::_L99 */
  static kcg_bool _L99;
  /* InputManagement::InputDMI::_L104 */
  static kcg_bool _L104;
  /* InputManagement::InputDMI::_L103 */
  static kcg_bool _L103;
  /* InputManagement::InputDMI::_L102 */
  static kcg_bool _L102;
  /* InputManagement::InputDMI::_L107 */
  static kcg_bool _L107;
  /* InputManagement::InputDMI::_L106 */
  static kcg_bool _L106;
  /* InputManagement::InputDMI::_L105 */
  static kcg_bool _L105;
  /* InputManagement::InputDMI::_L110 */
  static kcg_bool _L110;
  /* InputManagement::InputDMI::_L109 */
  static kcg_bool _L109;
  /* InputManagement::InputDMI::_L108 */
  static kcg_bool _L108;
  /* InputManagement::InputDMI::_L113 */
  static kcg_bool _L113;
  /* InputManagement::InputDMI::_L112 */
  static kcg_bool _L112;
  /* InputManagement::InputDMI::_L111 */
  static kcg_bool _L111;
  /* InputManagement::InputDMI::_L116 */
  static kcg_bool _L116;
  /* InputManagement::InputDMI::_L115 */
  static kcg_bool _L115;
  /* InputManagement::InputDMI::_L114 */
  static kcg_bool _L114;
  /* InputManagement::InputDMI::_L117 */
  static kcg_bool _L117;
  /* InputManagement::InputDMI::_L118 */
  static kcg_bool _L118;
  /* InputManagement::InputDMI::_L119 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L119;
  /* InputManagement::InputDMI::_L120 */
  static kcg_bool _L120;
  /* InputManagement::InputDMI::_L121 */
  static kcg_bool _L121;
  /* InputManagement::InputDMI::_L122 */
  static kcg_bool _L122;
  /* InputManagement::InputDMI::_L123 */
  static kcg_bool _L123;
  /* InputManagement::InputDMI::_L124 */
  static kcg_bool _L124;
  /* InputManagement::InputDMI::_L125 */
  static kcg_bool _L125;
  /* InputManagement::InputDMI::_L126 */
  static kcg_bool _L126;
  /* InputManagement::InputDMI::_L127 */
  static kcg_bool _L127;
  /* InputManagement::InputDMI::_L128 */
  static kcg_bool _L128;
  /* InputManagement::InputDMI::_L129 */
  static kcg_bool _L129;
  /* InputManagement::InputDMI::_L130 */
  static kcg_bool _L130;
  /* InputManagement::InputDMI::_L131 */
  static kcg_bool _L131;
  /* InputManagement::InputDMI::_L132 */
  static kcg_bool _L132;
  /* InputManagement::InputDMI::_L133 */
  static kcg_bool _L133;
  /* InputManagement::InputDMI::_L134 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L134;
  
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L16, Data_From_DMI);
  _L58 = _L16.LevelAck;
  kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(&_L59, &_L16.DriverRequest);
  kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(&_L60, &_L16.DriverAck);
  _L61 = _L16.valid;
  _L65 = _L59.ETCS_Isolated;
  _L66 = _L59.Req_Start;
  _L67 = _L59.Req_SH;
  _L68 = _L59.Req_Override;
  _L69 = _L59.Req_NL;
  _L70 = _L59.Req_Exit_SH;
  _L71 = _L59.valid;
  _L62 = _L60.acknowledgement;
  _L63 = _L60.whichMode;
  _L64 = _L60.valid;
  Loc_DMI_Msg_Valid = _L61;
  _L84 = Loc_DMI_Msg_Valid;
  _L85 = _L84 & _L71;
  Loc_DMI_Req_Valid = _L85;
  _L79 = Loc_DMI_Req_Valid;
  _L72 = _L79 & _L70;
  _L78 = Loc_DMI_Req_Valid;
  _L73 = _L78 & _L68;
  _L82 = Loc_DMI_Req_Valid;
  _L74 = _L82 & _L66;
  _L83 = Loc_DMI_Req_Valid;
  _L75 = _L83 & _L69;
  _L80 = Loc_DMI_Req_Valid;
  _L76 = _L80 & _L67;
  _L81 = Loc_DMI_Req_Valid;
  _L77 = _L81 & _L65;
  Loc_Acked_Mode = _L63;
  _L87 = Loc_DMI_Msg_Valid;
  _L86 = _L87 & _L64 & _L62;
  Loc_Ack_Mode_Valid = _L86;
  _L88 = Loc_Ack_Mode_Valid;
  _L92 = Loc_Acked_Mode == M_MODE_Limited_Supervision;
  _L91 = _L88 & _L92;
  _L98 = Loc_Ack_Mode_Valid;
  _L97 = Loc_Acked_Mode == M_MODE_On_Sight;
  _L96 = _L98 & _L97;
  _L100 = Loc_Ack_Mode_Valid;
  _L101 = Loc_Acked_Mode == M_MODE_Reversing;
  _L99 = _L100 & _L101;
  _L104 = Loc_Ack_Mode_Valid;
  _L103 = Loc_Acked_Mode == M_MODE_Shunting;
  _L102 = _L104 & _L103;
  _L107 = Loc_Ack_Mode_Valid;
  _L106 = Loc_Acked_Mode == M_MODE_National_System;
  _L105 = _L107 & _L106;
  _L108 = Loc_Acked_Mode == M_MODE_Staff_Responsible;
  _L109 = Loc_Ack_Mode_Valid;
  _L110 = _L109 & _L108;
  _L111 = Loc_Ack_Mode_Valid;
  _L113 = Loc_Acked_Mode == M_MODE_Trip;
  _L112 = _L111 & _L113;
  _L114 = Loc_Acked_Mode == M_MODE_Unfitted;
  _L115 = Loc_Ack_Mode_Valid;
  _L116 = _L115 & _L114;
  Loc_Driver_Ack_LS = _L91;
  Loc_Driver_Ack_OS = _L96;
  Loc_Driver_Ack_RV = _L99;
  Loc_Driver_Ack_SH = _L102;
  Loc_Driver_Ack_SN = _L105;
  Loc_Driver_Ack_SR = _L110;
  Loc_Driver_Ack_TR = _L112;
  Loc_Driver_Ack_UN = _L116;
  Loc_Driver_Req_Exit_SH = _L72;
  Loc_Driver_Req_NL = _L75;
  Loc_Driver_Req_Override = _L73;
  Loc_Driver_Req_SH = _L76;
  Loc_Driver_Req_Start = _L74;
  Loc_ETCS_Isolated = _L77;
  _L118 = Loc_DMI_Msg_Valid;
  _L117 = _L58 & _L118;
  *Level_Ack = _L117;
  _L120 = Loc_Driver_Ack_LS;
  _L121 = Loc_Driver_Ack_OS;
  _L122 = Loc_Driver_Ack_RV;
  _L123 = Loc_Driver_Ack_SH;
  _L124 = Loc_Driver_Ack_SN;
  _L125 = Loc_Driver_Ack_SR;
  _L126 = Loc_Driver_Ack_TR;
  _L127 = Loc_Driver_Ack_UN;
  _L128 = Loc_Driver_Req_Exit_SH;
  _L129 = Loc_Driver_Req_NL;
  _L130 = Loc_Driver_Req_Override;
  _L131 = Loc_Driver_Req_SH;
  _L132 = Loc_Driver_Req_Start;
  _L133 = Loc_ETCS_Isolated;
  _L119.Ack_LS = _L120;
  _L119.Ack_OS = _L121;
  _L119.Ack_RV = _L122;
  _L119.Ack_SH = _L123;
  _L119.Ack_SN = _L124;
  _L119.Ack_SR = _L125;
  _L119.Ack_TR = _L126;
  _L119.Ack_UN = _L127;
  _L119.Req_Exit_SH = _L128;
  _L119.Req_NL = _L129;
  _L119.Req_Override = _L130;
  _L119.Req_SH = _L131;
  _L119.Req_Start = _L132;
  _L119.ETCS_Isolated = _L133;
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
    Data_From_DMI_To_Mode,
    &_L119);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L134,
    driver_level_transition1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    driver_level_transition,
    &_L134);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputDMI_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

