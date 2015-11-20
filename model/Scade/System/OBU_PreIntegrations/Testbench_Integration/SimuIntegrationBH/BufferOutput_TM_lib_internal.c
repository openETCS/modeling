/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void BufferOutput_init_TM_lib_internal(outC_BufferOutput_TM_lib_internal *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->stacksize = 0;
  for (i1 = 0; i1 < 100; i1++) {
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
void BufferOutput_reset_TM_lib_internal(outC_BufferOutput_TM_lib_internal *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::BufferOutput */
void BufferOutput_TM_lib_internal(
  /* TM_lib_internal::BufferOutput::In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *In,
  /* TM_lib_internal::BufferOutput::Write */ kcg_bool Write,
  outC_BufferOutput_TM_lib_internal *outC)
{
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int _3_stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _2_buffer;
  /* TM_lib_internal::BufferOutput::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out1;
  /* TM_lib_internal::BufferOutput::IfBlock1::then::_L8 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L8_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::then::_L7 */
  static kcg_int _L7_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::then::_L6 */
  static M_TrainTrack_Message_T_TM_radio_messages _L6_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::then::_L5 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L5_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::then::_L2 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L2_IfBlock1;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal buffer;
  /* TM_lib_internal::BufferOutput::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out;
  /* TM_lib_internal::BufferOutput::IfBlock1::else */
  static kcg_bool _17_else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int _15_stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _14_buffer;
  /* TM_lib_internal::BufferOutput::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out13;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L8 */
  static kcg_int _L823_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L7 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L724_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L6 */
  static kcg_int _L625_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L5 */
  static M_TrainTrack_Message_T_TM_radio_messages _L526_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L4 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L427_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L3 */
  static kcg_int _L328_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::then::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L129_IfBlock1;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int _12_stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _11_buffer;
  /* TM_lib_internal::BufferOutput::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out10;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::else::_L6 */
  static M_TrainTrack_Message_T_TM_radio_messages _L630_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::else::_L5 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L531_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::else::_L4 */
  static kcg_int _L432_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else::else::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L133_IfBlock1;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus noname;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_lib_internal::BufferOutput::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out4;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _5_buffer;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int _6_stacksize;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L1 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L1_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L4 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L422_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L5 */
  static M_TrainTrack_Message_T_TM_radio_messages _L521_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L6 */
  static kcg_int _L620_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L7 */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _L719_IfBlock1;
  /* TM_lib_internal::BufferOutput::IfBlock1::else::then::_L8 */
  static kcg_int _L818_IfBlock1;
  /* TM_lib_internal::BufferOutput::Out */
  static M_TrainTrack_Message_T_TM_radio_messages Out7;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal _8_buffer;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int _9_stacksize;
  static kcg_bool _16_noname;
  /* TM_lib_internal::BufferOutput::stacksize */
  static kcg_int last_stacksize;
  /* TM_lib_internal::BufferOutput::buffer */
  static M_TrainTrackRadioOutputBuffer_t_TM_lib_internal last_buffer;
  /* TM_lib_internal::BufferOutput::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_lib_internal::BufferOutput::c_r */
  static kcg_bool c_r;
  /* TM_lib_internal::BufferOutput::c_w */
  static kcg_bool c_w;
  /* TM_lib_internal::BufferOutput::c_rw */
  static kcg_bool c_rw;
  /* TM_lib_internal::BufferOutput::bussize */
  static kcg_int bussize;
  /* TM_lib_internal::BufferOutput::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L1;
  /* TM_lib_internal::BufferOutput::_L2 */
  static kcg_bool _L2;
  /* TM_lib_internal::BufferOutput::_L7 */
  static kcg_bool _L7;
  /* TM_lib_internal::BufferOutput::_L8 */
  static kcg_bool _L8;
  /* TM_lib_internal::BufferOutput::_L10 */
  static kcg_bool _L10;
  /* TM_lib_internal::BufferOutput::_L11 */
  static kcg_bool _L11;
  /* TM_lib_internal::BufferOutput::_L13 */
  static kcg_bool _L13;
  /* TM_lib_internal::BufferOutput::_L14 */
  static kcg_bool _L14;
  /* TM_lib_internal::BufferOutput::_L18 */
  static kcg_int _L18;
  /* TM_lib_internal::BufferOutput::_L19 */
  static kcg_bool _L19;
  /* TM_lib_internal::BufferOutput::_L20 */
  static kcg_int _L20;
  
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L1, In);
  _L2 = Write;
  /* 2 */ CheckSpace_TM_TrainTrack_Bus(&_L1, &_L7, &_L18);
  _L20 = 0;
  _L19 = _L18 > _L20;
  _L10 = !_L19;
  _L11 = _L10 & _L2;
  c_r = _L11;
  IfBlock1_clock = c_r == kcg_true;
  _L8 = _L2 & _L19;
  c_rw = _L8;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _17_else_clock_IfBlock1 = c_rw == kcg_true;
  }
  _L13 = !_L2;
  _L14 = _L13 & _L19;
  c_w = _L14;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
  }
  else {
    else_clock_IfBlock1 = c_w == kcg_true;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &_L630_IfBlock1,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &EMPTY_TrainTrackMessage_TM_lib_internal);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        &Out10,
        &_L630_IfBlock1);
    }
  }
  /* last_init_ck_buffer */ if (outC->init) {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &last_buffer,
      (M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *)
        &DEFAULT_output_buffer_TM_lib_internal);
  }
  else {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &last_buffer,
      &outC->buffer);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &_L129_IfBlock1,
      &last_buffer);
  }
  /* last_init_ck_stacksize */ if (outC->init) {
    last_stacksize = 0;
  }
  else {
    last_stacksize = outC->stacksize;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    _L328_IfBlock1 = last_stacksize;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L427_IfBlock1, In);
  }
  bussize = _L18;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &_L2_IfBlock1,
      &last_buffer);
    _L4_IfBlock1 = last_stacksize;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L5_IfBlock1, In);
    /* 1 */
    BufferOutput_read_only_TM_lib_internal(
      &_L2_IfBlock1,
      _L4_IfBlock1,
      &_L5_IfBlock1,
      &_L8_IfBlock1,
      &_L7_IfBlock1,
      &_L6_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out1, &_L6_IfBlock1);
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &_2_buffer,
      &_L8_IfBlock1);
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->buffer,
      &_2_buffer);
    _3_stacksize = _L7_IfBlock1;
    outC->stacksize = _3_stacksize;
  }
  else {
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_L1_IfBlock1,
        &last_buffer);
      _L3_IfBlock1 = last_stacksize;
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L422_IfBlock1, In);
      _L818_IfBlock1 = bussize;
      /* 1 */
      BufferOutput_read_write_TM_lib_internal(
        &_L1_IfBlock1,
        _L3_IfBlock1,
        &_L422_IfBlock1,
        _L818_IfBlock1,
        &_L719_IfBlock1,
        &_L620_IfBlock1,
        &_L521_IfBlock1);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out7, &_L521_IfBlock1);
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out, &Out7);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L823_IfBlock1 = bussize;
        /* 1 */
        BufferOutput_write_only_TM_lib_internal(
          &_L129_IfBlock1,
          _L328_IfBlock1,
          &_L427_IfBlock1,
          _L823_IfBlock1,
          &_L724_IfBlock1,
          &_L625_IfBlock1,
          &_L526_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
          &Out13,
          &_L526_IfBlock1);
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out4, &Out13);
      }
      else {
        kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out4, &Out10);
      }
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&Out, &Out4);
    }
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->Out, &Out);
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &_8_buffer,
        &_L719_IfBlock1);
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &buffer,
        &_8_buffer);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_14_buffer,
          &_L724_IfBlock1);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_5_buffer,
          &_14_buffer);
      }
      else {
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_L133_IfBlock1,
          &last_buffer);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_11_buffer,
          &_L133_IfBlock1);
        kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
          &_5_buffer,
          &_11_buffer);
      }
      kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
        &buffer,
        &_5_buffer);
    }
    kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
      &outC->buffer,
      &buffer);
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
      _9_stacksize = _L620_IfBlock1;
      stacksize = _9_stacksize;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _15_stacksize = _L625_IfBlock1;
        _6_stacksize = _15_stacksize;
      }
      else {
        _L432_IfBlock1 = last_stacksize;
        _12_stacksize = _L432_IfBlock1;
        _6_stacksize = _12_stacksize;
      }
      stacksize = _6_stacksize;
    }
    outC->stacksize = stacksize;
    /* ck_anon_activ */ if (_17_else_clock_IfBlock1) {
    }
    else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    }
    else {
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L531_IfBlock1, In);
      kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &noname,
        &_L531_IfBlock1);
    }
  }
  _16_noname = _L7;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

