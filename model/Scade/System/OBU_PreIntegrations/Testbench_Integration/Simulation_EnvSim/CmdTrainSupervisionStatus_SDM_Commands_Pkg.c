/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CmdTrainSupervisionStatus_SDM_Commands_Pkg.h"

void CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
}

/* SDM_Commands_Pkg::CmdTrainSupervisionStatus */
void CmdTrainSupervisionStatus_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::SupervisedTargetsListUpdated */kcg_bool SupervisedTargetsListUpdated,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::mrdt */Target_T_TargetManagement_types *mrdt,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::floiIsSB1 */kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::TrainData_int */trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CmdTrainSupervisionStatus_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L102 */
  static kcg_bool _L102_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L78 */
  static kcg_bool _L78_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::_L58 */
  static kcg_bool _L58_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c5 */
  static kcg_bool c5_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c4 */
  static kcg_bool c4_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c3 */
  static kcg_bool c3_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::c1 */
  static kcg_bool c1_modeInterplay_CSM;
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
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_act_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
  static SSM_ST_CSM_modeInterplay_CSM CSM_state_sel_modeInterplay_CSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_1_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_2_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM::Init */
  static kcg_bool br_6_guard_modeInterplay_CSM_CSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L2 */
  static TSM_triggerCond_T_SDM_Commands_Pkg _L2_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::_L1 */
  static TSM_revokeCond_T_SDM_Commands_Pkg _L1_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t10_12 */
  static kcg_bool t10_12_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t7_9 */
  static kcg_bool t7_9_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::t4_6 */
  static kcg_bool t4_6_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_act_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
  static SSM_ST_SM4_modeInterplay_TSM SM4_state_sel_modeInterplay_TSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Intervention */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Intervention;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Warning */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_Warning;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_5_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Overspeed */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Overspeed;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Indication */
  static kcg_bool br_2_guard_modeInterplay_TSM_SM4_Indication;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::Normal */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_Normal;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_2_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_4_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_3_clock_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_1_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4::init */
  static kcg_bool br_3_guard_modeInterplay_TSM_SM4_init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::WS_OS2IS */
  static kcg_bool WS_OS2IS_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::US_NS2IS */
  static kcg_bool US_NS2IS_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::notInt2Int */
  static kcg_bool notInt2Int_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::t2 */
  static kcg_bool t2_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::t1 */
  static kcg_bool t1_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_act_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
  static SSM_ST_RSM_modeInterplay_RSM RSM_state_sel_modeInterplay_RSM;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::InterventionStatus */
  static kcg_bool br_1_guard_modeInterplay_RSM_RSM_InterventionStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::IndicationStatus */
  static kcg_bool br_1_guard_modeInterplay_RSM_RSM_IndicationStatus;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_2_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_4_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_5_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_3_clock_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_1_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM::Init */
  static kcg_bool br_2_guard_modeInterplay_RSM_RSM_Init;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::status */
  static SupervisionStatus_T_SDM_Types_Pkg last_status;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::sdmType */
  static SDM_Types_T_SDM_Types_Pkg last_sdmType;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_sel;
  /* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
  static SSM_ST_modeInterplay modeInterplay_state_act;
  
  /* 1 */
  CalcRSMandPreindicationLocation_SDM_Commands_Pkg(
    locations,
    trainLocations,
    &br_5_clock_modeInterplay_RSM_RSM_Init,
    &br_4_clock_modeInterplay_RSM_RSM_Init);
  if (outC->init3) {
    modeInterplay_state_sel = SSM_st_CSM_modeInterplay;
    last_sdmType = cSDM_Types_SDM_Commands_Pkg;
    last_status = cSupervisionStatus_SDM_Commands_Pkg;
  }
  else {
    modeInterplay_state_sel = outC->modeInterplay_state_nxt;
    last_sdmType = outC->sdmType;
    last_status = outC->supVisStatus;
  }
  switch (modeInterplay_state_sel) {
    case SSM_st_CSM_modeInterplay :
      t1_modeInterplay_RSM = SupervisedTargetsListUpdated &
        br_4_clock_modeInterplay_RSM_RSM_Init;
      if (br_5_clock_modeInterplay_RSM_RSM_Init) {
        br_3_clock_modeInterplay_RSM_RSM_Init = kcg_true;
        modeInterplay_state_act = SSM_st_TSM_modeInterplay;
      }
      else {
        if (t1_modeInterplay_RSM) {
          modeInterplay_state_act = SSM_st_RSM_modeInterplay;
        }
        else {
          modeInterplay_state_act = SSM_st_CSM_modeInterplay;
        }
        br_3_clock_modeInterplay_RSM_RSM_Init = t1_modeInterplay_RSM;
      }
      break;
    case SSM_st_TSM_modeInterplay :
      t2_modeInterplay_RSM = SupervisedTargetsListUpdated &
        !br_5_clock_modeInterplay_RSM_RSM_Init;
      if (br_4_clock_modeInterplay_RSM_RSM_Init) {
        br_3_clock_modeInterplay_RSM_RSM_Init = kcg_true;
        modeInterplay_state_act = SSM_st_RSM_modeInterplay;
      }
      else {
        if (t2_modeInterplay_RSM) {
          modeInterplay_state_act = SSM_st_CSM_modeInterplay;
        }
        else {
          modeInterplay_state_act = SSM_st_TSM_modeInterplay;
        }
        br_3_clock_modeInterplay_RSM_RSM_Init = t2_modeInterplay_RSM;
      }
      break;
    case SSM_st_RSM_modeInterplay :
      br_1_guard_modeInterplay_RSM_RSM_InterventionStatus =
        SupervisedTargetsListUpdated & !br_5_clock_modeInterplay_RSM_RSM_Init;
      br_1_guard_modeInterplay_RSM_RSM_IndicationStatus =
        SupervisedTargetsListUpdated & br_5_clock_modeInterplay_RSM_RSM_Init &
        !br_4_clock_modeInterplay_RSM_RSM_Init;
      if (br_1_guard_modeInterplay_RSM_RSM_InterventionStatus) {
        br_3_clock_modeInterplay_RSM_RSM_Init = kcg_true;
        modeInterplay_state_act = SSM_st_CSM_modeInterplay;
      }
      else {
        if (br_1_guard_modeInterplay_RSM_RSM_IndicationStatus) {
          modeInterplay_state_act = SSM_st_TSM_modeInterplay;
        }
        else {
          modeInterplay_state_act = SSM_st_RSM_modeInterplay;
        }
        br_3_clock_modeInterplay_RSM_RSM_Init =
          br_1_guard_modeInterplay_RSM_RSM_IndicationStatus;
      }
      break;
    
  }
  switch (modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      if (br_3_clock_modeInterplay_RSM_RSM_Init) {
        outC->init = kcg_true;
      }
      if (outC->init) {
        RSM_state_sel_modeInterplay_RSM = SSM_st_Init_modeInterplay_RSM_RSM;
      }
      else {
        RSM_state_sel_modeInterplay_RSM = outC->RSM_state_nxt_modeInterplay_RSM;
      }
      t1_modeInterplay_RSM = (*speeds).V_est <= (*speeds).V_release;
      t2_modeInterplay_RSM = !t1_modeInterplay_RSM;
      outC->triggeredSB = kcg_false;
      outC->revokedSB = kcg_false;
      US_NS2IS_modeInterplay_RSM = ((Undefined_Supervision_SDM_Types_Pkg ==
            last_status) | (last_status == Normal_Supervision_SDM_Types_Pkg)) &
        t1_modeInterplay_RSM;
      WS_OS2IS_modeInterplay_RSM = ((Warning_Supervision_SDM_Types_Pkg ==
            last_status) | (last_status ==
            Overspeed_Supervision_SDM_Types_Pkg)) & t1_modeInterplay_RSM;
      notInt2Int_modeInterplay_RSM = (last_status !=
          Indication_Supervision_SDM_Types_Pkg) & t2_modeInterplay_RSM &
        (last_status != Intervention_Supervision_SDM_Types_Pkg);
      switch (RSM_state_sel_modeInterplay_RSM) {
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          br_1_guard_modeInterplay_RSM_RSM_InterventionStatus =
            (*speeds).OdoStandStill;
          if (br_1_guard_modeInterplay_RSM_RSM_InterventionStatus) {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
            outC->revokedSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
          }
          else {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
          }
          outC->triggeredSupervisionStatus =
            cSupervisionStatus_SDM_Commands_Pkg;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          br_1_guard_modeInterplay_RSM_RSM_IndicationStatus =
            t2_modeInterplay_RSM;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          if (br_1_guard_modeInterplay_RSM_RSM_IndicationStatus) {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
            outC->triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
          }
          else {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
            outC->triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
          }
          break;
        case SSM_st_Init_modeInterplay_RSM_RSM :
          br_1_guard_modeInterplay_RSM_RSM_Init = last_status ==
            Indication_Supervision_SDM_Types_Pkg;
          br_2_guard_modeInterplay_RSM_RSM_Init = last_status ==
            Intervention_Supervision_SDM_Types_Pkg;
          if (br_1_guard_modeInterplay_RSM_RSM_Init) {
            RSM_state_act_modeInterplay_RSM =
              SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            outC->triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
          }
          else {
            if (br_2_guard_modeInterplay_RSM_RSM_Init) {
              RSM_state_act_modeInterplay_RSM =
                SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
            }
            else if (US_NS2IS_modeInterplay_RSM) {
              RSM_state_act_modeInterplay_RSM =
                SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
            }
            else if (WS_OS2IS_modeInterplay_RSM) {
              RSM_state_act_modeInterplay_RSM =
                SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
            }
            else if (notInt2Int_modeInterplay_RSM) {
              RSM_state_act_modeInterplay_RSM =
                SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
            }
            else {
              RSM_state_act_modeInterplay_RSM =
                SSM_st_Init_modeInterplay_RSM_RSM;
            }
            br_2_clock_modeInterplay_RSM_RSM_Init =
              br_2_guard_modeInterplay_RSM_RSM_Init;
            if (br_2_clock_modeInterplay_RSM_RSM_Init) {
              outC->revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
            }
            else {
              br_3_clock_modeInterplay_RSM_RSM_Init =
                US_NS2IS_modeInterplay_RSM;
              if (br_3_clock_modeInterplay_RSM_RSM_Init) {
                outC->revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                outC->triggeredSupervisionStatus =
                  Indication_Supervision_SDM_Types_Pkg;
              }
              else {
                br_4_clock_modeInterplay_RSM_RSM_Init =
                  WS_OS2IS_modeInterplay_RSM;
                if (br_4_clock_modeInterplay_RSM_RSM_Init) {
                  outC->revokedSupervisionStatus = last_status;
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                }
                else {
                  outC->revokedSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  br_5_clock_modeInterplay_RSM_RSM_Init =
                    notInt2Int_modeInterplay_RSM;
                  if (br_5_clock_modeInterplay_RSM_RSM_Init) {
                    outC->triggeredSupervisionStatus =
                      Intervention_Supervision_SDM_Types_Pkg;
                  }
                  else {
                    outC->triggeredSupervisionStatus =
                      cSupervisionStatus_SDM_Commands_Pkg;
                  }
                }
              }
            }
          }
          break;
        
      }
      switch (RSM_state_act_modeInterplay_RSM) {
        case SSM_st_Init_modeInterplay_RSM_RSM :
          outC->sdmType = last_sdmType;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          outC->sdmType = RSM_SDM_Types_Pkg;
          break;
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          outC->sdmType = RSM_SDM_Types_Pkg;
          break;
        
      }
      break;
    case SSM_st_TSM_modeInterplay :
      if (br_3_clock_modeInterplay_RSM_RSM_Init) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        SM4_state_sel_modeInterplay_TSM = SSM_st_init_modeInterplay_TSM_SM4;
      }
      else {
        SM4_state_sel_modeInterplay_TSM = outC->SM4_state_nxt_modeInterplay_TSM;
      }
      /* 1 */
      CalcRevokationCondForTSM_SDM_Commands_Pkg(
        speeds,
        locations,
        mrdt,
        trainLocations,
        floiIsSB1,
        &_L1_modeInterplay_TSM);
      /* 1 */
      CalcTriggerCondForTSM_SDM_Commands_Pkg(
        speeds,
        locations,
        mrdt,
        trainLocations,
        floiIsSB1,
        &_L2_modeInterplay_TSM);
      t10_12_modeInterplay_TSM = _L2_modeInterplay_TSM.t10 |
        _L2_modeInterplay_TSM.t11 | _L2_modeInterplay_TSM.t12;
      t7_9_modeInterplay_TSM = _L2_modeInterplay_TSM.t7 |
        _L2_modeInterplay_TSM.t8 | _L2_modeInterplay_TSM.t9;
      t4_6_modeInterplay_TSM = _L2_modeInterplay_TSM.t4 |
        _L2_modeInterplay_TSM.t5 | _L2_modeInterplay_TSM.t6;
      switch (SM4_state_sel_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Intervention =
            _L1_modeInterplay_TSM.r1 | _L1_modeInterplay_TSM.r2;
          outC->triggeredSB = kcg_false;
          outC->triggeredSupervisionStatus =
            cSupervisionStatus_SDM_Commands_Pkg;
          if (br_1_guard_modeInterplay_TSM_SM4_Intervention) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
            outC->revokedSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            outC->revokedSB = kcg_true;
          }
          else {
            if (_L1_modeInterplay_TSM.r0) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Normal_modeInterplay_TSM_SM4;
            }
            else if (_L1_modeInterplay_TSM.r3) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Indication_modeInterplay_TSM_SM4;
            }
            else {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            br_2_clock_modeInterplay_TSM_SM4_Intervention =
              _L1_modeInterplay_TSM.r0;
            if (br_2_clock_modeInterplay_TSM_SM4_Intervention) {
              outC->revokedSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              outC->revokedSB = kcg_false;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Intervention =
                _L1_modeInterplay_TSM.r3;
              if (br_3_clock_modeInterplay_TSM_SM4_Intervention) {
                outC->revokedSupervisionStatus =
                  Indication_Supervision_SDM_Types_Pkg;
                outC->revokedSB = kcg_true;
              }
              else {
                outC->revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                outC->revokedSB = kcg_false;
              }
            }
          }
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Warning = t10_12_modeInterplay_TSM;
          br_2_guard_modeInterplay_TSM_SM4_Warning = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          br_3_guard_modeInterplay_TSM_SM4_Warning = _L1_modeInterplay_TSM.r1 |
            _L1_modeInterplay_TSM.r2;
          if (br_1_guard_modeInterplay_TSM_SM4_Warning) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
            outC->triggeredSB = kcg_true;
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            outC->triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
          }
          else {
            if (br_2_guard_modeInterplay_TSM_SM4_Warning) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (br_3_guard_modeInterplay_TSM_SM4_Warning) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Normal_modeInterplay_TSM_SM4;
            }
            else if (_L1_modeInterplay_TSM.r3) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Indication_modeInterplay_TSM_SM4;
            }
            else {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Warning_modeInterplay_TSM_SM4;
            }
            outC->triggeredSB = kcg_false;
            br_2_clock_modeInterplay_TSM_SM4_Warning =
              br_2_guard_modeInterplay_TSM_SM4_Warning;
            if (br_2_clock_modeInterplay_TSM_SM4_Warning) {
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Warning =
                br_3_guard_modeInterplay_TSM_SM4_Warning;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              if (br_3_clock_modeInterplay_TSM_SM4_Warning) {
                outC->revokedSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
                outC->revokedSB = kcg_true;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_Warning =
                  _L1_modeInterplay_TSM.r3;
                if (br_4_clock_modeInterplay_TSM_SM4_Warning) {
                  outC->revokedSupervisionStatus =
                    Warning_Supervision_SDM_Types_Pkg;
                  outC->revokedSB = kcg_true;
                }
                else {
                  outC->revokedSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  outC->revokedSB = kcg_false;
                }
              }
            }
          }
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Overspeed =
            _L1_modeInterplay_TSM.r1 | _L1_modeInterplay_TSM.r2;
          br_2_guard_modeInterplay_TSM_SM4_Overspeed =
            _L2_modeInterplay_TSM.t13 | _L2_modeInterplay_TSM.t14;
          if (br_1_guard_modeInterplay_TSM_SM4_Overspeed) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
            outC->triggeredSB = kcg_false;
            outC->revokedSB = kcg_true;
            outC->revokedSupervisionStatus =
              Overspeed_Supervision_SDM_Types_Pkg;
            outC->triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
          }
          else {
            if (br_2_guard_modeInterplay_TSM_SM4_Overspeed) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (_L1_modeInterplay_TSM.r3) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Indication_modeInterplay_TSM_SM4;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Warning_modeInterplay_TSM_SM4;
            }
            else {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Overspeed_modeInterplay_TSM_SM4;
            }
            br_2_clock_modeInterplay_TSM_SM4_Overspeed =
              br_2_guard_modeInterplay_TSM_SM4_Overspeed;
            if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
              outC->triggeredSB = kcg_false;
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Overspeed =
                t10_12_modeInterplay_TSM;
              if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
                outC->triggeredSB = kcg_true;
                outC->revokedSB = kcg_false;
                outC->revokedSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
                outC->triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Types_Pkg;
              }
              else {
                outC->triggeredSB = kcg_false;
                br_4_clock_modeInterplay_TSM_SM4_Overspeed =
                  _L1_modeInterplay_TSM.r3;
                if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
                  outC->revokedSB = kcg_true;
                  outC->revokedSupervisionStatus =
                    Overspeed_Supervision_SDM_Types_Pkg;
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                }
                else {
                  outC->revokedSB = kcg_false;
                  outC->revokedSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                  br_5_clock_modeInterplay_TSM_SM4_Overspeed =
                    t7_9_modeInterplay_TSM;
                  if (br_5_clock_modeInterplay_TSM_SM4_Overspeed) {
                    outC->triggeredSupervisionStatus =
                      Warning_Supervision_SDM_Types_Pkg;
                  }
                  else {
                    outC->triggeredSupervisionStatus =
                      cSupervisionStatus_SDM_Commands_Pkg;
                  }
                }
              }
            }
          }
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Indication =
            _L1_modeInterplay_TSM.r1 | _L1_modeInterplay_TSM.r2;
          br_2_guard_modeInterplay_TSM_SM4_Indication =
            _L2_modeInterplay_TSM.t13 | _L2_modeInterplay_TSM.t14;
          if (br_1_guard_modeInterplay_TSM_SM4_Indication) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
            outC->triggeredSB = kcg_false;
            outC->revokedSB = kcg_true;
            outC->revokedSupervisionStatus =
              Indication_Supervision_SDM_Types_Pkg;
            outC->triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
          }
          else {
            if (br_2_guard_modeInterplay_TSM_SM4_Indication) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Warning_modeInterplay_TSM_SM4;
            }
            else if (t4_6_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Overspeed_modeInterplay_TSM_SM4;
            }
            else {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Indication_modeInterplay_TSM_SM4;
            }
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            br_2_clock_modeInterplay_TSM_SM4_Indication =
              br_2_guard_modeInterplay_TSM_SM4_Indication;
            if (br_2_clock_modeInterplay_TSM_SM4_Indication) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              outC->triggeredSB = kcg_false;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Indication =
                t10_12_modeInterplay_TSM;
              if (br_3_clock_modeInterplay_TSM_SM4_Indication) {
                outC->triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Types_Pkg;
                outC->triggeredSB = kcg_true;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_Indication =
                  t7_9_modeInterplay_TSM;
                if (br_4_clock_modeInterplay_TSM_SM4_Indication) {
                  outC->triggeredSupervisionStatus =
                    Warning_Supervision_SDM_Types_Pkg;
                }
                else if (t4_6_modeInterplay_TSM) {
                  outC->triggeredSupervisionStatus =
                    Overspeed_Supervision_SDM_Types_Pkg;
                }
                else {
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                }
                outC->triggeredSB = kcg_false;
              }
            }
          }
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_Normal = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          outC->revokedSB = kcg_false;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          if (br_1_guard_modeInterplay_TSM_SM4_Normal) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Intervention_modeInterplay_TSM_SM4;
            outC->triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            outC->triggeredSB = kcg_false;
          }
          else {
            if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Warning_modeInterplay_TSM_SM4;
            }
            else if (t4_6_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Overspeed_modeInterplay_TSM_SM4;
            }
            else if (_L2_modeInterplay_TSM.t3) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Indication_modeInterplay_TSM_SM4;
            }
            else {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Normal_modeInterplay_TSM_SM4;
            }
            br_2_clock_modeInterplay_TSM_SM4_Normal = t10_12_modeInterplay_TSM;
            if (br_2_clock_modeInterplay_TSM_SM4_Normal) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              outC->triggeredSB = kcg_true;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_Normal = t7_9_modeInterplay_TSM;
              if (br_3_clock_modeInterplay_TSM_SM4_Normal) {
                outC->triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
              }
              else if (t4_6_modeInterplay_TSM) {
                outC->triggeredSupervisionStatus =
                  Overspeed_Supervision_SDM_Types_Pkg;
              }
              else if (_L2_modeInterplay_TSM.t3) {
                outC->triggeredSupervisionStatus =
                  Indication_Supervision_SDM_Types_Pkg;
              }
              else {
                outC->triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
              }
              outC->triggeredSB = kcg_false;
            }
          }
          break;
        case SSM_st_init_modeInterplay_TSM_SM4 :
          br_1_guard_modeInterplay_TSM_SM4_init = _L2_modeInterplay_TSM.t1 |
            _L2_modeInterplay_TSM.t2;
          br_3_guard_modeInterplay_TSM_SM4_init = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14;
          outC->revokedSB = kcg_false;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          if (br_1_guard_modeInterplay_TSM_SM4_init) {
            SM4_state_act_modeInterplay_TSM =
              SSM_st_Normal_modeInterplay_TSM_SM4;
            outC->triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
            outC->triggeredSB = kcg_false;
          }
          else {
            if (t10_12_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (br_3_guard_modeInterplay_TSM_SM4_init) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Intervention_modeInterplay_TSM_SM4;
            }
            else if (t7_9_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Warning_modeInterplay_TSM_SM4;
            }
            else if (t4_6_modeInterplay_TSM) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Overspeed_modeInterplay_TSM_SM4;
            }
            else if (_L2_modeInterplay_TSM.t3) {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_Indication_modeInterplay_TSM_SM4;
            }
            else {
              SM4_state_act_modeInterplay_TSM =
                SSM_st_init_modeInterplay_TSM_SM4;
            }
            br_2_clock_modeInterplay_TSM_SM4_init = t10_12_modeInterplay_TSM;
            if (br_2_clock_modeInterplay_TSM_SM4_init) {
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              outC->triggeredSB = kcg_true;
            }
            else {
              br_3_clock_modeInterplay_TSM_SM4_init =
                br_3_guard_modeInterplay_TSM_SM4_init;
              if (br_3_clock_modeInterplay_TSM_SM4_init) {
                outC->triggeredSupervisionStatus =
                  Intervention_Supervision_SDM_Types_Pkg;
              }
              else {
                br_4_clock_modeInterplay_TSM_SM4_init = t7_9_modeInterplay_TSM;
                if (br_4_clock_modeInterplay_TSM_SM4_init) {
                  outC->triggeredSupervisionStatus =
                    Warning_Supervision_SDM_Types_Pkg;
                }
                else if (t4_6_modeInterplay_TSM) {
                  outC->triggeredSupervisionStatus =
                    Overspeed_Supervision_SDM_Types_Pkg;
                }
                else if (_L2_modeInterplay_TSM.t3) {
                  outC->triggeredSupervisionStatus =
                    Indication_Supervision_SDM_Types_Pkg;
                }
                else {
                  outC->triggeredSupervisionStatus =
                    cSupervisionStatus_SDM_Commands_Pkg;
                }
              }
              outC->triggeredSB = kcg_false;
            }
          }
          break;
        
      }
      switch (SM4_state_act_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          outC->sdmType = last_sdmType;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          outC->sdmType = TSM_SDM_Types_Pkg;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          outC->sdmType = TSM_SDM_Types_Pkg;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          outC->sdmType = TSM_SDM_Types_Pkg;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          outC->sdmType = TSM_SDM_Types_Pkg;
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          outC->sdmType = TSM_SDM_Types_Pkg;
          break;
        
      }
      break;
    case SSM_st_CSM_modeInterplay :
      if (br_3_clock_modeInterplay_RSM_RSM_Init) {
        outC->init2 = kcg_true;
      }
      if (outC->init2) {
        CSM_state_sel_modeInterplay_CSM = SSM_st_Init_modeInterplay_CSM_CSM;
      }
      else {
        CSM_state_sel_modeInterplay_CSM = outC->CSM_state_nxt_modeInterplay_CSM;
      }
      t1_modeInterplay_CSM = (*speeds).V_est <= (*speeds).V_MRSP;
      t4_modeInterplay_CSM = (*speeds).V_est > (*speeds).dV_sbi_V_MRSP +
        (*speeds).V_MRSP;
      t5_modeInterplay_CSM = (*speeds).V_est > (*speeds).dV_ebi_V_MRSP +
        (*speeds).V_MRSP;
      _L102_modeInterplay_CSM = t4_modeInterplay_CSM | t5_modeInterplay_CSM;
      t3_modeInterplay_CSM = (*speeds).V_est > (*speeds).dV_warning_V_MRSP +
        (*speeds).V_MRSP;
      t2_modeInterplay_CSM = !t1_modeInterplay_CSM;
      _L78_modeInterplay_CSM = t1_modeInterplay_CSM | t4_modeInterplay_CSM |
        t5_modeInterplay_CSM;
      c4_modeInterplay_CSM = ((Undefined_Supervision_SDM_Types_Pkg ==
            last_status) & !_L78_modeInterplay_CSM & t3_modeInterplay_CSM) |
        ((Indication_Supervision_SDM_Types_Pkg == last_status) &
          !_L78_modeInterplay_CSM & t3_modeInterplay_CSM);
      c5_modeInterplay_CSM = ((Undefined_Supervision_SDM_Types_Pkg ==
            last_status) & _L102_modeInterplay_CSM & t2_modeInterplay_CSM) |
        (_L102_modeInterplay_CSM & (Indication_Supervision_SDM_Types_Pkg ==
            last_status) & t2_modeInterplay_CSM);
      c1_modeInterplay_CSM = (Undefined_Supervision_SDM_Types_Pkg ==
          last_status) & t1_modeInterplay_CSM;
      _L58_modeInterplay_CSM = t1_modeInterplay_CSM | t3_modeInterplay_CSM |
        t4_modeInterplay_CSM | t5_modeInterplay_CSM;
      c3_modeInterplay_CSM = ((Undefined_Supervision_SDM_Types_Pkg ==
            last_status) & !_L58_modeInterplay_CSM & t2_modeInterplay_CSM) |
        ((Indication_Supervision_SDM_Types_Pkg == last_status) &
          !_L58_modeInterplay_CSM & t2_modeInterplay_CSM);
      switch (CSM_state_sel_modeInterplay_CSM) {
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          outC->triggeredSB = kcg_false;
          outC->triggeredSupervisionStatus =
            cSupervisionStatus_SDM_Commands_Pkg;
          if ((*speeds).OdoStandStill) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
            outC->revokedSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            outC->revokedSB = kcg_false;
          }
          else {
            if (t1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_NormalStatus_modeInterplay_CSM_CSM;
            }
            else {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
            }
            if (t1_modeInterplay_CSM) {
              outC->revokedSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
              outC->revokedSB = kcg_true;
            }
            else {
              outC->revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              outC->revokedSB = kcg_false;
            }
          }
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          if (_L102_modeInterplay_CSM) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            outC->triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            outC->triggeredSB = t4_modeInterplay_CSM;
          }
          else {
            outC->triggeredSB = kcg_false;
            outC->triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            if (t1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_NormalStatus_modeInterplay_CSM_CSM;
              outC->revokedSupervisionStatus =
                Warning_Supervision_SDM_Types_Pkg;
              outC->revokedSB = kcg_true;
            }
            else {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_WarningStatus_modeInterplay_CSM_CSM;
              outC->revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              outC->revokedSB = kcg_false;
            }
          }
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          if (_L102_modeInterplay_CSM) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            outC->triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            outC->triggeredSB = t4_modeInterplay_CSM;
          }
          else {
            outC->triggeredSB = kcg_false;
            if (t1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_NormalStatus_modeInterplay_CSM_CSM;
              outC->revokedSB = kcg_true;
              outC->revokedSupervisionStatus =
                Overspeed_Supervision_SDM_Types_Pkg;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
            }
            else {
              outC->revokedSB = kcg_false;
              outC->revokedSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
              if (t3_modeInterplay_CSM) {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_WarningStatus_modeInterplay_CSM_CSM;
                outC->triggeredSupervisionStatus =
                  Warning_Supervision_SDM_Types_Pkg;
              }
              else {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
                outC->triggeredSupervisionStatus =
                  cSupervisionStatus_SDM_Commands_Pkg;
              }
            }
          }
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          outC->revokedSB = kcg_false;
          outC->revokedSupervisionStatus = cSupervisionStatus_SDM_Commands_Pkg;
          if (_L102_modeInterplay_CSM) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
            outC->triggeredSupervisionStatus =
              Intervention_Supervision_SDM_Types_Pkg;
            outC->triggeredSB = t4_modeInterplay_CSM;
          }
          else {
            if (t3_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_WarningStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                Warning_Supervision_SDM_Types_Pkg;
            }
            else if (t2_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                Overspeed_Supervision_SDM_Types_Pkg;
            }
            else {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_NormalStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
            }
            outC->triggeredSB = kcg_false;
          }
          break;
        case SSM_st_Init_modeInterplay_CSM_CSM :
          br_1_guard_modeInterplay_CSM_CSM_Init =
            (Indication_Supervision_SDM_Types_Pkg == last_status) &
            t1_modeInterplay_CSM;
          br_2_guard_modeInterplay_CSM_CSM_Init = last_status ==
            Overspeed_Supervision_SDM_Types_Pkg;
          br_6_guard_modeInterplay_CSM_CSM_Init = last_status ==
            Normal_Supervision_SDM_Types_Pkg;
          outC->triggeredSB = kcg_false;
          if (br_1_guard_modeInterplay_CSM_CSM_Init) {
            CSM_state_act_modeInterplay_CSM =
              SSM_st_NormalStatus_modeInterplay_CSM_CSM;
            outC->revokedSB = kcg_true;
            outC->revokedSupervisionStatus =
              Indication_Supervision_SDM_Types_Pkg;
            outC->triggeredSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
          }
          else {
            outC->revokedSB = kcg_false;
            outC->revokedSupervisionStatus =
              cSupervisionStatus_SDM_Commands_Pkg;
            if (br_2_guard_modeInterplay_CSM_CSM_Init) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
            }
            else if (c4_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_WarningStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                Warning_Supervision_SDM_Types_Pkg;
            }
            else if (c5_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                Intervention_Supervision_SDM_Types_Pkg;
            }
            else if (c1_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_NormalStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                Normal_Supervision_SDM_Types_Pkg;
            }
            else if (br_6_guard_modeInterplay_CSM_CSM_Init) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_NormalStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
            }
            else if (c3_modeInterplay_CSM) {
              CSM_state_act_modeInterplay_CSM =
                SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
              outC->triggeredSupervisionStatus =
                Overspeed_Supervision_SDM_Types_Pkg;
            }
            else {
              if (last_status == Warning_Supervision_SDM_Types_Pkg) {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_WarningStatus_modeInterplay_CSM_CSM;
              }
              else if (last_status == Intervention_Supervision_SDM_Types_Pkg) {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
              }
              else {
                CSM_state_act_modeInterplay_CSM =
                  SSM_st_Init_modeInterplay_CSM_CSM;
              }
              outC->triggeredSupervisionStatus =
                cSupervisionStatus_SDM_Commands_Pkg;
            }
          }
          break;
        
      }
      switch (CSM_state_act_modeInterplay_CSM) {
        case SSM_st_Init_modeInterplay_CSM_CSM :
          outC->sdmType = last_sdmType;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          outC->sdmType = CSM_SDM_Types_Pkg;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          outC->sdmType = CSM_SDM_Types_Pkg;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          outC->sdmType = CSM_SDM_Types_Pkg;
          break;
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          outC->sdmType = CSM_SDM_Types_Pkg;
          break;
        
      }
      break;
    
  }
  if (outC->init3) {
    t2_modeInterplay_RSM = kcg_false;
    outC->init3 = kcg_false;
    t1_modeInterplay_RSM = kcg_false;
  }
  else {
    t2_modeInterplay_RSM = outC->revokedEB;
    t1_modeInterplay_RSM = outC->triggeredEB;
  }
  outC->ebCmd = /* 1 */
    CommandTripBraking_SDM_Commands_Pkg(
      trainLocations,
      locations,
      TrainData_int);
  switch (modeInterplay_state_act) {
    case SSM_st_RSM_modeInterplay :
      outC->triggeredTCO = kcg_false;
      outC->revokedTCO = kcg_false;
      switch (RSM_state_sel_modeInterplay_RSM) {
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          if (br_1_guard_modeInterplay_RSM_RSM_InterventionStatus) {
            outC->revokedEB = kcg_true;
          }
          else {
            outC->revokedEB = kcg_false;
          }
          outC->triggeredEB = kcg_false;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          outC->revokedEB = kcg_false;
          if (br_1_guard_modeInterplay_RSM_RSM_IndicationStatus) {
            outC->triggeredEB = kcg_true;
          }
          else {
            outC->triggeredEB = kcg_false;
          }
          break;
        case SSM_st_Init_modeInterplay_RSM_RSM :
          outC->revokedEB = kcg_false;
          if (br_1_guard_modeInterplay_RSM_RSM_Init) {
            outC->triggeredEB = kcg_false;
          }
          else if (br_2_clock_modeInterplay_RSM_RSM_Init) {
            outC->triggeredEB = kcg_false;
          }
          else if (br_3_clock_modeInterplay_RSM_RSM_Init) {
            outC->triggeredEB = kcg_false;
          }
          else if (br_4_clock_modeInterplay_RSM_RSM_Init) {
            outC->triggeredEB = kcg_false;
          }
          else if (br_5_clock_modeInterplay_RSM_RSM_Init) {
            outC->triggeredEB = kcg_true;
          }
          else {
            outC->triggeredEB = kcg_false;
          }
          break;
        
      }
      outC->modeInterplay_state_nxt = SSM_st_RSM_modeInterplay;
      switch (RSM_state_act_modeInterplay_RSM) {
        case SSM_st_InterventionStatus_modeInterplay_RSM_RSM :
          outC->supVisStatus = Intervention_Supervision_SDM_Types_Pkg;
          outC->RSM_state_nxt_modeInterplay_RSM =
            SSM_st_InterventionStatus_modeInterplay_RSM_RSM;
          break;
        case SSM_st_IndicationStatus_modeInterplay_RSM_RSM :
          outC->supVisStatus = Indication_Supervision_SDM_Types_Pkg;
          outC->RSM_state_nxt_modeInterplay_RSM =
            SSM_st_IndicationStatus_modeInterplay_RSM_RSM;
          break;
        case SSM_st_Init_modeInterplay_RSM_RSM :
          outC->supVisStatus = cSupervisionStatus_SDM_Commands_Pkg;
          outC->RSM_state_nxt_modeInterplay_RSM =
            SSM_st_Init_modeInterplay_RSM_RSM;
          break;
        
      }
      outC->init = kcg_false;
      break;
    case SSM_st_TSM_modeInterplay :
      switch (SM4_state_sel_modeInterplay_TSM) {
        case SSM_st_init_modeInterplay_TSM_SM4 :
          outC->revokedTCO = kcg_false;
          if (br_1_guard_modeInterplay_TSM_SM4_init) {
            outC->triggeredTCO = kcg_false;
          }
          else if (br_2_clock_modeInterplay_TSM_SM4_init) {
            outC->triggeredTCO = kcg_false;
          }
          else if (br_3_clock_modeInterplay_TSM_SM4_init) {
            outC->triggeredTCO = kcg_false;
          }
          else if (br_4_clock_modeInterplay_TSM_SM4_init) {
            outC->triggeredTCO = kcg_true;
          }
          else {
            outC->triggeredTCO = kcg_false;
          }
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          outC->revokedTCO = kcg_false;
          if (br_1_guard_modeInterplay_TSM_SM4_Normal) {
            outC->triggeredTCO = kcg_false;
          }
          else if (br_2_clock_modeInterplay_TSM_SM4_Normal) {
            outC->triggeredTCO = kcg_false;
          }
          else if (br_3_clock_modeInterplay_TSM_SM4_Normal) {
            outC->triggeredTCO = kcg_true;
          }
          else {
            outC->triggeredTCO = kcg_false;
          }
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Indication) {
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_true;
          }
          else {
            outC->revokedTCO = kcg_false;
            if (br_2_clock_modeInterplay_TSM_SM4_Indication) {
              outC->triggeredTCO = kcg_false;
            }
            else if (br_3_clock_modeInterplay_TSM_SM4_Indication) {
              outC->triggeredTCO = kcg_false;
            }
            else if (br_4_clock_modeInterplay_TSM_SM4_Indication) {
              outC->triggeredTCO = kcg_true;
            }
            else {
              outC->triggeredTCO = kcg_false;
            }
          }
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          if (br_1_guard_modeInterplay_TSM_SM4_Overspeed) {
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_true;
          }
          else if (br_2_clock_modeInterplay_TSM_SM4_Overspeed) {
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_false;
          }
          else if (br_3_clock_modeInterplay_TSM_SM4_Overspeed) {
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_false;
          }
          else if (br_4_clock_modeInterplay_TSM_SM4_Overspeed) {
            outC->triggeredTCO = kcg_false;
            outC->revokedTCO = kcg_true;
          }
          else {
            outC->revokedTCO = kcg_false;
            if (br_5_clock_modeInterplay_TSM_SM4_Overspeed) {
              outC->triggeredTCO = kcg_true;
            }
            else {
              outC->triggeredTCO = kcg_false;
            }
          }
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          outC->triggeredTCO = kcg_false;
          if (br_1_guard_modeInterplay_TSM_SM4_Warning) {
            outC->revokedTCO = kcg_false;
          }
          else if (br_2_clock_modeInterplay_TSM_SM4_Warning) {
            outC->revokedTCO = kcg_false;
          }
          else if (br_3_clock_modeInterplay_TSM_SM4_Warning) {
            outC->revokedTCO = kcg_true;
          }
          else if (br_4_clock_modeInterplay_TSM_SM4_Warning) {
            outC->revokedTCO = kcg_true;
          }
          else {
            outC->revokedTCO = kcg_false;
          }
          break;
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          outC->triggeredTCO = kcg_false;
          if (br_1_guard_modeInterplay_TSM_SM4_Intervention) {
            outC->revokedTCO = kcg_true;
          }
          else if (br_2_clock_modeInterplay_TSM_SM4_Intervention) {
            outC->revokedTCO = kcg_false;
          }
          else if (br_3_clock_modeInterplay_TSM_SM4_Intervention) {
            outC->revokedTCO = kcg_true;
          }
          else {
            outC->revokedTCO = kcg_false;
          }
          break;
        
      }
      outC->modeInterplay_state_nxt = SSM_st_TSM_modeInterplay;
      switch (SM4_state_act_modeInterplay_TSM) {
        case SSM_st_Intervention_modeInterplay_TSM_SM4 :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = _L2_modeInterplay_TSM.t13 |
            _L2_modeInterplay_TSM.t14 | t1_modeInterplay_RSM;
          outC->supVisStatus = Intervention_Supervision_SDM_Types_Pkg;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Intervention_modeInterplay_TSM_SM4;
          break;
        case SSM_st_Warning_modeInterplay_TSM_SM4 :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Warning_Supervision_SDM_Types_Pkg;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Warning_modeInterplay_TSM_SM4;
          break;
        case SSM_st_Overspeed_modeInterplay_TSM_SM4 :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Overspeed_Supervision_SDM_Types_Pkg;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Overspeed_modeInterplay_TSM_SM4;
          break;
        case SSM_st_Indication_modeInterplay_TSM_SM4 :
          outC->revokedEB = _L1_modeInterplay_TSM.r3 | t2_modeInterplay_RSM;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Indication_Supervision_SDM_Types_Pkg;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Indication_modeInterplay_TSM_SM4;
          break;
        case SSM_st_Normal_modeInterplay_TSM_SM4 :
          outC->revokedEB = _L1_modeInterplay_TSM.r0 |
            _L1_modeInterplay_TSM.r1 | _L1_modeInterplay_TSM.r2 |
            _L1_modeInterplay_TSM.r3 | t2_modeInterplay_RSM;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Normal_Supervision_SDM_Types_Pkg;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_Normal_modeInterplay_TSM_SM4;
          break;
        case SSM_st_init_modeInterplay_TSM_SM4 :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = cSupervisionStatus_SDM_Commands_Pkg;
          outC->SM4_state_nxt_modeInterplay_TSM =
            SSM_st_init_modeInterplay_TSM_SM4;
          break;
        
      }
      outC->init1 = kcg_false;
      break;
    case SSM_st_CSM_modeInterplay :
      outC->triggeredTCO = kcg_false;
      outC->revokedTCO = kcg_false;
      outC->modeInterplay_state_nxt = SSM_st_CSM_modeInterplay;
      switch (CSM_state_act_modeInterplay_CSM) {
        case SSM_st_InterventionStatus_modeInterplay_CSM_CSM :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = t5_modeInterplay_CSM | t1_modeInterplay_RSM;
          outC->supVisStatus = Intervention_Supervision_SDM_Types_Pkg;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_InterventionStatus_modeInterplay_CSM_CSM;
          break;
        case SSM_st_WarningStatus_modeInterplay_CSM_CSM :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Warning_Supervision_SDM_Types_Pkg;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_WarningStatus_modeInterplay_CSM_CSM;
          break;
        case SSM_st_OverspeedStatus_modeInterplay_CSM_CSM :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Overspeed_Supervision_SDM_Types_Pkg;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_OverspeedStatus_modeInterplay_CSM_CSM;
          break;
        case SSM_st_NormalStatus_modeInterplay_CSM_CSM :
          outC->revokedEB = t1_modeInterplay_CSM | (*speeds).OdoStandStill |
            t2_modeInterplay_RSM;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = Normal_Supervision_SDM_Types_Pkg;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_NormalStatus_modeInterplay_CSM_CSM;
          break;
        case SSM_st_Init_modeInterplay_CSM_CSM :
          outC->revokedEB = kcg_false;
          outC->triggeredEB = kcg_false;
          outC->supVisStatus = cSupervisionStatus_SDM_Commands_Pkg;
          outC->CSM_state_nxt_modeInterplay_CSM =
            SSM_st_Init_modeInterplay_CSM_CSM;
          break;
        
      }
      outC->init2 = kcg_false;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CmdTrainSupervisionStatus_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

