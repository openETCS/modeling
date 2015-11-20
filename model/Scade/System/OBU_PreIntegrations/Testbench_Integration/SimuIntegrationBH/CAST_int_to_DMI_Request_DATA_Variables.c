/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_Request_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_Request */
DMI_Request_T_DMI_Types_Pkg CAST_int_to_DMI_Request_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_request_int */ kcg_int dmi_request_int)
{
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error2;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _1_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::then::_L1 */
  static DMI_Request_T_DMI_Types_Pkg _L1_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else */
  static kcg_bool _186_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error10;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _9_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5187_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4188_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error8;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _7_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else */
  static kcg_bool _184_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error18;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _17_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::then::_L6 */
  static DMI_Request_T_DMI_Types_Pkg _L6_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::then::_L4 */
  static kcg_bool _L4191_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error16;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _15_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else */
  static kcg_bool _182_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error26;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _25_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5194_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4195_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error24;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _23_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _180_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error34;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _33_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5198_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4199_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error32;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _31_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _178_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error42;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _41_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5202_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4203_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error40;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _39_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _176_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error50;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _49_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5206_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4207_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error48;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _47_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _174_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error58;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _57_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5210_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4211_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error56;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _55_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _172_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error66;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _65_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5214_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4215_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error64;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _63_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _170_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error74;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _73_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5218_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4219_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error72;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _71_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _168_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error82;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _81_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5222_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4223_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error80;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _79_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _166_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error90;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _89_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5226_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4227_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error88;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _87_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _164_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error98;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _97_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5230_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4231_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error96;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _95_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _162_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error106;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _105_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5234_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4235_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error104;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _103_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _160_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error114;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _113_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5238_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4239_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error112;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _111_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _158_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error122;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _121_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5242_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4243_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error120;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _119_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _156_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error130;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _129_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5246_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4247_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error128;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _127_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _154_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error138;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _137_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5250_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4251_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error136;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _135_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _152_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error146;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _145_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5254_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4255_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error144;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _143_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L4 */
  static kcg_bool _L4258_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::_L7 */
  static DMI_Request_T_DMI_Types_Pkg _L7_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _147_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error148;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4257_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5256_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _149_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error150;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _151_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _139_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error140;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4253_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5252_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _141_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error142;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _153_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _131_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error132;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4249_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5248_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _133_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error134;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _155_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _123_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error124;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4245_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5244_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _125_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error126;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _157_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _115_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error116;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4241_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5240_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _117_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error118;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _159_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _107_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error108;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4237_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5236_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _109_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error110;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _161_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _99_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error100;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4233_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5232_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _101_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error102;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _163_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _91_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error92;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4229_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5228_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _93_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error94;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _165_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _83_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error84;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4225_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5224_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _85_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error86;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _167_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _75_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error76;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4221_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5220_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _77_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error78;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _169_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _67_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error68;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4217_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5216_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _69_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error70;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _171_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _59_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error60;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4213_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5212_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _61_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error62;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _173_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _51_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error52;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4209_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5208_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _53_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error54;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _175_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _43_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error44;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4205_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5204_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _45_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error46;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _177_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _35_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error36;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4201_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5200_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _37_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error38;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _179_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _27_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error28;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4197_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5196_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _29_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error30;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _181_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _19_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error20;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::then::_L4 */
  static kcg_bool _L4193_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5192_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _21_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error22;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::else */
  static kcg_bool _183_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _11_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error12;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::then::_L4 */
  static kcg_bool _L4190_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5189_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _13_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error14;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::else */
  static kcg_bool _185_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _3_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error4;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1::else::then::_L5 */
  static DMI_Request_T_DMI_Types_Pkg _L5_IfBlock1;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _5_dmi_reqest_ct;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error6;
  static kcg_bool noname;
  /* DATA::Variables::CAST_int_to_DMI_Request::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_DMI_Request::error */
  static kcg_bool error259;
  /* DATA::Variables::CAST_int_to_DMI_Request::_L668 */
  static kcg_bool _L668;
  /* DATA::Variables::CAST_int_to_DMI_Request::dmi_reqest_ct */
  static DMI_Request_T_DMI_Types_Pkg _260_dmi_reqest_ct;
  
  IfBlock1_clock = dmi_request_int == INT_DMI_Request_T_End_of_NTC_data_entry;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = ENUM_DMI_Request_T_End_of_NTC_data_entry;
    _1_dmi_reqest_ct = _L1_IfBlock1;
    _260_dmi_reqest_ct = _1_dmi_reqest_ct;
    _L2_IfBlock1 = kcg_false;
    error2 = _L2_IfBlock1;
    error259 = error2;
  }
  else {
    _186_else_clock_IfBlock1 = dmi_request_int ==
      INT_DMI_Request_T_Hide_tunnel_stopping_information;
    /* ck_anon_activ */ if (_186_else_clock_IfBlock1) {
      _L5_IfBlock1 = ENUM_DMI_Request_T_Hide_tunnel_stopping_information;
      _5_dmi_reqest_ct = _L5_IfBlock1;
      dmi_reqest_ct = _5_dmi_reqest_ct;
    }
    else {
      _185_else_clock_IfBlock1 = dmi_request_int ==
        INT_DMI_Request_T_Language_changed;
      /* ck_anon_activ */ if (_185_else_clock_IfBlock1) {
        _L5187_IfBlock1 = ENUM_DMI_Request_T_Language_changed;
        _9_dmi_reqest_ct = _L5187_IfBlock1;
        _3_dmi_reqest_ct = _9_dmi_reqest_ct;
      }
      else {
        _184_else_clock_IfBlock1 = dmi_request_int ==
          INT_DMI_Request_T_Level_entry_request;
        /* ck_anon_activ */ if (_184_else_clock_IfBlock1) {
          _L5189_IfBlock1 = ENUM_DMI_Request_T_Level_entry_request;
          _13_dmi_reqest_ct = _L5189_IfBlock1;
          _7_dmi_reqest_ct = _13_dmi_reqest_ct;
        }
        else {
          _183_else_clock_IfBlock1 = dmi_request_int ==
            INT_DMI_Request_T_Maintain_shunting;
          /* ck_anon_activ */ if (_183_else_clock_IfBlock1) {
            _L6_IfBlock1 = ENUM_DMI_Request_T_Maintain_shunting;
            _17_dmi_reqest_ct = _L6_IfBlock1;
            _11_dmi_reqest_ct = _17_dmi_reqest_ct;
          }
          else {
            _182_else_clock_IfBlock1 = dmi_request_int ==
              INT_DMI_Request_T_Non_leading;
            /* ck_anon_activ */ if (_182_else_clock_IfBlock1) {
              _L5192_IfBlock1 = ENUM_DMI_Request_T_Non_leading;
              _21_dmi_reqest_ct = _L5192_IfBlock1;
              _15_dmi_reqest_ct = _21_dmi_reqest_ct;
            }
            else {
              _181_else_clock_IfBlock1 = dmi_request_int ==
                INT_DMI_Request_T_Non_leading_exit;
              /* ck_anon_activ */ if (_181_else_clock_IfBlock1) {
                _L5194_IfBlock1 = ENUM_DMI_Request_T_Non_leading_exit;
                _25_dmi_reqest_ct = _L5194_IfBlock1;
                _19_dmi_reqest_ct = _25_dmi_reqest_ct;
              }
              else {
                _180_else_clock_IfBlock1 = dmi_request_int ==
                  INT_DMI_Request_T_NTC_data_entry_request;
                /* ck_anon_activ */ if (_180_else_clock_IfBlock1) {
                  _L5196_IfBlock1 = ENUM_DMI_Request_T_NTC_data_entry_request;
                  _29_dmi_reqest_ct = _L5196_IfBlock1;
                  _23_dmi_reqest_ct = _29_dmi_reqest_ct;
                }
                else {
                  _179_else_clock_IfBlock1 = dmi_request_int ==
                    INT_DMI_Request_T_Override_EOA;
                  /* ck_anon_activ */ if (_179_else_clock_IfBlock1) {
                    _L5198_IfBlock1 = ENUM_DMI_Request_T_Override_EOA;
                    _33_dmi_reqest_ct = _L5198_IfBlock1;
                    _27_dmi_reqest_ct = _33_dmi_reqest_ct;
                  }
                  else {
                    _178_else_clock_IfBlock1 = dmi_request_int ==
                      INT_DMI_Request_T_Override_route_unsuitability;
                    /* ck_anon_activ */ if (_178_else_clock_IfBlock1) {
                      _L5200_IfBlock1 =
                        ENUM_DMI_Request_T_Override_route_unsuitability;
                      _37_dmi_reqest_ct = _L5200_IfBlock1;
                      _31_dmi_reqest_ct = _37_dmi_reqest_ct;
                    }
                    else {
                      _177_else_clock_IfBlock1 = dmi_request_int ==
                        INT_DMI_Request_T_Radio_network_entry_aborted;
                      /* ck_anon_activ */ if (_177_else_clock_IfBlock1) {
                        _L5202_IfBlock1 =
                          ENUM_DMI_Request_T_Radio_network_entry_aborted;
                        _41_dmi_reqest_ct = _L5202_IfBlock1;
                        _35_dmi_reqest_ct = _41_dmi_reqest_ct;
                      }
                      else {
                        _176_else_clock_IfBlock1 = dmi_request_int ==
                          INT_DMI_Request_T_Remove_VBC_request;
                        /* ck_anon_activ */ if (_176_else_clock_IfBlock1) {
                          _L5204_IfBlock1 =
                            ENUM_DMI_Request_T_Remove_VBC_request;
                          _45_dmi_reqest_ct = _L5204_IfBlock1;
                          _39_dmi_reqest_ct = _45_dmi_reqest_ct;
                        }
                        else {
                          _175_else_clock_IfBlock1 = dmi_request_int ==
                            INT_DMI_Request_T_Request_for_Adhesion_factor_data;
                          /* ck_anon_activ */ if (_175_else_clock_IfBlock1) {
                            _L5206_IfBlock1 =
                              ENUM_DMI_Request_T_Request_for_Adhesion_factor_data;
                            _49_dmi_reqest_ct = _L5206_IfBlock1;
                            _43_dmi_reqest_ct = _49_dmi_reqest_ct;
                          }
                          else {
                            _174_else_clock_IfBlock1 = dmi_request_int ==
                              INT_DMI_Request_T_Request_for_radio_network_entry;
                            /* ck_anon_activ */ if (_174_else_clock_IfBlock1) {
                              _L5208_IfBlock1 =
                                ENUM_DMI_Request_T_Request_for_radio_network_entry;
                              _53_dmi_reqest_ct = _L5208_IfBlock1;
                              _47_dmi_reqest_ct = _53_dmi_reqest_ct;
                            }
                            else {
                              _173_else_clock_IfBlock1 = dmi_request_int ==
                                INT_DMI_Request_T_Request_for_SR_data;
                              /* ck_anon_activ */ if (_173_else_clock_IfBlock1) {
                                _L5210_IfBlock1 =
                                  ENUM_DMI_Request_T_Request_for_SR_data;
                                _57_dmi_reqest_ct = _L5210_IfBlock1;
                                _51_dmi_reqest_ct = _57_dmi_reqest_ct;
                              }
                              else {
                                _172_else_clock_IfBlock1 = dmi_request_int ==
                                  INT_DMI_Request_T_Request_for_switching_train_data_entry;
                                /* ck_anon_activ */ if (_172_else_clock_IfBlock1) {
                                  _L5212_IfBlock1 =
                                    ENUM_DMI_Request_T_Request_for_switching_train_data_entry;
                                  _61_dmi_reqest_ct = _L5212_IfBlock1;
                                  _55_dmi_reqest_ct = _61_dmi_reqest_ct;
                                }
                                else {
                                  _171_else_clock_IfBlock1 = dmi_request_int ==
                                    INT_DMI_Request_T_Request_for_system_version;
                                  /* ck_anon_activ */ if (_171_else_clock_IfBlock1) {
                                    _L5214_IfBlock1 =
                                      ENUM_DMI_Request_T_Request_for_system_version;
                                    _65_dmi_reqest_ct = _L5214_IfBlock1;
                                    _59_dmi_reqest_ct = _65_dmi_reqest_ct;
                                  }
                                  else {
                                    _170_else_clock_IfBlock1 =
                                      dmi_request_int ==
                                      INT_DMI_Request_T_Request_for_train_data;
                                    /* ck_anon_activ */ if (_170_else_clock_IfBlock1) {
                                      _L5216_IfBlock1 =
                                        ENUM_DMI_Request_T_Request_for_train_data;
                                      _69_dmi_reqest_ct = _L5216_IfBlock1;
                                      _63_dmi_reqest_ct = _69_dmi_reqest_ct;
                                    }
                                    else {
                                      _169_else_clock_IfBlock1 =
                                        dmi_request_int ==
                                        INT_DMI_Request_T_Request_for_train_data_view;
                                      /* ck_anon_activ */ if (_169_else_clock_IfBlock1) {
                                        _L5218_IfBlock1 =
                                          ENUM_DMI_Request_T_Request_for_train_data_view;
                                        _73_dmi_reqest_ct = _L5218_IfBlock1;
                                        _67_dmi_reqest_ct = _73_dmi_reqest_ct;
                                      }
                                      else {
                                        _168_else_clock_IfBlock1 =
                                          dmi_request_int ==
                                          INT_DMI_Request_T_Request_isolation;
                                        /* ck_anon_activ */ if (_168_else_clock_IfBlock1) {
                                          _L5220_IfBlock1 =
                                            ENUM_DMI_Request_T_Request_isolation;
                                          _77_dmi_reqest_ct = _L5220_IfBlock1;
                                          _71_dmi_reqest_ct = _77_dmi_reqest_ct;
                                        }
                                        else {
                                          _167_else_clock_IfBlock1 =
                                            dmi_request_int ==
                                            INT_DMI_Request_T_Request_to_contact_last_known_RBC;
                                          /* ck_anon_activ */ if (_167_else_clock_IfBlock1) {
                                            _L5222_IfBlock1 =
                                              ENUM_DMI_Request_T_Request_to_contact_last_known_RBC;
                                            _81_dmi_reqest_ct = _L5222_IfBlock1;
                                            _75_dmi_reqest_ct =
                                              _81_dmi_reqest_ct;
                                          }
                                          else {
                                            _166_else_clock_IfBlock1 =
                                              dmi_request_int ==
                                              INT_DMI_Request_T_Request_to_hide_geographical_information;
                                            /* ck_anon_activ */ if (_166_else_clock_IfBlock1) {
                                              _L5224_IfBlock1 =
                                                ENUM_DMI_Request_T_Request_to_hide_geographical_information;
                                              _85_dmi_reqest_ct =
                                                _L5224_IfBlock1;
                                              _79_dmi_reqest_ct =
                                                _85_dmi_reqest_ct;
                                            }
                                            else {
                                              _165_else_clock_IfBlock1 =
                                                dmi_request_int ==
                                                INT_DMI_Request_T_Request_to_hide_supervision_data;
                                              /* ck_anon_activ */ if (_165_else_clock_IfBlock1) {
                                                _L5226_IfBlock1 =
                                                  ENUM_DMI_Request_T_Request_to_hide_supervision_data;
                                                _89_dmi_reqest_ct =
                                                  _L5226_IfBlock1;
                                                _83_dmi_reqest_ct =
                                                  _89_dmi_reqest_ct;
                                              }
                                              else {
                                                _164_else_clock_IfBlock1 =
                                                  dmi_request_int ==
                                                  INT_DMI_Request_T_Train_running_number_entry_aborted;
                                                /* ck_anon_activ */ if (_164_else_clock_IfBlock1) {
                                                  _L5228_IfBlock1 =
                                                    ENUM_DMI_Request_T_Train_running_number_entry_aborted;
                                                  _93_dmi_reqest_ct =
                                                    _L5228_IfBlock1;
                                                  _87_dmi_reqest_ct =
                                                    _93_dmi_reqest_ct;
                                                }
                                                else {
                                                  _163_else_clock_IfBlock1 =
                                                    dmi_request_int ==
                                                    INT_DMI_Request_T_Train_data_entry_aborted;
                                                  /* ck_anon_activ */ if (_163_else_clock_IfBlock1) {
                                                    _L5230_IfBlock1 =
                                                      ENUM_DMI_Request_T_Train_data_entry_aborted;
                                                    _97_dmi_reqest_ct =
                                                      _L5230_IfBlock1;
                                                    _91_dmi_reqest_ct =
                                                      _97_dmi_reqest_ct;
                                                  }
                                                  else {
                                                    _162_else_clock_IfBlock1 =
                                                      dmi_request_int ==
                                                      INT_DMI_Request_T_Track_Ahead_Free_is_validated;
                                                    /* ck_anon_activ */ if (_162_else_clock_IfBlock1) {
                                                      _L5232_IfBlock1 =
                                                        ENUM_DMI_Request_T_Track_Ahead_Free_is_validated;
                                                      _101_dmi_reqest_ct =
                                                        _L5232_IfBlock1;
                                                      _95_dmi_reqest_ct =
                                                        _101_dmi_reqest_ct;
                                                    }
                                                    else {
                                                      _161_else_clock_IfBlock1 =
                                                        dmi_request_int ==
                                                        INT_DMI_Request_T_The_Train_Integrity_request;
                                                      /* ck_anon_activ */ if (_161_else_clock_IfBlock1) {
                                                        _L5234_IfBlock1 =
                                                          ENUM_DMI_Request_T_The_Train_Integrity_request;
                                                        _105_dmi_reqest_ct =
                                                          _L5234_IfBlock1;
                                                        _99_dmi_reqest_ct =
                                                          _105_dmi_reqest_ct;
                                                      }
                                                      else {
                                                        _160_else_clock_IfBlock1 =
                                                          dmi_request_int ==
                                                          INT_DMI_Request_T_Start_of_mission;
                                                        /* ck_anon_activ */ if (_160_else_clock_IfBlock1) {
                                                          _L5236_IfBlock1 =
                                                            ENUM_DMI_Request_T_Start_of_mission;
                                                          _109_dmi_reqest_ct =
                                                            _L5236_IfBlock1;
                                                          _103_dmi_reqest_ct =
                                                            _109_dmi_reqest_ct;
                                                        }
                                                        else {
                                                          _159_else_clock_IfBlock1 =
                                                            dmi_request_int ==
                                                            INT_DMI_Request_T_SR_data_entry_aborted;
                                                          /* ck_anon_activ */ if (_159_else_clock_IfBlock1) {
                                                            _L5238_IfBlock1 =
                                                              ENUM_DMI_Request_T_SR_data_entry_aborted;
                                                            _113_dmi_reqest_ct =
                                                              _L5238_IfBlock1;
                                                            _107_dmi_reqest_ct =
                                                              _113_dmi_reqest_ct;
                                                          }
                                                          else {
                                                            _158_else_clock_IfBlock1 =
                                                              dmi_request_int ==
                                                              INT_DMI_Request_T_Shunting_exit;
                                                            /* ck_anon_activ */ if (_158_else_clock_IfBlock1) {
                                                              _L5240_IfBlock1 =
                                                                ENUM_DMI_Request_T_Shunting_exit;
                                                              _117_dmi_reqest_ct =
                                                                _L5240_IfBlock1;
                                                              _111_dmi_reqest_ct =
                                                                _117_dmi_reqest_ct;
                                                            }
                                                            else {
                                                              _157_else_clock_IfBlock1 =
                                                                dmi_request_int ==
                                                                INT_DMI_Request_T_Shunting_entry;
                                                              /* ck_anon_activ */ if (_157_else_clock_IfBlock1) {
                                                                _L5242_IfBlock1 =
                                                                  ENUM_DMI_Request_T_Shunting_entry;
                                                                _121_dmi_reqest_ct =
                                                                  _L5242_IfBlock1;
                                                                _115_dmi_reqest_ct =
                                                                  _121_dmi_reqest_ct;
                                                              }
                                                              else {
                                                                _156_else_clock_IfBlock1 =
                                                                  dmi_request_int ==
                                                                  INT_DMI_Request_T_Show_tunnel_stopping_information;
                                                                /* ck_anon_activ */ if (_156_else_clock_IfBlock1) {
                                                                  _L5244_IfBlock1 =
                                                                    ENUM_DMI_Request_T_Show_tunnel_stopping_information;
                                                                  _125_dmi_reqest_ct =
                                                                    _L5244_IfBlock1;
                                                                  _119_dmi_reqest_ct =
                                                                    _125_dmi_reqest_ct;
                                                                }
                                                                else {
                                                                  _155_else_clock_IfBlock1 =
                                                                    dmi_request_int ==
                                                                    INT_DMI_Request_T_Set_VBC_request;
                                                                  /* ck_anon_activ */ if (_155_else_clock_IfBlock1) {
                                                                    _L5246_IfBlock1 =
                                                                      ENUM_DMI_Request_T_Set_VBC_request;
                                                                    _129_dmi_reqest_ct =
                                                                      _L5246_IfBlock1;
                                                                    _123_dmi_reqest_ct =
                                                                      _129_dmi_reqest_ct;
                                                                  }
                                                                  else {
                                                                    _154_else_clock_IfBlock1 =
                                                                      dmi_request_int ==
                                                                      INT_DMI_Request_T_Scroll_text_up;
                                                                    /* ck_anon_activ */ if (_154_else_clock_IfBlock1) {
                                                                      _L5248_IfBlock1 =
                                                                        ENUM_DMI_Request_T_Scroll_text_up;
                                                                      _133_dmi_reqest_ct =
                                                                        _L5248_IfBlock1;
                                                                      _127_dmi_reqest_ct =
                                                                        _133_dmi_reqest_ct;
                                                                    }
                                                                    else {
                                                                      _153_else_clock_IfBlock1 =
                                                                        dmi_request_int ==
                                                                        INT_DMI_Request_T_Scroll_text_down;
                                                                      /* ck_anon_activ */ if (_153_else_clock_IfBlock1) {
                                                                        _L5250_IfBlock1 =
                                                                          ENUM_DMI_Request_T_Scroll_text_down;
                                                                        _137_dmi_reqest_ct =
                                                                          _L5250_IfBlock1;
                                                                        _131_dmi_reqest_ct =
                                                                          _137_dmi_reqest_ct;
                                                                      }
                                                                      else {
                                                                        _152_else_clock_IfBlock1 =
                                                                          dmi_request_int ==
                                                                          INT_DMI_Request_T_Request_to_use_short_number;
                                                                        /* ck_anon_activ */ if (_152_else_clock_IfBlock1) {
                                                                          _L5252_IfBlock1 =
                                                                            ENUM_DMI_Request_T_Request_to_use_short_number;
                                                                          _141_dmi_reqest_ct =
                                                                            _L5252_IfBlock1;
                                                                          _135_dmi_reqest_ct =
                                                                            _141_dmi_reqest_ct;
                                                                        }
                                                                        else {
                                                                          _151_else_clock_IfBlock1 =
                                                                            dmi_request_int ==
                                                                            INT_DMI_Request_T_Request_to_show_supervision_data;
                                                                          /* ck_anon_activ */ if (_151_else_clock_IfBlock1) {
                                                                            _L5254_IfBlock1 =
                                                                              ENUM_DMI_Request_T_Request_to_show_supervision_data;
                                                                            _145_dmi_reqest_ct =
                                                                              _L5254_IfBlock1;
                                                                            _139_dmi_reqest_ct =
                                                                              _145_dmi_reqest_ct;
                                                                          }
                                                                          else {
                                                                            else_clock_IfBlock1 =
                                                                              dmi_request_int ==
                                                                              INT_DMI_Request_T_Request_to_show_geographical_position;
                                                                            /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                                                              _L5256_IfBlock1 =
                                                                                ENUM_DMI_Request_T_Request_to_show_geographical_position;
                                                                              _149_dmi_reqest_ct =
                                                                                _L5256_IfBlock1;
                                                                              _143_dmi_reqest_ct =
                                                                                _149_dmi_reqest_ct;
                                                                            }
                                                                            else {
                                                                              _L7_IfBlock1 =
                                                                                ENUM_DMI_Request_T_End_of_NTC_data_entry;
                                                                              _147_dmi_reqest_ct =
                                                                                _L7_IfBlock1;
                                                                              _143_dmi_reqest_ct =
                                                                                _147_dmi_reqest_ct;
                                                                            }
                                                                            _139_dmi_reqest_ct =
                                                                              _143_dmi_reqest_ct;
                                                                          }
                                                                          _135_dmi_reqest_ct =
                                                                            _139_dmi_reqest_ct;
                                                                        }
                                                                        _131_dmi_reqest_ct =
                                                                          _135_dmi_reqest_ct;
                                                                      }
                                                                      _127_dmi_reqest_ct =
                                                                        _131_dmi_reqest_ct;
                                                                    }
                                                                    _123_dmi_reqest_ct =
                                                                      _127_dmi_reqest_ct;
                                                                  }
                                                                  _119_dmi_reqest_ct =
                                                                    _123_dmi_reqest_ct;
                                                                }
                                                                _115_dmi_reqest_ct =
                                                                  _119_dmi_reqest_ct;
                                                              }
                                                              _111_dmi_reqest_ct =
                                                                _115_dmi_reqest_ct;
                                                            }
                                                            _107_dmi_reqest_ct =
                                                              _111_dmi_reqest_ct;
                                                          }
                                                          _103_dmi_reqest_ct =
                                                            _107_dmi_reqest_ct;
                                                        }
                                                        _99_dmi_reqest_ct =
                                                          _103_dmi_reqest_ct;
                                                      }
                                                      _95_dmi_reqest_ct =
                                                        _99_dmi_reqest_ct;
                                                    }
                                                    _91_dmi_reqest_ct =
                                                      _95_dmi_reqest_ct;
                                                  }
                                                  _87_dmi_reqest_ct =
                                                    _91_dmi_reqest_ct;
                                                }
                                                _83_dmi_reqest_ct =
                                                  _87_dmi_reqest_ct;
                                              }
                                              _79_dmi_reqest_ct =
                                                _83_dmi_reqest_ct;
                                            }
                                            _75_dmi_reqest_ct =
                                              _79_dmi_reqest_ct;
                                          }
                                          _71_dmi_reqest_ct = _75_dmi_reqest_ct;
                                        }
                                        _67_dmi_reqest_ct = _71_dmi_reqest_ct;
                                      }
                                      _63_dmi_reqest_ct = _67_dmi_reqest_ct;
                                    }
                                    _59_dmi_reqest_ct = _63_dmi_reqest_ct;
                                  }
                                  _55_dmi_reqest_ct = _59_dmi_reqest_ct;
                                }
                                _51_dmi_reqest_ct = _55_dmi_reqest_ct;
                              }
                              _47_dmi_reqest_ct = _51_dmi_reqest_ct;
                            }
                            _43_dmi_reqest_ct = _47_dmi_reqest_ct;
                          }
                          _39_dmi_reqest_ct = _43_dmi_reqest_ct;
                        }
                        _35_dmi_reqest_ct = _39_dmi_reqest_ct;
                      }
                      _31_dmi_reqest_ct = _35_dmi_reqest_ct;
                    }
                    _27_dmi_reqest_ct = _31_dmi_reqest_ct;
                  }
                  _23_dmi_reqest_ct = _27_dmi_reqest_ct;
                }
                _19_dmi_reqest_ct = _23_dmi_reqest_ct;
              }
              _15_dmi_reqest_ct = _19_dmi_reqest_ct;
            }
            _11_dmi_reqest_ct = _15_dmi_reqest_ct;
          }
          _7_dmi_reqest_ct = _11_dmi_reqest_ct;
        }
        _3_dmi_reqest_ct = _7_dmi_reqest_ct;
      }
      dmi_reqest_ct = _3_dmi_reqest_ct;
    }
    _260_dmi_reqest_ct = dmi_reqest_ct;
    /* ck_anon_activ */ if (_186_else_clock_IfBlock1) {
      _L4_IfBlock1 = kcg_false;
      error6 = _L4_IfBlock1;
      error = error6;
    }
    else {
      /* ck_anon_activ */ if (_185_else_clock_IfBlock1) {
        _L4188_IfBlock1 = kcg_false;
        error10 = _L4188_IfBlock1;
        error4 = error10;
      }
      else {
        /* ck_anon_activ */ if (_184_else_clock_IfBlock1) {
          _L4190_IfBlock1 = kcg_false;
          error14 = _L4190_IfBlock1;
          error8 = error14;
        }
        else {
          /* ck_anon_activ */ if (_183_else_clock_IfBlock1) {
            _L4191_IfBlock1 = kcg_false;
            error18 = _L4191_IfBlock1;
            error12 = error18;
          }
          else {
            /* ck_anon_activ */ if (_182_else_clock_IfBlock1) {
              _L4193_IfBlock1 = kcg_false;
              error22 = _L4193_IfBlock1;
              error16 = error22;
            }
            else {
              /* ck_anon_activ */ if (_181_else_clock_IfBlock1) {
                _L4195_IfBlock1 = kcg_false;
                error26 = _L4195_IfBlock1;
                error20 = error26;
              }
              else {
                /* ck_anon_activ */ if (_180_else_clock_IfBlock1) {
                  _L4197_IfBlock1 = kcg_false;
                  error30 = _L4197_IfBlock1;
                  error24 = error30;
                }
                else {
                  /* ck_anon_activ */ if (_179_else_clock_IfBlock1) {
                    _L4199_IfBlock1 = kcg_false;
                    error34 = _L4199_IfBlock1;
                    error28 = error34;
                  }
                  else {
                    /* ck_anon_activ */ if (_178_else_clock_IfBlock1) {
                      _L4201_IfBlock1 = kcg_false;
                      error38 = _L4201_IfBlock1;
                      error32 = error38;
                    }
                    else {
                      /* ck_anon_activ */ if (_177_else_clock_IfBlock1) {
                        _L4203_IfBlock1 = kcg_false;
                        error42 = _L4203_IfBlock1;
                        error36 = error42;
                      }
                      else {
                        /* ck_anon_activ */ if (_176_else_clock_IfBlock1) {
                          _L4205_IfBlock1 = kcg_false;
                          error46 = _L4205_IfBlock1;
                          error40 = error46;
                        }
                        else {
                          /* ck_anon_activ */ if (_175_else_clock_IfBlock1) {
                            _L4207_IfBlock1 = kcg_false;
                            error50 = _L4207_IfBlock1;
                            error44 = error50;
                          }
                          else {
                            /* ck_anon_activ */ if (_174_else_clock_IfBlock1) {
                              _L4209_IfBlock1 = kcg_false;
                              error54 = _L4209_IfBlock1;
                              error48 = error54;
                            }
                            else {
                              /* ck_anon_activ */ if (_173_else_clock_IfBlock1) {
                                _L4211_IfBlock1 = kcg_false;
                                error58 = _L4211_IfBlock1;
                                error52 = error58;
                              }
                              else {
                                /* ck_anon_activ */ if (_172_else_clock_IfBlock1) {
                                  _L4213_IfBlock1 = kcg_false;
                                  error62 = _L4213_IfBlock1;
                                  error56 = error62;
                                }
                                else {
                                  /* ck_anon_activ */ if (_171_else_clock_IfBlock1) {
                                    _L4215_IfBlock1 = kcg_false;
                                    error66 = _L4215_IfBlock1;
                                    error60 = error66;
                                  }
                                  else {
                                    /* ck_anon_activ */ if (_170_else_clock_IfBlock1) {
                                      _L4217_IfBlock1 = kcg_false;
                                      error70 = _L4217_IfBlock1;
                                      error64 = error70;
                                    }
                                    else {
                                      /* ck_anon_activ */ if (_169_else_clock_IfBlock1) {
                                        _L4219_IfBlock1 = kcg_false;
                                        error74 = _L4219_IfBlock1;
                                        error68 = error74;
                                      }
                                      else {
                                        /* ck_anon_activ */ if (_168_else_clock_IfBlock1) {
                                          _L4221_IfBlock1 = kcg_false;
                                          error78 = _L4221_IfBlock1;
                                          error72 = error78;
                                        }
                                        else {
                                          /* ck_anon_activ */ if (_167_else_clock_IfBlock1) {
                                            _L4223_IfBlock1 = kcg_false;
                                            error82 = _L4223_IfBlock1;
                                            error76 = error82;
                                          }
                                          else {
                                            /* ck_anon_activ */ if (_166_else_clock_IfBlock1) {
                                              _L4225_IfBlock1 = kcg_false;
                                              error86 = _L4225_IfBlock1;
                                              error80 = error86;
                                            }
                                            else {
                                              /* ck_anon_activ */ if (_165_else_clock_IfBlock1) {
                                                _L4227_IfBlock1 = kcg_false;
                                                error90 = _L4227_IfBlock1;
                                                error84 = error90;
                                              }
                                              else {
                                                /* ck_anon_activ */ if (_164_else_clock_IfBlock1) {
                                                  _L4229_IfBlock1 = kcg_false;
                                                  error94 = _L4229_IfBlock1;
                                                  error88 = error94;
                                                }
                                                else {
                                                  /* ck_anon_activ */ if (_163_else_clock_IfBlock1) {
                                                    _L4231_IfBlock1 = kcg_false;
                                                    error98 = _L4231_IfBlock1;
                                                    error92 = error98;
                                                  }
                                                  else {
                                                    /* ck_anon_activ */ if (_162_else_clock_IfBlock1) {
                                                      _L4233_IfBlock1 =
                                                        kcg_false;
                                                      error102 =
                                                        _L4233_IfBlock1;
                                                      error96 = error102;
                                                    }
                                                    else {
                                                      /* ck_anon_activ */ if (_161_else_clock_IfBlock1) {
                                                        _L4235_IfBlock1 =
                                                          kcg_false;
                                                        error106 =
                                                          _L4235_IfBlock1;
                                                        error100 = error106;
                                                      }
                                                      else {
                                                        /* ck_anon_activ */ if (_160_else_clock_IfBlock1) {
                                                          _L4237_IfBlock1 =
                                                            kcg_false;
                                                          error110 =
                                                            _L4237_IfBlock1;
                                                          error104 = error110;
                                                        }
                                                        else {
                                                          /* ck_anon_activ */ if (_159_else_clock_IfBlock1) {
                                                            _L4239_IfBlock1 =
                                                              kcg_false;
                                                            error114 =
                                                              _L4239_IfBlock1;
                                                            error108 = error114;
                                                          }
                                                          else {
                                                            /* ck_anon_activ */ if (_158_else_clock_IfBlock1) {
                                                              _L4241_IfBlock1 =
                                                                kcg_false;
                                                              error118 =
                                                                _L4241_IfBlock1;
                                                              error112 =
                                                                error118;
                                                            }
                                                            else {
                                                              /* ck_anon_activ */ if (_157_else_clock_IfBlock1) {
                                                                _L4243_IfBlock1 =
                                                                  kcg_false;
                                                                error122 =
                                                                  _L4243_IfBlock1;
                                                                error116 =
                                                                  error122;
                                                              }
                                                              else {
                                                                /* ck_anon_activ */ if (_156_else_clock_IfBlock1) {
                                                                  _L4245_IfBlock1 =
                                                                    kcg_false;
                                                                  error126 =
                                                                    _L4245_IfBlock1;
                                                                  error120 =
                                                                    error126;
                                                                }
                                                                else {
                                                                  /* ck_anon_activ */ if (_155_else_clock_IfBlock1) {
                                                                    _L4247_IfBlock1 =
                                                                      kcg_false;
                                                                    error130 =
                                                                      _L4247_IfBlock1;
                                                                    error124 =
                                                                      error130;
                                                                  }
                                                                  else {
                                                                    /* ck_anon_activ */ if (_154_else_clock_IfBlock1) {
                                                                      _L4249_IfBlock1 =
                                                                        kcg_false;
                                                                      error134 =
                                                                        _L4249_IfBlock1;
                                                                      error128 =
                                                                        error134;
                                                                    }
                                                                    else {
                                                                      /* ck_anon_activ */ if (_153_else_clock_IfBlock1) {
                                                                        _L4251_IfBlock1 =
                                                                          kcg_false;
                                                                        error138 =
                                                                          _L4251_IfBlock1;
                                                                        error132 =
                                                                          error138;
                                                                      }
                                                                      else {
                                                                        /* ck_anon_activ */ if (_152_else_clock_IfBlock1) {
                                                                          _L4253_IfBlock1 =
                                                                            kcg_false;
                                                                          error142 =
                                                                            _L4253_IfBlock1;
                                                                          error136 =
                                                                            error142;
                                                                        }
                                                                        else {
                                                                          /* ck_anon_activ */ if (_151_else_clock_IfBlock1) {
                                                                            _L4255_IfBlock1 =
                                                                              kcg_false;
                                                                            error146 =
                                                                              _L4255_IfBlock1;
                                                                            error140 =
                                                                              error146;
                                                                          }
                                                                          else {
                                                                            /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                                                              _L4257_IfBlock1 =
                                                                                kcg_false;
                                                                              error150 =
                                                                                _L4257_IfBlock1;
                                                                              error144 =
                                                                                error150;
                                                                            }
                                                                            else {
                                                                              _L4258_IfBlock1 =
                                                                                kcg_true;
                                                                              error148 =
                                                                                _L4258_IfBlock1;
                                                                              error144 =
                                                                                error148;
                                                                            }
                                                                            error140 =
                                                                              error144;
                                                                          }
                                                                          error136 =
                                                                            error140;
                                                                        }
                                                                        error132 =
                                                                          error136;
                                                                      }
                                                                      error128 =
                                                                        error132;
                                                                    }
                                                                    error124 =
                                                                      error128;
                                                                  }
                                                                  error120 =
                                                                    error124;
                                                                }
                                                                error116 =
                                                                  error120;
                                                              }
                                                              error112 =
                                                                error116;
                                                            }
                                                            error108 = error112;
                                                          }
                                                          error104 = error108;
                                                        }
                                                        error100 = error104;
                                                      }
                                                      error96 = error100;
                                                    }
                                                    error92 = error96;
                                                  }
                                                  error88 = error92;
                                                }
                                                error84 = error88;
                                              }
                                              error80 = error84;
                                            }
                                            error76 = error80;
                                          }
                                          error72 = error76;
                                        }
                                        error68 = error72;
                                      }
                                      error64 = error68;
                                    }
                                    error60 = error64;
                                  }
                                  error56 = error60;
                                }
                                error52 = error56;
                              }
                              error48 = error52;
                            }
                            error44 = error48;
                          }
                          error40 = error44;
                        }
                        error36 = error40;
                      }
                      error32 = error36;
                    }
                    error28 = error32;
                  }
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    error259 = error;
  }
  _L668 = error259;
  noname = _L668;
  return _260_dmi_reqest_ct;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_Request_DATA_Variables.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

