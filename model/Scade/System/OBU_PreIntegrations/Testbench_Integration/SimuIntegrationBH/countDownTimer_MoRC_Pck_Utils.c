/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void countDownTimer_init_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->TimerStatus_SM_reset_nxt = kcg_true;
  outC->TimerStatus_SM_reset_act = kcg_true;
  outC->TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
  outC->_L4_1 = 0;
  outC->started = kcg_true;
  outC->expired = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void countDownTimer_reset_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
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
  /* MoRC_Pck::Utils::countDownTimer */
  static kcg_bool tmp1;
  /* MoRC_Pck::Utils::countDownTimer */
  static kcg_bool tmp;
  /* linear::MemoryBasic::Memorized */
  static kcg_int Memorized_1;
  /* linear::MemoryBasic::Write */
  static kcg_bool Write_1;
  /* linear::MemoryBasic::Init */
  static kcg_int Init_1;
  /* linear::MemoryBasic::BM_Input */
  static kcg_int BM_Input_1;
  /* linear::MemoryBasic::_L7 */
  static kcg_int _L7_1;
  /* linear::MemoryBasic::_L6 */
  static kcg_int _L6_1;
  /* linear::MemoryBasic::_L5 */
  static kcg_bool _L5_1;
  /* linear::MemoryBasic::_L2 */
  static kcg_int _L2_1;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _11_TimerStatus_SM_fired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool _10_TimerStatus_SM_reset_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _9_TimerStatus_SM_state_nxt;
  /* MoRC_Pck::Utils::countDownTimer::expired_loc */
  static kcg_bool _8_expired_loc;
  /* MoRC_Pck::Utils::countDownTimer::expired */
  static kcg_bool _7_expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped::_L1 */
  static kcg_bool _L1_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _6_TimerStatus_SM_fired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool _5_TimerStatus_SM_reset_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _4_TimerStatus_SM_state_nxt;
  /* MoRC_Pck::Utils::countDownTimer::expired_loc */
  static kcg_bool _3_expired_loc;
  /* MoRC_Pck::Utils::countDownTimer::expired */
  static kcg_bool _2_expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L8 */
  static kcg_bool _L8_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L7 */
  static kcg_bool _L7_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L6 */
  static kcg_int _L6_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L5 */
  static time_Type_MoRC_Pck _L5_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L4 */
  static time_Type_MoRC_Pck _L4_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting::_L1 */
  static time_Type_MoRC_Pck _L1_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool Counting_weakb_clock_TimerStatus_SM;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_3_clock_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_2_clock_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_2_guard_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_3_guard_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_4_guard_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _12_TimerStatus_SM_state_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool _13_TimerStatus_SM_reset_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _14_TimerStatus_SM_fired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _15_TimerStatus_SM_state_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool _16_TimerStatus_SM_reset_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _17_TimerStatus_SM_fired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM TimerStatus_SM_fired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool TimerStatus_SM_reset_nxt;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_nxt;
  /* MoRC_Pck::Utils::countDownTimer::expired_loc */
  static kcg_bool expired_loc;
  /* MoRC_Pck::Utils::countDownTimer::expired */
  static kcg_bool expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Expired */
  static kcg_bool br_2_guard_TimerStatus_SM_Expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Expired::_L1 */
  static kcg_bool _L1_TimerStatus_SM_Expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Expired */
  static kcg_bool br_2_clock_TimerStatus_SM_Expired;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _23_TimerStatus_SM_fired_strong;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool _22_TimerStatus_SM_reset_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _21_TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */
  static kcg_bool br_2_guard_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */
  static kcg_bool br_1_guard_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */
  static kcg_bool br_1_clock_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Stopped */
  static kcg_bool br_2_clock_TimerStatus_SM_Stopped;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _20_TimerStatus_SM_fired_strong;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool _19_TimerStatus_SM_reset_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _18_TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Counting */
  static kcg_bool br_1_guard_TimerStatus_SM_Counting;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM TimerStatus_SM_fired_strong;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool TimerStatus_SM_reset_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM::Expired */
  static kcg_bool br_1_guard_TimerStatus_SM_Expired;
  /* MoRC_Pck::Utils::countDownTimer::sStart */
  static kcg_bool sStart;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM TimerStatus_SM_state_sel;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_ST_TimerStatus_SM _26_TimerStatus_SM_state_act;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool TimerStatus_SM_reset_sel;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static kcg_bool TimerStatus_SM_reset_prv;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _25_TimerStatus_SM_fired_strong;
  /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
  static SSM_TR_TimerStatus_SM _24_TimerStatus_SM_fired;
  /* MoRC_Pck::Utils::countDownTimer::expired_loc */
  static kcg_bool _27_expired_loc;
  /* MoRC_Pck::Utils::countDownTimer::_L1 */
  static kcg_bool _L1;
  
  /* init_TimerStatus_SM */ if (outC->init) {
    TimerStatus_SM_state_sel = SSM_st_Stopped_TimerStatus_SM;
  }
  else {
    TimerStatus_SM_state_sel = outC->TimerStatus_SM_state_nxt;
  }
  /* sel_TimerStatus_SM */ switch (TimerStatus_SM_state_sel) {
    case SSM_st_Stopped_TimerStatus_SM :
      br_1_guard_TimerStatus_SM_Stopped = stop;
      br_2_guard_TimerStatus_SM_Stopped = re_start | autoretrigger;
      if (br_1_guard_TimerStatus_SM_Stopped) {
        _21_TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else if (br_2_guard_TimerStatus_SM_Stopped) {
        _21_TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        _21_TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      _26_TimerStatus_SM_state_act = _21_TimerStatus_SM_state_act;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      br_1_guard_TimerStatus_SM_Counting = stop;
      if (br_1_guard_TimerStatus_SM_Counting) {
        _18_TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        _18_TimerStatus_SM_state_act = SSM_st_Counting_TimerStatus_SM;
      }
      _26_TimerStatus_SM_state_act = _18_TimerStatus_SM_state_act;
      break;
    case SSM_st_Expired_TimerStatus_SM :
      br_1_guard_TimerStatus_SM_Expired = stop;
      if (br_1_guard_TimerStatus_SM_Expired) {
        TimerStatus_SM_state_act = SSM_st_Stopped_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_act = SSM_st_Expired_TimerStatus_SM;
      }
      _26_TimerStatus_SM_state_act = TimerStatus_SM_state_act;
      break;
    
  }
  /* init_TimerStatus_SM */ if (outC->init) {
    TimerStatus_SM_reset_sel = kcg_false;
  }
  else {
    TimerStatus_SM_reset_sel = outC->TimerStatus_SM_reset_nxt;
  }
  /* sel_TimerStatus_SM */ switch (TimerStatus_SM_state_sel) {
    case SSM_st_Counting_TimerStatus_SM :
      if (TimerStatus_SM_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  /* init_TimerStatus_SM */ if (outC->init) {
    TimerStatus_SM_reset_prv = kcg_false;
  }
  else {
    TimerStatus_SM_reset_prv = outC->TimerStatus_SM_reset_act;
  }
  /* sel_TimerStatus_SM */ switch (TimerStatus_SM_state_sel) {
    case SSM_st_Stopped_TimerStatus_SM :
      if (br_1_guard_TimerStatus_SM_Stopped) {
        _22_TimerStatus_SM_reset_act = kcg_true;
      }
      else {
        _22_TimerStatus_SM_reset_act = br_2_guard_TimerStatus_SM_Stopped;
      }
      outC->TimerStatus_SM_reset_act = _22_TimerStatus_SM_reset_act;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      _19_TimerStatus_SM_reset_act = br_1_guard_TimerStatus_SM_Counting;
      outC->TimerStatus_SM_reset_act = _19_TimerStatus_SM_reset_act;
      break;
    case SSM_st_Expired_TimerStatus_SM :
      TimerStatus_SM_reset_act = br_1_guard_TimerStatus_SM_Expired;
      outC->TimerStatus_SM_reset_act = TimerStatus_SM_reset_act;
      break;
    
  }
  /* act_TimerStatus_SM */ switch (_26_TimerStatus_SM_state_act) {
    case SSM_st_Counting_TimerStatus_SM :
      if (outC->TimerStatus_SM_reset_act) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  /* sel_TimerStatus_SM */ switch (TimerStatus_SM_state_sel) {
    case SSM_st_Stopped_TimerStatus_SM :
      br_1_clock_TimerStatus_SM_Stopped = br_1_guard_TimerStatus_SM_Stopped;
      /* cb_anon_sm */ if (br_1_clock_TimerStatus_SM_Stopped) {
      }
      else {
        br_2_clock_TimerStatus_SM_Stopped = br_2_guard_TimerStatus_SM_Stopped;
      }
      if (br_1_guard_TimerStatus_SM_Stopped) {
        _23_TimerStatus_SM_fired_strong = SSM_TR_Stopped_1_TimerStatus_SM;
      }
      else if (br_2_guard_TimerStatus_SM_Stopped) {
        _23_TimerStatus_SM_fired_strong = SSM_TR_Stopped_2_TimerStatus_SM;
      }
      else {
        _23_TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
      }
      _25_TimerStatus_SM_fired_strong = _23_TimerStatus_SM_fired_strong;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      if (br_1_guard_TimerStatus_SM_Counting) {
        _20_TimerStatus_SM_fired_strong = SSM_TR_Counting_1_TimerStatus_SM;
      }
      else {
        _20_TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
      }
      _25_TimerStatus_SM_fired_strong = _20_TimerStatus_SM_fired_strong;
      break;
    case SSM_st_Expired_TimerStatus_SM :
      if (br_1_guard_TimerStatus_SM_Expired) {
        TimerStatus_SM_fired_strong = SSM_TR_Expired_1_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_fired_strong = SSM_TR_no_trans_TimerStatus_SM;
      }
      _25_TimerStatus_SM_fired_strong = TimerStatus_SM_fired_strong;
      break;
    
  }
  /* act_TimerStatus_SM */ switch (_26_TimerStatus_SM_state_act) {
    case SSM_st_Counting_TimerStatus_SM :
      Counting_weakb_clock_TimerStatus_SM = _25_TimerStatus_SM_fired_strong !=
        SSM_TR_no_trans_TimerStatus_SM;
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatus_SM) {
      }
      else {
        br_2_guard_TimerStatus_SM_Counting = re_start;
        br_2_clock_TimerStatus_SM_Counting = br_2_guard_TimerStatus_SM_Counting;
      }
      _L1_TimerStatus_SM_Counting = actualTime;
      _L5_TimerStatus_SM_Counting = interval;
      _L6_TimerStatus_SM_Counting = _L1_TimerStatus_SM_Counting -
        _L5_TimerStatus_SM_Counting;
      Init_1 = _L1_TimerStatus_SM_Counting;
      _L7_1 = Init_1;
      /* 1_fby_1_init_4 */ if (outC->init1) {
        _L6_1 = _L7_1;
      }
      else {
        _L6_1 = outC->_L4_1;
      }
      _L8_TimerStatus_SM_Counting = kcg_false;
      Write_1 = _L8_TimerStatus_SM_Counting;
      _L5_1 = Write_1;
      BM_Input_1 = _L1_TimerStatus_SM_Counting;
      _L2_1 = BM_Input_1;
      /* 1 */ if (_L5_1) {
        outC->_L4_1 = _L2_1;
      }
      else {
        outC->_L4_1 = _L6_1;
      }
      Memorized_1 = outC->_L4_1;
      _L4_TimerStatus_SM_Counting = Memorized_1;
      _L7_TimerStatus_SM_Counting = _L6_TimerStatus_SM_Counting >=
        _L4_TimerStatus_SM_Counting;
      _3_expired_loc = _L7_TimerStatus_SM_Counting;
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatus_SM) {
      }
      else {
        br_3_guard_TimerStatus_SM_Counting = _3_expired_loc & autoretrigger;
        /* cb_anon_sm */ if (br_2_clock_TimerStatus_SM_Counting) {
        }
        else {
          br_3_clock_TimerStatus_SM_Counting =
            br_3_guard_TimerStatus_SM_Counting;
        }
      }
      break;
    case SSM_st_Expired_TimerStatus_SM :
      br_2_guard_TimerStatus_SM_Expired = re_start | autoretrigger;
      br_2_clock_TimerStatus_SM_Expired = br_2_guard_TimerStatus_SM_Expired;
      break;
    
  }
  /* sel_TimerStatus_SM */ switch (TimerStatus_SM_state_sel) {
    case SSM_st_Stopped_TimerStatus_SM :
      /* cb_anon_sm */ if (br_1_clock_TimerStatus_SM_Stopped) {
        tmp1 = kcg_false;
      }
      else /* cb_anon_sm */ if (br_2_clock_TimerStatus_SM_Stopped) {
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
  /* act_TimerStatus_SM */ switch (_26_TimerStatus_SM_state_act) {
    case SSM_st_Stopped_TimerStatus_SM :
      tmp = kcg_false;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatus_SM) {
        tmp = kcg_false;
      }
      else /* cb_anon_sm */ if (br_2_clock_TimerStatus_SM_Counting) {
        tmp = kcg_true;
      }
      else /* cb_anon_sm */ if (br_3_clock_TimerStatus_SM_Counting) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      break;
    case SSM_st_Expired_TimerStatus_SM :
      /* cb_anon_sm */ if (br_2_clock_TimerStatus_SM_Expired) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      break;
    
  }
  sStart = tmp1 | tmp;
  /* act_TimerStatus_SM */ switch (_26_TimerStatus_SM_state_act) {
    case SSM_st_Stopped_TimerStatus_SM :
      _L1_TimerStatus_SM_Stopped = kcg_false;
      _7_expired = _L1_TimerStatus_SM_Stopped;
      outC->expired = _7_expired;
      _8_expired_loc = kcg_false;
      _27_expired_loc = _8_expired_loc;
      _9_TimerStatus_SM_state_nxt = SSM_st_Stopped_TimerStatus_SM;
      outC->TimerStatus_SM_state_nxt = _9_TimerStatus_SM_state_nxt;
      _10_TimerStatus_SM_reset_nxt = kcg_false;
      outC->TimerStatus_SM_reset_nxt = _10_TimerStatus_SM_reset_nxt;
      _11_TimerStatus_SM_fired = _25_TimerStatus_SM_fired_strong;
      _24_TimerStatus_SM_fired = _11_TimerStatus_SM_fired;
      break;
    case SSM_st_Counting_TimerStatus_SM :
      _2_expired = _L7_TimerStatus_SM_Counting;
      outC->expired = _2_expired;
      _27_expired_loc = _3_expired_loc;
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatus_SM) {
        _15_TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        _4_TimerStatus_SM_state_nxt = _15_TimerStatus_SM_state_nxt;
      }
      else {
        br_4_guard_TimerStatus_SM_Counting = _3_expired_loc;
        if (br_2_guard_TimerStatus_SM_Counting) {
          _12_TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        }
        else if (br_3_guard_TimerStatus_SM_Counting) {
          _12_TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        }
        else if (br_4_guard_TimerStatus_SM_Counting) {
          _12_TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
        }
        else {
          _12_TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
        }
        _4_TimerStatus_SM_state_nxt = _12_TimerStatus_SM_state_nxt;
      }
      outC->TimerStatus_SM_state_nxt = _4_TimerStatus_SM_state_nxt;
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatus_SM) {
        _16_TimerStatus_SM_reset_nxt = kcg_false;
        _5_TimerStatus_SM_reset_nxt = _16_TimerStatus_SM_reset_nxt;
      }
      else {
        if (br_2_guard_TimerStatus_SM_Counting) {
          _13_TimerStatus_SM_reset_nxt = kcg_true;
        }
        else if (br_3_guard_TimerStatus_SM_Counting) {
          _13_TimerStatus_SM_reset_nxt = kcg_true;
        }
        else {
          _13_TimerStatus_SM_reset_nxt = br_4_guard_TimerStatus_SM_Counting;
        }
        _5_TimerStatus_SM_reset_nxt = _13_TimerStatus_SM_reset_nxt;
      }
      outC->TimerStatus_SM_reset_nxt = _5_TimerStatus_SM_reset_nxt;
      /* strong_fired_Counting */ if (Counting_weakb_clock_TimerStatus_SM) {
        _17_TimerStatus_SM_fired = _25_TimerStatus_SM_fired_strong;
        _6_TimerStatus_SM_fired = _17_TimerStatus_SM_fired;
      }
      else {
        if (br_2_guard_TimerStatus_SM_Counting) {
          _14_TimerStatus_SM_fired = SSM_TR_Counting_2_TimerStatus_SM;
        }
        else if (br_3_guard_TimerStatus_SM_Counting) {
          _14_TimerStatus_SM_fired = SSM_TR_Counting_3_TimerStatus_SM;
        }
        else if (br_4_guard_TimerStatus_SM_Counting) {
          _14_TimerStatus_SM_fired = SSM_TR_Counting_4_TimerStatus_SM;
        }
        else {
          _14_TimerStatus_SM_fired = SSM_TR_no_trans_TimerStatus_SM;
        }
        _6_TimerStatus_SM_fired = _14_TimerStatus_SM_fired;
      }
      _24_TimerStatus_SM_fired = _6_TimerStatus_SM_fired;
      break;
    case SSM_st_Expired_TimerStatus_SM :
      _L1_TimerStatus_SM_Expired = kcg_true;
      expired = _L1_TimerStatus_SM_Expired;
      outC->expired = expired;
      expired_loc = kcg_false;
      _27_expired_loc = expired_loc;
      if (br_2_guard_TimerStatus_SM_Expired) {
        TimerStatus_SM_state_nxt = SSM_st_Counting_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_state_nxt = SSM_st_Expired_TimerStatus_SM;
      }
      outC->TimerStatus_SM_state_nxt = TimerStatus_SM_state_nxt;
      TimerStatus_SM_reset_nxt = br_2_guard_TimerStatus_SM_Expired;
      outC->TimerStatus_SM_reset_nxt = TimerStatus_SM_reset_nxt;
      if (br_2_guard_TimerStatus_SM_Expired) {
        TimerStatus_SM_fired = SSM_TR_Expired_2_TimerStatus_SM;
      }
      else {
        TimerStatus_SM_fired = SSM_TR_no_trans_TimerStatus_SM;
      }
      _24_TimerStatus_SM_fired = TimerStatus_SM_fired;
      break;
    
  }
  _L1 = sStart;
  outC->started = _L1;
  outC->init = kcg_false;
  /* act_TimerStatus_SM */ switch (_26_TimerStatus_SM_state_act) {
    case SSM_st_Counting_TimerStatus_SM :
      outC->init1 = kcg_false;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** countDownTimer_MoRC_Pck_Utils.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

