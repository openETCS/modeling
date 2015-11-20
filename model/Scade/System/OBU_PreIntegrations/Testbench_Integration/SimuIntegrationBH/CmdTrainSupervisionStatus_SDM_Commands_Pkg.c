/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CmdTrainSupervisionStatus_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->status = Normal_Supervision_SDM_Types_Pkg;
  outC->modeInterplay_reset_nxt = kcg_true;
  outC->modeInterplay_reset_act = kcg_true;
  outC->modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
  outC->RSM_state_nxt_modeInterplay_RSM = SSM_st_Init_modeInterplay_RSM_RSM;
  outC->RSM_reset_act_modeInterplay_RSM = kcg_true;
  outC->RSM_reset_nxt_modeInterplay_RSM = kcg_true;
  outC->SM4_state_nxt_modeInterplay_TSM = SSM_st_init_modeInterplay_TSM_SM4;
  outC->SM4_reset_act_modeInterplay_TSM = kcg_true;
  outC->SM4_reset_nxt_modeInterplay_TSM = kcg_true;
  outC->CSM_state_nxt_modeInterplay_CSM = SSM_st_Init_modeInterplay_CSM_CSM;
  outC->CSM_reset_act_modeInterplay_CSM = kcg_true;
  outC->CSM_reset_nxt_modeInterplay_CSM = kcg_true;
  outC->ebCmd = kcg_true;
  outC->triggeredTCO = kcg_true;
  outC->revokedTCO = kcg_true;
  outC->triggeredEB = kcg_true;
  outC->revokedEB = kcg_true;
  outC->triggeredSB = kcg_true;
  outC->revokedSB = kcg_true;
  outC->triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmType = CSM_SDM_Types_Pkg;
  outC->supVisStatus = Normal_Supervision_SDM_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::CmdTrainSupervisionStatus */
void CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::SupervisedTargetsListUpdated */ kcg_bool SupervisedTargetsListUpdated,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::mrdt */ Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay _26_modeInterplay_fired;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool _25_modeInterplay_reset_nxt;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay _24_modeInterplay_state_nxt;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _23_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _22_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _21_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _20_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _19_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _18_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _17_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _16_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _15_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _14_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L145 */
  static kcg_bool _L145_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L144 */
  static kcg_int _L144_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L143 */
  static kcg_int _L143_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L142 */
  static kcg_int _L142_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L67 */
  static kcg_bool _L67_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L41 */
  static SupervisionStatus_T_SDM_Types_Pkg _L41_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L45 */
  static SupervisionStatus_T_SDM_Types_Pkg _L45_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L44 */
  static kcg_bool _L44_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L46 */
  static kcg_bool _L46_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L42 */
  static kcg_bool _L42_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L40 */
  static kcg_bool _L40_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L27 */
  static kcg_bool _L27_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L26 */
  static kcg_bool _L26_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L25 */
  static kcg_bool _L25_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L24 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L24_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L23 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L23_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L22 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L22_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L21 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L21_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L20 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L20_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L19 */
  static kcg_bool _L19_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L16 */
  static kcg_bool _L16_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L114 */
  static kcg_bool _L114_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L111 */
  static kcg_bool _L111_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L110 */
  static kcg_bool _L110_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L106 */
  static SupervisionStatus_T_SDM_Types_Pkg _L106_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L105 */
  static kcg_bool _L105_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L104 */
  static kcg_bool _L104_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L103 */
  static kcg_bool _L103_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L102 */
  static kcg_bool _L102_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L98 */
  static SupervisionStatus_T_SDM_Types_Pkg _L98_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L97 */
  static kcg_bool _L97_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L96 */
  static kcg_bool _L96_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L93 */
  static kcg_bool _L93_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L92 */
  static kcg_bool _L92_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L91 */
  static kcg_bool _L91_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L86 */
  static SupervisionStatus_T_SDM_Types_Pkg _L86_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L85 */
  static kcg_bool _L85_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L84 */
  static kcg_bool _L84_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L83 */
  static kcg_bool _L83_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L78 */
  static kcg_bool _L78_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L77 */
  static SupervisionStatus_T_SDM_Types_Pkg _L77_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L76 */
  static kcg_bool _L76_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L75 */
  static kcg_bool _L75_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L72 */
  static kcg_bool _L72_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L71 */
  static kcg_bool _L71_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L70 */
  static kcg_bool _L70_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L63 */
  static SupervisionStatus_T_SDM_Types_Pkg _L63_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L62 */
  static kcg_bool _L62_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L60 */
  static kcg_bool _L60_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L59 */
  static kcg_bool _L59_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L58 */
  static kcg_bool _L58_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L52 */
  static SupervisionStatus_T_SDM_Types_Pkg _L52_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L51 */
  static kcg_bool _L51_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L107 */
  static kcg_bool _L107_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L101 */
  static kcg_bool _L101_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L100 */
  static kcg_bool _L100_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L99 */
  static kcg_bool _L99_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L90 */
  static kcg_bool _L90_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L89 */
  static kcg_bool _L89_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L88 */
  static kcg_bool _L88_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L87 */
  static kcg_bool _L87_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L82 */
  static kcg_bool _L82_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L81 */
  static kcg_bool _L81_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L80 */
  static kcg_bool _L80_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L79 */
  static kcg_bool _L79_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L68 */
  static kcg_bool _L68_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L66 */
  static kcg_bool _L66_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L65 */
  static kcg_bool _L65_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L64 */
  static kcg_bool _L64_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L57 */
  static kcg_bool _L57_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L56 */
  static kcg_bool _L56_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L55 */
  static kcg_bool _L55_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L54 */
  static kcg_bool _L54_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L53 */
  static kcg_bool _L53_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L47 */
  static kcg_bool _L47_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L43 */
  static kcg_bool _L43_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L2 */
  static Speeds_T_SDM_Types_Pkg _L2_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L1 */
  static SupervisionStatus_T_SDM_Types_Pkg _L1_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c2 */
  static kcg_bool c2_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::r0 */
  static kcg_bool r0_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c5 */
  static kcg_bool c5_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c4 */
  static kcg_bool c4_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c3 */
  static kcg_bool c3_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c1 */
  static kcg_bool c1_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::r1 */
  static kcg_bool r1_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t5 */
  static kcg_bool t5_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t4 */
  static kcg_bool t4_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t3 */
  static kcg_bool t3_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t2 */
  static kcg_bool t2_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::t1 */
  static kcg_bool t1_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _496_CSM_fired_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _497_CSM_fired_strong_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool CSM_reset_prv_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool CSM_reset_sel_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _498_CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_sel_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _489_CSM_clock_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_clock_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _422_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _421_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _420_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _419_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus */
  static kcg_bool br_2_clock_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _423_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _424_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _425_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _426_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus */
  static kcg_bool br_1_clock_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus */
  static kcg_bool br_1_guard_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus */
  static kcg_bool br_2_guard_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _387_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _388_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _389_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _390_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool CSM_reset_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM CSM_fired_strong_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _434_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _433_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _432_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _431_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _430_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _429_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _428_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _427_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus */
  static kcg_bool br_2_clock_modeInterplay_CSM_CSM_WarningStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _435_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _436_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _437_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _438_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus */
  static kcg_bool br_1_clock_modeInterplay_CSM_CSM_WarningStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus */
  static kcg_bool br_1_guard_modeInterplay_CSM_CSM_WarningStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus */
  static kcg_bool br_2_guard_modeInterplay_CSM_CSM_WarningStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _391_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _392_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _393_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _394_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _395_CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _396_CSM_reset_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _397_CSM_fired_strong_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _446_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _445_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _444_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _443_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _442_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _441_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _440_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _439_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool br_2_clock_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _454_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _453_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool br_3_clock_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _447_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _448_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _449_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _450_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _451_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _452_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool br_1_clock_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool br_1_guard_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool br_2_guard_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus */
  static kcg_bool br_3_guard_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _398_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _399_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _400_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _401_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _402_CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _403_CSM_reset_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _404_CSM_fired_strong_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _458_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _457_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _456_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _455_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool br_2_clock_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _462_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _461_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool br_3_clock_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _459_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _460_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool br_1_clock_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool br_1_guard_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool br_2_guard_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus */
  static kcg_bool br_3_guard_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _405_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _406_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _407_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _408_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _409_CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _410_CSM_reset_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _411_CSM_fired_strong_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _468_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _467_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _466_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _465_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _464_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _463_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_2_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _472_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _471_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_4_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _476_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _475_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_6_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _480_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _479_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_7_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _477_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _478_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_5_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _473_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _474_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_3_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _469_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _470_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_1_clock_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_1_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_2_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_3_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_4_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_5_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_6_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_7_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_8_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_9_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _412_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _413_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _414_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _415_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _416_CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _417_CSM_reset_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _418_CSM_fired_strong_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus::_L3 */
  static SDM_Types_T_SDM_Types_Pkg _L3_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus::_L2 */
  static SupervisionStatus_T_SDM_Types_Pkg _L2_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus::_L4 */
  static kcg_bool _L4_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus::_L7 */
  static kcg_bool _L7_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::InterventionStatus::_L8 */
  static kcg_bool _L8_modeInterplay_CSM_CSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _355_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _356_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _357_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _358_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool CSM_reset_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM CSM_fired_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus::_L3 */
  static SDM_Types_T_SDM_Types_Pkg _L3_modeInterplay_CSM_CSM_WarningStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::WarningStatus::_L2 */
  static SupervisionStatus_T_SDM_Types_Pkg _L2_modeInterplay_CSM_CSM_WarningStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _359_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _360_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _361_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _362_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _363_CSM_state_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _364_CSM_reset_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _365_CSM_fired_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus::_L13 */
  static SupervisionStatus_T_SDM_Types_Pkg _L13_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::OverspeedStatus::_L12 */
  static SDM_Types_T_SDM_Types_Pkg _L12_modeInterplay_CSM_CSM_OverspeedStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _366_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _367_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _368_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _369_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _370_CSM_state_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _371_CSM_reset_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _372_CSM_fired_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus::_L4 */
  static SupervisionStatus_T_SDM_Types_Pkg _L4_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus::_L9 */
  static SDM_Types_T_SDM_Types_Pkg _L9_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus::_L10 */
  static kcg_bool _L10_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus::_L12 */
  static kcg_bool _L12_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus::_L15 */
  static kcg_bool _L15_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::NormalStatus::_L16 */
  static kcg_bool _L16_modeInterplay_CSM_CSM_NormalStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _373_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _374_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _375_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _376_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _377_CSM_state_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _378_CSM_reset_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _379_CSM_fired_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _380_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _381_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _382_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _383_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM _384_CSM_state_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static kcg_bool _385_CSM_reset_nxt_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_TR_CSM_modeInterplay_CSM _386_CSM_fired_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay _13_modeInterplay_fired;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool _12_modeInterplay_reset_nxt;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay _11_modeInterplay_state_nxt;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _10_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _9_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _8_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _7_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _6_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _5_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _4_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _3_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _2_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _1_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L48 */
  static kcg_bool _L48_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L47 */
  static trainPosition_T_TrainPosition_Types_Pck _L47_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L46 */
  static kcg_bool _L46_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L45 */
  static kcg_bool _L45_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L44 */
  static kcg_bool _L44_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L30 */
  static kcg_bool _L30_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L31 */
  static kcg_bool _L31_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L32 */
  static kcg_bool _L32_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L33 */
  static kcg_bool _L33_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L34 */
  static kcg_bool _L34_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L35 */
  static kcg_bool _L35_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L36 */
  static kcg_bool _L36_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L37 */
  static kcg_bool _L37_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L38 */
  static kcg_bool _L38_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L39 */
  static kcg_bool _L39_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L40 */
  static kcg_bool _L40_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L41 */
  static kcg_bool _L41_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L42 */
  static kcg_bool _L42_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L43 */
  static kcg_bool _L43_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L26 */
  static kcg_bool _L26_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L27 */
  static kcg_bool _L27_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L28 */
  static kcg_bool _L28_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L29 */
  static kcg_bool _L29_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L6 */
  static Target_T_TargetManagement_types _L6_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L5 */
  static SDM_Locations_T_SDM_Types_Pkg _L5_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L4 */
  static Speeds_T_SDM_Types_Pkg _L4_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L2 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L2_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L1 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L1_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t13 */
  static kcg_bool t13_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t14 */
  static kcg_bool t14_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t10_12 */
  static kcg_bool t10_12_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t7_9 */
  static kcg_bool t7_9_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t4_6 */
  static kcg_bool t4_6_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t3 */
  static kcg_bool t3_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t2 */
  static kcg_bool t2_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t1 */
  static kcg_bool t1_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::r3 */
  static kcg_bool r3_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::r2 */
  static kcg_bool r2_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::r1 */
  static kcg_bool r1_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::r0 */
  static kcg_bool r0_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _493_SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _494_SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool SM4_reset_prv_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool SM4_reset_sel_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _495_SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_sel_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _488_SM4_clock_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_clock_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _188_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _187_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _186_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _185_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _184_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _183_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _200_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _199_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _198_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _197_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _196_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _195_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _189_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _190_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _191_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _192_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _193_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _194_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_1_clock_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _132_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _133_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _134_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _135_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _136_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _137_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool SM4_reset_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _210_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _209_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _208_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _207_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _206_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _205_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _204_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _203_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _202_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _201_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _224_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _223_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _222_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _221_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _220_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _219_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _225_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _226_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _227_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _228_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _229_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _230_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _211_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _212_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _213_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _214_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _215_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _216_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _217_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _218_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_1_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_4_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _138_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _139_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _140_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _141_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _142_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _143_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _144_SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _145_SM4_reset_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _146_SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _242_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _241_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _240_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _239_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _238_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _237_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _236_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _235_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _234_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _233_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _232_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _231_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _266_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _265_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _264_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _263_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _262_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _261_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _260_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _259_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _258_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _257_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _256_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _255_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _280_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _279_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _278_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _277_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_5_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _267_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _268_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _269_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _270_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _271_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _272_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _273_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _274_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _275_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _276_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _243_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _244_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _245_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _246_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _247_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _248_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _249_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _250_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _251_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _252_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _253_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _254_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_1_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_4_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_5_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _147_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _148_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _149_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _150_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _151_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _152_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _153_SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _154_SM4_reset_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _155_SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _292_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _291_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _290_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _289_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _288_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _287_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _286_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _285_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _284_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _283_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _282_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _281_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _304_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _303_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _302_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _301_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _300_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _299_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _310_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _309_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_5_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _305_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _306_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _307_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _308_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _293_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _294_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _295_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _296_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _297_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _298_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_1_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_4_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_5_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _156_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _157_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _158_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _159_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _160_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _161_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _162_SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _163_SM4_reset_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _164_SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _316_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _315_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _314_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _313_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _312_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _311_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _326_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _325_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _324_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _323_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _330_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _329_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_5_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _327_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _328_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _317_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _318_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _319_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _320_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _321_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _322_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_1_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_4_guard_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_5_guard_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _165_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _166_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _167_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _168_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _169_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _170_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _171_SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _172_SM4_reset_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _173_SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _336_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _335_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _334_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _333_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _332_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _331_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _346_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _345_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _344_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _343_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _352_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _351_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_6_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _353_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _354_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_5_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _347_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _348_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _349_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _350_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _337_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _338_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _339_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _340_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _341_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _342_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_1_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_4_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_5_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_6_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _174_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _175_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool _176_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool _177_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool _178_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool _179_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _180_SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _181_SM4_reset_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _182_SM4_fired_strong_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention::_L2 */
  static SDM_Types_T_SDM_Types_Pkg _L2_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention::_L1 */
  static SupervisionStatus_T_SDM_Types_Pkg _L1_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention::_L3 */
  static kcg_bool _L3_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention::_L4 */
  static kcg_bool _L4_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention::_L5 */
  static kcg_bool _L5_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention::_L6 */
  static kcg_bool _L6_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _93_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _94_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _95_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _96_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool SM4_reset_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning::_L2 */
  static SDM_Types_T_SDM_Types_Pkg _L2_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning::_L1 */
  static SupervisionStatus_T_SDM_Types_Pkg _L1_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _97_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _98_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _99_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _100_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _101_SM4_state_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _102_SM4_reset_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _103_SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed::_L4 */
  static SupervisionStatus_T_SDM_Types_Pkg _L4_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed::_L3 */
  static SDM_Types_T_SDM_Types_Pkg _L3_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _104_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _105_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _106_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _107_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _108_SM4_state_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _109_SM4_reset_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _110_SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication::_L2 */
  static SDM_Types_T_SDM_Types_Pkg _L2_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication::_L1 */
  static SupervisionStatus_T_SDM_Types_Pkg _L1_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication::_L3 */
  static kcg_bool _L3_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication::_L4 */
  static kcg_bool _L4_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication::_L5 */
  static kcg_bool _L5_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _111_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _112_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _113_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _114_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _115_SM4_state_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _116_SM4_reset_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _117_SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L2 */
  static SDM_Types_T_SDM_Types_Pkg _L2_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L3 */
  static SupervisionStatus_T_SDM_Types_Pkg _L3_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L4 */
  static kcg_bool _L4_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L5 */
  static kcg_bool _L5_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L6 */
  static kcg_bool _L6_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L7 */
  static kcg_bool _L7_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L8 */
  static kcg_bool _L8_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal::_L9 */
  static kcg_bool _L9_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _118_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _119_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _120_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _121_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _122_SM4_state_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _123_SM4_reset_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _124_SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _125_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _126_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _127_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _128_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM _129_SM4_state_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static kcg_bool _130_SM4_reset_nxt_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_TR_SM4_modeInterplay_TSM _131_SM4_fired_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay modeInterplay_fired;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool modeInterplay_reset_nxt;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_nxt;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L57 */
  static kcg_bool _L57_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L52 */
  static kcg_bool _L52_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L51 */
  static kcg_bool _L51_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L39 */
  static kcg_bool _L39_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L37 */
  static kcg_bool _L37_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L35 */
  static SupervisionStatus_T_SDM_Types_Pkg _L35_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L31 */
  static SupervisionStatus_T_SDM_Types_Pkg _L31_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L27 */
  static kcg_bool _L27_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L26 */
  static kcg_bool _L26_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L21 */
  static SupervisionStatus_T_SDM_Types_Pkg _L21_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L22 */
  static SupervisionStatus_T_SDM_Types_Pkg _L22_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L23 */
  static kcg_bool _L23_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L24 */
  static kcg_bool _L24_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L25 */
  static kcg_bool _L25_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L16 */
  static kcg_bool _L16_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L15 */
  static kcg_bool _L15_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L14 */
  static kcg_bool _L14_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L13 */
  static SupervisionStatus_T_SDM_Types_Pkg _L13_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L12 */
  static SupervisionStatus_T_SDM_Types_Pkg _L12_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L11 */
  static kcg_bool _L11_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L10 */
  static kcg_bool _L10_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L8 */
  static SupervisionStatus_T_SDM_Types_Pkg _L8_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L7 */
  static kcg_bool _L7_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L5 */
  static kcg_bool _L5_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L4 */
  static kcg_bool _L4_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L3 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L3_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L2 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L2_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::_L1 */
  static Speeds_T_SDM_Types_Pkg _L1_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::WS_OS2IS */
  static kcg_bool WS_OS2IS_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::US_NS2IS */
  static kcg_bool US_NS2IS_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::notInt2Int */
  static kcg_bool notInt2Int_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::r1 */
  static kcg_bool r1_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::r0 */
  static kcg_bool r0_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::t2 */
  static kcg_bool t2_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::t1 */
  static kcg_bool t1_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM _490_RSM_fired_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM _491_RSM_fired_strong_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool RSM_reset_prv_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool RSM_reset_sel_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM _492_RSM_state_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_sel_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM _487_RSM_clock_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_clock_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _60_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _59_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _58_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _57_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::InterventionStatus */
  static kcg_bool br_1_clock_modeInterplay_RSM_RSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::InterventionStatus */
  static kcg_bool br_1_guard_modeInterplay_RSM_RSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _39_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _40_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _41_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _42_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool RSM_reset_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM RSM_fired_strong_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _64_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _63_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _62_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _61_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::IndicationStatus */
  static kcg_bool br_1_clock_modeInterplay_RSM_RSM_IndicationStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::IndicationStatus */
  static kcg_bool br_1_guard_modeInterplay_RSM_RSM_IndicationStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _43_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _44_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _45_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _46_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM _47_RSM_state_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool _48_RSM_reset_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM _49_RSM_fired_strong_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _70_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _69_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _68_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _67_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _66_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _65_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_2_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _82_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _81_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _80_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _79_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _78_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _77_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_4_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _92_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _91_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _90_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _89_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_5_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _83_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _84_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _85_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _86_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _87_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _88_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_3_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _71_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _72_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _73_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _74_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _75_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _76_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_1_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_1_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_2_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_3_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_4_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_5_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _50_revokedSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg _51_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool _52_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool _53_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM _54_RSM_state_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool _55_RSM_reset_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM _56_RSM_fired_strong_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::InterventionStatus::_L1 */
  static SupervisionStatus_T_SDM_Types_Pkg _L1_modeInterplay_RSM_RSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::InterventionStatus::_L2 */
  static SDM_Types_T_SDM_Types_Pkg _L2_modeInterplay_RSM_RSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _27_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _28_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_nxt_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool RSM_reset_nxt_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM RSM_fired_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::IndicationStatus::_L2 */
  static SupervisionStatus_T_SDM_Types_Pkg _L2_modeInterplay_RSM_RSM_IndicationStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::IndicationStatus::_L3 */
  static SDM_Types_T_SDM_Types_Pkg _L3_modeInterplay_RSM_RSM_IndicationStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _29_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _30_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM _31_RSM_state_nxt_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool _32_RSM_reset_nxt_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM _33_RSM_fired_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg _34_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg _35_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM _36_RSM_state_nxt_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static kcg_bool _37_RSM_reset_nxt_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_TR_RSM_modeInterplay_RSM _38_RSM_fired_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay _486_modeInterplay_fired_strong;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool _485_modeInterplay_reset_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay _484_modeInterplay_state_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM */
  static kcg_bool br_2_guard_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM */
  static kcg_bool br_1_guard_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay _483_modeInterplay_fired_strong;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool _482_modeInterplay_reset_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay _481_modeInterplay_state_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM */
  static kcg_bool br_2_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM */
  static kcg_bool br_1_guard_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay modeInterplay_fired_strong;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool modeInterplay_reset_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM */
  static kcg_bool br_2_guard_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM */
  static kcg_bool br_1_guard_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg last_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredTCO */
  static kcg_bool last_triggeredTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedTCO */
  static kcg_bool last_revokedTCO;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredEB */
  static kcg_bool last_triggeredEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedEB */
  static kcg_bool last_revokedEB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSB */
  static kcg_bool last_triggeredSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::revokedSB */
  static kcg_bool last_revokedSB;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::triggeredSupervisionStatus */
  static SupervisionStatus_T_SDM_Types_Pkg last_triggeredSupervisionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg last_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_sel;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay _501_modeInterplay_state_act;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool modeInterplay_reset_sel;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static kcg_bool modeInterplay_reset_prv;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay _500_modeInterplay_fired_strong;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_TR_modeInterplay _499_modeInterplay_fired;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::isRSMLocation */
  static kcg_bool isRSMLocation;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::isPreIndicationLocation */
  static kcg_bool isPreIndicationLocation;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L14 */
  static SDM_Locations_T_SDM_Types_Pkg _L14;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L23 */
  static kcg_bool _L23;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L22 */
  static kcg_bool _L22;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L25 */
  static Target_T_TargetManagement_types _L25;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L26 */
  static trainPosition_T_TrainPosition_Types_Pck _L26;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L24 */
  static EB_command_T_SDM_Commands_Pkg _L24;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L30 */
  static SupervisionStatus_T_SDM_Types_Pkg _L30;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::_L31 */
  static trainData_internal_t_SDM_Types_Pkg _L31;
  
  /* init_modeInterplay */ if (outC->init3) {
    modeInterplay_state_sel = SSM_st_CSM_modeInterplay;
  }
  else {
    modeInterplay_state_sel = outC->modeInterplay_state_nxt;
  }
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L14, locations);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L26, trainLocations);
  /* 1 */
  CalcRSMandPreindicationLocation_SDM_Commands_Pkg(&_L14, &_L26, &_L22, &_L23);
  isPreIndicationLocation = _L22;
  /* sel_modeInterplay */ switch (modeInterplay_state_sel) {
    case SSM_st_RSM_modeInterplay :
      br_1_guard_modeInterplay_RSM = SupervisedTargetsListUpdated &
        !isPreIndicationLocation;
      break;
    
  }
  isRSMLocation = _L23;
  /* sel_modeInterplay */ switch (modeInterplay_state_sel) {
    case SSM_st_CSM_modeInterplay :
      br_1_guard_modeInterplay_CSM = isPreIndicationLocation;
      br_2_guard_modeInterplay_CSM = SupervisedTargetsListUpdated &
        isRSMLocation;
      if (br_1_guard_modeInterplay_CSM) {
        _484_modeInterplay_state_act = SSM_st_TSM_modeInterplay;
      }
      else if (br_2_guard_modeInterplay_CSM) {
        _484_modeInterplay_state_act = SSM_st_RSM_modeInterplay;
      }
      else {
        _484_modeInterplay_state_act = SSM_st_CSM_modeInterplay;
      }
      _501_modeInterplay_state_act = _484_modeInterplay_state_act;
      break;
    case SSM_st_TSM_modeInterplay :
      br_1_guard_modeInterplay_TSM = isRSMLocation;
      br_2_guard_modeInterplay_TSM = SupervisedTargetsListUpdated &
        !isPreIndicationLocation;
      if (br_1_guard_modeInterplay_TSM) {
        _481_modeInterplay_state_act = SSM_st_RSM_modeInterplay;
      }
      else if (br_2_guard_modeInterplay_TSM) {
        _481_modeInterplay_state_act = SSM_st_CSM_modeInterplay;
      }
      else {
        _481_modeInterplay_state_act = SSM_st_TSM_modeInterplay;
      }
      _501_modeInterplay_state_act = _481_modeInterplay_state_act;
      break;
    case SSM_st_RSM_modeInterplay :
      br_2_guard_modeInterplay_RSM = SupervisedTargetsListUpdated &
        isPreIndicationLocation & !isRSMLocation;
      if (br_1_guard_modeInterplay_RSM) {
        modeInterplay_state_act = SSM_st_CSM_modeInterplay;
      }
      else if (br_2_guard_modeInterplay_RSM) {
        modeInterplay_state_act = SSM_st_TSM_modeInterplay;
      }
      else {
        modeInterplay_state_act = SSM_st_RSM_modeInterplay;
      }
      _501_modeInterplay_state_act = modeInterplay_state_act;
      break;
    
  }
  /* init_modeInterplay */ if (outC->init3) {
    modeInterplay_reset_prv = kcg_false;
  }
  else {
    modeInterplay_reset_prv = outC->modeInterplay_reset_act;
  }
  /* sel_modeInterplay */ switch (modeInterplay_state_sel) {
    case SSM_st_CSM_modeInterplay :
      if (br_1_guard_modeInterplay_CSM) {
        _485_modeInterplay_reset_act = kcg_true;
      }
      else {
        _485_modeInterplay_reset_act = br_2_guard_modeInterplay_CSM;
      }
      outC->modeInterplay_reset_act = _485_modeInterplay_reset_act;
      break;
    case SSM_st_TSM_modeInterplay :
      if (br_1_guard_modeInterplay_TSM) {
        _482_modeInterplay_reset_act = kcg_true;
      }
      else {
        _482_modeInterplay_reset_act = br_2_guard_modeInterplay_TSM;
      }
      outC->modeInterplay_reset_act = _482_modeInterplay_reset_act;
      break;
    case SSM_st_RSM_modeInterplay :
      if (br_1_guard_modeInterplay_RSM) {
        modeInterplay_reset_act = kcg_true;
      }
      else {
        modeInterplay_reset_act = br_2_guard_modeInterplay_RSM;
      }
      outC->modeInterplay_reset_act = modeInterplay_reset_act;
      break;
    
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      if (outC->modeInterplay_reset_act) {
        outC->init = kcg_true;
      }
      break;
    case SSM_st_TSM_modeInterplay :
      if (outC->modeInterplay_reset_act) {
        outC->init1 = kcg_true;
      }
      break;
    case SSM_st_RSM_modeInterplay :
      if (outC->modeInterplay_reset_act) {
        outC->init2 = kcg_true;
      }
      break;
    
  }
  /* init_modeInterplay */ if (outC->init3) {
    modeInterplay_reset_sel = kcg_false;
  }
  else {
    modeInterplay_reset_sel = outC->modeInterplay_reset_nxt;
  }
  /* sel_modeInterplay */ switch (modeInterplay_state_sel) {
    case SSM_st_CSM_modeInterplay :
      if (br_1_guard_modeInterplay_CSM) {
        _486_modeInterplay_fired_strong = SSM_TR_CSM_1_modeInterplay;
      }
      else if (br_2_guard_modeInterplay_CSM) {
        _486_modeInterplay_fired_strong = SSM_TR_CSM_2_modeInterplay;
      }
      else {
        _486_modeInterplay_fired_strong = SSM_TR_no_trans_modeInterplay;
      }
      _500_modeInterplay_fired_strong = _486_modeInterplay_fired_strong;
      break;
    case SSM_st_TSM_modeInterplay :
      if (br_1_guard_modeInterplay_TSM) {
        _483_modeInterplay_fired_strong = SSM_TR_TSM_1_modeInterplay;
      }
      else if (br_2_guard_modeInterplay_TSM) {
        _483_modeInterplay_fired_strong = SSM_TR_TSM_2_modeInterplay;
      }
      else {
        _483_modeInterplay_fired_strong = SSM_TR_no_trans_modeInterplay;
      }
      _500_modeInterplay_fired_strong = _483_modeInterplay_fired_strong;
      break;
    case SSM_st_RSM_modeInterplay :
      if (br_1_guard_modeInterplay_RSM) {
        modeInterplay_fired_strong = SSM_TR_RSM_1_modeInterplay;
      }
      else if (br_2_guard_modeInterplay_RSM) {
        modeInterplay_fired_strong = SSM_TR_RSM_2_modeInterplay;
      }
      else {
        modeInterplay_fired_strong = SSM_TR_no_trans_modeInterplay;
      }
      _500_modeInterplay_fired_strong = modeInterplay_fired_strong;
      break;
    
  }
  /* last_init_ck_sdmType */ if (outC->init3) {
    last_sdmType = cSDM_Types_SDM_Commands_Pkg;
  }
  else {
    last_sdmType = outC->sdmType;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      /* init_RSM */ if (outC->init2) {
        RSM_state_sel_modeInterplay_RSM = SSM_st_Init_modeInterplay_RSM_RSM;
      }
      else {
        RSM_state_sel_modeInterplay_RSM = outC->RSM_state_nxt_modeInterplay_RSM;
      }
      _487_RSM_clock_modeInterplay_RSM = RSM_state_sel_modeInterplay_RSM;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&_L1_modeInterplay_RSM, speeds);
      _L57_modeInterplay_RSM = _L1_modeInterplay_RSM.OdoStandStill;
      r0_modeInterplay_RSM = _L57_modeInterplay_RSM;
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          br_1_guard_modeInterplay_RSM_RSM_InterventionStatus =
            r0_modeInterplay_RSM;
          if (br_1_guard_modeInterplay_RSM_RSM_InterventionStatus) {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          }
          else {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
          }
          break;
        
      }
      _L2_modeInterplay_RSM = _L1_modeInterplay_RSM.V_est;
      _L3_modeInterplay_RSM = _L1_modeInterplay_RSM.V_release;
      _L4_modeInterplay_RSM = _L2_modeInterplay_RSM <= _L3_modeInterplay_RSM;
      _L5_modeInterplay_RSM = !_L4_modeInterplay_RSM;
      t2_modeInterplay_RSM = _L5_modeInterplay_RSM;
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          br_1_guard_modeInterplay_RSM_RSM_IndicationStatus =
            t2_modeInterplay_RSM;
          if (br_1_guard_modeInterplay_RSM_RSM_IndicationStatus) {
            _47_RSM_state_act_modeInterplay_RSM =
              SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
          }
          else {
            _47_RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          }
          break;
        
      }
      break;
    
  }
  /* last_init_ck_status */ if (outC->init3) {
    last_status = cSupervisionStatus_SDM_Commands_Pkg;
  }
  else {
    last_status = outC->status;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      /* init_CSM */ if (outC->init) {
        CSM_state_sel_modeInterplay_CSM = SSM_st_Init_modeInterplay_CSM_CSM;
      }
      else {
        CSM_state_sel_modeInterplay_CSM = outC->CSM_state_nxt_modeInterplay_CSM;
      }
      _489_CSM_clock_modeInterplay_CSM = CSM_state_sel_modeInterplay_CSM;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&_L2_modeInterplay_CSM, speeds);
      _L145_modeInterplay_CSM = _L2_modeInterplay_CSM.OdoStandStill;
      r0_modeInterplay_CSM = _L145_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          br_1_guard_modeInterplay_CSM_CSM_InterventionStatus =
            r0_modeInterplay_CSM;
          break;
        
      }
      _L20_modeInterplay_CSM = _L2_modeInterplay_CSM.V_est;
      _L21_modeInterplay_CSM = _L2_modeInterplay_CSM.V_MRSP;
      _L16_modeInterplay_CSM = _L20_modeInterplay_CSM <= _L21_modeInterplay_CSM;
      r1_modeInterplay_CSM = _L16_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          br_2_guard_modeInterplay_CSM_CSM_InterventionStatus =
            r1_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_InterventionStatus) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_InterventionStatus) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          }
          break;
        
      }
      _L23_modeInterplay_CSM = _L2_modeInterplay_CSM.dV_sbi_V_MRSP;
      _L143_modeInterplay_CSM = _L23_modeInterplay_CSM + _L21_modeInterplay_CSM;
      _L26_modeInterplay_CSM = _L20_modeInterplay_CSM > _L143_modeInterplay_CSM;
      t4_modeInterplay_CSM = _L26_modeInterplay_CSM;
      _L22_modeInterplay_CSM = _L2_modeInterplay_CSM.dV_ebi_V_MRSP;
      _L142_modeInterplay_CSM = _L22_modeInterplay_CSM + _L21_modeInterplay_CSM;
      _L25_modeInterplay_CSM = _L20_modeInterplay_CSM > _L142_modeInterplay_CSM;
      t5_modeInterplay_CSM = _L25_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          br_1_guard_modeInterplay_CSM_CSM_OverspeedStatus =
            t4_modeInterplay_CSM | t5_modeInterplay_CSM;
          br_2_guard_modeInterplay_CSM_CSM_OverspeedStatus =
            r1_modeInterplay_CSM;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          br_1_guard_modeInterplay_CSM_CSM_WarningStatus =
            t4_modeInterplay_CSM | t5_modeInterplay_CSM;
          br_2_guard_modeInterplay_CSM_CSM_WarningStatus = r1_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_WarningStatus) {
            _395_CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_WarningStatus) {
            _395_CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else {
            _395_CSM_state_act_modeInterplay_CSM =
              SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          }
          break;
        
      }
      _L24_modeInterplay_CSM = _L2_modeInterplay_CSM.dV_warning_V_MRSP;
      _L144_modeInterplay_CSM = _L24_modeInterplay_CSM + _L21_modeInterplay_CSM;
      _L27_modeInterplay_CSM = _L20_modeInterplay_CSM > _L144_modeInterplay_CSM;
      t3_modeInterplay_CSM = _L27_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          br_1_guard_modeInterplay_CSM_CSM_NormalStatus = t4_modeInterplay_CSM |
            t5_modeInterplay_CSM;
          br_2_guard_modeInterplay_CSM_CSM_NormalStatus = t3_modeInterplay_CSM;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          br_3_guard_modeInterplay_CSM_CSM_OverspeedStatus =
            t3_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _402_CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _402_CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _402_CSM_state_act_modeInterplay_CSM =
              SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          }
          else {
            _402_CSM_state_act_modeInterplay_CSM =
              SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
          }
          break;
        
      }
      _L19_modeInterplay_CSM = !_L16_modeInterplay_CSM;
      t2_modeInterplay_CSM = _L19_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          br_3_guard_modeInterplay_CSM_CSM_NormalStatus = t2_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _409_CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _409_CSM_state_act_modeInterplay_CSM =
              SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _409_CSM_state_act_modeInterplay_CSM =
              SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
          }
          else {
            _409_CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          break;
        
      }
      _L45_modeInterplay_CSM = Indication_Supervision_SDM_Types_Pkg;
      _L1_modeInterplay_CSM = last_status;
      _L44_modeInterplay_CSM = _L45_modeInterplay_CSM == _L1_modeInterplay_CSM;
      _L47_modeInterplay_CSM = r1_modeInterplay_CSM;
      _L46_modeInterplay_CSM = _L44_modeInterplay_CSM & _L47_modeInterplay_CSM;
      c2_modeInterplay_CSM = _L46_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_1_guard_modeInterplay_CSM_CSM_Init = c2_modeInterplay_CSM;
          br_2_guard_modeInterplay_CSM_CSM_Init = last_status ==
            Overspeed_Supervision_SDM_Types_Pkg;
          break;
        
      }
      _L77_modeInterplay_CSM = Undefined_Supervision_SDM_Types_Pkg;
      _L76_modeInterplay_CSM = _L77_modeInterplay_CSM == _L1_modeInterplay_CSM;
      t1_modeInterplay_CSM = _L16_modeInterplay_CSM;
      _L79_modeInterplay_CSM = t1_modeInterplay_CSM;
      _L81_modeInterplay_CSM = t4_modeInterplay_CSM;
      _L82_modeInterplay_CSM = t5_modeInterplay_CSM;
      _L78_modeInterplay_CSM = _L79_modeInterplay_CSM | _L81_modeInterplay_CSM |
        _L82_modeInterplay_CSM;
      _L83_modeInterplay_CSM = !_L78_modeInterplay_CSM;
      _L80_modeInterplay_CSM = t3_modeInterplay_CSM;
      _L84_modeInterplay_CSM = _L76_modeInterplay_CSM & _L83_modeInterplay_CSM &
        _L80_modeInterplay_CSM;
      _L86_modeInterplay_CSM = Indication_Supervision_SDM_Types_Pkg;
      _L85_modeInterplay_CSM = _L86_modeInterplay_CSM == _L1_modeInterplay_CSM;
      _L87_modeInterplay_CSM = r1_modeInterplay_CSM;
      _L89_modeInterplay_CSM = t4_modeInterplay_CSM;
      _L90_modeInterplay_CSM = t5_modeInterplay_CSM;
      _L91_modeInterplay_CSM = _L87_modeInterplay_CSM | _L89_modeInterplay_CSM |
        _L90_modeInterplay_CSM;
      _L92_modeInterplay_CSM = !_L91_modeInterplay_CSM;
      _L88_modeInterplay_CSM = t3_modeInterplay_CSM;
      _L93_modeInterplay_CSM = _L85_modeInterplay_CSM & _L92_modeInterplay_CSM &
        _L88_modeInterplay_CSM;
      _L96_modeInterplay_CSM = _L84_modeInterplay_CSM | _L93_modeInterplay_CSM;
      c4_modeInterplay_CSM = _L96_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_3_guard_modeInterplay_CSM_CSM_Init = c4_modeInterplay_CSM;
          break;
        
      }
      _L98_modeInterplay_CSM = Undefined_Supervision_SDM_Types_Pkg;
      _L97_modeInterplay_CSM = _L98_modeInterplay_CSM == _L1_modeInterplay_CSM;
      _L100_modeInterplay_CSM = t4_modeInterplay_CSM;
      _L101_modeInterplay_CSM = t5_modeInterplay_CSM;
      _L102_modeInterplay_CSM = _L100_modeInterplay_CSM |
        _L101_modeInterplay_CSM;
      _L99_modeInterplay_CSM = t1_modeInterplay_CSM;
      _L103_modeInterplay_CSM = !_L99_modeInterplay_CSM;
      _L104_modeInterplay_CSM = _L97_modeInterplay_CSM &
        _L102_modeInterplay_CSM & _L103_modeInterplay_CSM;
      _L106_modeInterplay_CSM = Indication_Supervision_SDM_Types_Pkg;
      _L105_modeInterplay_CSM = _L106_modeInterplay_CSM ==
        _L1_modeInterplay_CSM;
      _L107_modeInterplay_CSM = r1_modeInterplay_CSM;
      _L110_modeInterplay_CSM = !_L107_modeInterplay_CSM;
      _L111_modeInterplay_CSM = _L102_modeInterplay_CSM &
        _L105_modeInterplay_CSM & _L110_modeInterplay_CSM;
      _L114_modeInterplay_CSM = _L104_modeInterplay_CSM |
        _L111_modeInterplay_CSM;
      c5_modeInterplay_CSM = _L114_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_4_guard_modeInterplay_CSM_CSM_Init = c5_modeInterplay_CSM;
          break;
        
      }
      _L41_modeInterplay_CSM = Undefined_Supervision_SDM_Types_Pkg;
      _L40_modeInterplay_CSM = _L41_modeInterplay_CSM == _L1_modeInterplay_CSM;
      _L43_modeInterplay_CSM = t1_modeInterplay_CSM;
      _L42_modeInterplay_CSM = _L40_modeInterplay_CSM & _L43_modeInterplay_CSM;
      c1_modeInterplay_CSM = _L42_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_5_guard_modeInterplay_CSM_CSM_Init = c1_modeInterplay_CSM;
          br_6_guard_modeInterplay_CSM_CSM_Init = last_status ==
            Normal_Supervision_SDM_Types_Pkg;
          break;
        
      }
      _L52_modeInterplay_CSM = Undefined_Supervision_SDM_Types_Pkg;
      _L51_modeInterplay_CSM = _L52_modeInterplay_CSM == _L1_modeInterplay_CSM;
      _L53_modeInterplay_CSM = t1_modeInterplay_CSM;
      _L55_modeInterplay_CSM = t3_modeInterplay_CSM;
      _L56_modeInterplay_CSM = t4_modeInterplay_CSM;
      _L57_modeInterplay_CSM = t5_modeInterplay_CSM;
      _L58_modeInterplay_CSM = _L53_modeInterplay_CSM | _L55_modeInterplay_CSM |
        _L56_modeInterplay_CSM | _L57_modeInterplay_CSM;
      _L59_modeInterplay_CSM = !_L58_modeInterplay_CSM;
      _L54_modeInterplay_CSM = t2_modeInterplay_CSM;
      _L60_modeInterplay_CSM = _L51_modeInterplay_CSM & _L59_modeInterplay_CSM &
        _L54_modeInterplay_CSM;
      _L63_modeInterplay_CSM = Indication_Supervision_SDM_Types_Pkg;
      _L62_modeInterplay_CSM = _L63_modeInterplay_CSM == _L1_modeInterplay_CSM;
      _L64_modeInterplay_CSM = r1_modeInterplay_CSM;
      _L65_modeInterplay_CSM = t3_modeInterplay_CSM;
      _L66_modeInterplay_CSM = t4_modeInterplay_CSM;
      _L67_modeInterplay_CSM = t5_modeInterplay_CSM;
      _L72_modeInterplay_CSM = _L64_modeInterplay_CSM | _L65_modeInterplay_CSM |
        _L66_modeInterplay_CSM | _L67_modeInterplay_CSM;
      _L70_modeInterplay_CSM = !_L72_modeInterplay_CSM;
      _L68_modeInterplay_CSM = t2_modeInterplay_CSM;
      _L71_modeInterplay_CSM = _L62_modeInterplay_CSM & _L70_modeInterplay_CSM &
        _L68_modeInterplay_CSM;
      _L75_modeInterplay_CSM = _L60_modeInterplay_CSM | _L71_modeInterplay_CSM;
      c3_modeInterplay_CSM = _L75_modeInterplay_CSM;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_7_guard_modeInterplay_CSM_CSM_Init = c3_modeInterplay_CSM;
          br_8_guard_modeInterplay_CSM_CSM_Init = last_status ==
            Warning_Supervision_SDM_Types_Pkg;
          br_9_guard_modeInterplay_CSM_CSM_Init = last_status ==
            Intervention_Supervision_SDM_Types_Pkg;
          if (br_1_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          }
          else if (br_4_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          }
          else if (br_5_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else if (br_6_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          }
          else if (br_7_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
          }
          else if (br_8_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          }
          else if (br_9_guard_modeInterplay_CSM_CSM_Init) {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          }
          else {
            _416_CSM_state_act_modeInterplay_CSM =
              SSM_st_Init_modeInterplay_CSM_CSM;
          }
          _498_CSM_state_act_modeInterplay_CSM =
            _416_CSM_state_act_modeInterplay_CSM;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _498_CSM_state_act_modeInterplay_CSM =
            _409_CSM_state_act_modeInterplay_CSM;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          _498_CSM_state_act_modeInterplay_CSM =
            _402_CSM_state_act_modeInterplay_CSM;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          _498_CSM_state_act_modeInterplay_CSM =
            _395_CSM_state_act_modeInterplay_CSM;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _498_CSM_state_act_modeInterplay_CSM =
            CSM_state_act_modeInterplay_CSM;
          break;
        
      }
      CSM_clock_modeInterplay_CSM = _498_CSM_state_act_modeInterplay_CSM;
      /* cb_CSM */ switch (CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          _380_sdmType = last_sdmType;
          _14_sdmType = _380_sdmType;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _L9_modeInterplay_CSM_CSM_NormalStatus = CSM_SDM_Types_Pkg;
          _373_sdmType = _L9_modeInterplay_CSM_CSM_NormalStatus;
          _14_sdmType = _373_sdmType;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          _L12_modeInterplay_CSM_CSM_OverspeedStatus = CSM_SDM_Types_Pkg;
          _366_sdmType = _L12_modeInterplay_CSM_CSM_OverspeedStatus;
          _14_sdmType = _366_sdmType;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          _L3_modeInterplay_CSM_CSM_WarningStatus = CSM_SDM_Types_Pkg;
          _359_sdmType = _L3_modeInterplay_CSM_CSM_WarningStatus;
          _14_sdmType = _359_sdmType;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _L3_modeInterplay_CSM_CSM_InterventionStatus = CSM_SDM_Types_Pkg;
          _355_sdmType = _L3_modeInterplay_CSM_CSM_InterventionStatus;
          _14_sdmType = _355_sdmType;
          break;
        
      }
      outC->sdmType = _14_sdmType;
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_1_clock_modeInterplay_CSM_CSM_Init =
            br_1_guard_modeInterplay_CSM_CSM_Init;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_Init) {
            _466_revokedSupervisionStatus =
              Indication_Supervision_SDM_Types_Pkg;
            _412_revokedSupervisionStatus = _466_revokedSupervisionStatus;
          }
          else {
            _463_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _412_revokedSupervisionStatus = _463_revokedSupervisionStatus;
          }
          _15_revokedSupervisionStatus = _412_revokedSupervisionStatus;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _405_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          _15_revokedSupervisionStatus = _405_revokedSupervisionStatus;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          br_1_clock_modeInterplay_CSM_CSM_OverspeedStatus =
            br_1_guard_modeInterplay_CSM_CSM_OverspeedStatus;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
            _443_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _398_revokedSupervisionStatus = _443_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_CSM_CSM_OverspeedStatus =
              br_2_guard_modeInterplay_CSM_CSM_OverspeedStatus;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
              _450_revokedSupervisionStatus =
                Overspeed_Supervision_SDM_Types_Pkg;
              _439_revokedSupervisionStatus = _450_revokedSupervisionStatus;
            }
            else {
              _447_revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _439_revokedSupervisionStatus = _447_revokedSupervisionStatus;
            }
            _398_revokedSupervisionStatus = _439_revokedSupervisionStatus;
          }
          _15_revokedSupervisionStatus = _398_revokedSupervisionStatus;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          br_1_clock_modeInterplay_CSM_CSM_WarningStatus =
            br_1_guard_modeInterplay_CSM_CSM_WarningStatus;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_WarningStatus) {
            _431_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _391_revokedSupervisionStatus = _431_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_CSM_CSM_WarningStatus =
              br_2_guard_modeInterplay_CSM_CSM_WarningStatus;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_WarningStatus) {
              _437_revokedSupervisionStatus = Warning_Supervision_SDM_Types_Pkg;
              _427_revokedSupervisionStatus = _437_revokedSupervisionStatus;
            }
            else {
              _435_revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _427_revokedSupervisionStatus = _435_revokedSupervisionStatus;
            }
            _391_revokedSupervisionStatus = _427_revokedSupervisionStatus;
          }
          _15_revokedSupervisionStatus = _391_revokedSupervisionStatus;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          br_1_clock_modeInterplay_CSM_CSM_InterventionStatus =
            br_1_guard_modeInterplay_CSM_CSM_InterventionStatus;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_InterventionStatus) {
            _421_revokedSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _387_revokedSupervisionStatus = _421_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_CSM_CSM_InterventionStatus =
              br_2_guard_modeInterplay_CSM_CSM_InterventionStatus;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_InterventionStatus) {
              _425_revokedSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _419_revokedSupervisionStatus = _425_revokedSupervisionStatus;
            }
            else {
              _423_revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _419_revokedSupervisionStatus = _423_revokedSupervisionStatus;
            }
            _387_revokedSupervisionStatus = _419_revokedSupervisionStatus;
          }
          _15_revokedSupervisionStatus = _387_revokedSupervisionStatus;
          break;
        
      }
      outC->revokedSupervisionStatus = _15_revokedSupervisionStatus;
      break;
    case SSM_st_TSM_modeInterplay :
      /* init_SM4 */ if (outC->init1) {
        SM4_state_sel_modeInterplay_TSM = SSM_st_init_modeInterplay_TSM_SM4;
      }
      else {
        SM4_state_sel_modeInterplay_TSM = outC->SM4_state_nxt_modeInterplay_TSM;
      }
      _488_SM4_clock_modeInterplay_TSM = SM4_state_sel_modeInterplay_TSM;
      kcg_copy_Speeds_T_SDM_Types_Pkg(&_L4_modeInterplay_TSM, speeds);
      kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L5_modeInterplay_TSM, locations);
      kcg_copy_Target_T_TargetManagement_types(&_L6_modeInterplay_TSM, mrdt);
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &_L47_modeInterplay_TSM,
        trainLocations);
      _L48_modeInterplay_TSM = floiIsSB1;
      /* 1 */
      CalcRevokationCondForTSM_SDM_Commands_Pkg(
        &_L4_modeInterplay_TSM,
        &_L5_modeInterplay_TSM,
        &_L6_modeInterplay_TSM,
        &_L47_modeInterplay_TSM,
        _L48_modeInterplay_TSM,
        &_L1_modeInterplay_TSM);
      _L27_modeInterplay_TSM = _L1_modeInterplay_TSM.r1;
      r1_modeInterplay_TSM = _L27_modeInterplay_TSM;
      _L28_modeInterplay_TSM = _L1_modeInterplay_TSM.r2;
      r2_modeInterplay_TSM = _L28_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Intervention = r1_modeInterplay_TSM |
            r2_modeInterplay_TSM;
          break;
        
      }
      _L26_modeInterplay_TSM = _L1_modeInterplay_TSM.r0;
      r0_modeInterplay_TSM = _L26_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          br_2_guard_modeInterplay_TSM_SM4_Intervention = r0_modeInterplay_TSM;
          break;
        
      }
      _L29_modeInterplay_TSM = _L1_modeInterplay_TSM.r3;
      r3_modeInterplay_TSM = _L29_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          br_3_guard_modeInterplay_TSM_SM4_Intervention = r3_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Indication_modeInterplay_TSM_SM4;
          }
          else {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          break;
        
      }
      /* 1 */
      CalcTriggerCondForTSM_SDM_Commands_Pkg(
        &_L4_modeInterplay_TSM,
        &_L5_modeInterplay_TSM,
        &_L6_modeInterplay_TSM,
        &_L47_modeInterplay_TSM,
        _L48_modeInterplay_TSM,
        &_L2_modeInterplay_TSM);
      _L39_modeInterplay_TSM = _L2_modeInterplay_TSM.t10;
      _L40_modeInterplay_TSM = _L2_modeInterplay_TSM.t11;
      _L41_modeInterplay_TSM = _L2_modeInterplay_TSM.t12;
      _L44_modeInterplay_TSM = _L39_modeInterplay_TSM | _L40_modeInterplay_TSM |
        _L41_modeInterplay_TSM;
      t10_12_modeInterplay_TSM = _L44_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Warning = t10_12_modeInterplay_TSM;
          break;
        
      }
      _L42_modeInterplay_TSM = _L2_modeInterplay_TSM.t13;
      t13_modeInterplay_TSM = _L42_modeInterplay_TSM;
      _L43_modeInterplay_TSM = _L2_modeInterplay_TSM.t14;
      t14_modeInterplay_TSM = _L43_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Overspeed = r1_modeInterplay_TSM |
            r2_modeInterplay_TSM;
          br_2_guard_modeInterplay_TSM_SM4_Overspeed = t13_modeInterplay_TSM |
            t14_modeInterplay_TSM;
          br_3_guard_modeInterplay_TSM_SM4_Overspeed = t10_12_modeInterplay_TSM;
          br_4_guard_modeInterplay_TSM_SM4_Overspeed = r3_modeInterplay_TSM;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          br_2_guard_modeInterplay_TSM_SM4_Warning = t13_modeInterplay_TSM |
            t14_modeInterplay_TSM;
          br_3_guard_modeInterplay_TSM_SM4_Warning = r1_modeInterplay_TSM |
            r2_modeInterplay_TSM;
          br_4_guard_modeInterplay_TSM_SM4_Warning = r3_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Warning) {
            _144_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Warning) {
            _144_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Warning) {
            _144_SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Warning) {
            _144_SM4_state_act_modeInterplay_TSM =
              SSM_st_Indication_modeInterplay_TSM_SM4;
          }
          else {
            _144_SM4_state_act_modeInterplay_TSM =
              SSM_st_Warning_modeInterplay_TSM_SM4;
          }
          break;
        
      }
      _L36_modeInterplay_TSM = _L2_modeInterplay_TSM.t7;
      _L37_modeInterplay_TSM = _L2_modeInterplay_TSM.t8;
      _L38_modeInterplay_TSM = _L2_modeInterplay_TSM.t9;
      _L45_modeInterplay_TSM = _L36_modeInterplay_TSM | _L37_modeInterplay_TSM |
        _L38_modeInterplay_TSM;
      t7_9_modeInterplay_TSM = _L45_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Indication = r1_modeInterplay_TSM |
            r2_modeInterplay_TSM;
          br_2_guard_modeInterplay_TSM_SM4_Indication = t13_modeInterplay_TSM |
            t14_modeInterplay_TSM;
          br_3_guard_modeInterplay_TSM_SM4_Indication =
            t10_12_modeInterplay_TSM;
          br_4_guard_modeInterplay_TSM_SM4_Indication = t7_9_modeInterplay_TSM;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          br_5_guard_modeInterplay_TSM_SM4_Overspeed = t7_9_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Overspeed) {
            _153_SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Overspeed) {
            _153_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Overspeed) {
            _153_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Overspeed) {
            _153_SM4_state_act_modeInterplay_TSM =
              SSM_st_Indication_modeInterplay_TSM_SM4;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_Overspeed) {
            _153_SM4_state_act_modeInterplay_TSM =
              SSM_st_Warning_modeInterplay_TSM_SM4;
          }
          else {
            _153_SM4_state_act_modeInterplay_TSM =
              SSM_st_Overspeed_modeInterplay_TSM_SM4;
          }
          break;
        
      }
      _L33_modeInterplay_TSM = _L2_modeInterplay_TSM.t4;
      _L34_modeInterplay_TSM = _L2_modeInterplay_TSM.t5;
      _L35_modeInterplay_TSM = _L2_modeInterplay_TSM.t6;
      _L46_modeInterplay_TSM = _L33_modeInterplay_TSM | _L34_modeInterplay_TSM |
        _L35_modeInterplay_TSM;
      t4_6_modeInterplay_TSM = _L46_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Normal = t13_modeInterplay_TSM |
            t14_modeInterplay_TSM;
          br_2_guard_modeInterplay_TSM_SM4_Normal = t10_12_modeInterplay_TSM;
          br_3_guard_modeInterplay_TSM_SM4_Normal = t7_9_modeInterplay_TSM;
          br_4_guard_modeInterplay_TSM_SM4_Normal = t4_6_modeInterplay_TSM;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          br_5_guard_modeInterplay_TSM_SM4_Indication = t4_6_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Indication) {
            _162_SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Indication) {
            _162_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Indication) {
            _162_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Indication) {
            _162_SM4_state_act_modeInterplay_TSM =
              SSM_st_Warning_modeInterplay_TSM_SM4;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_Indication) {
            _162_SM4_state_act_modeInterplay_TSM =
              SSM_st_Overspeed_modeInterplay_TSM_SM4;
          }
          else {
            _162_SM4_state_act_modeInterplay_TSM =
              SSM_st_Indication_modeInterplay_TSM_SM4;
          }
          break;
        
      }
      _L32_modeInterplay_TSM = _L2_modeInterplay_TSM.t3;
      t3_modeInterplay_TSM = _L32_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          br_5_guard_modeInterplay_TSM_SM4_Normal = t3_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Normal) {
            _171_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Normal) {
            _171_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Normal) {
            _171_SM4_state_act_modeInterplay_TSM =
              SSM_st_Warning_modeInterplay_TSM_SM4;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Normal) {
            _171_SM4_state_act_modeInterplay_TSM =
              SSM_st_Overspeed_modeInterplay_TSM_SM4;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_Normal) {
            _171_SM4_state_act_modeInterplay_TSM =
              SSM_st_Indication_modeInterplay_TSM_SM4;
          }
          else {
            _171_SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          break;
        
      }
      _L30_modeInterplay_TSM = _L2_modeInterplay_TSM.t1;
      t1_modeInterplay_TSM = _L30_modeInterplay_TSM;
      _L31_modeInterplay_TSM = _L2_modeInterplay_TSM.t2;
      t2_modeInterplay_TSM = _L31_modeInterplay_TSM;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_init = t1_modeInterplay_TSM |
            t2_modeInterplay_TSM;
          br_2_guard_modeInterplay_TSM_SM4_init = t10_12_modeInterplay_TSM;
          br_3_guard_modeInterplay_TSM_SM4_init = t13_modeInterplay_TSM |
            t14_modeInterplay_TSM;
          br_4_guard_modeInterplay_TSM_SM4_init = t7_9_modeInterplay_TSM;
          br_5_guard_modeInterplay_TSM_SM4_init = t4_6_modeInterplay_TSM;
          br_6_guard_modeInterplay_TSM_SM4_init = t3_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_init) {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_init) {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_init) {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_init) {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_Warning_modeInterplay_TSM_SM4;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_init) {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_Overspeed_modeInterplay_TSM_SM4;
          }
          else if (br_6_guard_modeInterplay_TSM_SM4_init) {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_Indication_modeInterplay_TSM_SM4;
          }
          else {
            _180_SM4_state_act_modeInterplay_TSM =
              SSM_st_init_modeInterplay_TSM_SM4;
          }
          _495_SM4_state_act_modeInterplay_TSM =
            _180_SM4_state_act_modeInterplay_TSM;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _495_SM4_state_act_modeInterplay_TSM =
            _171_SM4_state_act_modeInterplay_TSM;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          _495_SM4_state_act_modeInterplay_TSM =
            _162_SM4_state_act_modeInterplay_TSM;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          _495_SM4_state_act_modeInterplay_TSM =
            _153_SM4_state_act_modeInterplay_TSM;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _495_SM4_state_act_modeInterplay_TSM =
            _144_SM4_state_act_modeInterplay_TSM;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _495_SM4_state_act_modeInterplay_TSM =
            SM4_state_act_modeInterplay_TSM;
          break;
        
      }
      SM4_clock_modeInterplay_TSM = _495_SM4_state_act_modeInterplay_TSM;
      /* cb_SM4 */ switch (SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _125_sdmType = last_sdmType;
          _1_sdmType = _125_sdmType;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _L2_modeInterplay_TSM_SM4_Normal = TSM_SDM_Types_Pkg;
          _118_sdmType = _L2_modeInterplay_TSM_SM4_Normal;
          _1_sdmType = _118_sdmType;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          _L2_modeInterplay_TSM_SM4_Indication = TSM_SDM_Types_Pkg;
          _111_sdmType = _L2_modeInterplay_TSM_SM4_Indication;
          _1_sdmType = _111_sdmType;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          _L3_modeInterplay_TSM_SM4_Overspeed = TSM_SDM_Types_Pkg;
          _104_sdmType = _L3_modeInterplay_TSM_SM4_Overspeed;
          _1_sdmType = _104_sdmType;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _L2_modeInterplay_TSM_SM4_Warning = TSM_SDM_Types_Pkg;
          _97_sdmType = _L2_modeInterplay_TSM_SM4_Warning;
          _1_sdmType = _97_sdmType;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _L2_modeInterplay_TSM_SM4_Intervention = TSM_SDM_Types_Pkg;
          _93_sdmType = _L2_modeInterplay_TSM_SM4_Intervention;
          _1_sdmType = _93_sdmType;
          break;
        
      }
      outC->sdmType = _1_sdmType;
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _174_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          _2_revokedSupervisionStatus = _174_revokedSupervisionStatus;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _165_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          _2_revokedSupervisionStatus = _165_revokedSupervisionStatus;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          br_1_clock_modeInterplay_TSM_SM4_Indication =
            br_1_guard_modeInterplay_TSM_SM4_Indication;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Indication) {
            _287_revokedSupervisionStatus =
              Indication_Supervision_SDM_Types_Pkg;
            _156_revokedSupervisionStatus = _287_revokedSupervisionStatus;
          }
          else {
            _281_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _156_revokedSupervisionStatus = _281_revokedSupervisionStatus;
          }
          _2_revokedSupervisionStatus = _156_revokedSupervisionStatus;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          br_1_clock_modeInterplay_TSM_SM4_Overspeed =
            br_1_guard_modeInterplay_TSM_SM4_Overspeed;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Overspeed) {
            _237_revokedSupervisionStatus = Overspeed_Supervision_SDM_Types_Pkg;
            _147_revokedSupervisionStatus = _237_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_TSM_SM4_Overspeed =
              br_2_guard_modeInterplay_TSM_SM4_Overspeed;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              _249_revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _231_revokedSupervisionStatus = _249_revokedSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Overspeed =
                br_3_guard_modeInterplay_TSM_SM4_Overspeed;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                _261_revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                _243_revokedSupervisionStatus = _261_revokedSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_Overspeed =
                  br_4_guard_modeInterplay_TSM_SM4_Overspeed;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
                  _272_revokedSupervisionStatus =
                    Overspeed_Supervision_SDM_Types_Pkg;
                  _255_revokedSupervisionStatus = _272_revokedSupervisionStatus;
                }
                else {
                  _267_revokedSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  _255_revokedSupervisionStatus = _267_revokedSupervisionStatus;
                }
                _243_revokedSupervisionStatus = _255_revokedSupervisionStatus;
              }
              _231_revokedSupervisionStatus = _243_revokedSupervisionStatus;
            }
            _147_revokedSupervisionStatus = _231_revokedSupervisionStatus;
          }
          _2_revokedSupervisionStatus = _147_revokedSupervisionStatus;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          br_1_clock_modeInterplay_TSM_SM4_Warning =
            br_1_guard_modeInterplay_TSM_SM4_Warning;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Warning) {
            _206_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _138_revokedSupervisionStatus = _206_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_TSM_SM4_Warning =
              br_2_guard_modeInterplay_TSM_SM4_Warning;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Warning) {
              _215_revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _201_revokedSupervisionStatus = _215_revokedSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Warning =
                br_3_guard_modeInterplay_TSM_SM4_Warning;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Warning) {
                _222_revokedSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
                _211_revokedSupervisionStatus = _222_revokedSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_Warning =
                  br_4_guard_modeInterplay_TSM_SM4_Warning;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Warning) {
                  _228_revokedSupervisionStatus =
                    Warning_Supervision_SDM_Types_Pkg;
                  _219_revokedSupervisionStatus = _228_revokedSupervisionStatus;
                }
                else {
                  _225_revokedSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  _219_revokedSupervisionStatus = _225_revokedSupervisionStatus;
                }
                _211_revokedSupervisionStatus = _219_revokedSupervisionStatus;
              }
              _201_revokedSupervisionStatus = _211_revokedSupervisionStatus;
            }
            _138_revokedSupervisionStatus = _201_revokedSupervisionStatus;
          }
          _2_revokedSupervisionStatus = _138_revokedSupervisionStatus;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          br_1_clock_modeInterplay_TSM_SM4_Intervention =
            br_1_guard_modeInterplay_TSM_SM4_Intervention;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Intervention) {
            _186_revokedSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _132_revokedSupervisionStatus = _186_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_TSM_SM4_Intervention =
              br_2_guard_modeInterplay_TSM_SM4_Intervention;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Intervention) {
              _192_revokedSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _183_revokedSupervisionStatus = _192_revokedSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Intervention =
                br_3_guard_modeInterplay_TSM_SM4_Intervention;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Intervention) {
                _198_revokedSupervisionStatus =
                  Indication_Supervision_SDM_Types_Pkg;
                _189_revokedSupervisionStatus = _198_revokedSupervisionStatus;
              }
              else {
                _195_revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                _189_revokedSupervisionStatus = _195_revokedSupervisionStatus;
              }
              _183_revokedSupervisionStatus = _189_revokedSupervisionStatus;
            }
            _132_revokedSupervisionStatus = _183_revokedSupervisionStatus;
          }
          _2_revokedSupervisionStatus = _132_revokedSupervisionStatus;
          break;
        
      }
      outC->revokedSupervisionStatus = _2_revokedSupervisionStatus;
      break;
    case SSM_st_RSM_modeInterplay :
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          br_1_guard_modeInterplay_RSM_RSM_Init = last_status ==
            Indication_Supervision_SDM_Types_Pkg;
          br_2_guard_modeInterplay_RSM_RSM_Init = last_status ==
            Intervention_Supervision_SDM_Types_Pkg;
          break;
        
      }
      _L12_modeInterplay_RSM = Undefined_Supervision_SDM_Types_Pkg;
      _L8_modeInterplay_RSM = last_status;
      _L10_modeInterplay_RSM = _L12_modeInterplay_RSM == _L8_modeInterplay_RSM;
      _L13_modeInterplay_RSM = Normal_Supervision_SDM_Types_Pkg;
      _L11_modeInterplay_RSM = _L8_modeInterplay_RSM == _L13_modeInterplay_RSM;
      _L14_modeInterplay_RSM = _L10_modeInterplay_RSM | _L11_modeInterplay_RSM;
      t1_modeInterplay_RSM = _L4_modeInterplay_RSM;
      _L15_modeInterplay_RSM = t1_modeInterplay_RSM;
      _L16_modeInterplay_RSM = _L14_modeInterplay_RSM & _L15_modeInterplay_RSM;
      US_NS2IS_modeInterplay_RSM = _L16_modeInterplay_RSM;
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          br_3_guard_modeInterplay_RSM_RSM_Init = US_NS2IS_modeInterplay_RSM;
          break;
        
      }
      _L22_modeInterplay_RSM = Warning_Supervision_SDM_Types_Pkg;
      _L25_modeInterplay_RSM = _L22_modeInterplay_RSM == _L8_modeInterplay_RSM;
      _L21_modeInterplay_RSM = Overspeed_Supervision_SDM_Types_Pkg;
      _L24_modeInterplay_RSM = _L8_modeInterplay_RSM == _L21_modeInterplay_RSM;
      _L23_modeInterplay_RSM = _L25_modeInterplay_RSM | _L24_modeInterplay_RSM;
      _L7_modeInterplay_RSM = t1_modeInterplay_RSM;
      r1_modeInterplay_RSM = _L7_modeInterplay_RSM;
      _L26_modeInterplay_RSM = r1_modeInterplay_RSM;
      _L27_modeInterplay_RSM = _L23_modeInterplay_RSM & _L26_modeInterplay_RSM;
      WS_OS2IS_modeInterplay_RSM = _L27_modeInterplay_RSM;
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          br_4_guard_modeInterplay_RSM_RSM_Init = WS_OS2IS_modeInterplay_RSM;
          break;
        
      }
      _L31_modeInterplay_RSM = Indication_Supervision_SDM_Types_Pkg;
      _L52_modeInterplay_RSM = _L8_modeInterplay_RSM != _L31_modeInterplay_RSM;
      _L39_modeInterplay_RSM = t2_modeInterplay_RSM;
      _L35_modeInterplay_RSM = Intervention_Supervision_SDM_Types_Pkg;
      _L51_modeInterplay_RSM = _L8_modeInterplay_RSM != _L35_modeInterplay_RSM;
      _L37_modeInterplay_RSM = _L52_modeInterplay_RSM & _L39_modeInterplay_RSM &
        _L51_modeInterplay_RSM;
      notInt2Int_modeInterplay_RSM = _L37_modeInterplay_RSM;
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          br_5_guard_modeInterplay_RSM_RSM_Init = notInt2Int_modeInterplay_RSM;
          if (br_1_guard_modeInterplay_RSM_RSM_Init) {
            _54_RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          }
          else if (br_2_guard_modeInterplay_RSM_RSM_Init) {
            _54_RSM_state_act_modeInterplay_RSM =
              SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
          }
          else if (br_3_guard_modeInterplay_RSM_RSM_Init) {
            _54_RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          }
          else if (br_4_guard_modeInterplay_RSM_RSM_Init) {
            _54_RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          }
          else if (br_5_guard_modeInterplay_RSM_RSM_Init) {
            _54_RSM_state_act_modeInterplay_RSM =
              SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
          }
          else {
            _54_RSM_state_act_modeInterplay_RSM =
              SSM_st_Init_modeInterplay_RSM_RSM;
          }
          _492_RSM_state_act_modeInterplay_RSM =
            _54_RSM_state_act_modeInterplay_RSM;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _492_RSM_state_act_modeInterplay_RSM =
            _47_RSM_state_act_modeInterplay_RSM;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          _492_RSM_state_act_modeInterplay_RSM =
            RSM_state_act_modeInterplay_RSM;
          break;
        
      }
      RSM_clock_modeInterplay_RSM = _492_RSM_state_act_modeInterplay_RSM;
      /* cb_RSM */ switch (RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          _34_sdmType = last_sdmType;
          sdmType = _34_sdmType;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _L3_modeInterplay_RSM_RSM_IndicationStatus = RSM_SDM_Types_Pkg;
          _29_sdmType = _L3_modeInterplay_RSM_RSM_IndicationStatus;
          sdmType = _29_sdmType;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          _L2_modeInterplay_RSM_RSM_InterventionStatus = RSM_SDM_Types_Pkg;
          _27_sdmType = _L2_modeInterplay_RSM_RSM_InterventionStatus;
          sdmType = _27_sdmType;
          break;
        
      }
      outC->sdmType = sdmType;
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          br_1_clock_modeInterplay_RSM_RSM_Init =
            br_1_guard_modeInterplay_RSM_RSM_Init;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_Init) {
            _68_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _50_revokedSupervisionStatus = _68_revokedSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_RSM_RSM_Init =
              br_2_guard_modeInterplay_RSM_RSM_Init;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_RSM_RSM_Init) {
              _74_revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _65_revokedSupervisionStatus = _74_revokedSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_RSM_RSM_Init =
                br_3_guard_modeInterplay_RSM_RSM_Init;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_RSM_RSM_Init) {
                _80_revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                _71_revokedSupervisionStatus = _80_revokedSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_RSM_RSM_Init =
                  br_4_guard_modeInterplay_RSM_RSM_Init;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_RSM_RSM_Init) {
                  _86_revokedSupervisionStatus = last_status;
                  _77_revokedSupervisionStatus = _86_revokedSupervisionStatus;
                }
                else {
                  _83_revokedSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  _77_revokedSupervisionStatus = _83_revokedSupervisionStatus;
                }
                _71_revokedSupervisionStatus = _77_revokedSupervisionStatus;
              }
              _65_revokedSupervisionStatus = _71_revokedSupervisionStatus;
            }
            _50_revokedSupervisionStatus = _65_revokedSupervisionStatus;
          }
          revokedSupervisionStatus = _50_revokedSupervisionStatus;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _43_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          revokedSupervisionStatus = _43_revokedSupervisionStatus;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          br_1_clock_modeInterplay_RSM_RSM_InterventionStatus =
            br_1_guard_modeInterplay_RSM_RSM_InterventionStatus;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_InterventionStatus) {
            _59_revokedSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _39_revokedSupervisionStatus = _59_revokedSupervisionStatus;
          }
          else {
            _57_revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
            _39_revokedSupervisionStatus = _57_revokedSupervisionStatus;
          }
          revokedSupervisionStatus = _39_revokedSupervisionStatus;
          break;
        
      }
      outC->revokedSupervisionStatus = revokedSupervisionStatus;
      break;
    
  }
  /* last_init_ck_triggeredSupervisionStatus */ if (outC->init3) {
    last_triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
  }
  else {
    last_triggeredSupervisionStatus = outC->triggeredSupervisionStatus;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_Init) {
            _467_triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            _413_triggeredSupervisionStatus = _467_triggeredSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_CSM_CSM_Init =
              br_2_guard_modeInterplay_CSM_CSM_Init;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_Init) {
              _470_triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _464_triggeredSupervisionStatus = _470_triggeredSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_CSM_CSM_Init =
                br_3_guard_modeInterplay_CSM_CSM_Init;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_CSM_CSM_Init) {
                _472_triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
                _469_triggeredSupervisionStatus =
                  _472_triggeredSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_CSM_CSM_Init =
                  br_4_guard_modeInterplay_CSM_CSM_Init;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_CSM_CSM_Init) {
                  _474_triggeredSupervisionStatus =
                    Intervention_Supervision_SDM_Types_Pkg;
                  _471_triggeredSupervisionStatus =
                    _474_triggeredSupervisionStatus;
                }
                else {
                  br_5_clock_modeInterplay_CSM_CSM_Init =
                    br_5_guard_modeInterplay_CSM_CSM_Init;
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_CSM_CSM_Init) {
                    _476_triggeredSupervisionStatus =
                      Normal_Supervision_SDM_Types_Pkg;
                    _473_triggeredSupervisionStatus =
                      _476_triggeredSupervisionStatus;
                  }
                  else {
                    br_6_clock_modeInterplay_CSM_CSM_Init =
                      br_6_guard_modeInterplay_CSM_CSM_Init;
                    /* cb_anon_sm */ if (br_6_clock_modeInterplay_CSM_CSM_Init) {
                      _478_triggeredSupervisionStatus =
                        cSupervisionStatus_SDM_Commands_Pkg;
                      _475_triggeredSupervisionStatus =
                        _478_triggeredSupervisionStatus;
                    }
                    else {
                      br_7_clock_modeInterplay_CSM_CSM_Init =
                        br_7_guard_modeInterplay_CSM_CSM_Init;
                      /* cb_anon_sm */ if (br_7_clock_modeInterplay_CSM_CSM_Init) {
                        _480_triggeredSupervisionStatus =
                          Overspeed_Supervision_SDM_Types_Pkg;
                        _477_triggeredSupervisionStatus =
                          _480_triggeredSupervisionStatus;
                      }
                      else {
                        _479_triggeredSupervisionStatus =
                          cSupervisionStatus_SDM_Commands_Pkg;
                        _477_triggeredSupervisionStatus =
                          _479_triggeredSupervisionStatus;
                      }
                      _475_triggeredSupervisionStatus =
                        _477_triggeredSupervisionStatus;
                    }
                    _473_triggeredSupervisionStatus =
                      _475_triggeredSupervisionStatus;
                  }
                  _471_triggeredSupervisionStatus =
                    _473_triggeredSupervisionStatus;
                }
                _469_triggeredSupervisionStatus =
                  _471_triggeredSupervisionStatus;
              }
              _464_triggeredSupervisionStatus = _469_triggeredSupervisionStatus;
            }
            _413_triggeredSupervisionStatus = _464_triggeredSupervisionStatus;
          }
          _16_triggeredSupervisionStatus = _413_triggeredSupervisionStatus;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          br_1_clock_modeInterplay_CSM_CSM_NormalStatus =
            br_1_guard_modeInterplay_CSM_CSM_NormalStatus;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_NormalStatus) {
            _457_triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _406_triggeredSupervisionStatus = _457_triggeredSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_CSM_CSM_NormalStatus =
              br_2_guard_modeInterplay_CSM_CSM_NormalStatus;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_NormalStatus) {
              _460_triggeredSupervisionStatus =
                Warning_Supervision_SDM_Types_Pkg;
              _455_triggeredSupervisionStatus = _460_triggeredSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_CSM_CSM_NormalStatus =
                br_3_guard_modeInterplay_CSM_CSM_NormalStatus;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_CSM_CSM_NormalStatus) {
                _462_triggeredSupervisionStatus =
                  Overspeed_Supervision_SDM_Types_Pkg;
                _459_triggeredSupervisionStatus =
                  _462_triggeredSupervisionStatus;
              }
              else {
                _461_triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                _459_triggeredSupervisionStatus =
                  _461_triggeredSupervisionStatus;
              }
              _455_triggeredSupervisionStatus = _459_triggeredSupervisionStatus;
            }
            _406_triggeredSupervisionStatus = _455_triggeredSupervisionStatus;
          }
          _16_triggeredSupervisionStatus = _406_triggeredSupervisionStatus;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
            _444_triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _399_triggeredSupervisionStatus = _444_triggeredSupervisionStatus;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
              _451_triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _440_triggeredSupervisionStatus = _451_triggeredSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_CSM_CSM_OverspeedStatus =
                br_3_guard_modeInterplay_CSM_CSM_OverspeedStatus;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
                _454_triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
                _448_triggeredSupervisionStatus =
                  _454_triggeredSupervisionStatus;
              }
              else {
                _453_triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                _448_triggeredSupervisionStatus =
                  _453_triggeredSupervisionStatus;
              }
              _440_triggeredSupervisionStatus = _448_triggeredSupervisionStatus;
            }
            _399_triggeredSupervisionStatus = _440_triggeredSupervisionStatus;
          }
          _16_triggeredSupervisionStatus = _399_triggeredSupervisionStatus;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_WarningStatus) {
            _432_triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _392_triggeredSupervisionStatus = _432_triggeredSupervisionStatus;
          }
          else {
            _428_triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            _392_triggeredSupervisionStatus = _428_triggeredSupervisionStatus;
          }
          _16_triggeredSupervisionStatus = _392_triggeredSupervisionStatus;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _388_triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          _16_triggeredSupervisionStatus = _388_triggeredSupervisionStatus;
          break;
        
      }
      outC->triggeredSupervisionStatus = _16_triggeredSupervisionStatus;
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          br_1_clock_modeInterplay_TSM_SM4_init =
            br_1_guard_modeInterplay_TSM_SM4_init;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_init) {
            _334_triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
            _175_triggeredSupervisionStatus = _334_triggeredSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_TSM_SM4_init =
              br_2_guard_modeInterplay_TSM_SM4_init;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_init) {
              _340_triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _331_triggeredSupervisionStatus = _340_triggeredSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_init =
                br_3_guard_modeInterplay_TSM_SM4_init;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_init) {
                _345_triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Types_Pkg;
                _337_triggeredSupervisionStatus =
                  _345_triggeredSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_init =
                  br_4_guard_modeInterplay_TSM_SM4_init;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_init) {
                  _349_triggeredSupervisionStatus =
                    Warning_Supervision_SDM_Types_Pkg;
                  _343_triggeredSupervisionStatus =
                    _349_triggeredSupervisionStatus;
                }
                else {
                  br_5_clock_modeInterplay_TSM_SM4_init =
                    br_5_guard_modeInterplay_TSM_SM4_init;
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_TSM_SM4_init) {
                    _352_triggeredSupervisionStatus =
                      Overspeed_Supervision_SDM_Types_Pkg;
                    _347_triggeredSupervisionStatus =
                      _352_triggeredSupervisionStatus;
                  }
                  else {
                    br_6_clock_modeInterplay_TSM_SM4_init =
                      br_6_guard_modeInterplay_TSM_SM4_init;
                    /* cb_anon_sm */ if (br_6_clock_modeInterplay_TSM_SM4_init) {
                      _354_triggeredSupervisionStatus =
                        Indication_Supervision_SDM_Types_Pkg;
                      _351_triggeredSupervisionStatus =
                        _354_triggeredSupervisionStatus;
                    }
                    else {
                      _353_triggeredSupervisionStatus =
                        cSupervisionStatus_SDM_Commands_Pkg;
                      _351_triggeredSupervisionStatus =
                        _353_triggeredSupervisionStatus;
                    }
                    _347_triggeredSupervisionStatus =
                      _351_triggeredSupervisionStatus;
                  }
                  _343_triggeredSupervisionStatus =
                    _347_triggeredSupervisionStatus;
                }
                _337_triggeredSupervisionStatus =
                  _343_triggeredSupervisionStatus;
              }
              _331_triggeredSupervisionStatus = _337_triggeredSupervisionStatus;
            }
            _175_triggeredSupervisionStatus = _331_triggeredSupervisionStatus;
          }
          _3_triggeredSupervisionStatus = _175_triggeredSupervisionStatus;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          br_1_clock_modeInterplay_TSM_SM4_Normal =
            br_1_guard_modeInterplay_TSM_SM4_Normal;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Normal) {
            _314_triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _166_triggeredSupervisionStatus = _314_triggeredSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_TSM_SM4_Normal =
              br_2_guard_modeInterplay_TSM_SM4_Normal;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Normal) {
              _320_triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _311_triggeredSupervisionStatus = _320_triggeredSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Normal =
                br_3_guard_modeInterplay_TSM_SM4_Normal;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Normal) {
                _325_triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
                _317_triggeredSupervisionStatus =
                  _325_triggeredSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_Normal =
                  br_4_guard_modeInterplay_TSM_SM4_Normal;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Normal) {
                  _328_triggeredSupervisionStatus =
                    Overspeed_Supervision_SDM_Types_Pkg;
                  _323_triggeredSupervisionStatus =
                    _328_triggeredSupervisionStatus;
                }
                else {
                  br_5_clock_modeInterplay_TSM_SM4_Normal =
                    br_5_guard_modeInterplay_TSM_SM4_Normal;
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_TSM_SM4_Normal) {
                    _330_triggeredSupervisionStatus =
                      Indication_Supervision_SDM_Types_Pkg;
                    _327_triggeredSupervisionStatus =
                      _330_triggeredSupervisionStatus;
                  }
                  else {
                    _329_triggeredSupervisionStatus =
                      cSupervisionStatus_SDM_Commands_Pkg;
                    _327_triggeredSupervisionStatus =
                      _329_triggeredSupervisionStatus;
                  }
                  _323_triggeredSupervisionStatus =
                    _327_triggeredSupervisionStatus;
                }
                _317_triggeredSupervisionStatus =
                  _323_triggeredSupervisionStatus;
              }
              _311_triggeredSupervisionStatus = _317_triggeredSupervisionStatus;
            }
            _166_triggeredSupervisionStatus = _311_triggeredSupervisionStatus;
          }
          _3_triggeredSupervisionStatus = _166_triggeredSupervisionStatus;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Indication) {
            _288_triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            _157_triggeredSupervisionStatus = _288_triggeredSupervisionStatus;
          }
          else {
            br_2_clock_modeInterplay_TSM_SM4_Indication =
              br_2_guard_modeInterplay_TSM_SM4_Indication;
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Indication) {
              _296_triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _282_triggeredSupervisionStatus = _296_triggeredSupervisionStatus;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Indication =
                br_3_guard_modeInterplay_TSM_SM4_Indication;
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Indication) {
                _302_triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Types_Pkg;
                _293_triggeredSupervisionStatus =
                  _302_triggeredSupervisionStatus;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_Indication =
                  br_4_guard_modeInterplay_TSM_SM4_Indication;
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Indication) {
                  _307_triggeredSupervisionStatus =
                    Warning_Supervision_SDM_Types_Pkg;
                  _299_triggeredSupervisionStatus =
                    _307_triggeredSupervisionStatus;
                }
                else {
                  br_5_clock_modeInterplay_TSM_SM4_Indication =
                    br_5_guard_modeInterplay_TSM_SM4_Indication;
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_TSM_SM4_Indication) {
                    _310_triggeredSupervisionStatus =
                      Overspeed_Supervision_SDM_Types_Pkg;
                    _305_triggeredSupervisionStatus =
                      _310_triggeredSupervisionStatus;
                  }
                  else {
                    _309_triggeredSupervisionStatus =
                      cSupervisionStatus_SDM_Commands_Pkg;
                    _305_triggeredSupervisionStatus =
                      _309_triggeredSupervisionStatus;
                  }
                  _299_triggeredSupervisionStatus =
                    _305_triggeredSupervisionStatus;
                }
                _293_triggeredSupervisionStatus =
                  _299_triggeredSupervisionStatus;
              }
              _282_triggeredSupervisionStatus = _293_triggeredSupervisionStatus;
            }
            _157_triggeredSupervisionStatus = _282_triggeredSupervisionStatus;
          }
          _3_triggeredSupervisionStatus = _157_triggeredSupervisionStatus;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Overspeed) {
            _238_triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            _148_triggeredSupervisionStatus = _238_triggeredSupervisionStatus;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              _250_triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _232_triggeredSupervisionStatus = _250_triggeredSupervisionStatus;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                _262_triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Types_Pkg;
                _244_triggeredSupervisionStatus =
                  _262_triggeredSupervisionStatus;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
                  _273_triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  _256_triggeredSupervisionStatus =
                    _273_triggeredSupervisionStatus;
                }
                else {
                  br_5_clock_modeInterplay_TSM_SM4_Overspeed =
                    br_5_guard_modeInterplay_TSM_SM4_Overspeed;
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_TSM_SM4_Overspeed) {
                    _279_triggeredSupervisionStatus =
                      Warning_Supervision_SDM_Types_Pkg;
                    _268_triggeredSupervisionStatus =
                      _279_triggeredSupervisionStatus;
                  }
                  else {
                    _277_triggeredSupervisionStatus =
                      cSupervisionStatus_SDM_Commands_Pkg;
                    _268_triggeredSupervisionStatus =
                      _277_triggeredSupervisionStatus;
                  }
                  _256_triggeredSupervisionStatus =
                    _268_triggeredSupervisionStatus;
                }
                _244_triggeredSupervisionStatus =
                  _256_triggeredSupervisionStatus;
              }
              _232_triggeredSupervisionStatus = _244_triggeredSupervisionStatus;
            }
            _148_triggeredSupervisionStatus = _232_triggeredSupervisionStatus;
          }
          _3_triggeredSupervisionStatus = _148_triggeredSupervisionStatus;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Warning) {
            _207_triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _139_triggeredSupervisionStatus = _207_triggeredSupervisionStatus;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Warning) {
              _216_triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              _202_triggeredSupervisionStatus = _216_triggeredSupervisionStatus;
            }
            else {
              _212_triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _202_triggeredSupervisionStatus = _212_triggeredSupervisionStatus;
            }
            _139_triggeredSupervisionStatus = _202_triggeredSupervisionStatus;
          }
          _3_triggeredSupervisionStatus = _139_triggeredSupervisionStatus;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _133_triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          _3_triggeredSupervisionStatus = _133_triggeredSupervisionStatus;
          break;
        
      }
      outC->triggeredSupervisionStatus = _3_triggeredSupervisionStatus;
      break;
    case SSM_st_RSM_modeInterplay :
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_Init) {
            _69_triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            _51_triggeredSupervisionStatus = _69_triggeredSupervisionStatus;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_RSM_RSM_Init) {
              _75_triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              _66_triggeredSupervisionStatus = _75_triggeredSupervisionStatus;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_RSM_RSM_Init) {
                _81_triggeredSupervisionStatus =
                  Indication_Supervision_SDM_Types_Pkg;
                _72_triggeredSupervisionStatus = _81_triggeredSupervisionStatus;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_RSM_RSM_Init) {
                  _87_triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  _78_triggeredSupervisionStatus =
                    _87_triggeredSupervisionStatus;
                }
                else {
                  br_5_clock_modeInterplay_RSM_RSM_Init =
                    br_5_guard_modeInterplay_RSM_RSM_Init;
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_RSM_RSM_Init) {
                    _91_triggeredSupervisionStatus =
                      Intervention_Supervision_SDM_Types_Pkg;
                    _84_triggeredSupervisionStatus =
                      _91_triggeredSupervisionStatus;
                  }
                  else {
                    _89_triggeredSupervisionStatus =
                      cSupervisionStatus_SDM_Commands_Pkg;
                    _84_triggeredSupervisionStatus =
                      _89_triggeredSupervisionStatus;
                  }
                  _78_triggeredSupervisionStatus =
                    _84_triggeredSupervisionStatus;
                }
                _72_triggeredSupervisionStatus = _78_triggeredSupervisionStatus;
              }
              _66_triggeredSupervisionStatus = _72_triggeredSupervisionStatus;
            }
            _51_triggeredSupervisionStatus = _66_triggeredSupervisionStatus;
          }
          triggeredSupervisionStatus = _51_triggeredSupervisionStatus;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          br_1_clock_modeInterplay_RSM_RSM_IndicationStatus =
            br_1_guard_modeInterplay_RSM_RSM_IndicationStatus;
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_IndicationStatus) {
            _63_triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            _44_triggeredSupervisionStatus = _63_triggeredSupervisionStatus;
          }
          else {
            _61_triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            _44_triggeredSupervisionStatus = _61_triggeredSupervisionStatus;
          }
          triggeredSupervisionStatus = _44_triggeredSupervisionStatus;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          _40_triggeredSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          triggeredSupervisionStatus = _40_triggeredSupervisionStatus;
          break;
        
      }
      outC->triggeredSupervisionStatus = triggeredSupervisionStatus;
      break;
    
  }
  /* last_init_ck_revokedSB */ if (outC->init3) {
    last_revokedSB = kcg_false;
  }
  else {
    last_revokedSB = outC->revokedSB;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_Init) {
            _468_revokedSB = kcg_true;
            _414_revokedSB = _468_revokedSB;
          }
          else {
            _465_revokedSB = kcg_false;
            _414_revokedSB = _465_revokedSB;
          }
          _17_revokedSB = _414_revokedSB;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _407_revokedSB = kcg_false;
          _17_revokedSB = _407_revokedSB;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
            _445_revokedSB = kcg_false;
            _400_revokedSB = _445_revokedSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
              _452_revokedSB = kcg_true;
              _441_revokedSB = _452_revokedSB;
            }
            else {
              _449_revokedSB = kcg_false;
              _441_revokedSB = _449_revokedSB;
            }
            _400_revokedSB = _441_revokedSB;
          }
          _17_revokedSB = _400_revokedSB;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_WarningStatus) {
            _433_revokedSB = kcg_false;
            _393_revokedSB = _433_revokedSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_WarningStatus) {
              _438_revokedSB = kcg_true;
              _429_revokedSB = _438_revokedSB;
            }
            else {
              _436_revokedSB = kcg_false;
              _429_revokedSB = _436_revokedSB;
            }
            _393_revokedSB = _429_revokedSB;
          }
          _17_revokedSB = _393_revokedSB;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_InterventionStatus) {
            _422_revokedSB = kcg_false;
            _389_revokedSB = _422_revokedSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_CSM_CSM_InterventionStatus) {
              _426_revokedSB = kcg_true;
              _420_revokedSB = _426_revokedSB;
            }
            else {
              _424_revokedSB = kcg_false;
              _420_revokedSB = _424_revokedSB;
            }
            _389_revokedSB = _420_revokedSB;
          }
          _17_revokedSB = _389_revokedSB;
          break;
        
      }
      outC->revokedSB = _17_revokedSB;
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _176_revokedSB = kcg_false;
          _4_revokedSB = _176_revokedSB;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _167_revokedSB = kcg_false;
          _4_revokedSB = _167_revokedSB;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Indication) {
            _289_revokedSB = kcg_true;
            _158_revokedSB = _289_revokedSB;
          }
          else {
            _283_revokedSB = kcg_false;
            _158_revokedSB = _283_revokedSB;
          }
          _4_revokedSB = _158_revokedSB;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Overspeed) {
            _239_revokedSB = kcg_true;
            _149_revokedSB = _239_revokedSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              _251_revokedSB = kcg_false;
              _233_revokedSB = _251_revokedSB;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                _263_revokedSB = kcg_false;
                _245_revokedSB = _263_revokedSB;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
                  _274_revokedSB = kcg_true;
                  _257_revokedSB = _274_revokedSB;
                }
                else {
                  _269_revokedSB = kcg_false;
                  _257_revokedSB = _269_revokedSB;
                }
                _245_revokedSB = _257_revokedSB;
              }
              _233_revokedSB = _245_revokedSB;
            }
            _149_revokedSB = _233_revokedSB;
          }
          _4_revokedSB = _149_revokedSB;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Warning) {
            _208_revokedSB = kcg_false;
            _140_revokedSB = _208_revokedSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Warning) {
              _217_revokedSB = kcg_false;
              _203_revokedSB = _217_revokedSB;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Warning) {
                _223_revokedSB = kcg_true;
                _213_revokedSB = _223_revokedSB;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Warning) {
                  _229_revokedSB = kcg_true;
                  _220_revokedSB = _229_revokedSB;
                }
                else {
                  _226_revokedSB = kcg_false;
                  _220_revokedSB = _226_revokedSB;
                }
                _213_revokedSB = _220_revokedSB;
              }
              _203_revokedSB = _213_revokedSB;
            }
            _140_revokedSB = _203_revokedSB;
          }
          _4_revokedSB = _140_revokedSB;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Intervention) {
            _187_revokedSB = kcg_true;
            _134_revokedSB = _187_revokedSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Intervention) {
              _193_revokedSB = kcg_false;
              _184_revokedSB = _193_revokedSB;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Intervention) {
                _199_revokedSB = kcg_true;
                _190_revokedSB = _199_revokedSB;
              }
              else {
                _196_revokedSB = kcg_false;
                _190_revokedSB = _196_revokedSB;
              }
              _184_revokedSB = _190_revokedSB;
            }
            _134_revokedSB = _184_revokedSB;
          }
          _4_revokedSB = _134_revokedSB;
          break;
        
      }
      outC->revokedSB = _4_revokedSB;
      break;
    case SSM_st_RSM_modeInterplay :
      revokedSB = kcg_false;
      outC->revokedSB = revokedSB;
      break;
    
  }
  /* last_init_ck_triggeredSB */ if (outC->init3) {
    last_triggeredSB = kcg_false;
  }
  else {
    last_triggeredSB = outC->triggeredSB;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          _415_triggeredSB = kcg_false;
          _18_triggeredSB = _415_triggeredSB;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_NormalStatus) {
            _458_triggeredSB = t4_modeInterplay_CSM;
            _408_triggeredSB = _458_triggeredSB;
          }
          else {
            _456_triggeredSB = kcg_false;
            _408_triggeredSB = _456_triggeredSB;
          }
          _18_triggeredSB = _408_triggeredSB;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_OverspeedStatus) {
            _446_triggeredSB = t4_modeInterplay_CSM;
            _401_triggeredSB = _446_triggeredSB;
          }
          else {
            _442_triggeredSB = kcg_false;
            _401_triggeredSB = _442_triggeredSB;
          }
          _18_triggeredSB = _401_triggeredSB;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_CSM_CSM_WarningStatus) {
            _434_triggeredSB = t4_modeInterplay_CSM;
            _394_triggeredSB = _434_triggeredSB;
          }
          else {
            _430_triggeredSB = kcg_false;
            _394_triggeredSB = _430_triggeredSB;
          }
          _18_triggeredSB = _394_triggeredSB;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _390_triggeredSB = kcg_false;
          _18_triggeredSB = _390_triggeredSB;
          break;
        
      }
      outC->triggeredSB = _18_triggeredSB;
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_init) {
            _335_triggeredSB = kcg_false;
            _177_triggeredSB = _335_triggeredSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_init) {
              _341_triggeredSB = kcg_true;
              _332_triggeredSB = _341_triggeredSB;
            }
            else {
              _338_triggeredSB = kcg_false;
              _332_triggeredSB = _338_triggeredSB;
            }
            _177_triggeredSB = _332_triggeredSB;
          }
          _5_triggeredSB = _177_triggeredSB;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Normal) {
            _315_triggeredSB = kcg_false;
            _168_triggeredSB = _315_triggeredSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Normal) {
              _321_triggeredSB = kcg_true;
              _312_triggeredSB = _321_triggeredSB;
            }
            else {
              _318_triggeredSB = kcg_false;
              _312_triggeredSB = _318_triggeredSB;
            }
            _168_triggeredSB = _312_triggeredSB;
          }
          _5_triggeredSB = _168_triggeredSB;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Indication) {
            _290_triggeredSB = kcg_false;
            _159_triggeredSB = _290_triggeredSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Indication) {
              _297_triggeredSB = kcg_false;
              _284_triggeredSB = _297_triggeredSB;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Indication) {
                _303_triggeredSB = kcg_true;
                _294_triggeredSB = _303_triggeredSB;
              }
              else {
                _300_triggeredSB = kcg_false;
                _294_triggeredSB = _300_triggeredSB;
              }
              _284_triggeredSB = _294_triggeredSB;
            }
            _159_triggeredSB = _284_triggeredSB;
          }
          _5_triggeredSB = _159_triggeredSB;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Overspeed) {
            _240_triggeredSB = kcg_false;
            _150_triggeredSB = _240_triggeredSB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              _252_triggeredSB = kcg_false;
              _234_triggeredSB = _252_triggeredSB;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                _264_triggeredSB = kcg_true;
                _246_triggeredSB = _264_triggeredSB;
              }
              else {
                _258_triggeredSB = kcg_false;
                _246_triggeredSB = _258_triggeredSB;
              }
              _234_triggeredSB = _246_triggeredSB;
            }
            _150_triggeredSB = _234_triggeredSB;
          }
          _5_triggeredSB = _150_triggeredSB;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Warning) {
            _209_triggeredSB = kcg_true;
            _141_triggeredSB = _209_triggeredSB;
          }
          else {
            _204_triggeredSB = kcg_false;
            _141_triggeredSB = _204_triggeredSB;
          }
          _5_triggeredSB = _141_triggeredSB;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _135_triggeredSB = kcg_false;
          _5_triggeredSB = _135_triggeredSB;
          break;
        
      }
      outC->triggeredSB = _5_triggeredSB;
      break;
    case SSM_st_RSM_modeInterplay :
      triggeredSB = kcg_false;
      outC->triggeredSB = triggeredSB;
      break;
    
  }
  /* last_init_ck_revokedEB */ if (outC->init3) {
    last_revokedEB = kcg_false;
  }
  else {
    last_revokedEB = outC->revokedEB;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      /* cb_CSM */ switch (CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          _381_revokedEB = kcg_false;
          _19_revokedEB = _381_revokedEB;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _L15_modeInterplay_CSM_CSM_NormalStatus = r1_modeInterplay_CSM;
          _L10_modeInterplay_CSM_CSM_NormalStatus = r0_modeInterplay_CSM;
          _L12_modeInterplay_CSM_CSM_NormalStatus = last_revokedEB;
          _L16_modeInterplay_CSM_CSM_NormalStatus =
            _L15_modeInterplay_CSM_CSM_NormalStatus |
            _L10_modeInterplay_CSM_CSM_NormalStatus |
            _L12_modeInterplay_CSM_CSM_NormalStatus;
          _374_revokedEB = _L16_modeInterplay_CSM_CSM_NormalStatus;
          _19_revokedEB = _374_revokedEB;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          _367_revokedEB = kcg_false;
          _19_revokedEB = _367_revokedEB;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          _360_revokedEB = kcg_false;
          _19_revokedEB = _360_revokedEB;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _356_revokedEB = kcg_false;
          _19_revokedEB = _356_revokedEB;
          break;
        
      }
      outC->revokedEB = _19_revokedEB;
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _126_revokedEB = kcg_false;
          _6_revokedEB = _126_revokedEB;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _L4_modeInterplay_TSM_SM4_Normal = r0_modeInterplay_TSM;
          _L5_modeInterplay_TSM_SM4_Normal = r1_modeInterplay_TSM;
          _L6_modeInterplay_TSM_SM4_Normal = r2_modeInterplay_TSM;
          _L7_modeInterplay_TSM_SM4_Normal = r3_modeInterplay_TSM;
          _L8_modeInterplay_TSM_SM4_Normal = last_revokedEB;
          _L9_modeInterplay_TSM_SM4_Normal = _L4_modeInterplay_TSM_SM4_Normal |
            _L5_modeInterplay_TSM_SM4_Normal |
            _L6_modeInterplay_TSM_SM4_Normal |
            _L7_modeInterplay_TSM_SM4_Normal | _L8_modeInterplay_TSM_SM4_Normal;
          _119_revokedEB = _L9_modeInterplay_TSM_SM4_Normal;
          _6_revokedEB = _119_revokedEB;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          _L3_modeInterplay_TSM_SM4_Indication = r3_modeInterplay_TSM;
          _L4_modeInterplay_TSM_SM4_Indication = last_revokedEB;
          _L5_modeInterplay_TSM_SM4_Indication =
            _L3_modeInterplay_TSM_SM4_Indication |
            _L4_modeInterplay_TSM_SM4_Indication;
          _112_revokedEB = _L5_modeInterplay_TSM_SM4_Indication;
          _6_revokedEB = _112_revokedEB;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          _105_revokedEB = kcg_false;
          _6_revokedEB = _105_revokedEB;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _98_revokedEB = kcg_false;
          _6_revokedEB = _98_revokedEB;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _94_revokedEB = kcg_false;
          _6_revokedEB = _94_revokedEB;
          break;
        
      }
      outC->revokedEB = _6_revokedEB;
      break;
    case SSM_st_RSM_modeInterplay :
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          _52_revokedEB = kcg_false;
          revokedEB = _52_revokedEB;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _45_revokedEB = kcg_false;
          revokedEB = _45_revokedEB;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_InterventionStatus) {
            _60_revokedEB = kcg_true;
            _41_revokedEB = _60_revokedEB;
          }
          else {
            _58_revokedEB = kcg_false;
            _41_revokedEB = _58_revokedEB;
          }
          revokedEB = _41_revokedEB;
          break;
        
      }
      outC->revokedEB = revokedEB;
      break;
    
  }
  /* last_init_ck_triggeredEB */ if (outC->init3) {
    last_triggeredEB = kcg_false;
  }
  else {
    last_triggeredEB = outC->triggeredEB;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      /* cb_CSM */ switch (CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          _382_triggeredEB = kcg_false;
          _20_triggeredEB = _382_triggeredEB;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _375_triggeredEB = kcg_false;
          _20_triggeredEB = _375_triggeredEB;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          _368_triggeredEB = kcg_false;
          _20_triggeredEB = _368_triggeredEB;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          _361_triggeredEB = kcg_false;
          _20_triggeredEB = _361_triggeredEB;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _L4_modeInterplay_CSM_CSM_InterventionStatus = t5_modeInterplay_CSM;
          _L7_modeInterplay_CSM_CSM_InterventionStatus = last_triggeredEB;
          _L8_modeInterplay_CSM_CSM_InterventionStatus =
            _L4_modeInterplay_CSM_CSM_InterventionStatus |
            _L7_modeInterplay_CSM_CSM_InterventionStatus;
          _357_triggeredEB = _L8_modeInterplay_CSM_CSM_InterventionStatus;
          _20_triggeredEB = _357_triggeredEB;
          break;
        
      }
      outC->triggeredEB = _20_triggeredEB;
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _127_triggeredEB = kcg_false;
          _7_triggeredEB = _127_triggeredEB;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _120_triggeredEB = kcg_false;
          _7_triggeredEB = _120_triggeredEB;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          _113_triggeredEB = kcg_false;
          _7_triggeredEB = _113_triggeredEB;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          _106_triggeredEB = kcg_false;
          _7_triggeredEB = _106_triggeredEB;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _99_triggeredEB = kcg_false;
          _7_triggeredEB = _99_triggeredEB;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _L4_modeInterplay_TSM_SM4_Intervention = t13_modeInterplay_TSM;
          _L5_modeInterplay_TSM_SM4_Intervention = t14_modeInterplay_TSM;
          _L6_modeInterplay_TSM_SM4_Intervention = last_triggeredEB;
          _L3_modeInterplay_TSM_SM4_Intervention =
            _L4_modeInterplay_TSM_SM4_Intervention |
            _L5_modeInterplay_TSM_SM4_Intervention |
            _L6_modeInterplay_TSM_SM4_Intervention;
          _95_triggeredEB = _L3_modeInterplay_TSM_SM4_Intervention;
          _7_triggeredEB = _95_triggeredEB;
          break;
        
      }
      outC->triggeredEB = _7_triggeredEB;
      break;
    case SSM_st_RSM_modeInterplay :
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_Init) {
            _70_triggeredEB = kcg_false;
            _53_triggeredEB = _70_triggeredEB;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_RSM_RSM_Init) {
              _76_triggeredEB = kcg_false;
              _67_triggeredEB = _76_triggeredEB;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_RSM_RSM_Init) {
                _82_triggeredEB = kcg_false;
                _73_triggeredEB = _82_triggeredEB;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_RSM_RSM_Init) {
                  _88_triggeredEB = kcg_false;
                  _79_triggeredEB = _88_triggeredEB;
                }
                else {
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_RSM_RSM_Init) {
                    _92_triggeredEB = kcg_true;
                    _85_triggeredEB = _92_triggeredEB;
                  }
                  else {
                    _90_triggeredEB = kcg_false;
                    _85_triggeredEB = _90_triggeredEB;
                  }
                  _79_triggeredEB = _85_triggeredEB;
                }
                _73_triggeredEB = _79_triggeredEB;
              }
              _67_triggeredEB = _73_triggeredEB;
            }
            _53_triggeredEB = _67_triggeredEB;
          }
          triggeredEB = _53_triggeredEB;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_RSM_RSM_IndicationStatus) {
            _64_triggeredEB = kcg_true;
            _46_triggeredEB = _64_triggeredEB;
          }
          else {
            _62_triggeredEB = kcg_false;
            _46_triggeredEB = _62_triggeredEB;
          }
          triggeredEB = _46_triggeredEB;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          _42_triggeredEB = kcg_false;
          triggeredEB = _42_triggeredEB;
          break;
        
      }
      outC->triggeredEB = triggeredEB;
      break;
    
  }
  /* last_init_ck_revokedTCO */ if (outC->init3) {
    last_revokedTCO = kcg_false;
  }
  else {
    last_revokedTCO = outC->revokedTCO;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      _21_revokedTCO = kcg_false;
      outC->revokedTCO = _21_revokedTCO;
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _178_revokedTCO = kcg_false;
          _8_revokedTCO = _178_revokedTCO;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _169_revokedTCO = kcg_false;
          _8_revokedTCO = _169_revokedTCO;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Indication) {
            _291_revokedTCO = kcg_true;
            _160_revokedTCO = _291_revokedTCO;
          }
          else {
            _285_revokedTCO = kcg_false;
            _160_revokedTCO = _285_revokedTCO;
          }
          _8_revokedTCO = _160_revokedTCO;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Overspeed) {
            _241_revokedTCO = kcg_true;
            _151_revokedTCO = _241_revokedTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              _253_revokedTCO = kcg_false;
              _235_revokedTCO = _253_revokedTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                _265_revokedTCO = kcg_false;
                _247_revokedTCO = _265_revokedTCO;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
                  _275_revokedTCO = kcg_true;
                  _259_revokedTCO = _275_revokedTCO;
                }
                else {
                  _270_revokedTCO = kcg_false;
                  _259_revokedTCO = _270_revokedTCO;
                }
                _247_revokedTCO = _259_revokedTCO;
              }
              _235_revokedTCO = _247_revokedTCO;
            }
            _151_revokedTCO = _235_revokedTCO;
          }
          _8_revokedTCO = _151_revokedTCO;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Warning) {
            _210_revokedTCO = kcg_false;
            _142_revokedTCO = _210_revokedTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Warning) {
              _218_revokedTCO = kcg_false;
              _205_revokedTCO = _218_revokedTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Warning) {
                _224_revokedTCO = kcg_true;
                _214_revokedTCO = _224_revokedTCO;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Warning) {
                  _230_revokedTCO = kcg_true;
                  _221_revokedTCO = _230_revokedTCO;
                }
                else {
                  _227_revokedTCO = kcg_false;
                  _221_revokedTCO = _227_revokedTCO;
                }
                _214_revokedTCO = _221_revokedTCO;
              }
              _205_revokedTCO = _214_revokedTCO;
            }
            _142_revokedTCO = _205_revokedTCO;
          }
          _8_revokedTCO = _142_revokedTCO;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Intervention) {
            _188_revokedTCO = kcg_true;
            _136_revokedTCO = _188_revokedTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Intervention) {
              _194_revokedTCO = kcg_false;
              _185_revokedTCO = _194_revokedTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Intervention) {
                _200_revokedTCO = kcg_true;
                _191_revokedTCO = _200_revokedTCO;
              }
              else {
                _197_revokedTCO = kcg_false;
                _191_revokedTCO = _197_revokedTCO;
              }
              _185_revokedTCO = _191_revokedTCO;
            }
            _136_revokedTCO = _185_revokedTCO;
          }
          _8_revokedTCO = _136_revokedTCO;
          break;
        
      }
      outC->revokedTCO = _8_revokedTCO;
      break;
    case SSM_st_RSM_modeInterplay :
      revokedTCO = kcg_false;
      outC->revokedTCO = revokedTCO;
      break;
    
  }
  /* last_init_ck_triggeredTCO */ if (outC->init3) {
    last_triggeredTCO = kcg_false;
  }
  else {
    last_triggeredTCO = outC->triggeredTCO;
  }
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      _22_triggeredTCO = kcg_false;
      outC->triggeredTCO = _22_triggeredTCO;
      /* cb_CSM */ switch (CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          _383_status = cSupervisionStatus_SDM_Commands_Pkg;
          _23_status = _383_status;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _L4_modeInterplay_CSM_CSM_NormalStatus =
            Normal_Supervision_SDM_Types_Pkg;
          _376_status = _L4_modeInterplay_CSM_CSM_NormalStatus;
          _23_status = _376_status;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          _L13_modeInterplay_CSM_CSM_OverspeedStatus =
            Overspeed_Supervision_SDM_Types_Pkg;
          _369_status = _L13_modeInterplay_CSM_CSM_OverspeedStatus;
          _23_status = _369_status;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          _L2_modeInterplay_CSM_CSM_WarningStatus =
            Warning_Supervision_SDM_Types_Pkg;
          _362_status = _L2_modeInterplay_CSM_CSM_WarningStatus;
          _23_status = _362_status;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          _L2_modeInterplay_CSM_CSM_InterventionStatus =
            Intervention_Supervision_SDM_Types_Pkg;
          _358_status = _L2_modeInterplay_CSM_CSM_InterventionStatus;
          _23_status = _358_status;
          break;
        
      }
      outC->status = _23_status;
      _24_modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
      outC->modeInterplay_state_nxt = _24_modeInterplay_state_nxt;
      _25_modeInterplay_reset_nxt = kcg_false;
      outC->modeInterplay_reset_nxt = _25_modeInterplay_reset_nxt;
      _26_modeInterplay_fired = _500_modeInterplay_fired_strong;
      _499_modeInterplay_fired = _26_modeInterplay_fired;
      /* init_CSM */ if (outC->init) {
        CSM_reset_sel_modeInterplay_CSM = kcg_false;
      }
      else {
        CSM_reset_sel_modeInterplay_CSM = outC->CSM_reset_nxt_modeInterplay_CSM;
      }
      /* init_CSM */ if (outC->init) {
        CSM_reset_prv_modeInterplay_CSM = kcg_false;
      }
      else {
        CSM_reset_prv_modeInterplay_CSM = outC->CSM_reset_act_modeInterplay_CSM;
      }
      /* cb_CSM */ switch (_489_CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          if (br_1_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_4_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_5_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_6_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_7_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_8_guard_modeInterplay_CSM_CSM_Init) {
            _417_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else {
            _417_CSM_reset_act_modeInterplay_CSM =
              br_9_guard_modeInterplay_CSM_CSM_Init;
          }
          outC->CSM_reset_act_modeInterplay_CSM =
            _417_CSM_reset_act_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_1_CSM_modeInterplay_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_2_CSM_modeInterplay_CSM;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_3_CSM_modeInterplay_CSM;
          }
          else if (br_4_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_4_CSM_modeInterplay_CSM;
          }
          else if (br_5_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_5_CSM_modeInterplay_CSM;
          }
          else if (br_6_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_6_CSM_modeInterplay_CSM;
          }
          else if (br_7_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_7_CSM_modeInterplay_CSM;
          }
          else if (br_8_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_8_CSM_modeInterplay_CSM;
          }
          else if (br_9_guard_modeInterplay_CSM_CSM_Init) {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_Init_9_CSM_modeInterplay_CSM;
          }
          else {
            _418_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_no_trans_CSM_modeInterplay_CSM;
          }
          _497_CSM_fired_strong_modeInterplay_CSM =
            _418_CSM_fired_strong_modeInterplay_CSM;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          if (br_1_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _410_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _410_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else {
            _410_CSM_reset_act_modeInterplay_CSM =
              br_3_guard_modeInterplay_CSM_CSM_NormalStatus;
          }
          outC->CSM_reset_act_modeInterplay_CSM =
            _410_CSM_reset_act_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _411_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_NormalStatus_1_CSM_modeInterplay_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _411_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_NormalStatus_2_CSM_modeInterplay_CSM;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_NormalStatus) {
            _411_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_NormalStatus_3_CSM_modeInterplay_CSM;
          }
          else {
            _411_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_no_trans_CSM_modeInterplay_CSM;
          }
          _497_CSM_fired_strong_modeInterplay_CSM =
            _411_CSM_fired_strong_modeInterplay_CSM;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          if (br_1_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _403_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _403_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else {
            _403_CSM_reset_act_modeInterplay_CSM =
              br_3_guard_modeInterplay_CSM_CSM_OverspeedStatus;
          }
          outC->CSM_reset_act_modeInterplay_CSM =
            _403_CSM_reset_act_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _404_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_OverspeedStatus_1_CSM_modeInterplay_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _404_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_OverspeedStatus_2_CSM_modeInterplay_CSM;
          }
          else if (br_3_guard_modeInterplay_CSM_CSM_OverspeedStatus) {
            _404_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_OverspeedStatus_3_CSM_modeInterplay_CSM;
          }
          else {
            _404_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_no_trans_CSM_modeInterplay_CSM;
          }
          _497_CSM_fired_strong_modeInterplay_CSM =
            _404_CSM_fired_strong_modeInterplay_CSM;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          if (br_1_guard_modeInterplay_CSM_CSM_WarningStatus) {
            _396_CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else {
            _396_CSM_reset_act_modeInterplay_CSM =
              br_2_guard_modeInterplay_CSM_CSM_WarningStatus;
          }
          outC->CSM_reset_act_modeInterplay_CSM =
            _396_CSM_reset_act_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_WarningStatus) {
            _397_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_WarningStatus_1_CSM_modeInterplay_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_WarningStatus) {
            _397_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_WarningStatus_2_CSM_modeInterplay_CSM;
          }
          else {
            _397_CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_no_trans_CSM_modeInterplay_CSM;
          }
          _497_CSM_fired_strong_modeInterplay_CSM =
            _397_CSM_fired_strong_modeInterplay_CSM;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          if (br_1_guard_modeInterplay_CSM_CSM_InterventionStatus) {
            CSM_reset_act_modeInterplay_CSM = kcg_true;
          }
          else {
            CSM_reset_act_modeInterplay_CSM =
              br_2_guard_modeInterplay_CSM_CSM_InterventionStatus;
          }
          outC->CSM_reset_act_modeInterplay_CSM =
            CSM_reset_act_modeInterplay_CSM;
          if (br_1_guard_modeInterplay_CSM_CSM_InterventionStatus) {
            CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_InterventionStatus_1_CSM_modeInterplay_CSM;
          }
          else if (br_2_guard_modeInterplay_CSM_CSM_InterventionStatus) {
            CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_InterventionStatus_2_CSM_modeInterplay_CSM;
          }
          else {
            CSM_fired_strong_modeInterplay_CSM =
              SSM_TR_no_trans_CSM_modeInterplay_CSM;
          }
          _497_CSM_fired_strong_modeInterplay_CSM =
            CSM_fired_strong_modeInterplay_CSM;
          break;
        
      }
      /* cb_CSM */ switch (CSM_clock_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          _384_CSM_state_nxt_modeInterplay_CSM =
            SSM_st_Init_modeInterplay_CSM_CSM;
          outC->CSM_state_nxt_modeInterplay_CSM =
            _384_CSM_state_nxt_modeInterplay_CSM;
          _385_CSM_reset_nxt_modeInterplay_CSM = kcg_false;
          outC->CSM_reset_nxt_modeInterplay_CSM =
            _385_CSM_reset_nxt_modeInterplay_CSM;
          _386_CSM_fired_modeInterplay_CSM =
            _497_CSM_fired_strong_modeInterplay_CSM;
          _496_CSM_fired_modeInterplay_CSM = _386_CSM_fired_modeInterplay_CSM;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          _377_CSM_state_nxt_modeInterplay_CSM =
            SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          outC->CSM_state_nxt_modeInterplay_CSM =
            _377_CSM_state_nxt_modeInterplay_CSM;
          _378_CSM_reset_nxt_modeInterplay_CSM = kcg_false;
          outC->CSM_reset_nxt_modeInterplay_CSM =
            _378_CSM_reset_nxt_modeInterplay_CSM;
          _379_CSM_fired_modeInterplay_CSM =
            _497_CSM_fired_strong_modeInterplay_CSM;
          _496_CSM_fired_modeInterplay_CSM = _379_CSM_fired_modeInterplay_CSM;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          _370_CSM_state_nxt_modeInterplay_CSM =
            SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
          outC->CSM_state_nxt_modeInterplay_CSM =
            _370_CSM_state_nxt_modeInterplay_CSM;
          _371_CSM_reset_nxt_modeInterplay_CSM = kcg_false;
          outC->CSM_reset_nxt_modeInterplay_CSM =
            _371_CSM_reset_nxt_modeInterplay_CSM;
          _372_CSM_fired_modeInterplay_CSM =
            _497_CSM_fired_strong_modeInterplay_CSM;
          _496_CSM_fired_modeInterplay_CSM = _372_CSM_fired_modeInterplay_CSM;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          _363_CSM_state_nxt_modeInterplay_CSM =
            SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          outC->CSM_state_nxt_modeInterplay_CSM =
            _363_CSM_state_nxt_modeInterplay_CSM;
          _364_CSM_reset_nxt_modeInterplay_CSM = kcg_false;
          outC->CSM_reset_nxt_modeInterplay_CSM =
            _364_CSM_reset_nxt_modeInterplay_CSM;
          _365_CSM_fired_modeInterplay_CSM =
            _497_CSM_fired_strong_modeInterplay_CSM;
          _496_CSM_fired_modeInterplay_CSM = _365_CSM_fired_modeInterplay_CSM;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          CSM_state_nxt_modeInterplay_CSM =
            SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          outC->CSM_state_nxt_modeInterplay_CSM =
            CSM_state_nxt_modeInterplay_CSM;
          CSM_reset_nxt_modeInterplay_CSM = kcg_false;
          outC->CSM_reset_nxt_modeInterplay_CSM =
            CSM_reset_nxt_modeInterplay_CSM;
          CSM_fired_modeInterplay_CSM = _497_CSM_fired_strong_modeInterplay_CSM;
          _496_CSM_fired_modeInterplay_CSM = CSM_fired_modeInterplay_CSM;
          break;
        
      }
      break;
    case SSM_st_TSM_modeInterplay :
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_init) {
            _336_triggeredTCO = kcg_false;
            _179_triggeredTCO = _336_triggeredTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_init) {
              _342_triggeredTCO = kcg_false;
              _333_triggeredTCO = _342_triggeredTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_init) {
                _346_triggeredTCO = kcg_false;
                _339_triggeredTCO = _346_triggeredTCO;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_init) {
                  _350_triggeredTCO = kcg_true;
                  _344_triggeredTCO = _350_triggeredTCO;
                }
                else {
                  _348_triggeredTCO = kcg_false;
                  _344_triggeredTCO = _348_triggeredTCO;
                }
                _339_triggeredTCO = _344_triggeredTCO;
              }
              _333_triggeredTCO = _339_triggeredTCO;
            }
            _179_triggeredTCO = _333_triggeredTCO;
          }
          _9_triggeredTCO = _179_triggeredTCO;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Normal) {
            _316_triggeredTCO = kcg_false;
            _170_triggeredTCO = _316_triggeredTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Normal) {
              _322_triggeredTCO = kcg_false;
              _313_triggeredTCO = _322_triggeredTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Normal) {
                _326_triggeredTCO = kcg_true;
                _319_triggeredTCO = _326_triggeredTCO;
              }
              else {
                _324_triggeredTCO = kcg_false;
                _319_triggeredTCO = _324_triggeredTCO;
              }
              _313_triggeredTCO = _319_triggeredTCO;
            }
            _170_triggeredTCO = _313_triggeredTCO;
          }
          _9_triggeredTCO = _170_triggeredTCO;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Indication) {
            _292_triggeredTCO = kcg_false;
            _161_triggeredTCO = _292_triggeredTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Indication) {
              _298_triggeredTCO = kcg_false;
              _286_triggeredTCO = _298_triggeredTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Indication) {
                _304_triggeredTCO = kcg_false;
                _295_triggeredTCO = _304_triggeredTCO;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Indication) {
                  _308_triggeredTCO = kcg_true;
                  _301_triggeredTCO = _308_triggeredTCO;
                }
                else {
                  _306_triggeredTCO = kcg_false;
                  _301_triggeredTCO = _306_triggeredTCO;
                }
                _295_triggeredTCO = _301_triggeredTCO;
              }
              _286_triggeredTCO = _295_triggeredTCO;
            }
            _161_triggeredTCO = _286_triggeredTCO;
          }
          _9_triggeredTCO = _161_triggeredTCO;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          /* cb_anon_sm */ if (br_1_clock_modeInterplay_TSM_SM4_Overspeed) {
            _242_triggeredTCO = kcg_false;
            _152_triggeredTCO = _242_triggeredTCO;
          }
          else {
            /* cb_anon_sm */ if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              _254_triggeredTCO = kcg_false;
              _236_triggeredTCO = _254_triggeredTCO;
            }
            else {
              /* cb_anon_sm */ if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                _266_triggeredTCO = kcg_false;
                _248_triggeredTCO = _266_triggeredTCO;
              }
              else {
                /* cb_anon_sm */ if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
                  _276_triggeredTCO = kcg_false;
                  _260_triggeredTCO = _276_triggeredTCO;
                }
                else {
                  /* cb_anon_sm */ if (br_5_clock_modeInterplay_TSM_SM4_Overspeed) {
                    _280_triggeredTCO = kcg_true;
                    _271_triggeredTCO = _280_triggeredTCO;
                  }
                  else {
                    _278_triggeredTCO = kcg_false;
                    _271_triggeredTCO = _278_triggeredTCO;
                  }
                  _260_triggeredTCO = _271_triggeredTCO;
                }
                _248_triggeredTCO = _260_triggeredTCO;
              }
              _236_triggeredTCO = _248_triggeredTCO;
            }
            _152_triggeredTCO = _236_triggeredTCO;
          }
          _9_triggeredTCO = _152_triggeredTCO;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _143_triggeredTCO = kcg_false;
          _9_triggeredTCO = _143_triggeredTCO;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _137_triggeredTCO = kcg_false;
          _9_triggeredTCO = _137_triggeredTCO;
          break;
        
      }
      outC->triggeredTCO = _9_triggeredTCO;
      /* cb_SM4 */ switch (SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _128_status = cSupervisionStatus_SDM_Commands_Pkg;
          _10_status = _128_status;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _L3_modeInterplay_TSM_SM4_Normal = Normal_Supervision_SDM_Types_Pkg;
          _121_status = _L3_modeInterplay_TSM_SM4_Normal;
          _10_status = _121_status;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          _L1_modeInterplay_TSM_SM4_Indication =
            Indication_Supervision_SDM_Types_Pkg;
          _114_status = _L1_modeInterplay_TSM_SM4_Indication;
          _10_status = _114_status;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          _L4_modeInterplay_TSM_SM4_Overspeed =
            Overspeed_Supervision_SDM_Types_Pkg;
          _107_status = _L4_modeInterplay_TSM_SM4_Overspeed;
          _10_status = _107_status;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _L1_modeInterplay_TSM_SM4_Warning = Warning_Supervision_SDM_Types_Pkg;
          _100_status = _L1_modeInterplay_TSM_SM4_Warning;
          _10_status = _100_status;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          _L1_modeInterplay_TSM_SM4_Intervention =
            Intervention_Supervision_SDM_Types_Pkg;
          _96_status = _L1_modeInterplay_TSM_SM4_Intervention;
          _10_status = _96_status;
          break;
        
      }
      outC->status = _10_status;
      _11_modeInterplay_state_nxt = SSM_st_TSM_modeInterplay;
      outC->modeInterplay_state_nxt = _11_modeInterplay_state_nxt;
      _12_modeInterplay_reset_nxt = kcg_false;
      outC->modeInterplay_reset_nxt = _12_modeInterplay_reset_nxt;
      _13_modeInterplay_fired = _500_modeInterplay_fired_strong;
      _499_modeInterplay_fired = _13_modeInterplay_fired;
      /* init_SM4 */ if (outC->init1) {
        SM4_reset_sel_modeInterplay_TSM = kcg_false;
      }
      else {
        SM4_reset_sel_modeInterplay_TSM = outC->SM4_reset_nxt_modeInterplay_TSM;
      }
      /* init_SM4 */ if (outC->init1) {
        SM4_reset_prv_modeInterplay_TSM = kcg_false;
      }
      else {
        SM4_reset_prv_modeInterplay_TSM = outC->SM4_reset_act_modeInterplay_TSM;
      }
      /* cb_SM4 */ switch (_488_SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_init) {
            _181_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_init) {
            _181_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_init) {
            _181_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_init) {
            _181_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_init) {
            _181_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else {
            _181_SM4_reset_act_modeInterplay_TSM =
              br_6_guard_modeInterplay_TSM_SM4_init;
          }
          outC->SM4_reset_act_modeInterplay_TSM =
            _181_SM4_reset_act_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_init) {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_init_1_SM4_modeInterplay_TSM;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_init) {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_init_2_SM4_modeInterplay_TSM;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_init) {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_init_3_SM4_modeInterplay_TSM;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_init) {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_init_4_SM4_modeInterplay_TSM;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_init) {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_init_5_SM4_modeInterplay_TSM;
          }
          else if (br_6_guard_modeInterplay_TSM_SM4_init) {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_init_6_SM4_modeInterplay_TSM;
          }
          else {
            _182_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_no_trans_SM4_modeInterplay_TSM;
          }
          _494_SM4_fired_strong_modeInterplay_TSM =
            _182_SM4_fired_strong_modeInterplay_TSM;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Normal) {
            _172_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Normal) {
            _172_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Normal) {
            _172_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Normal) {
            _172_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else {
            _172_SM4_reset_act_modeInterplay_TSM =
              br_5_guard_modeInterplay_TSM_SM4_Normal;
          }
          outC->SM4_reset_act_modeInterplay_TSM =
            _172_SM4_reset_act_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Normal) {
            _173_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Normal_1_SM4_modeInterplay_TSM;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Normal) {
            _173_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Normal_2_SM4_modeInterplay_TSM;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Normal) {
            _173_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Normal_3_SM4_modeInterplay_TSM;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Normal) {
            _173_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Normal_4_SM4_modeInterplay_TSM;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_Normal) {
            _173_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Normal_5_SM4_modeInterplay_TSM;
          }
          else {
            _173_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_no_trans_SM4_modeInterplay_TSM;
          }
          _494_SM4_fired_strong_modeInterplay_TSM =
            _173_SM4_fired_strong_modeInterplay_TSM;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Indication) {
            _163_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Indication) {
            _163_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Indication) {
            _163_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Indication) {
            _163_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else {
            _163_SM4_reset_act_modeInterplay_TSM =
              br_5_guard_modeInterplay_TSM_SM4_Indication;
          }
          outC->SM4_reset_act_modeInterplay_TSM =
            _163_SM4_reset_act_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Indication) {
            _164_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Indication_1_SM4_modeInterplay_TSM;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Indication) {
            _164_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Indication_2_SM4_modeInterplay_TSM;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Indication) {
            _164_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Indication_3_SM4_modeInterplay_TSM;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Indication) {
            _164_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Indication_4_SM4_modeInterplay_TSM;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_Indication) {
            _164_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Indication_5_SM4_modeInterplay_TSM;
          }
          else {
            _164_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_no_trans_SM4_modeInterplay_TSM;
          }
          _494_SM4_fired_strong_modeInterplay_TSM =
            _164_SM4_fired_strong_modeInterplay_TSM;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Overspeed) {
            _154_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Overspeed) {
            _154_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Overspeed) {
            _154_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Overspeed) {
            _154_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else {
            _154_SM4_reset_act_modeInterplay_TSM =
              br_5_guard_modeInterplay_TSM_SM4_Overspeed;
          }
          outC->SM4_reset_act_modeInterplay_TSM =
            _154_SM4_reset_act_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Overspeed) {
            _155_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Overspeed_1_SM4_modeInterplay_TSM;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Overspeed) {
            _155_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Overspeed_2_SM4_modeInterplay_TSM;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Overspeed) {
            _155_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Overspeed_3_SM4_modeInterplay_TSM;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Overspeed) {
            _155_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Overspeed_4_SM4_modeInterplay_TSM;
          }
          else if (br_5_guard_modeInterplay_TSM_SM4_Overspeed) {
            _155_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Overspeed_5_SM4_modeInterplay_TSM;
          }
          else {
            _155_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_no_trans_SM4_modeInterplay_TSM;
          }
          _494_SM4_fired_strong_modeInterplay_TSM =
            _155_SM4_fired_strong_modeInterplay_TSM;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Warning) {
            _145_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Warning) {
            _145_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Warning) {
            _145_SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else {
            _145_SM4_reset_act_modeInterplay_TSM =
              br_4_guard_modeInterplay_TSM_SM4_Warning;
          }
          outC->SM4_reset_act_modeInterplay_TSM =
            _145_SM4_reset_act_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Warning) {
            _146_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Warning_1_SM4_modeInterplay_TSM;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Warning) {
            _146_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Warning_2_SM4_modeInterplay_TSM;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Warning) {
            _146_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Warning_3_SM4_modeInterplay_TSM;
          }
          else if (br_4_guard_modeInterplay_TSM_SM4_Warning) {
            _146_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Warning_4_SM4_modeInterplay_TSM;
          }
          else {
            _146_SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_no_trans_SM4_modeInterplay_TSM;
          }
          _494_SM4_fired_strong_modeInterplay_TSM =
            _146_SM4_fired_strong_modeInterplay_TSM;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_reset_act_modeInterplay_TSM = kcg_true;
          }
          else {
            SM4_reset_act_modeInterplay_TSM =
              br_3_guard_modeInterplay_TSM_SM4_Intervention;
          }
          outC->SM4_reset_act_modeInterplay_TSM =
            SM4_reset_act_modeInterplay_TSM;
          if (br_1_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Intervention_1_SM4_modeInterplay_TSM;
          }
          else if (br_2_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Intervention_2_SM4_modeInterplay_TSM;
          }
          else if (br_3_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_Intervention_3_SM4_modeInterplay_TSM;
          }
          else {
            SM4_fired_strong_modeInterplay_TSM =
              SSM_TR_no_trans_SM4_modeInterplay_TSM;
          }
          _494_SM4_fired_strong_modeInterplay_TSM =
            SM4_fired_strong_modeInterplay_TSM;
          break;
        
      }
      /* cb_SM4 */ switch (SM4_clock_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          _129_SM4_state_nxt_modeInterplay_TSM =
            SSM_st_init_modeInterplay_TSM_SM4;
          outC->SM4_state_nxt_modeInterplay_TSM =
            _129_SM4_state_nxt_modeInterplay_TSM;
          _130_SM4_reset_nxt_modeInterplay_TSM = kcg_false;
          outC->SM4_reset_nxt_modeInterplay_TSM =
            _130_SM4_reset_nxt_modeInterplay_TSM;
          _131_SM4_fired_modeInterplay_TSM =
            _494_SM4_fired_strong_modeInterplay_TSM;
          _493_SM4_fired_modeInterplay_TSM = _131_SM4_fired_modeInterplay_TSM;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          _122_SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Normal_modeInterplay_TSM_SM4;
          outC->SM4_state_nxt_modeInterplay_TSM =
            _122_SM4_state_nxt_modeInterplay_TSM;
          _123_SM4_reset_nxt_modeInterplay_TSM = kcg_false;
          outC->SM4_reset_nxt_modeInterplay_TSM =
            _123_SM4_reset_nxt_modeInterplay_TSM;
          _124_SM4_fired_modeInterplay_TSM =
            _494_SM4_fired_strong_modeInterplay_TSM;
          _493_SM4_fired_modeInterplay_TSM = _124_SM4_fired_modeInterplay_TSM;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          _115_SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Indication_modeInterplay_TSM_SM4;
          outC->SM4_state_nxt_modeInterplay_TSM =
            _115_SM4_state_nxt_modeInterplay_TSM;
          _116_SM4_reset_nxt_modeInterplay_TSM = kcg_false;
          outC->SM4_reset_nxt_modeInterplay_TSM =
            _116_SM4_reset_nxt_modeInterplay_TSM;
          _117_SM4_fired_modeInterplay_TSM =
            _494_SM4_fired_strong_modeInterplay_TSM;
          _493_SM4_fired_modeInterplay_TSM = _117_SM4_fired_modeInterplay_TSM;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          _108_SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Overspeed_modeInterplay_TSM_SM4;
          outC->SM4_state_nxt_modeInterplay_TSM =
            _108_SM4_state_nxt_modeInterplay_TSM;
          _109_SM4_reset_nxt_modeInterplay_TSM = kcg_false;
          outC->SM4_reset_nxt_modeInterplay_TSM =
            _109_SM4_reset_nxt_modeInterplay_TSM;
          _110_SM4_fired_modeInterplay_TSM =
            _494_SM4_fired_strong_modeInterplay_TSM;
          _493_SM4_fired_modeInterplay_TSM = _110_SM4_fired_modeInterplay_TSM;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          _101_SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Warning_modeInterplay_TSM_SM4;
          outC->SM4_state_nxt_modeInterplay_TSM =
            _101_SM4_state_nxt_modeInterplay_TSM;
          _102_SM4_reset_nxt_modeInterplay_TSM = kcg_false;
          outC->SM4_reset_nxt_modeInterplay_TSM =
            _102_SM4_reset_nxt_modeInterplay_TSM;
          _103_SM4_fired_modeInterplay_TSM =
            _494_SM4_fired_strong_modeInterplay_TSM;
          _493_SM4_fired_modeInterplay_TSM = _103_SM4_fired_modeInterplay_TSM;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Intervention_modeInterplay_TSM_SM4;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SM4_state_nxt_modeInterplay_TSM;
          SM4_reset_nxt_modeInterplay_TSM = kcg_false;
          outC->SM4_reset_nxt_modeInterplay_TSM =
            SM4_reset_nxt_modeInterplay_TSM;
          SM4_fired_modeInterplay_TSM = _494_SM4_fired_strong_modeInterplay_TSM;
          _493_SM4_fired_modeInterplay_TSM = SM4_fired_modeInterplay_TSM;
          break;
        
      }
      break;
    case SSM_st_RSM_modeInterplay :
      triggeredTCO = kcg_false;
      outC->triggeredTCO = triggeredTCO;
      /* cb_RSM */ switch (RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          _35_status = cSupervisionStatus_SDM_Commands_Pkg;
          status = _35_status;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _L2_modeInterplay_RSM_RSM_IndicationStatus =
            Indication_Supervision_SDM_Types_Pkg;
          _30_status = _L2_modeInterplay_RSM_RSM_IndicationStatus;
          status = _30_status;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          _L1_modeInterplay_RSM_RSM_InterventionStatus =
            Intervention_Supervision_SDM_Types_Pkg;
          _28_status = _L1_modeInterplay_RSM_RSM_InterventionStatus;
          status = _28_status;
          break;
        
      }
      outC->status = status;
      modeInterplay_state_nxt = SSM_st_RSM_modeInterplay;
      outC->modeInterplay_state_nxt = modeInterplay_state_nxt;
      modeInterplay_reset_nxt = kcg_false;
      outC->modeInterplay_reset_nxt = modeInterplay_reset_nxt;
      modeInterplay_fired = _500_modeInterplay_fired_strong;
      _499_modeInterplay_fired = modeInterplay_fired;
      /* init_RSM */ if (outC->init2) {
        RSM_reset_sel_modeInterplay_RSM = kcg_false;
      }
      else {
        RSM_reset_sel_modeInterplay_RSM = outC->RSM_reset_nxt_modeInterplay_RSM;
      }
      /* init_RSM */ if (outC->init2) {
        RSM_reset_prv_modeInterplay_RSM = kcg_false;
      }
      else {
        RSM_reset_prv_modeInterplay_RSM = outC->RSM_reset_act_modeInterplay_RSM;
      }
      /* cb_RSM */ switch (_487_RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          if (br_1_guard_modeInterplay_RSM_RSM_Init) {
            _55_RSM_reset_act_modeInterplay_RSM = kcg_true;
          }
          else if (br_2_guard_modeInterplay_RSM_RSM_Init) {
            _55_RSM_reset_act_modeInterplay_RSM = kcg_true;
          }
          else if (br_3_guard_modeInterplay_RSM_RSM_Init) {
            _55_RSM_reset_act_modeInterplay_RSM = kcg_true;
          }
          else if (br_4_guard_modeInterplay_RSM_RSM_Init) {
            _55_RSM_reset_act_modeInterplay_RSM = kcg_true;
          }
          else {
            _55_RSM_reset_act_modeInterplay_RSM =
              br_5_guard_modeInterplay_RSM_RSM_Init;
          }
          outC->RSM_reset_act_modeInterplay_RSM =
            _55_RSM_reset_act_modeInterplay_RSM;
          if (br_1_guard_modeInterplay_RSM_RSM_Init) {
            _56_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_Init_1_RSM_modeInterplay_RSM;
          }
          else if (br_2_guard_modeInterplay_RSM_RSM_Init) {
            _56_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_Init_2_RSM_modeInterplay_RSM;
          }
          else if (br_3_guard_modeInterplay_RSM_RSM_Init) {
            _56_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_Init_3_RSM_modeInterplay_RSM;
          }
          else if (br_4_guard_modeInterplay_RSM_RSM_Init) {
            _56_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_Init_4_RSM_modeInterplay_RSM;
          }
          else if (br_5_guard_modeInterplay_RSM_RSM_Init) {
            _56_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_Init_5_RSM_modeInterplay_RSM;
          }
          else {
            _56_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_no_trans_RSM_modeInterplay_RSM;
          }
          _491_RSM_fired_strong_modeInterplay_RSM =
            _56_RSM_fired_strong_modeInterplay_RSM;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _48_RSM_reset_act_modeInterplay_RSM =
            br_1_guard_modeInterplay_RSM_RSM_IndicationStatus;
          outC->RSM_reset_act_modeInterplay_RSM =
            _48_RSM_reset_act_modeInterplay_RSM;
          if (br_1_guard_modeInterplay_RSM_RSM_IndicationStatus) {
            _49_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_IndicationStatus_1_RSM_modeInterplay_RSM;
          }
          else {
            _49_RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_no_trans_RSM_modeInterplay_RSM;
          }
          _491_RSM_fired_strong_modeInterplay_RSM =
            _49_RSM_fired_strong_modeInterplay_RSM;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          RSM_reset_act_modeInterplay_RSM =
            br_1_guard_modeInterplay_RSM_RSM_InterventionStatus;
          outC->RSM_reset_act_modeInterplay_RSM =
            RSM_reset_act_modeInterplay_RSM;
          if (br_1_guard_modeInterplay_RSM_RSM_InterventionStatus) {
            RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_InterventionStatus_1_RSM_modeInterplay_RSM;
          }
          else {
            RSM_fired_strong_modeInterplay_RSM =
              SSM_TR_no_trans_RSM_modeInterplay_RSM;
          }
          _491_RSM_fired_strong_modeInterplay_RSM =
            RSM_fired_strong_modeInterplay_RSM;
          break;
        
      }
      /* cb_RSM */ switch (RSM_clock_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          _36_RSM_state_nxt_modeInterplay_RSM =
            SSM_st_Init_modeInterplay_RSM_RSM;
          outC->RSM_state_nxt_modeInterplay_RSM =
            _36_RSM_state_nxt_modeInterplay_RSM;
          _37_RSM_reset_nxt_modeInterplay_RSM = kcg_false;
          outC->RSM_reset_nxt_modeInterplay_RSM =
            _37_RSM_reset_nxt_modeInterplay_RSM;
          _38_RSM_fired_modeInterplay_RSM =
            _491_RSM_fired_strong_modeInterplay_RSM;
          _490_RSM_fired_modeInterplay_RSM = _38_RSM_fired_modeInterplay_RSM;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          _31_RSM_state_nxt_modeInterplay_RSM =
            SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          outC->RSM_state_nxt_modeInterplay_RSM =
            _31_RSM_state_nxt_modeInterplay_RSM;
          _32_RSM_reset_nxt_modeInterplay_RSM = kcg_false;
          outC->RSM_reset_nxt_modeInterplay_RSM =
            _32_RSM_reset_nxt_modeInterplay_RSM;
          _33_RSM_fired_modeInterplay_RSM =
            _491_RSM_fired_strong_modeInterplay_RSM;
          _490_RSM_fired_modeInterplay_RSM = _33_RSM_fired_modeInterplay_RSM;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          RSM_state_nxt_modeInterplay_RSM =
            SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
          outC->RSM_state_nxt_modeInterplay_RSM =
            RSM_state_nxt_modeInterplay_RSM;
          RSM_reset_nxt_modeInterplay_RSM = kcg_false;
          outC->RSM_reset_nxt_modeInterplay_RSM =
            RSM_reset_nxt_modeInterplay_RSM;
          RSM_fired_modeInterplay_RSM = _491_RSM_fired_strong_modeInterplay_RSM;
          _490_RSM_fired_modeInterplay_RSM = RSM_fired_modeInterplay_RSM;
          break;
        
      }
      break;
    
  }
  kcg_copy_Target_T_TargetManagement_types(&_L25, mrdt);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L31, TrainData_int);
  _L24 = /* 1 */ CommandTripBraking_SDM_Commands_Pkg(&_L26, &_L25, &_L31);
  _L30 = outC->status;
  outC->supVisStatus = _L30;
  outC->ebCmd = _L24;
  /* act_modeInterplay */ switch (_501_modeInterplay_state_act) {
    case SSM_st_CSM_modeInterplay :
      outC->init = kcg_false;
      break;
    case SSM_st_TSM_modeInterplay :
      outC->init1 = kcg_false;
      break;
    case SSM_st_RSM_modeInterplay :
      outC->init2 = kcg_false;
      break;
    
  }
  outC->init3 = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CmdTrainSupervisionStatus_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

