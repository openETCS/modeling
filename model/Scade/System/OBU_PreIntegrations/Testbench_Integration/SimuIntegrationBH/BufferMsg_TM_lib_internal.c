/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void BufferMsg_init_TM_lib_internal(outC_BufferMsg_TM_lib_internal *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->stacksize = 0;
  for (i1 = 0; i1 < 5; i1++) {
    outC->buffer[i1].Message.valid = kcg_true;
    outC->buffer[i1].Message.nid_message = 0;
    outC->buffer[i1].Message.l_message = 0;
    outC->buffer[i1].Message.t_train = 0;
    outC->buffer[i1].Message.nid_engine = 0;
    outC->buffer[i1].Message.field1 = 0;
    outC->buffer[i1].Message.field2 = 0;
    outC->buffer[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->buffer[i1].OptionalPackets[i] = 0;
    }
  }
  outC->Out.Message.valid = kcg_true;
  outC->Out.Message.nid_message = 0;
  outC->Out.Message.l_message = 0;
  outC->Out.Message.t_train = 0;
  outC->Out.Message.nid_engine = 0;
  outC->Out.Message.field1 = 0;
  outC->Out.Message.field2 = 0;
  outC->Out.Message.field3 = 0;
  for (i2 = 0; i2 < 50; i2++) {
    outC->Out.OptionalPackets[i2] = 0;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BufferMsg_reset_TM_lib_internal(outC_BufferMsg_TM_lib_internal *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::BufferMsg */
void BufferMsg_TM_lib_internal(
  /* TM_lib_internal::BufferMsg::In */ M_TrainTrack_Message_T_TM_radio_messages *In,
  /* TM_lib_internal::BufferMsg::Write */ kcg_bool Write,
  outC_BufferMsg_TM_lib_internal *outC)
{
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int _3_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _2_buffer;
  /* TM_lib_internal::BufferMsg::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out1;
  /* TM_lib_internal::BufferMsg::IfBlock1::then::_L8 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L8_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::then::_L7 */
  static kcg_int _L7_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::then::_L6 */
  static M_TrainTrack_Message_T_TM_radio_messages _L6_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::then::_L5 */
  static M_TrainTrack_Message_T_TM_radio_messages _L5_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::then::_L2 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L2_IfBlock1;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal buffer;
  /* TM_lib_internal::BufferMsg::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out;
  /* TM_lib_internal::BufferMsg::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int _15_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _14_buffer;
  /* TM_lib_internal::BufferMsg::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out13;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L7 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L721_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L6 */
  static kcg_int _L622_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L5 */
  static M_TrainTrack_Message_T_TM_radio_messages _L523_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L4 */
  static M_TrainTrack_Message_T_TM_radio_messages _L424_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L3 */
  static kcg_int _L325_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::then::_L1 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L126_IfBlock1;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int _12_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _11_buffer;
  /* TM_lib_internal::BufferMsg::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out10;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::else::_L5 */
  static M_TrainTrack_Message_T_TM_radio_messages _L527_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::else::_L4 */
  static kcg_int _L428_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else::else::_L1 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L129_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferMsg::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out4;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _5_buffer;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int _6_stacksize;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L1 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L1_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L4 */
  static M_TrainTrack_Message_T_TM_radio_messages _L420_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L5 */
  static M_TrainTrack_Message_T_TM_radio_messages _L519_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L6 */
  static kcg_int _L618_IfBlock1;
  /* TM_lib_internal::BufferMsg::IfBlock1::else::then::_L7 */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _L717_IfBlock1;
  /* TM_lib_internal::BufferMsg::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out7;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal _8_buffer;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int _9_stacksize;
  /* TM_lib_internal::BufferMsg::stacksize */
  static kcg_int last_stacksize;
  /* TM_lib_internal::BufferMsg::buffer */
  static M_TrainTrackMessage_buffer_t_TM_lib_internal last_buffer;
  /* TM_lib_internal::BufferMsg::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_lib_internal::BufferMsg::c_r */
  static kcg_bool c_r;
  /* TM_lib_internal::BufferMsg::c_w */
  static kcg_bool c_w;
  /* TM_lib_internal::BufferMsg::c_rw */
  static kcg_bool c_rw;
  /* TM_lib_internal::BufferMsg::_L1 */
  static M_TrainTrack_Message_T_TM_radio_messages _L1;
  /* TM_lib_internal::BufferMsg::_L2 */
  static kcg_bool _L2;
  /* TM_lib_internal::BufferMsg::_L7 */
  static kcg_bool _L7;
  /* TM_lib_internal::BufferMsg::_L8 */
  static kcg_bool _L8;
  /* TM_lib_internal::BufferMsg::_L10 */
  static kcg_bool _L10;
  /* TM_lib_internal::BufferMsg::_L11 */
  static kcg_bool _L11;
  /* TM_lib_internal::BufferMsg::_L13 */
  static kcg_bool _L13;
  /* TM_lib_internal::BufferMsg::_L14 */
  static kcg_bool _L14;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L1, In);
  _L2 = Write;
  _L7 = _L1.Message.valid;
  _L10 = !_L7;
  _L11 = _L10 & _L2;
  c_r = _L11;
  IfBlock1_clock = c_r == kcg_true;
  _L8 = _L7 & _L2;
  c_rw = _L8;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _16_else_clock_IfBlock1 = c_rw == kcg_true;
  }
  _L13 = !_L2;
  _L14 = _L13 & _L7;
  c_w = _L14;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
  }
  else {
    else_clock_IfBlock1 = c_w == kcg_true;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L527_IfBlock1, In);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &Out10,
        &_L527_IfBlock1);
    }
  }
  /* last_init_ck_buffer */ if (outC->init) {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      (M_TrainTrackMessage_buffer_t_TM_lib_internal *)
        &DEFAULT_M_TrainTrackMessage_buffer_TM_lib_internal);
  }
  else {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &last_buffer,
      &outC->buffer);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &_L126_IfBlock1,
      &last_buffer);
  }
  /* last_init_ck_stacksize */ if (outC->init) {
    last_stacksize = 0;
  }
  else {
    last_stacksize = outC->stacksize;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &_L2_IfBlock1,
      &last_buffer);
    _L4_IfBlock1 = last_stacksize;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L5_IfBlock1, In);
    /* 1 */
    BufferMsg_read_only_TM_lib_internal(
      &_L2_IfBlock1,
      _L4_IfBlock1,
      &_L5_IfBlock1,
      &_L8_IfBlock1,
      &_L7_IfBlock1,
      &_L6_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out1, &_L6_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out1);
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &_2_buffer,
      &_L8_IfBlock1);
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &outC->buffer,
      &_2_buffer);
    _3_stacksize = _L7_IfBlock1;
    outC->stacksize = _3_stacksize;
  }
  else {
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &_L1_IfBlock1,
        &last_buffer);
      _L3_IfBlock1 = last_stacksize;
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L420_IfBlock1, In);
      /* 1 */
      BufferMsg_read_write_TM_lib_internal(
        &_L1_IfBlock1,
        _L3_IfBlock1,
        &_L420_IfBlock1,
        &_L717_IfBlock1,
        &_L618_IfBlock1,
        &_L519_IfBlock1);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out7, &_L519_IfBlock1);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out, &Out7);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L325_IfBlock1 = last_stacksize;
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&_L424_IfBlock1, In);
        /* 1 */
        BufferMsg_write_only_TM_lib_internal(
          &_L126_IfBlock1,
          _L325_IfBlock1,
          &_L424_IfBlock1,
          &_L721_IfBlock1,
          &_L622_IfBlock1,
          &_L523_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &Out13,
          &_L523_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out4, &Out13);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out4, &Out10);
      }
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out, &Out4);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out);
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &_8_buffer,
        &_L717_IfBlock1);
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &buffer,
        &_8_buffer);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_14_buffer,
          &_L721_IfBlock1);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_5_buffer,
          &_14_buffer);
      }
      else {
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_L129_IfBlock1,
          &last_buffer);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_11_buffer,
          &_L129_IfBlock1);
        kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
          &_5_buffer,
          &_11_buffer);
      }
      kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
        &buffer,
        &_5_buffer);
    }
    kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal(
      &outC->buffer,
      &buffer);
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _9_stacksize = _L618_IfBlock1;
      stacksize = _9_stacksize;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _15_stacksize = _L622_IfBlock1;
        _6_stacksize = _15_stacksize;
      }
      else {
        _L428_IfBlock1 = last_stacksize;
        _12_stacksize = _L428_IfBlock1;
        _6_stacksize = _12_stacksize;
      }
      stacksize = _6_stacksize;
    }
    outC->stacksize = stacksize;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

