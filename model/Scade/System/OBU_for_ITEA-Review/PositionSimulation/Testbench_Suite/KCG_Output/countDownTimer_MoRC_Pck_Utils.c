/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

void countDownTimer_init_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->TimerStatus_SM_reset_nxt = kcg_true;
  outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
  outC->_L4_TimerStatus_SM_Counting = 0;
  outC->started = kcg_true;
  outC->expired = kcg_true;
}


void countDownTimer_reset_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* MoRC_Pck::Utils::countDownTimer */
void countDownTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::countDownTimer::re_start */ kcg_bool re_start,
  /* MoRC_Pck::Utils::countDownTimer::stop */ kcg_bool stop,
  /* MoRC_Pck::Utils::countDownTimer::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::countDownTimer::autoretrigger */ kcg_bool autoretrigger,
  /* MoRC_Pck::Utils::countDownTimer::interval */ time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  SSM_TR_TimerStatus_SM tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */ kcg_bool Counting_weakb_clock_TimerStatus_SM;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */ kcg_bool br_3_guard_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Expired */ kcg_bool br_2_guard_TimerStatus_SM_Expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */ kcg_bool br_2_guard_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */ kcg_bool br_1_guard_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ SSM_ST_TimerStatus_SM TimerStatus_SM_state_sel;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ SSM_ST_TimerStatus_SM TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ kcg_bool TimerStatus_SM_reset_act;
  
  if (outC->init) {
    TimerStatus_SM_state_sel = SSM_st_Stopped_TimerStatus_SM;
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
    tmp = outC->TimerStatus_SM_reset_nxt;
  }
  switch (TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Expired_TimerStatus_SM;
      }
      TimerStatus_SM_reset_act = stop;
      tmp1 = kcg_false;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
      }
      if (tmp) {
        outC->init1 = kcg_true;
      }
      TimerStatus_SM_reset_act = stop;
      tmp1 = kcg_false;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      br_1_guard_TimerStatus_SM_Stopped = stop;
      br_2_guard_TimerStatus_SM_Stopped = re_start | autoretrigger;
      if (br_1_guard_TimerStatus_SM_Stopped) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
        TimerStatus_SM_reset_act = kcg_true;
        tmp1 = kcg_false;
      }
      else {
        TimerStatus_SM_reset_act = br_2_guard_TimerStatus_SM_Stopped;
        if (br_2_guard_TimerStatus_SM_Stopped) {
          TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
          tmp1 = kcg_true;
        }
        else {
          TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
          tmp1 = kcg_false;
        }
      }
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case SSM_st_Expired_TimerStatus_SM :
      outC->expired = kcg_true;
      br_2_guard_TimerStatus_SM_Expired = re_start | autoretrigger;
      outC->TimerStatus_SM_reset_nxt = br_2_guard_TimerStatus_SM_Expired;
      if (br_2_guard_TimerStatus_SM_Expired) {
        outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        tmp = kcg_true;
      }
      else {
        outC->TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
        tmp = kcg_false;
      }
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (TimerStatus_SM_reset_act) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        outC->_L4_TimerStatus_SM_Counting = actualTime;
      }
      switch (TimerStatus_SM_state_sel) {
        case SSM_st_Stopped_TimerStatus_SM :
          if (br_1_guard_TimerStatus_SM_Stopped) {
            tmp2 = SSM_TR_Stopped_1_TimerStatus_SM;
          }
          else if (br_2_guard_TimerStatus_SM_Stopped) {
            tmp2 = SSM_TR_Stopped_2_TimerStatus_SM;
          }
          else {
            tmp2 = SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        case SSM_st_Counting_TimerStatus_SM :
          if (stop) {
            tmp2 = SSM_TR_Counting_1_TimerStatus_SM;
          }
          else {
            tmp2 = SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        case SSM_st_Expired_TimerStatus_SM :
          if (stop) {
            tmp2 = SSM_TR_Expired_1_TimerStatus_SM;
          }
          else {
            tmp2 = SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        
      }
      Counting_weakb_clock_TimerStatus_SM = tmp2 !=
        SSM_TR_no_trans_TimerStatus_SM;
      outC->expired = actualTime - interval >=
        outC->_L4_TimerStatus_SM_Counting;
      if (Counting_weakb_clock_TimerStatus_SM) {
        outC->TimerStatus_SM_reset_nxt = kcg_false;
        outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        tmp = kcg_false;
      }
      else {
        br_3_guard_TimerStatus_SM_Counting = outC->expired & autoretrigger;
        if (re_start) {
          outC->TimerStatus_SM_reset_nxt = kcg_true;
          outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
          tmp = kcg_true;
        }
        else {
          if (br_3_guard_TimerStatus_SM_Counting) {
            outC->TimerStatus_SM_reset_nxt = kcg_true;
            outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
          }
          else {
            outC->TimerStatus_SM_reset_nxt = outC->expired;
            if (outC->expired) {
              outC->TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
            }
            else {
              outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
            }
          }
          if (br_3_guard_TimerStatus_SM_Counting) {
            tmp = kcg_true;
          }
          else {
            tmp = kcg_false;
          }
        }
      }
      outC->init1 = kcg_false;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      outC->expired = kcg_false;
      outC->TimerStatus_SM_reset_nxt = kcg_false;
      outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
      tmp = kcg_false;
      break;
    
  }
  outC->started = tmp1 | tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** countDownTimer_MoRC_Pck_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

