/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FIFO_Integer_DMI_Control_Pkg_Utils_5.h"

void FIFO_Integer_init_DMI_Control_Pkg_Utils_5(
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->SM2_reset_nxt = kcg_true;
  outC->SM2_state_nxt = SSM_st_Increment_SM2;
  for (i = 0; i < 5; i++) {
    outC->FIFO_Queue[i] = 0;
  }
  outC->isEmpty = kcg_true;
  outC->isFull = kcg_true;
  RisingEdge_init_digital(&outC->Context_2);
  RisingEdge_init_digital(&outC->Context_1);
  Counter_init_pwlinear_int(&outC->_1_Context_1);
  for (i = 0; i < 5; i++) {
    InsertElemFIFO_init_DMI_Control_Pkg_Utils(&outC->_2_Context_2[i]);
  }
}


void FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 5; i++) {
    /* 2 */ InsertElemFIFO_reset_DMI_Control_Pkg_Utils(&outC->_2_Context_2[i]);
  }
  /* 1 */ Counter_reset_pwlinear_int(&outC->_1_Context_1);
  /* 1 */ RisingEdge_reset_digital(&outC->Context_1);
  /* 2 */ RisingEdge_reset_digital(&outC->Context_2);
}

/* DMI_Control_Pkg::Utils::FIFO_Integer */
void FIFO_Integer_DMI_Control_Pkg_Utils_5(
  /* DMI_Control_Pkg::Utils::FIFO_Integer::entryValue */ kcg_int entryValue,
  /* DMI_Control_Pkg::Utils::FIFO_Integer::insert */ kcg_bool insert,
  /* DMI_Control_Pkg::Utils::FIFO_Integer::delete */ kcg_bool delete,
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 *outC)
{
  kcg_int i;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Increment */ kcg_bool br_2_guard_SM2_Increment;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Increment */ kcg_bool br_1_guard_SM2_Increment;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Increment::_L23 */ array_int_5 _L23_SM2_Increment;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Increment::_L22 */ kcg_int _L22_SM2_Increment;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Increment::_L24 */ kcg_int _L24_SM2_Increment;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Decrement */ kcg_bool br_2_guard_SM2_Decrement;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2::Decrement */ kcg_bool br_1_guard_SM2_Decrement;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::FIFO_Queue */ array_int_5 last_FIFO_Queue;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2 */ SSM_ST_SM2 SM2_state_act;
  /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2 */ kcg_bool SM2_reset_sel;
  
  /* 2 */ RisingEdge_digital(delete, &outC->Context_2);
  /* 1 */ RisingEdge_digital(insert, &outC->Context_1);
  if (outC->init) {
    last_FIFO_Queue[0] = 0;
    last_FIFO_Queue[1] = 0;
    last_FIFO_Queue[2] = 0;
    last_FIFO_Queue[3] = 0;
    last_FIFO_Queue[4] = 0;
    SM2_state_act = SSM_st_Empty_SM2;
    outC->init = kcg_false;
    SM2_reset_sel = kcg_false;
  }
  else {
    kcg_copy_array_int_5(&last_FIFO_Queue, &outC->FIFO_Queue);
    SM2_state_act = outC->SM2_state_nxt;
    SM2_reset_sel = outC->SM2_reset_nxt;
  }
  switch (SM2_state_act) {
    case SSM_st_Increment_SM2 :
      i = 1;
      break;
    case SSM_st_Idle_SM2 :
      i = 0;
      break;
    case SSM_st_Empty_SM2 :
      i = 0;
      break;
    case SSM_st_Full_SM2 :
      i = 0;
      break;
    case SSM_st_Decrement_SM2 :
      i = - 1;
      break;
    
  }
  /* 1 */ Counter_pwlinear_int(i, kcg_false, &outC->_1_Context_1);
  switch (SM2_state_act) {
    case SSM_st_Decrement_SM2 :
      br_2_guard_SM2_Decrement = outC->_1_Context_1.Count == 0;
      br_1_guard_SM2_Decrement = outC->_1_Context_1.Count > 0;
      outC->isFull = kcg_false;
      outC->isEmpty = kcg_false;
      if (br_1_guard_SM2_Decrement) {
        outC->SM2_reset_nxt = kcg_false;
        outC->SM2_state_nxt = SSM_st_Idle_SM2;
      }
      else {
        outC->SM2_reset_nxt = br_2_guard_SM2_Decrement;
        if (br_2_guard_SM2_Decrement) {
          outC->SM2_state_nxt = SSM_st_Empty_SM2;
        }
        else {
          outC->SM2_state_nxt = SSM_st_Decrement_SM2;
        }
      }
      kcg_copy_Array4(&outC->FIFO_Queue[0], (Array4 *) &last_FIFO_Queue[1]);
      (&outC->FIFO_Queue[4])[0] = 0;
      break;
    case SSM_st_Full_SM2 :
      outC->isFull = kcg_true;
      outC->isEmpty = kcg_false;
      outC->SM2_reset_nxt = outC->Context_2.RE_Output;
      if (outC->Context_2.RE_Output) {
        outC->SM2_state_nxt = SSM_st_Decrement_SM2;
      }
      else {
        outC->SM2_state_nxt = SSM_st_Full_SM2;
      }
      kcg_copy_array_int_5(&outC->FIFO_Queue, &last_FIFO_Queue);
      break;
    case SSM_st_Empty_SM2 :
      outC->isFull = kcg_false;
      outC->isEmpty = kcg_true;
      outC->SM2_reset_nxt = outC->Context_1.RE_Output;
      if (outC->Context_1.RE_Output) {
        outC->SM2_state_nxt = SSM_st_Increment_SM2;
      }
      else {
        outC->SM2_state_nxt = SSM_st_Empty_SM2;
      }
      kcg_copy_array_int_5(&outC->FIFO_Queue, &last_FIFO_Queue);
      break;
    case SSM_st_Idle_SM2 :
      outC->isFull = kcg_false;
      outC->isEmpty = kcg_false;
      outC->SM2_reset_nxt = kcg_false;
      if (outC->Context_1.RE_Output) {
        outC->SM2_state_nxt = SSM_st_Increment_SM2;
      }
      else if (outC->Context_2.RE_Output) {
        outC->SM2_state_nxt = SSM_st_Decrement_SM2;
      }
      else {
        outC->SM2_state_nxt = SSM_st_Idle_SM2;
      }
      kcg_copy_array_int_5(&outC->FIFO_Queue, &last_FIFO_Queue);
      break;
    case SSM_st_Increment_SM2 :
      br_2_guard_SM2_Increment = outC->_1_Context_1.Count ==
        DimFIFO_queue_DMI_Control_Pkg;
      br_1_guard_SM2_Increment = outC->_1_Context_1.Count <
        DimFIFO_queue_DMI_Control_Pkg;
      _L24_SM2_Increment = outC->_1_Context_1.Count - 1;
      outC->isFull = kcg_false;
      outC->isEmpty = kcg_false;
      if (SM2_reset_sel) {
        for (i = 0; i < 5; i++) {
          /* 2 */
          InsertElemFIFO_reset_DMI_Control_Pkg_Utils(&outC->_2_Context_2[i]);
        }
      }
      for (i = 0; i < 5; i++) {
        /* 2 */
        InsertElemFIFO_DMI_Control_Pkg_Utils(
          i,
          _L24_SM2_Increment,
          entryValue,
          &outC->_2_Context_2[i]);
        _L23_SM2_Increment[i] = outC->_2_Context_2[i].entryValue;
        _L22_SM2_Increment = i + 1;
        if (!outC->_2_Context_2[i].condition) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (i = _L22_SM2_Increment; i < 5; i++) {
        _L23_SM2_Increment[i] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      if (br_1_guard_SM2_Increment) {
        outC->SM2_reset_nxt = kcg_false;
        outC->SM2_state_nxt = SSM_st_Idle_SM2;
      }
      else {
        outC->SM2_reset_nxt = br_2_guard_SM2_Increment;
        if (br_2_guard_SM2_Increment) {
          outC->SM2_state_nxt = SSM_st_Full_SM2;
        }
        else {
          outC->SM2_state_nxt = SSM_st_Increment_SM2;
        }
      }
      kcg_copy_array_int_5(&outC->FIFO_Queue, &_L23_SM2_Increment);
      break;
    
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** FIFO_Integer_DMI_Control_Pkg_Utils_5.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

