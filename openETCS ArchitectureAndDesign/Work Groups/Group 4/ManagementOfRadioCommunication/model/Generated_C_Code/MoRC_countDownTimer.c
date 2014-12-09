/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_countDownTimer.h"

void MoRC_countDownTimer_init(MoRC_outC_countDownTimer *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->TimerStatus_SM_reset_nxt = kcg_true;
  outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Stopped_TimerStatus_SM;
  outC->_L4_TimerStatus_SM_Counting = 0;
  outC->started = kcg_true;
  outC->expired = kcg_true;
}


void MoRC_countDownTimer_reset(MoRC_outC_countDownTimer *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
}

/* countDownTimer */
void MoRC_countDownTimer(
  /* countDownTimer::re_start */ kcg_bool re_start,
  /* countDownTimer::stop */ kcg_bool stop,
  /* countDownTimer::actualTime */ MoRC_time_Type actualTime,
  /* countDownTimer::autoretrigger */ kcg_bool autoretrigger,
  /* countDownTimer::interval */ MoRC_time_Type interval,
  MoRC_outC_countDownTimer *outC)
{
  MoRC_SSM_TR_TimerStatus_SM tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* countDownTimer::TimerStatus_SM::Counting */ kcg_bool Counting_weakb_clock_TimerStatus_SM;
  /* countDownTimer::TimerStatus_SM::Expired */ kcg_bool br_2_guard_TimerStatus_SM_Expired;
  /* countDownTimer::TimerStatus_SM::Stopped */ kcg_bool br_2_guard_TimerStatus_SM_Stopped;
  /* countDownTimer::TimerStatus_SM::Stopped */ kcg_bool br_1_guard_TimerStatus_SM_Stopped;
  /* countDownTimer::TimerStatus_SM */ MoRC_SSM_ST_TimerStatus_SM TimerStatus_SM_state_sel;
  /* countDownTimer::TimerStatus_SM */ MoRC_SSM_ST_TimerStatus_SM TimerStatus_SM_state_act;
  
  if (outC->init) {
    TimerStatus_SM_state_sel = MoRC_SSM_st_Stopped_TimerStatus_SM;
    outC->init = kcg_false;
    tmp1 = kcg_false;
  }
  else {
    TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
    tmp1 = outC->TimerStatus_SM_reset_nxt;
  }
  switch (TimerStatus_SM_state_sel) {
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = MoRC_SSM_st_Expired_TimerStatus_SM;
      }
      tmp = stop;
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      if (stop) {
        TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = MoRC_SSM_st_Counting_TimerStatus_SM;
      }
      if (tmp1) {
        outC->init1 = kcg_true;
      }
      tmp = stop;
      break;
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      br_1_guard_TimerStatus_SM_Stopped = stop;
      br_2_guard_TimerStatus_SM_Stopped = re_start || autoretrigger;
      if (br_1_guard_TimerStatus_SM_Stopped) {
        TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
        tmp = kcg_true;
      }
      else {
        if (br_2_guard_TimerStatus_SM_Stopped) {
          TimerStatus_SM_state_act = MoRC_SSM_st_Counting_TimerStatus_SM;
        }
        else {
          TimerStatus_SM_state_act = MoRC_SSM_st_Stopped_TimerStatus_SM;
        }
        tmp = br_2_guard_TimerStatus_SM_Stopped;
      }
      break;
    
  }
  switch (TimerStatus_SM_state_act) {
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      outC->expired = kcg_true;
      br_2_guard_TimerStatus_SM_Expired = re_start || autoretrigger;
      outC->TimerStatus_SM_reset_nxt = br_2_guard_TimerStatus_SM_Expired;
      if (br_2_guard_TimerStatus_SM_Expired) {
        outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Counting_TimerStatus_SM;
        tmp = kcg_true;
      }
      else {
        outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Expired_TimerStatus_SM;
        tmp = kcg_false;
      }
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      if (tmp) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        outC->_L4_TimerStatus_SM_Counting = actualTime;
      }
      switch (TimerStatus_SM_state_sel) {
        case MoRC_SSM_st_Stopped_TimerStatus_SM :
          if (br_1_guard_TimerStatus_SM_Stopped) {
            tmp2 = MoRC_SSM_TR_Stopped_1_TimerStatus_SM;
          }
          else if (br_2_guard_TimerStatus_SM_Stopped) {
            tmp2 = MoRC_SSM_TR_Stopped_2_TimerStatus_SM;
          }
          else {
            tmp2 = MoRC_SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        case MoRC_SSM_st_Counting_TimerStatus_SM :
          if (stop) {
            tmp2 = MoRC_SSM_TR_Counting_1_TimerStatus_SM;
          }
          else {
            tmp2 = MoRC_SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        case MoRC_SSM_st_Expired_TimerStatus_SM :
          if (stop) {
            tmp2 = MoRC_SSM_TR_Expired_1_TimerStatus_SM;
          }
          else {
            tmp2 = MoRC_SSM_TR_no_trans_TimerStatus_SM;
          }
          break;
        
      }
      Counting_weakb_clock_TimerStatus_SM = tmp2 !=
        MoRC_SSM_TR_no_trans_TimerStatus_SM;
      outC->expired = actualTime - interval >=
        outC->_L4_TimerStatus_SM_Counting;
      if (Counting_weakb_clock_TimerStatus_SM) {
        outC->TimerStatus_SM_reset_nxt = kcg_false;
        outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Counting_TimerStatus_SM;
        tmp = kcg_false;
      }
      else {
        tmp1 = outC->expired && autoretrigger;
        if (re_start) {
          outC->TimerStatus_SM_reset_nxt = kcg_true;
          outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Counting_TimerStatus_SM;
          tmp = kcg_true;
        }
        else {
          if (tmp1) {
            outC->TimerStatus_SM_reset_nxt = kcg_true;
            outC->TimerStatus_SM_state_nxt =
              MoRC_SSM_st_Counting_TimerStatus_SM;
          }
          else {
            outC->TimerStatus_SM_reset_nxt = outC->expired;
            if (outC->expired) {
              outC->TimerStatus_SM_state_nxt =
                MoRC_SSM_st_Expired_TimerStatus_SM;
            }
            else {
              outC->TimerStatus_SM_state_nxt =
                MoRC_SSM_st_Counting_TimerStatus_SM;
            }
          }
          if (tmp1) {
            tmp = kcg_true;
          }
          else {
            tmp = kcg_false;
          }
        }
      }
      outC->init1 = kcg_false;
      break;
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      outC->expired = kcg_false;
      outC->TimerStatus_SM_reset_nxt = kcg_false;
      outC->TimerStatus_SM_state_nxt = MoRC_SSM_st_Stopped_TimerStatus_SM;
      tmp = kcg_false;
      break;
    
  }
  switch (TimerStatus_SM_state_sel) {
    case MoRC_SSM_st_Stopped_TimerStatus_SM :
      if (br_1_guard_TimerStatus_SM_Stopped) {
        tmp1 = kcg_false;
      }
      else if (br_2_guard_TimerStatus_SM_Stopped) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      break;
    case MoRC_SSM_st_Counting_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    case MoRC_SSM_st_Expired_TimerStatus_SM :
      tmp1 = kcg_false;
      break;
    
  }
  outC->started = tmp1 || tmp;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_countDownTimer.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

