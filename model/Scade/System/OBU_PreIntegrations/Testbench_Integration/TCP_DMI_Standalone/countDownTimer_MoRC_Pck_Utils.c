/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

void countDownTimer_reset_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* MoRC_Pck::Utils::countDownTimer */
void countDownTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::countDownTimer::re_start */kcg_bool re_start,
  /* MoRC_Pck::Utils::countDownTimer::stop */kcg_bool stop,
  /* MoRC_Pck::Utils::countDownTimer::actualTime */time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::countDownTimer::autoretrigger */kcg_bool autoretrigger,
  /* MoRC_Pck::Utils::countDownTimer::interval */time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  SSM_TR_TimerStatus_SM tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */ kcg_bool Counting_weakb_clock_TimerStatus_SM;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */ kcg_bool br_2_guard_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Expired */ kcg_bool br_2_guard_TimerStatus_SM_Expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */ kcg_bool br_2_guard_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ SSM_ST_TimerStatus_SM TimerStatus_SM_state_sel;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ SSM_ST_TimerStatus_SM TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ kcg_bool TimerStatus_SM_reset_sel;
  
  if (outC->init1) {
    TimerStatus_SM_state_sel = SSM_st_Stopped_TimerStatus_SM;
  }
  else {
    TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
  }
  switch (TimerStatus_SM_state_sel) {
    case SSM_st_Expired_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Expired_TimerStatus_SM;
      }
      TimerStatus_SM_reset_sel = stop;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
      }
      TimerStatus_SM_reset_sel = stop;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      tmp = stop;
      br_2_guard_TimerStatus_SM_Stopped = re_start | autoretrigger;
      if (tmp) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
        TimerStatus_SM_reset_sel = kcg_true;
      }
      else {
        if (br_2_guard_TimerStatus_SM_Stopped) {
          TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
        }
        else {
          TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
        }
        TimerStatus_SM_reset_sel = br_2_guard_TimerStatus_SM_Stopped;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case SSM_st_Counting_TimerStatus_SM :
      switch (TimerStatus_SM_state_sel) {
        case SSM_st_Stopped_TimerStatus_SM :
          if (tmp) {
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
      if (TimerStatus_SM_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  if (outC->init1) {
    outC->init1 = kcg_false;
    TimerStatus_SM_reset_sel = kcg_false;
  }
  else {
    TimerStatus_SM_reset_sel = outC->TimerStatus_SM_reset_nxt;
  }
  switch (TimerStatus_SM_state_sel) {
    case SSM_st_Counting_TimerStatus_SM :
      if (TimerStatus_SM_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case SSM_st_Stopped_TimerStatus_SM :
      outC->expired = kcg_false;
      outC->TimerStatus_SM_reset_nxt = kcg_false;
      outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (outC->init) {
        outC->_L4_TimerStatus_SM_Counting = actualTime;
      }
      outC->expired = actualTime - interval >=
        outC->_L4_TimerStatus_SM_Counting;
      if (Counting_weakb_clock_TimerStatus_SM) {
        outC->TimerStatus_SM_reset_nxt = kcg_false;
        outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        tmp1 = outC->expired & autoretrigger;
        br_2_guard_TimerStatus_SM_Counting = re_start;
        if (br_2_guard_TimerStatus_SM_Counting) {
          outC->TimerStatus_SM_reset_nxt = kcg_true;
          outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        }
        else {
          TimerStatus_SM_reset_sel = tmp1;
          if (tmp1) {
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
        }
      }
      break;
    case SSM_st_Expired_TimerStatus_SM :
      outC->expired = kcg_true;
      br_2_guard_TimerStatus_SM_Expired = re_start | autoretrigger;
      outC->TimerStatus_SM_reset_nxt = br_2_guard_TimerStatus_SM_Expired;
      if (br_2_guard_TimerStatus_SM_Expired) {
        outC->TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        outC->TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_sel) {
    case SSM_st_Stopped_TimerStatus_SM :
      if (tmp) {
        tmp1 = kcg_false;
      }
      else if (br_2_guard_TimerStatus_SM_Stopped) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case SSM_st_Counting_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    case SSM_st_Expired_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case SSM_st_Expired_TimerStatus_SM :
      if (br_2_guard_TimerStatus_SM_Expired) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (Counting_weakb_clock_TimerStatus_SM) {
        tmp = kcg_false;
      }
      else if (br_2_guard_TimerStatus_SM_Counting) {
        tmp = kcg_true;
      }
      else if (TimerStatus_SM_reset_sel) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      outC->init = kcg_false;
      break;
    case SSM_st_Stopped_TimerStatus_SM :
      tmp = kcg_false;
      break;
    
  }
  outC->started = tmp1 | tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** countDownTimer_MoRC_Pck_Utils.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

