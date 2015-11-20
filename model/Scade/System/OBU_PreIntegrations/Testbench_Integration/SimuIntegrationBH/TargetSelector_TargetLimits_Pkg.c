/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetSelector */
void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::Targets */ TargetCollection_T_TargetManagement_types *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */ CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* TargetLimits_Pkg::TargetSelector::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::TargetSelector::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetSelector::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::TargetSelector::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::TargetSelector::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveDisplayedTarget */ Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveEBDCurve */ ParabolaCurve_T_CalcBrakingCurves_types *MostRestrictiveEBDCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */ kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */ V_internal_real_Type_SDM_Types_Pkg *V_Target,
  /* TargetLimits_Pkg::TargetSelector::V_P_MRDT */ V_internal_real_Type_SDM_Types_Pkg *V_P_MRDT,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */ L_internal_real_Type_SDM_Types_Pkg *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */ L_internal_real_Type_SDM_Types_Pkg *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::v_est */ V_internal_real_Type_SDM_Types_Pkg *v_est,
  /* TargetLimits_Pkg::TargetSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::TargetSelector::V_ura */ V_internal_real_Type_SDM_Types_Pkg *V_ura,
  /* TargetLimits_Pkg::TargetSelector::bec */ bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::valid_D_SBI2 */ kcg_bool *valid_D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::D_estfront */ L_internal_real_Type_SDM_Types_Pkg *D_estfront,
  /* TargetLimits_Pkg::TargetSelector::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg *D_maxsafefront)
{
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TargetLimits_Pkg::TargetSelector */
  static TargetIteratorAkku_TargetLimits_Pkg acc;
  /* TargetLimits_Pkg::TargetSelector */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetLimits_Pkg::TargetSelector */
  static V_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::TargetSelector */
  static kcg_bool _7_op_call;
  /* TargetLimits_Pkg::TargetSelector */
  static kcg_bool ck_every;
  static kcg_int noname;
  static kcg_bool _8_noname;
  static kcg_bool _9_noname;
  static kcg_bool _10_noname;
  /* TargetLimits_Pkg::TargetSelector::CurvesMRSP */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types CurvesMRSP;
  /* TargetLimits_Pkg::TargetSelector::CurveSvL */
  static ParabolaCurve_T_CalcBrakingCurves_types CurveSvL;
  /* TargetLimits_Pkg::TargetSelector::TargetsMRSP */
  static Target_list_MRSP_real_T_TargetManagement_types TargetsMRSP;
  /* TargetLimits_Pkg::TargetSelector::TargetEOA */
  static Target_real_T_TargetManagement_types TargetEOA;
  /* TargetLimits_Pkg::TargetSelector::TargetSvL */
  static Target_real_T_TargetManagement_types TargetSvL;
  /* TargetLimits_Pkg::TargetSelector::GuiCurve */
  static ParabolaCurve_T_CalcBrakingCurves_types GuiCurve;
  /* TargetLimits_Pkg::TargetSelector::GuiCurveEn */
  static kcg_bool GuiCurveEn;
  /* TargetLimits_Pkg::TargetSelector::CurveSBD */
  static ParabolaCurve_T_CalcBrakingCurves_types CurveSBD;
  /* TargetLimits_Pkg::TargetSelector::_L42 */
  static array_170186 _L42;
  /* TargetLimits_Pkg::TargetSelector::_L40 */
  static array_170237 _L40;
  /* TargetLimits_Pkg::TargetSelector::_L36 */
  static kcg_bool _L36;
  /* TargetLimits_Pkg::TargetSelector::_L33 */
  static array_169095 _L33;
  /* TargetLimits_Pkg::TargetSelector::_L28 */
  static kcg_int _L28;
  /* TargetLimits_Pkg::TargetSelector::_L29 */
  static TargetIteratorAkku_TargetLimits_Pkg _L29;
  /* TargetLimits_Pkg::TargetSelector::_L59 */
  static kcg_bool _L59;
  /* TargetLimits_Pkg::TargetSelector::_L60 */
  static TargetIteratorAkku_TargetLimits_Pkg _L60;
  /* TargetLimits_Pkg::TargetSelector::_L55 */
  static kcg_int _L55;
  /* TargetLimits_Pkg::TargetSelector::_L69 */
  static L_internal_real_Type_SDM_Types_Pkg _L69;
  /* TargetLimits_Pkg::TargetSelector::_L65 */
  static L_internal_real_Type_SDM_Types_Pkg _L65;
  /* TargetLimits_Pkg::TargetSelector::_L80 */
  static kcg_int _L80;
  /* TargetLimits_Pkg::TargetSelector::_L110 */
  static kcg_bool _L110;
  /* TargetLimits_Pkg::TargetSelector::_L109 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L109;
  /* TargetLimits_Pkg::TargetSelector::_L108 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L108;
  /* TargetLimits_Pkg::TargetSelector::_L107 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L107;
  /* TargetLimits_Pkg::TargetSelector::_L106 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L106;
  /* TargetLimits_Pkg::TargetSelector::_L113 */
  static CurveCollection_T_CalcBrakingCurves_types _L113;
  /* TargetLimits_Pkg::TargetSelector::_L115 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L115;
  /* TargetLimits_Pkg::TargetSelector::_L117 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L117;
  /* TargetLimits_Pkg::TargetSelector::_L118 */
  static TargetCollection_T_TargetManagement_types _L118;
  /* TargetLimits_Pkg::TargetSelector::_L127 */
  static Target_real_T_TargetManagement_types _L127;
  /* TargetLimits_Pkg::TargetSelector::_L126 */
  static Target_real_T_TargetManagement_types _L126;
  /* TargetLimits_Pkg::TargetSelector::_L125 */
  static Target_list_MRSP_real_T_TargetManagement_types _L125;
  /* TargetLimits_Pkg::TargetSelector::_L124 */
  static kcg_bool _L124;
  /* TargetLimits_Pkg::TargetSelector::_L130 */
  static Target_real_T_TargetManagement_types _L130;
  /* TargetLimits_Pkg::TargetSelector::_L132 */
  static Target_list_MRSP_real_T_TargetManagement_types _L132;
  /* TargetLimits_Pkg::TargetSelector::_L133 */
  static Target_real_T_TargetManagement_types _L133;
  /* TargetLimits_Pkg::TargetSelector::_L134 */
  static Target_real_T_TargetManagement_types _L134;
  /* TargetLimits_Pkg::TargetSelector::_L153 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L153;
  /* TargetLimits_Pkg::TargetSelector::_L152 */
  static Target_real_T_TargetManagement_types _L152;
  /* TargetLimits_Pkg::TargetSelector::_L162 */
  static Target_list_MRSP_real_T_TargetManagement_types _L162;
  /* TargetLimits_Pkg::TargetSelector::_L158 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L158;
  /* TargetLimits_Pkg::TargetSelector::_L157 */
  static Target_real_T_TargetManagement_types _L157;
  /* TargetLimits_Pkg::TargetSelector::_L156 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L156;
  /* TargetLimits_Pkg::TargetSelector::_L173 */
  static odometry_T_Obu_BasicTypes_Pkg _L173;
  /* TargetLimits_Pkg::TargetSelector::_L180 */
  static kcg_bool _L180;
  /* TargetLimits_Pkg::TargetSelector::_L179 */
  static kcg_bool _L179;
  /* TargetLimits_Pkg::TargetSelector::_L178 */
  static kcg_bool _L178;
  /* TargetLimits_Pkg::TargetSelector::_L177 */
  static P3_NationalValues_T_Packet_Types_Pkg _L177;
  /* TargetLimits_Pkg::TargetSelector::_L176 */
  static Q_NVINHSMICPERM _L176;
  /* TargetLimits_Pkg::TargetSelector::_L194 */
  static bec_t_TargetLimits_Pkg _L194;
  /* TargetLimits_Pkg::TargetSelector::_L195 */
  static T_trac_t_TargetLimits_Pkg _L195;
  /* TargetLimits_Pkg::TargetSelector::_L196 */
  static L_internal_real_Type_SDM_Types_Pkg _L196;
  /* TargetLimits_Pkg::TargetSelector::_L199 */
  static trainData_internal_t_SDM_Types_Pkg _L199;
  /* TargetLimits_Pkg::TargetSelector::_L200 */
  static t_Brake_t_SDMModelPkg _L200;
  /* TargetLimits_Pkg::TargetSelector::_L201 */
  static V_internal_real_Type_SDM_Types_Pkg _L201;
  /* TargetLimits_Pkg::TargetSelector::_L202 */
  static V_internal_real_Type_SDM_Types_Pkg _L202;
  /* TargetLimits_Pkg::TargetSelector::_L203 */
  static TargetType_T_TargetManagement_types _L203;
  /* TargetLimits_Pkg::TargetSelector::_L204 */
  static kcg_bool _L204;
  /* TargetLimits_Pkg::TargetSelector::_L205 */
  static TargetType_T_TargetManagement_types _L205;
  /* TargetLimits_Pkg::TargetSelector::_L211 */
  static trainData_internal_t_SDM_Types_Pkg _L211;
  /* TargetLimits_Pkg::TargetSelector::_L210 */
  static odometry_T_Obu_BasicTypes_Pkg _L210;
  /* TargetLimits_Pkg::TargetSelector::_L209 */
  static t_Brake_t_SDMModelPkg _L209;
  /* TargetLimits_Pkg::TargetSelector::_L238 */
  static T_trac_t_TargetLimits_Pkg _L238;
  /* TargetLimits_Pkg::TargetSelector::_L243 */
  static bec_t_TargetLimits_Pkg _L243;
  /* TargetLimits_Pkg::TargetSelector::_L242 */
  static kcg_int _L242;
  /* TargetLimits_Pkg::TargetSelector::_L241 */
  static kcg_real _L241;
  /* TargetLimits_Pkg::TargetSelector::_L240 */
  static TargetType_T_TargetManagement_types _L240;
  /* TargetLimits_Pkg::TargetSelector::_L239 */
  static TargetIteratorAkku_TargetLimits_Pkg _L239;
  /* TargetLimits_Pkg::TargetSelector::_L246 */
  static L_internal_real_Type_SDM_Types_Pkg _L246;
  /* TargetLimits_Pkg::TargetSelector::_L245 */
  static L_internal_real_Type_SDM_Types_Pkg _L245;
  /* TargetLimits_Pkg::TargetSelector::_L244 */
  static TrainLocations_real_T_SDM_Types_Pkg _L244;
  /* TargetLimits_Pkg::TargetSelector::_L249 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L249;
  /* TargetLimits_Pkg::TargetSelector::_L250 */
  static kcg_bool _L250;
  /* TargetLimits_Pkg::TargetSelector::_L252 */
  static kcg_bool _L252;
  /* TargetLimits_Pkg::TargetSelector::_L251 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L251;
  /* TargetLimits_Pkg::TargetSelector::_L254 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L254;
  /* TargetLimits_Pkg::TargetSelector::_L253 */
  static kcg_bool _L253;
  /* TargetLimits_Pkg::TargetSelector::_L255 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L255;
  /* TargetLimits_Pkg::TargetSelector::_L256 */
  static array_bool_110 _L256;
  /* TargetLimits_Pkg::TargetSelector::_L257 */
  static kcg_int _L257;
  /* TargetLimits_Pkg::TargetSelector::_L264 */
  static kcg_bool _L264;
  /* TargetLimits_Pkg::TargetSelector::_L265 */
  static V_internal_real_Type_SDM_Types_Pkg _L265;
  /* TargetLimits_Pkg::TargetSelector::_L261 */
  static kcg_bool _L261;
  /* TargetLimits_Pkg::TargetSelector::_L262 */
  static kcg_bool _L262;
  /* TargetLimits_Pkg::TargetSelector::_L263 */
  static kcg_real _L263;
  /* TargetLimits_Pkg::TargetSelector::_L259 */
  static T_internal_real_Type_SDM_Types_Pkg _L259;
  /* TargetLimits_Pkg::TargetSelector::_L266 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L266;
  /* TargetLimits_Pkg::TargetSelector::_L267 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L267;
  /* TargetLimits_Pkg::TargetSelector::_L269 */
  static L_internal_real_Type_SDM_Types_Pkg _L269;
  /* TargetLimits_Pkg::TargetSelector::_L268 */
  static TrainLocations_real_T_SDM_Types_Pkg _L268;
  /* TargetLimits_Pkg::TargetSelector::_L271 */
  static Target_real_T_TargetManagement_types _L271;
  /* TargetLimits_Pkg::TargetSelector::_L270 */
  static L_internal_real_Type_SDM_Types_Pkg _L270;
  /* TargetLimits_Pkg::TargetSelector::_L272 */
  static Target_real_T_TargetManagement_types _L272;
  /* TargetLimits_Pkg::TargetSelector::_L275 */
  static kcg_bool _L275;
  /* TargetLimits_Pkg::TargetSelector::_L274 */
  static TargetType_T_TargetManagement_types _L274;
  /* TargetLimits_Pkg::TargetSelector::_L273 */
  static TargetType_T_TargetManagement_types _L273;
  /* TargetLimits_Pkg::TargetSelector::_L277 */
  static kcg_bool _L277;
  /* TargetLimits_Pkg::TargetSelector::_L276 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L276;
  /* TargetLimits_Pkg::TargetSelector::_L278 */
  static V_internal_real_Type_SDM_Types_Pkg _L278;
  /* TargetLimits_Pkg::TargetSelector::_L281 */
  static kcg_bool _L281;
  /* TargetLimits_Pkg::TargetSelector::_L280 */
  static TargetType_T_TargetManagement_types _L280;
  /* TargetLimits_Pkg::TargetSelector::_L279 */
  static TargetType_T_TargetManagement_types _L279;
  /* TargetLimits_Pkg::TargetSelector::_L282 */
  static Target_real_T_TargetManagement_types _L282;
  /* TargetLimits_Pkg::TargetSelector::_L283 */
  static Target_real_T_TargetManagement_types _L283;
  /* TargetLimits_Pkg::TargetSelector::_L286 */
  static array_real_110 _L286;
  /* TargetLimits_Pkg::TargetSelector::_L287 */
  static Target_T_TargetManagement_types _L287;
  /* TargetLimits_Pkg::TargetSelector::_L293 */
  static V_internal_real_Type_SDM_Types_Pkg _L293;
  /* TargetLimits_Pkg::TargetSelector::_L292 */
  static L_internal_real_Type_SDM_Types_Pkg _L292;
  /* TargetLimits_Pkg::TargetSelector::_L291 */
  static TargetType_T_TargetManagement_types _L291;
  /* TargetLimits_Pkg::TargetSelector::_L294 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L294;
  /* TargetLimits_Pkg::TargetSelector::_L295 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L295;
  /* TargetLimits_Pkg::TargetSelector::_L297 */
  static TargetType_T_TargetManagement_types _L297;
  /* TargetLimits_Pkg::TargetSelector::_L296 */
  static kcg_bool _L296;
  
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L118, Targets);
  kcg_copy_Target_real_T_TargetManagement_types(&_L126, &_L118.EOA_target);
  kcg_copy_Target_real_T_TargetManagement_types(&TargetEOA, &_L126);
  kcg_copy_Target_real_T_TargetManagement_types(&_L272, &TargetEOA);
  _L273 = _L272.targetType;
  _L274 = EoA_TargetManagement_types;
  _L275 = _L273 == _L274;
  ck_every = _L275;
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(&_L113, Curves);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &_L107,
    &_L113.EOA_SBD_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&CurveSBD, &_L107);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L267, &CurveSBD);
  _L55 = - 1;
  _L241 = 0.0;
  _L242 = - 1;
  _L240 = invalid_TargetManagement_types;
  _L243.v = _L241;
  _L243.d = _L241;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L177, NationalValues);
  _L176 = _L177.q_nvinhsmicperm;
  _L179 = kcg_true;
  _L178 = kcg_false;
  switch (_L176) {
    case Q_NVINHSMICPERM_Yes :
      _L180 = _L179;
      break;
    
    default :
      _L180 = _L178;
  }
  _L238.Traction = _L241;
  _L238.berem = _L241;
  _L238.bs = _L241;
  _L238.bs1 = _L241;
  _L238.bs2 = _L241;
  _L238.inhComp = _L180;
  _L238.indication = _L241;
  _L239.SBI2 = _L241;
  _L239.index = _L242;
  _L239.ttype = _L240;
  kcg_copy_bec_t_TargetLimits_Pkg(&_L239.bec, &_L243);
  _L239.V_est = _L241;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L239.T, &_L238);
  _L239.V_ura = _L241;
  _L239.V_P_MRDT_ebd = _L241;
  _L239.V_P_MRDT_index = _L242;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &_L125,
    &_L118.MRSP_targetList);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&TargetsMRSP, &_L125);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L132, &TargetsMRSP);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &_L106,
    &_L113.MRSP_EBD_curves);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &CurvesMRSP,
    &_L106);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &_L115,
    &CurvesMRSP);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L211, trainData_int);
  /* pow */ for (i6 = 0; i6 < 110; i6++) {
    kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L42[i6], &_L211);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L210, odometry);
  /* pow */ for (i5 = 0; i5 < 110; i5++) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L33[i5], &_L210);
  }
  kcg_copy_t_Brake_t_SDMModelPkg(&_L209, T_b);
  /* pow */ for (i4 = 0; i4 < 110; i4++) {
    kcg_copy_t_Brake_t_SDMModelPkg(&_L40[i4], &_L209);
  }
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L244, trainLocations);
  _L245 = _L244.d_maxSafeFrontEndPos;
  /* pow */ for (i3 = 0; i3 < 110; i3++) {
    _L286[i3] = _L245;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L109, &_L113.GUI_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&GuiCurve, &_L109);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L254, &GuiCurve);
  /* pow */ for (i2 = 0; i2 < 110; i2++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L255[i2], &_L254);
  }
  _L110 = _L113.GUI_curve_enabled;
  GuiCurveEn = _L110;
  _L253 = GuiCurveEn;
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    _L256[i1] = _L253;
  }
  _L36 = kcg_true;
  kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L29, &_L239);
  if (_L36) {
    for (i = 0; i < 110; i++) {
      kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&acc, &_L29);
      /* 2 */
      TargetIterator_TargetLimits_Pkg(
        i,
        &acc,
        &_L132[i],
        &_L115[i],
        &_L42[i],
        &_L33[i],
        &_L40[i],
        _L286[i],
        &_L255[i],
        _L256[i],
        &cond_iterw,
        &_L29);
      _L28 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L28 = 0;
  }
  kcg_copy_Target_real_T_TargetManagement_types(&_L127, &_L118.SvL_LoA_target);
  kcg_copy_Target_real_T_TargetManagement_types(&TargetSvL, &_L127);
  kcg_copy_Target_real_T_TargetManagement_types(&_L130, &TargetSvL);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    &_L108,
    &_L113.SvL_LoA_EBD_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&CurveSvL, &_L108);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L117, &CurveSvL);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L199, trainData_int);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L173, odometry);
  kcg_copy_t_Brake_t_SDMModelPkg(&_L200, T_b);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L251, &GuiCurve);
  _L252 = GuiCurveEn;
  /* 4 */
  TargetIterator_TargetLimits_Pkg(
    _L55,
    &_L29,
    &_L130,
    &_L117,
    &_L199,
    &_L173,
    &_L200,
    _L245,
    &_L251,
    _L252,
    &_L59,
    &_L60);
  _L202 = _L60.V_est;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L268, trainLocations);
  _L269 = _L268.d_est_frontendPos;
  kcg_copy_Target_real_T_TargetManagement_types(&_L271, &TargetEOA);
  _L270 = _L271.distance;
  _L259 = T_driver_SDM_Types_Pkg;
  _L277 = GuiCurveEn;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L276, &GuiCurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L195, &_L60.T);
  /* ck_TargetSelector */ if (ck_every) {
    /* 2 */
    v_SBI1_TargetLimits_Pkg(
      &_L267,
      _L202,
      _L269,
      _L270,
      _L259,
      _L277,
      &_L276,
      &_L195,
      &_7_op_call,
      &op_call);
  }
  noname = _L28;
  *v_est = _L202;
  _8_noname = _L59;
  kcg_copy_Target_real_T_TargetManagement_types(&_L134, &TargetSvL);
  _L65 = _L134.distance;
  kcg_copy_Target_real_T_TargetManagement_types(&_L133, &TargetEOA);
  _L69 = _L133.distance;
  *D_EOA = _L69;
  _L80 = _L60.index;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L266, &CurveSBD);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(SBDcurve, &_L266);
  _L250 = GuiCurveEn;
  *GUICurveEnabled = _L250;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L249, &GuiCurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(GUIcurve, &_L249);
  _L124 = _L118.updatedTargetList;
  _9_noname = _L124;
  kcg_copy_Target_real_T_TargetManagement_types(&_L152, &TargetSvL);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L153, &CurveSvL);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&_L162, &TargetsMRSP);
  _L257 = _L60.V_P_MRDT_index;
  if ((0 <= _L257) & (_L257 < 110)) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L157, &_L162[_L257]);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&_L157, &_L152);
  }
  _L279 = _L157.targetType;
  _L280 = invalid_TargetManagement_types;
  _L281 = _L279 != _L280;
  _L278 = _L60.V_P_MRDT_ebd;
  /* ck_TargetSelector */ if (ck_every) {
    _L264 = _7_op_call;
    _L265 = op_call;
  }
  else {
    _L264 = kcg_false;
    _L265 = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    _L281,
    _L278,
    _L264,
    _L265,
    &_L261,
    &_L262,
    &_L263);
  kcg_copy_Target_real_T_TargetManagement_types(&_L283, &TargetEOA);
  /* 1 */ if (_L261) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L282, &_L157);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&_L282, &_L283);
  }
  _L291 = _L282.targetType;
  _L292 = _L282.distance;
  _L294 = /* 1 */ TransformL_realToL_int_SDM_Types_Pkg(_L292);
  _L293 = _L282.speed;
  _L295 = /* 1 */ TransformV_realToV_int_SDM_Types_Pkg(_L293);
  _L297 = invalid_TargetManagement_types;
  _L296 = _L297 != _L291;
  _L287.targetType = _L291;
  _L287.distance = _L294;
  _L287.speed = _L295;
  _L287.valid = _L296;
  kcg_copy_Target_T_TargetManagement_types(
    MostRestrictiveDisplayedTarget,
    &_L287);
  kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
    &_L156,
    &CurvesMRSP);
  if ((0 <= _L80) & (_L80 < 110)) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L158, &_L156[_L80]);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L158, &_L153);
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(T, &_L195);
  _L201 = _L60.V_ura;
  *V_ura = _L201;
  kcg_copy_bec_t_TargetLimits_Pkg(&_L194, &_L60.bec);
  kcg_copy_bec_t_TargetLimits_Pkg(bec, &_L194);
  _L196 = _L60.SBI2;
  *D_SBI2 = _L196;
  _L203 = _L60.ttype;
  _L205 = invalid_TargetManagement_types;
  _L204 = _L203 != _L205;
  *valid_D_SBI2 = _L204;
  *V_Target = _L293;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    MostRestrictiveEBDCurve,
    &_L158);
  _L246 = _L244.d_est_frontendPos;
  *D_estfront = _L246;
  *D_maxsafefront = _L245;
  *V_P_MRDT = _L263;
  _10_noname = _L262;
  *D_SvL = _L65;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TargetSelector_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

