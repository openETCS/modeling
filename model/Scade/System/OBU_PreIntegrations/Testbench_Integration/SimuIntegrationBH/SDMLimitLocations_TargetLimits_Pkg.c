/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::SDMLimitLocations */
void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::SDMLimitLocations::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveDisplayedTarget */ Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */ kcg_bool *FLOIisSBI1)
{
  /* math::Min::Mi_Output */
  static kcg_real Mi_Output_1;
  /* math::Min::I2 */
  static kcg_real I2_13;
  /* math::Min::I1 */
  static kcg_real I1_14;
  /* math::Min::_L25 */
  static kcg_bool _L25_1;
  /* math::Min::_L24 */
  static kcg_real _L24_1;
  /* math::Min::_L22 */
  static kcg_real _L22_1;
  /* math::Min::_L21 */
  static kcg_real _L21_1;
  /* math::Max::Ma_Output */
  static kcg_real Ma_Output_1;
  /* math::Max::I2 */
  static kcg_real I2_1;
  /* math::Max::I1 */
  static kcg_real I1_1;
  /* math::Max::_L4 */
  static kcg_real _L4_1;
  /* math::Max::_L3 */
  static kcg_bool _L3_1;
  /* math::Max::_L2 */
  static kcg_real _L2_1;
  /* math::Max::_L1 */
  static kcg_real _L1_1;
  /* math::Min::Mi_Output */
  static kcg_int Mi_Output_2;
  /* math::Min::I2 */
  static kcg_int I2_21;
  /* math::Min::I1 */
  static kcg_int I1_22;
  /* math::Min::_L25 */
  static kcg_bool _L25_2;
  /* math::Min::_L24 */
  static kcg_int _L24_2;
  /* math::Min::_L22 */
  static kcg_int _L22_2;
  /* math::Min::_L21 */
  static kcg_int _L21_2;
  /* math::Max::Ma_Output */
  static kcg_int Ma_Output_2;
  /* math::Max::I2 */
  static kcg_int I2_2;
  /* math::Max::I1 */
  static kcg_int I1_2;
  /* math::Max::_L4 */
  static kcg_int _L4_2;
  /* math::Max::_L3 */
  static kcg_bool _L3_2;
  /* math::Max::_L2 */
  static kcg_int _L2_2;
  /* math::Max::_L1 */
  static kcg_int _L1_2;
  static L_internal_real_Type_SDM_Types_Pkg noname;
  static kcg_bool _5_noname;
  static kcg_bool _6_noname;
  static kcg_bool _7_noname;
  static kcg_bool _8_noname;
  /* TargetLimits_Pkg::SDMLimitLocations::V_est */
  static V_internal_real_Type_SDM_Types_Pkg V_est;
  /* TargetLimits_Pkg::SDMLimitLocations::bec */
  static bec_t_TargetLimits_Pkg bec;
  /* TargetLimits_Pkg::SDMLimitLocations::V_target */
  static V_internal_real_Type_SDM_Types_Pkg V_target;
  /* TargetLimits_Pkg::SDMLimitLocations::SBDcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types SBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::EBDcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types EBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::T */
  static T_trac_t_TargetLimits_Pkg T;
  /* TargetLimits_Pkg::SDMLimitLocations::V_release */
  static V_internal_real_Type_SDM_Types_Pkg V_release;
  /* TargetLimits_Pkg::SDMLimitLocations::Dpi */
  static L_internal_real_Type_SDM_Types_Pkg Dpi;
  /* TargetLimits_Pkg::SDMLimitLocations::D_EOA */
  static L_internal_real_Type_SDM_Types_Pkg D_EOA;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SvL */
  static L_internal_real_Type_SDM_Types_Pkg D_SvL;
  /* TargetLimits_Pkg::SDMLimitLocations::D_est */
  static L_internal_real_Type_SDM_Types_Pkg D_est;
  /* TargetLimits_Pkg::SDMLimitLocations::D_maxsafefront */
  static L_internal_real_Type_SDM_Types_Pkg D_maxsafefront;
  /* TargetLimits_Pkg::SDMLimitLocations::GUICurveEnabled */
  static kcg_bool GUICurveEnabled;
  /* TargetLimits_Pkg::SDMLimitLocations::GUIcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types GUIcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_RSM1_start */
  static kcg_bool valid_RSM1_start;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_RSM2_start */
  static kcg_bool valid_RSM2_start;
  /* TargetLimits_Pkg::SDMLimitLocations::V_ura */
  static V_internal_real_Type_SDM_Types_Pkg V_ura;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SBI2 */
  static L_internal_real_Type_SDM_Types_Pkg D_SBI2;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_D_SBI2 */
  static kcg_bool valid_D_SBI2;
  /* TargetLimits_Pkg::SDMLimitLocations::V_P_MRDT */
  static V_internal_real_Type_SDM_Types_Pkg V_P_MRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::V_MRSP */
  static V_internal_real_Type_SDM_Types_Pkg V_MRSP;
  /* TargetLimits_Pkg::SDMLimitLocations::V_SBI_MRDT */
  static V_internal_real_Type_SDM_Types_Pkg V_SBI_MRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::MRDT */
  static Target_T_TargetManagement_types MRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1 */
  static SDM_Locations_T_SDM_Types_Pkg _L1;
  /* TargetLimits_Pkg::SDMLimitLocations::_L24 */
  static L_internal_real_Type_SDM_Types_Pkg _L24;
  /* TargetLimits_Pkg::SDMLimitLocations::_L23 */
  static L_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::SDMLimitLocations::_L22 */
  static L_internal_real_Type_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::SDMLimitLocations::_L21 */
  static L_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::SDMLimitLocations::_L25 */
  static V_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::SDMLimitLocations::_L26 */
  static V_internal_real_Type_SDM_Types_Pkg _L26;
  /* TargetLimits_Pkg::SDMLimitLocations::_L35 */
  static bec_t_TargetLimits_Pkg _L35;
  /* TargetLimits_Pkg::SDMLimitLocations::_L36 */
  static V_internal_real_Type_SDM_Types_Pkg _L36;
  /* TargetLimits_Pkg::SDMLimitLocations::_L41 */
  static V_internal_real_Type_SDM_Types_Pkg _L41;
  /* TargetLimits_Pkg::SDMLimitLocations::_L44 */
  static V_internal_real_Type_SDM_Types_Pkg _L44;
  /* TargetLimits_Pkg::SDMLimitLocations::_L45 */
  static V_internal_real_Type_SDM_Types_Pkg _L45;
  /* TargetLimits_Pkg::SDMLimitLocations::_L51 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L51;
  /* TargetLimits_Pkg::SDMLimitLocations::_L52 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L52;
  /* TargetLimits_Pkg::SDMLimitLocations::_L53 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L53;
  /* TargetLimits_Pkg::SDMLimitLocations::_L57 */
  static T_trac_t_TargetLimits_Pkg _L57;
  /* TargetLimits_Pkg::SDMLimitLocations::_L69 */
  static kcg_bool _L69;
  /* TargetLimits_Pkg::SDMLimitLocations::_L70 */
  static V_internal_real_Type_SDM_Types_Pkg _L70;
  /* TargetLimits_Pkg::SDMLimitLocations::_L88 */
  static L_internal_real_Type_SDM_Types_Pkg _L88;
  /* TargetLimits_Pkg::SDMLimitLocations::_L87 */
  static L_internal_real_Type_SDM_Types_Pkg _L87;
  /* TargetLimits_Pkg::SDMLimitLocations::_L86 */
  static L_internal_real_Type_SDM_Types_Pkg _L86;
  /* TargetLimits_Pkg::SDMLimitLocations::_L96 */
  static V_internal_real_Type_SDM_Types_Pkg _L96;
  /* TargetLimits_Pkg::SDMLimitLocations::_L99 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L99;
  /* TargetLimits_Pkg::SDMLimitLocations::_L100 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L100;
  /* TargetLimits_Pkg::SDMLimitLocations::_L132 */
  static MRSP_internal_T_TargetManagement_types _L132;
  /* TargetLimits_Pkg::SDMLimitLocations::_L191 */
  static kcg_bool _L191;
  /* TargetLimits_Pkg::SDMLimitLocations::_L189 */
  static L_internal_real_Type_SDM_Types_Pkg _L189;
  /* TargetLimits_Pkg::SDMLimitLocations::_L200 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L200;
  /* TargetLimits_Pkg::SDMLimitLocations::_L205 */
  static T_trac_t_TargetLimits_Pkg _L205;
  /* TargetLimits_Pkg::SDMLimitLocations::_L341 */
  static L_internal_real_Type_SDM_Types_Pkg _L341;
  /* TargetLimits_Pkg::SDMLimitLocations::_L346 */
  static V_internal_real_Type_SDM_Types_Pkg _L346;
  /* TargetLimits_Pkg::SDMLimitLocations::_L349 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L349;
  /* TargetLimits_Pkg::SDMLimitLocations::_L350 */
  static T_trac_t_TargetLimits_Pkg _L350;
  /* TargetLimits_Pkg::SDMLimitLocations::_L208 */
  static L_internal_real_Type_SDM_Types_Pkg _L208;
  /* TargetLimits_Pkg::SDMLimitLocations::_L401 */
  static L_internal_real_Type_SDM_Types_Pkg _L401;
  /* TargetLimits_Pkg::SDMLimitLocations::_L400 */
  static L_internal_real_Type_SDM_Types_Pkg _L400;
  /* TargetLimits_Pkg::SDMLimitLocations::_L448 */
  static kcg_real _L448;
  /* TargetLimits_Pkg::SDMLimitLocations::_L447 */
  static T_trac_t_TargetLimits_Pkg _L447;
  /* TargetLimits_Pkg::SDMLimitLocations::_L451 */
  static kcg_real _L451;
  /* TargetLimits_Pkg::SDMLimitLocations::_L489 */
  static V_internal_real_Type_SDM_Types_Pkg _L489;
  /* TargetLimits_Pkg::SDMLimitLocations::_L494 */
  static L_internal_real_Type_SDM_Types_Pkg _L494;
  /* TargetLimits_Pkg::SDMLimitLocations::_L495 */
  static L_internal_real_Type_SDM_Types_Pkg _L495;
  /* TargetLimits_Pkg::SDMLimitLocations::_L496 */
  static L_internal_real_Type_SDM_Types_Pkg _L496;
  /* TargetLimits_Pkg::SDMLimitLocations::_L497 */
  static L_internal_real_Type_SDM_Types_Pkg _L497;
  /* TargetLimits_Pkg::SDMLimitLocations::_L498 */
  static L_internal_real_Type_SDM_Types_Pkg _L498;
  /* TargetLimits_Pkg::SDMLimitLocations::_L499 */
  static L_internal_real_Type_SDM_Types_Pkg _L499;
  /* TargetLimits_Pkg::SDMLimitLocations::_L502 */
  static V_internal_real_Type_SDM_Types_Pkg _L502;
  /* TargetLimits_Pkg::SDMLimitLocations::_L508 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L508;
  /* TargetLimits_Pkg::SDMLimitLocations::_L509 */
  static kcg_bool _L509;
  /* TargetLimits_Pkg::SDMLimitLocations::_L594 */
  static kcg_bool _L594;
  /* TargetLimits_Pkg::SDMLimitLocations::_L593 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L593;
  /* TargetLimits_Pkg::SDMLimitLocations::_L603 */
  static kcg_bool _L603;
  /* TargetLimits_Pkg::SDMLimitLocations::_L604 */
  static kcg_bool _L604;
  /* TargetLimits_Pkg::SDMLimitLocations::_L605 */
  static kcg_bool _L605;
  /* TargetLimits_Pkg::SDMLimitLocations::_L609 */
  static kcg_bool _L609;
  /* TargetLimits_Pkg::SDMLimitLocations::_L641 */
  static kcg_bool _L641;
  /* TargetLimits_Pkg::SDMLimitLocations::_L642 */
  static kcg_bool _L642;
  /* TargetLimits_Pkg::SDMLimitLocations::_L655 */
  static V_internal_real_Type_SDM_Types_Pkg _L655;
  /* TargetLimits_Pkg::SDMLimitLocations::_L672 */
  static kcg_bool _L672;
  /* TargetLimits_Pkg::SDMLimitLocations::_L671 */
  static V_internal_real_Type_SDM_Types_Pkg _L671;
  /* TargetLimits_Pkg::SDMLimitLocations::_L674 */
  static V_internal_real_Type_SDM_Types_Pkg _L674;
  /* TargetLimits_Pkg::SDMLimitLocations::_L675 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L675;
  /* TargetLimits_Pkg::SDMLimitLocations::_L694 */
  static L_internal_real_Type_SDM_Types_Pkg _L694;
  /* TargetLimits_Pkg::SDMLimitLocations::_L701 */
  static V_internal_real_Type_SDM_Types_Pkg _L701;
  /* TargetLimits_Pkg::SDMLimitLocations::_L702 */
  static MA_section_real_T_TargetManagement_types _L702;
  /* TargetLimits_Pkg::SDMLimitLocations::_L812 */
  static L_internal_real_Type_SDM_Types_Pkg _L812;
  /* TargetLimits_Pkg::SDMLimitLocations::_L813 */
  static kcg_bool _L813;
  /* TargetLimits_Pkg::SDMLimitLocations::_L814 */
  static L_internal_real_Type_SDM_Types_Pkg _L814;
  /* TargetLimits_Pkg::SDMLimitLocations::_L821 */
  static T_trac_t_TargetLimits_Pkg _L821;
  /* TargetLimits_Pkg::SDMLimitLocations::_L822 */
  static T_internal_real_Type_SDM_Types_Pkg _L822;
  /* TargetLimits_Pkg::SDMLimitLocations::_L823 */
  static T_trac_t_TargetLimits_Pkg _L823;
  /* TargetLimits_Pkg::SDMLimitLocations::_L827 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L827;
  /* TargetLimits_Pkg::SDMLimitLocations::_L90 */
  static T_trac_t_TargetLimits_Pkg _L90;
  /* TargetLimits_Pkg::SDMLimitLocations::_L833 */
  static T_trac_t_TargetLimits_Pkg _L833;
  /* TargetLimits_Pkg::SDMLimitLocations::_L834 */
  static TrainLocations_real_T_SDM_Types_Pkg _L834;
  /* TargetLimits_Pkg::SDMLimitLocations::_L879 */
  static TargetCollection_T_TargetManagement_types _L879;
  /* TargetLimits_Pkg::SDMLimitLocations::_L878 */
  static t_Brake_t_SDMModelPkg _L878;
  /* TargetLimits_Pkg::SDMLimitLocations::_L877 */
  static P3_NationalValues_T_Packet_Types_Pkg _L877;
  /* TargetLimits_Pkg::SDMLimitLocations::_L876 */
  static odometry_T_Obu_BasicTypes_Pkg _L876;
  /* TargetLimits_Pkg::SDMLimitLocations::_L863 */
  static Target_T_TargetManagement_types _L863;
  /* TargetLimits_Pkg::SDMLimitLocations::_L864 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L864;
  /* TargetLimits_Pkg::SDMLimitLocations::_L865 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L865;
  /* TargetLimits_Pkg::SDMLimitLocations::_L866 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L866;
  /* TargetLimits_Pkg::SDMLimitLocations::_L867 */
  static kcg_bool _L867;
  /* TargetLimits_Pkg::SDMLimitLocations::_L868 */
  static V_internal_real_Type_SDM_Types_Pkg _L868;
  /* TargetLimits_Pkg::SDMLimitLocations::_L869 */
  static L_internal_real_Type_SDM_Types_Pkg _L869;
  /* TargetLimits_Pkg::SDMLimitLocations::_L870 */
  static L_internal_real_Type_SDM_Types_Pkg _L870;
  /* TargetLimits_Pkg::SDMLimitLocations::_L871 */
  static V_internal_real_Type_SDM_Types_Pkg _L871;
  /* TargetLimits_Pkg::SDMLimitLocations::_L873 */
  static T_trac_t_TargetLimits_Pkg _L873;
  /* TargetLimits_Pkg::SDMLimitLocations::_L874 */
  static V_internal_real_Type_SDM_Types_Pkg _L874;
  /* TargetLimits_Pkg::SDMLimitLocations::_L875 */
  static bec_t_TargetLimits_Pkg _L875;
  /* TargetLimits_Pkg::SDMLimitLocations::_L862 */
  static CurveCollection_T_CalcBrakingCurves_types _L862;
  /* TargetLimits_Pkg::SDMLimitLocations::_L881 */
  static L_internal_real_Type_SDM_Types_Pkg _L881;
  /* TargetLimits_Pkg::SDMLimitLocations::_L882 */
  static kcg_bool _L882;
  /* TargetLimits_Pkg::SDMLimitLocations::_L889 */
  static trainData_internal_t_SDM_Types_Pkg _L889;
  /* TargetLimits_Pkg::SDMLimitLocations::_L893 */
  static kcg_bool _L893;
  /* TargetLimits_Pkg::SDMLimitLocations::_L894 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L894;
  /* TargetLimits_Pkg::SDMLimitLocations::_L897 */
  static kcg_real _L897;
  /* TargetLimits_Pkg::SDMLimitLocations::_L898 */
  static L_internal_real_Type_SDM_Types_Pkg _L898;
  /* TargetLimits_Pkg::SDMLimitLocations::_L899 */
  static L_internal_real_Type_SDM_Types_Pkg _L899;
  /* TargetLimits_Pkg::SDMLimitLocations::_L900 */
  static TrainLocations_real_T_SDM_Types_Pkg _L900;
  /* TargetLimits_Pkg::SDMLimitLocations::_L901 */
  static kcg_bool _L901;
  /* TargetLimits_Pkg::SDMLimitLocations::_L902 */
  static V_internal_real_Type_SDM_Types_Pkg _L902;
  /* TargetLimits_Pkg::SDMLimitLocations::_L903 */
  static V_internal_real_Type_SDM_Types_Pkg _L903;
  /* TargetLimits_Pkg::SDMLimitLocations::_L914 */
  static V_internal_real_Type_SDM_Types_Pkg _L914;
  /* TargetLimits_Pkg::SDMLimitLocations::_L911 */
  static V_internal_real_Type_SDM_Types_Pkg _L911;
  /* TargetLimits_Pkg::SDMLimitLocations::_L910 */
  static V_internal_real_Type_SDM_Types_Pkg _L910;
  /* TargetLimits_Pkg::SDMLimitLocations::_L909 */
  static V_internal_real_Type_SDM_Types_Pkg _L909;
  /* TargetLimits_Pkg::SDMLimitLocations::_L908 */
  static V_internal_real_Type_SDM_Types_Pkg _L908;
  /* TargetLimits_Pkg::SDMLimitLocations::_L907 */
  static V_internal_real_Type_SDM_Types_Pkg _L907;
  /* TargetLimits_Pkg::SDMLimitLocations::_L904 */
  static Speeds_T_SDM_Types_Pkg _L904;
  /* TargetLimits_Pkg::SDMLimitLocations::_L917 */
  static V_internal_real_Type_SDM_Types_Pkg _L917;
  /* TargetLimits_Pkg::SDMLimitLocations::_L918 */
  static V_internal_real_Type_SDM_Types_Pkg _L918;
  /* TargetLimits_Pkg::SDMLimitLocations::_L919 */
  static V_internal_real_Type_SDM_Types_Pkg _L919;
  /* TargetLimits_Pkg::SDMLimitLocations::_L920 */
  static V_internal_real_Type_SDM_Types_Pkg _L920;
  /* TargetLimits_Pkg::SDMLimitLocations::_L922 */
  static V_internal_real_Type_SDM_Types_Pkg _L922;
  /* TargetLimits_Pkg::SDMLimitLocations::_L923 */
  static V_internal_real_Type_SDM_Types_Pkg _L923;
  /* TargetLimits_Pkg::SDMLimitLocations::_L924 */
  static V_internal_real_Type_SDM_Types_Pkg _L924;
  /* TargetLimits_Pkg::SDMLimitLocations::_L925 */
  static V_internal_real_Type_SDM_Types_Pkg _L925;
  /* TargetLimits_Pkg::SDMLimitLocations::_L934 */
  static kcg_real _L934;
  /* TargetLimits_Pkg::SDMLimitLocations::_L933 */
  static kcg_real _L933;
  /* TargetLimits_Pkg::SDMLimitLocations::_L931 */
  static kcg_real _L931;
  /* TargetLimits_Pkg::SDMLimitLocations::_L929 */
  static V_internal_real_Type_SDM_Types_Pkg _L929;
  /* TargetLimits_Pkg::SDMLimitLocations::_L928 */
  static kcg_real _L928;
  /* TargetLimits_Pkg::SDMLimitLocations::_L927 */
  static kcg_real _L927;
  /* TargetLimits_Pkg::SDMLimitLocations::_L926 */
  static V_internal_real_Type_SDM_Types_Pkg _L926;
  /* TargetLimits_Pkg::SDMLimitLocations::_L935 */
  static V_internal_real_Type_SDM_Types_Pkg _L935;
  /* TargetLimits_Pkg::SDMLimitLocations::_L936 */
  static V_internal_real_Type_SDM_Types_Pkg _L936;
  /* TargetLimits_Pkg::SDMLimitLocations::_L937 */
  static V_internal_real_Type_SDM_Types_Pkg _L937;
  /* TargetLimits_Pkg::SDMLimitLocations::_L938 */
  static V_internal_real_Type_SDM_Types_Pkg _L938;
  /* TargetLimits_Pkg::SDMLimitLocations::_L939 */
  static V_internal_real_Type_SDM_Types_Pkg _L939;
  /* TargetLimits_Pkg::SDMLimitLocations::_L981 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L981;
  /* TargetLimits_Pkg::SDMLimitLocations::_L982 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L982;
  /* TargetLimits_Pkg::SDMLimitLocations::_L983 */
  static L_internal_real_Type_SDM_Types_Pkg _L983;
  /* TargetLimits_Pkg::SDMLimitLocations::_L985 */
  static L_internal_real_Type_SDM_Types_Pkg _L985;
  /* TargetLimits_Pkg::SDMLimitLocations::_L984 */
  static L_internal_real_Type_SDM_Types_Pkg _L984;
  /* TargetLimits_Pkg::SDMLimitLocations::_L987 */
  static L_internal_real_Type_SDM_Types_Pkg _L987;
  /* TargetLimits_Pkg::SDMLimitLocations::_L986 */
  static L_internal_real_Type_SDM_Types_Pkg _L986;
  /* TargetLimits_Pkg::SDMLimitLocations::_L992 */
  static kcg_bool _L992;
  /* TargetLimits_Pkg::SDMLimitLocations::_L991 */
  static kcg_bool _L991;
  /* TargetLimits_Pkg::SDMLimitLocations::_L990 */
  static TargetType_T_TargetManagement_types _L990;
  /* TargetLimits_Pkg::SDMLimitLocations::_L989 */
  static TargetType_T_TargetManagement_types _L989;
  /* TargetLimits_Pkg::SDMLimitLocations::_L988 */
  static kcg_bool _L988;
  /* TargetLimits_Pkg::SDMLimitLocations::_L994 */
  static TargetType_T_TargetManagement_types _L994;
  /* TargetLimits_Pkg::SDMLimitLocations::_L344 */
  static L_internal_real_Type_SDM_Types_Pkg _L344;
  /* TargetLimits_Pkg::SDMLimitLocations::_L343 */
  static kcg_bool _L343;
  /* TargetLimits_Pkg::SDMLimitLocations::_L993 */
  static Target_T_TargetManagement_types _L993;
  /* TargetLimits_Pkg::SDMLimitLocations::_L995 */
  static V_internal_real_Type_SDM_Types_Pkg _L995;
  /* TargetLimits_Pkg::SDMLimitLocations::_L996 */
  static MRSP_internal_T_TargetManagement_types _L996;
  /* TargetLimits_Pkg::SDMLimitLocations::_L997 */
  static L_internal_real_Type_SDM_Types_Pkg _L997;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1014 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L1014;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1013 */
  static kcg_bool _L1013;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1015 */
  static odometry_T_Obu_BasicTypes_Pkg _L1015;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1016 */
  static odoMotionState_T_Obu_BasicTypes_Pkg _L1016;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1017 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1017;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1020 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1020;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1021 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1021;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1022 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1022;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1023 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1023;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1024 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1024;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1025 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1025;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1026 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1026;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1027 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1027;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1029 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1029;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1030 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1030;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1031 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1031;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1032 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1032;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1033 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1033;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1035 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1035;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1036 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1036;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1037 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1037;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1038 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1038;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1039 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1039;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1040 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1040;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1041 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1041;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1042 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1042;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1043 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1043;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1044 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1044;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1045 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1045;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1046 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1046;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1047 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1047;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1048 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1048;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1049 */
  static trainData_internal_t_SDM_Types_Pkg _L1049;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1050 */
  static L_internal_real_Type_SDM_Types_Pkg _L1050;
  
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L132, MRSP_Profile);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L879, targetCollection);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(&_L862, curveCollection);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L876, odometry);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L889, trainData_int);
  kcg_copy_t_Brake_t_SDMModelPkg(&_L878, T_b);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L877, NationalValues);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L900, trainLocations);
  /* 5 */
  TargetSelector_TargetLimits_Pkg(
    &_L879,
    &_L862,
    &_L876,
    &_L889,
    &_L878,
    &_L877,
    &_L900,
    &_L863,
    &_L864,
    &_L865,
    &_L866,
    &_L867,
    &_L868,
    &_L902,
    &_L869,
    &_L870,
    &_L871,
    &_L873,
    &_L874,
    &_L875,
    &_L881,
    &_L882,
    &_L899,
    &_L898);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&EBDcurve, &_L864);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L200, &EBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&SBDcurve, &_L865);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L827, &SBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&GUIcurve, &_L866);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L508, &GUIcurve);
  GUICurveEnabled = _L867;
  _L509 = GUICurveEnabled;
  _L990 = EoA_TargetManagement_types;
  kcg_copy_Target_T_TargetManagement_types(&MRDT, &_L863);
  kcg_copy_Target_T_TargetManagement_types(&_L993, &MRDT);
  _L994 = _L993.targetType;
  _L992 = _L990 == _L994;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&T, &_L873);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L205, &T);
  /* 1 */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    &_L132,
    &_L200,
    &_L827,
    &_L508,
    _L509,
    _L992,
    &_L205,
    &_L189,
    &_L1050,
    &_L191);
  Dpi = _L189;
  _L208 = Dpi;
  _L1033 = /* 1 */ TransformL_realToL_int_SDM_Types_Pkg(_L208);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L675, &EBDcurve);
  V_target = _L868;
  _L674 = V_target;
  D_EOA = _L869;
  _L694 = D_EOA;
  kcg_copy_MA_section_real_T_TargetManagement_types(&_L702, MA);
  V_ura = _L874;
  _L701 = V_ura;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L834, trainLocations);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L1049, trainData_int);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L833, &T);
  /* 1 */
  v_release_TargetLimits_Pkg(
    &_L675,
    _L674,
    _L694,
    &_L702,
    _L701,
    &_L834,
    &_L1049,
    &_L833,
    &_L671,
    &_L672);
  V_release = _L671;
  _L96 = V_release;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L99, &EBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L100, &SBDcurve);
  D_maxsafefront = _L898;
  _L495 = D_maxsafefront;
  D_est = _L899;
  _L494 = D_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L90, &T);
  /* 1 */
  d_RSM_start_TargetLimits_Pkg(
    _L96,
    &_L99,
    &_L100,
    _L495,
    _L494,
    &_L90,
    &_L88,
    &_L87,
    &_L86,
    &_L604,
    &_L605);
  _L1035 = /* 3 */ TransformL_realToL_int_SDM_Types_Pkg(_L87);
  _L1042 = /* 10 */ TransformL_realToL_int_SDM_Types_Pkg(_L86);
  V_est = _L871;
  _L36 = V_est;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L52, &SBDcurve);
  valid_D_SBI2 = _L882;
  _L813 = valid_D_SBI2;
  D_SBI2 = _L881;
  _L812 = D_SBI2;
  _L496 = D_est;
  _L497 = D_maxsafefront;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L821, &T);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L593, &GUIcurve);
  _L594 = GUICurveEnabled;
  /* 2 */
  d_limits_TargetLimits_Pkg(
    _L36,
    &_L52,
    _L813,
    _L812,
    _L496,
    _L497,
    &_L821,
    &_L593,
    _L594,
    &_L24,
    &_L23,
    &_L22,
    &_L21,
    &_L69);
  _L1036 = /* 4 */ TransformL_realToL_int_SDM_Types_Pkg(_L24);
  _L1043 = /* 11 */ TransformL_realToL_int_SDM_Types_Pkg(_L1050);
  _L1037 = /* 5 */ TransformL_realToL_int_SDM_Types_Pkg(_L23);
  _L1044 = /* 12 */ TransformL_realToL_int_SDM_Types_Pkg(_L22);
  _L1038 = /* 6 */ TransformL_realToL_int_SDM_Types_Pkg(_L21);
  _L814 = D_SBI2;
  _L502 = V_est;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L447, &T);
  _L822 = _L447.bs2;
  _L448 = _L502 * _L822;
  _L451 = _L814 + _L448;
  _L1045 = /* 13 */ TransformL_realToL_int_SDM_Types_Pkg(_L451);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L51, &SBDcurve);
  _L41 = V_est;
  _L498 = D_est;
  _L341 = D_EOA;
  _L897 = 0.0;
  _L901 = kcg_false;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L894, &GUIcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L823, &T);
  /* 1 */
  v_SBI1_TargetLimits_Pkg(
    &_L51,
    _L41,
    _L498,
    _L341,
    _L897,
    _L901,
    &_L894,
    &_L823,
    &_L642,
    &_L25);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L53, &EBDcurve);
  _L44 = V_est;
  _L45 = V_target;
  kcg_copy_bec_t_TargetLimits_Pkg(&bec, &_L875);
  kcg_copy_bec_t_TargetLimits_Pkg(&_L35, &bec);
  _L499 = D_maxsafefront;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L57, &T);
  /* 1 */
  v_SBI2_TargetLimits_Pkg(
    &_L53,
    _L44,
    _L45,
    &_L35,
    _L499,
    _L897,
    _L901,
    &_L894,
    &_L57,
    &_L641,
    &_L26);
  /* 1 */ if (_L69) {
    _L70 = _L25;
  }
  else {
    _L70 = _L26;
  }
  _L1039 = /* 7 */ TransformL_realToL_int_SDM_Types_Pkg(_L70);
  _L1046 = /* 14 */ TransformL_realToL_int_SDM_Types_Pkg(_L25);
  _L1040 = /* 8 */ TransformL_realToL_int_SDM_Types_Pkg(_L26);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L349, &EBDcurve);
  _L346 = V_target;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L350, &T);
  /* 1 */ d_P_target_TargetLimits_Pkg(&_L349, _L346, &_L350, &_L343, &_L344);
  _L987 = D_maxsafefront;
  _L986 = D_est;
  D_SvL = _L870;
  _L984 = D_SvL;
  _L985 = D_EOA;
  _L989 = SvL_TargetManagement_types;
  _L991 = _L994 == _L989;
  _L988 = _L992 | _L991;
  _L983 = /* 1 */
    TargetDistance_TargetLimits_Pkg(_L344, _L987, _L986, _L984, _L985, _L988);
  _L1047 = /* 15 */ TransformL_realToL_int_SDM_Types_Pkg(_L983);
  _L400 = D_EOA;
  _L1041 = /* 9 */ TransformL_realToL_int_SDM_Types_Pkg(_L400);
  _L401 = D_SvL;
  _L1048 = /* 16 */ TransformL_realToL_int_SDM_Types_Pkg(_L401);
  _L893 = _L69 & _L191;
  valid_RSM2_start = _L604;
  _L609 = valid_RSM2_start;
  valid_RSM1_start = _L605;
  _L603 = valid_RSM1_start;
  _L1.SBD_preindication_location = _L1033;
  _L1.EBD_preindication_location = _L1033;
  _L1.EBD_RSM_start_location = _L1035;
  _L1.SBD_RSM_start_location = _L1042;
  _L1.d_I_of_V_est = _L1036;
  _L1.d_I_of_V_MRSP = _L1043;
  _L1.d_P_of_V_est = _L1037;
  _L1.d_W_of_V_est = _L1044;
  _L1.d_FLOI_of_V_est = _L1038;
  _L1.d_EBI_of_V_est = _L1045;
  _L1.FLOI_of_V_est = _L1039;
  _L1.SBI1_of_V_est = _L1046;
  _L1.SBI2_of_V_est = _L1040;
  _L1.d_target = _L1047;
  _L1.d_eoa = _L1041;
  _L1.d_svl = _L1048;
  _L1.Preindication_EBD_location_valid = _L191;
  _L1.Preindication_SBD_location_valid = _L893;
  _L1.RSM_start_location_EBD_valid = _L609;
  _L1.RSM_start_location_SBD_valid = _L603;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(locations, &_L1);
  noname = _L88;
  _5_noname = _L343;
  _L489 = V_target;
  *FLOIisSBI1 = _L69;
  _6_noname = _L641;
  _7_noname = _L642;
  _L917 = V_est;
  _L1017 = /* 1 */ TransformV_realToV_odo_SDM_Types_Pkg(_L917);
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L996, MRSP_Profile);
  _L997 = D_maxsafefront;
  _L995 = /* 1 */ getMRSFromMRSP_SDM_Types_Pkg(&_L996, _L997);
  V_MRSP = _L995;
  _L922 = V_MRSP;
  _L1032 = /* 16 */ TransformV_realToV_odo_SDM_Types_Pkg(_L922);
  _L655 = V_release;
  _L1029 = /* 13 */ TransformV_realToV_odo_SDM_Types_Pkg(_L655);
  _L1031 = /* 15 */ TransformV_realToV_odo_SDM_Types_Pkg(_L489);
  V_P_MRDT = _L902;
  _L903 = V_P_MRDT;
  _L1030 = /* 14 */ TransformV_realToV_odo_SDM_Types_Pkg(_L903);
  I1_22 = _L1032;
  _L21_2 = I1_22;
  I1_2 = _L1031;
  _L1_2 = I1_2;
  I2_2 = _L1030;
  _L2_2 = I2_2;
  _L3_2 = _L1_2 >= _L2_2;
  /* 2 */ if (_L3_2) {
    _L4_2 = _L1_2;
  }
  else {
    _L4_2 = _L2_2;
  }
  Ma_Output_2 = _L4_2;
  _L982 = Ma_Output_2;
  I2_21 = _L982;
  _L22_2 = I2_21;
  _L25_2 = _L21_2 <= _L22_2;
  /* 1 */ if (_L25_2) {
    _L24_2 = _L21_2;
  }
  else {
    _L24_2 = _L22_2;
  }
  Mi_Output_2 = _L24_2;
  _L981 = Mi_Output_2;
  V_SBI_MRDT = _L70;
  _L938 = V_SBI_MRDT;
  _L1027 = /* 11 */ TransformV_realToV_odo_SDM_Types_Pkg(_L938);
  _L935 = V_target;
  _L929 = /* 3 */ dV_sbi_for_V_SDM_Types_Pkg(_L935);
  _L928 = _L935 + _L929;
  _L939 = V_release;
  /* 2 */ if (_L988) {
    _L927 = _L928;
  }
  else {
    _L927 = _L939;
  }
  I1_1 = _L927;
  _L1_1 = I1_1;
  _L937 = V_SBI_MRDT;
  I2_1 = _L937;
  _L2_1 = I2_1;
  _L3_1 = _L1_1 >= _L2_1;
  /* 2 */ if (_L3_1) {
    _L4_1 = _L1_1;
  }
  else {
    _L4_1 = _L2_1;
  }
  Ma_Output_1 = _L4_1;
  _L934 = Ma_Output_1;
  I1_14 = _L934;
  _L21_1 = I1_14;
  _L936 = V_MRSP;
  _L926 = /* 4 */ dV_sbi_for_V_SDM_Types_Pkg(_L936);
  _L931 = _L936 + _L926;
  I2_13 = _L931;
  _L22_1 = I2_13;
  _L25_1 = _L21_1 <= _L22_1;
  /* 1 */ if (_L25_1) {
    _L24_1 = _L21_1;
  }
  else {
    _L24_1 = _L22_1;
  }
  Mi_Output_1 = _L24_1;
  _L933 = Mi_Output_1;
  _L1026 = /* 10 */ TransformV_realToV_odo_SDM_Types_Pkg(_L933);
  _L923 = V_MRSP;
  _L907 = /* 2 */ dV_warning_for_V_SDM_Types_Pkg(_L923);
  _L1025 = /* 9 */ TransformV_realToV_odo_SDM_Types_Pkg(_L907);
  _L920 = V_target;
  _L908 = /* 1 */ dV_warning_for_V_SDM_Types_Pkg(_L920);
  _L1024 = /* 8 */ TransformV_realToV_odo_SDM_Types_Pkg(_L908);
  _L924 = V_MRSP;
  _L909 = /* 2 */ dV_sbi_for_V_SDM_Types_Pkg(_L924);
  _L1023 = /* 7 */ TransformV_realToV_odo_SDM_Types_Pkg(_L909);
  _L919 = V_target;
  _L910 = /* 1 */ dV_sbi_for_V_SDM_Types_Pkg(_L919);
  _L1022 = /* 6 */ TransformV_realToV_odo_SDM_Types_Pkg(_L910);
  _L925 = V_MRSP;
  _L911 = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg(_L925);
  _L1021 = /* 5 */ TransformV_realToV_odo_SDM_Types_Pkg(_L911);
  _L918 = V_target;
  _L914 = /* 1 */ dV_ebi_for_V_SDM_Types_Pkg(_L918);
  _L1020 = /* 4 */ TransformV_realToV_odo_SDM_Types_Pkg(_L914);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L1015, odometry);
  _L1016 = _L1015.motionState;
  _L1014 = noMotion_Obu_BasicTypes_Pkg;
  _L1013 = _L1016 == _L1014;
  _L904.V_est = _L1017;
  _L904.V_MRSP = _L1032;
  _L904.V_release = _L1029;
  _L904.V_target = _L1031;
  _L904.v_p_mrdt = _L1030;
  _L904.v_p_dmi = _L981;
  _L904.v_sbi_mrdt = _L1027;
  _L904.v_FLOI_dmi = _L1026;
  _L904.dV_warning_V_MRSP = _L1025;
  _L904.dV_warning_V_target = _L1024;
  _L904.dV_sbi_V_MRSP = _L1023;
  _L904.dV_sbi_V_target = _L1022;
  _L904.dV_ebi_V_MRSP = _L1021;
  _L904.dV_ebi_V_target = _L1020;
  _L904.OdoStandStill = _L1013;
  kcg_copy_Speeds_T_SDM_Types_Pkg(speeds, &_L904);
  _8_noname = _L672;
  kcg_copy_Target_T_TargetManagement_types(
    MostRestrictiveDisplayedTarget,
    &_L863);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDMLimitLocations_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

