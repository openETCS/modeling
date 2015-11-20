/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void TransitionBuffer_init_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i2 = 0; i2 < 3; i2++) {
    outC->buffer[i2].valid = kcg_true;
    outC->buffer[i2].source = msrc_undefined_Common_Types_Pkg;
    outC->buffer[i2].radioMetadata.t_train_reference = kcg_true;
    outC->buffer[i2].radioMetadata.nid_em = kcg_true;
    outC->buffer[i2].radioMetadata.q_scale = kcg_true;
    outC->buffer[i2].radioMetadata.d_sr = kcg_true;
    outC->buffer[i2].radioMetadata.t_sh_rqst = kcg_true;
    outC->buffer[i2].radioMetadata.d_ref = kcg_true;
    outC->buffer[i2].radioMetadata.q_dir = kcg_true;
    outC->buffer[i2].radioMetadata.d_emergencystop = kcg_true;
    outC->buffer[i2].radioMetadata.m_version = kcg_true;
    outC->buffer[i2].BG_Common_Header.valid = kcg_true;
    outC->buffer[i2].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->buffer[i2].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i2].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->buffer[i2].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->buffer[i2].BG_Common_Header.m_mcount = 0;
    outC->buffer[i2].BG_Common_Header.nid_c = 0;
    outC->buffer[i2].BG_Common_Header.nid_bg = 0;
    outC->buffer[i2].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->buffer[i2].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->buffer[i2].BG_Common_Header.bgPosition.timestamp = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.odo.o_nominal = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.odo.o_min = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.odo.o_max = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.speed.v_lower = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.speed.v_upper = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.acceleration = 0;
    outC->buffer[i2].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->buffer[i2].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->buffer[i2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->buffer[i2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->buffer[i2].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->buffer[i2].BG_Common_Header.q_nvlocacc = 0;
    outC->buffer[i2].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->buffer[i2].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->buffer[i2].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->buffer[i2].Radio_Common_Header.radioDevice = 0;
    outC->buffer[i2].Radio_Common_Header.receivedSystemTime = 0;
    outC->buffer[i2].Radio_Common_Header.nid_message = 0;
    outC->buffer[i2].Radio_Common_Header.t_train = 0;
    outC->buffer[i2].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->buffer[i2].Radio_Common_Header.nid_lrbg = 0;
    outC->buffer[i2].Radio_Common_Header.t_train_reference = 0;
    outC->buffer[i2].Radio_Common_Header.nid_em = 0;
    outC->buffer[i2].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->buffer[i2].Radio_Common_Header.d_sr = 0;
    outC->buffer[i2].Radio_Common_Header.t_sh_rqst = 0;
    outC->buffer[i2].Radio_Common_Header.d_ref = 0;
    outC->buffer[i2].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->buffer[i2].Radio_Common_Header.d_emergencystop = 0;
    outC->buffer[i2].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    for (i = 0; i < 30; i++) {
      outC->buffer[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->buffer[i2].packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
      outC->buffer[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->buffer[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->buffer[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->buffer[i2].packets.PacketData[i1] = 0;
    }
    outC->buffer[i2].sendingRBC.valid = kcg_true;
    outC->buffer[i2].sendingRBC.nid_c = 0;
    outC->buffer[i2].sendingRBC.rbc_id = 0;
    outC->buffer[i2].sendingRBC.device_id = 0;
  }
  outC->stacksize = 0;
  outC->outStacksize = 0;
  outC->Out.valid = kcg_true;
  outC->Out.source = msrc_undefined_Common_Types_Pkg;
  outC->Out.radioMetadata.t_train_reference = kcg_true;
  outC->Out.radioMetadata.nid_em = kcg_true;
  outC->Out.radioMetadata.q_scale = kcg_true;
  outC->Out.radioMetadata.d_sr = kcg_true;
  outC->Out.radioMetadata.t_sh_rqst = kcg_true;
  outC->Out.radioMetadata.d_ref = kcg_true;
  outC->Out.radioMetadata.q_dir = kcg_true;
  outC->Out.radioMetadata.d_emergencystop = kcg_true;
  outC->Out.radioMetadata.m_version = kcg_true;
  outC->Out.BG_Common_Header.valid = kcg_true;
  outC->Out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Out.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Out.BG_Common_Header.m_mcount = 0;
  outC->Out.BG_Common_Header.nid_c = 0;
  outC->Out.BG_Common_Header.nid_bg = 0;
  outC->Out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->Out.BG_Common_Header.bgPosition.timestamp = 0;
  outC->Out.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->Out.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->Out.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->Out.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->Out.BG_Common_Header.bgPosition.acceleration = 0;
  outC->Out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal = 0;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min = 0;
  outC->Out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max = 0;
  outC->Out.BG_Common_Header.q_nvlocacc = 0;
  outC->Out.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->Out.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->Out.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->Out.Radio_Common_Header.radioDevice = 0;
  outC->Out.Radio_Common_Header.receivedSystemTime = 0;
  outC->Out.Radio_Common_Header.nid_message = 0;
  outC->Out.Radio_Common_Header.t_train = 0;
  outC->Out.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->Out.Radio_Common_Header.nid_lrbg = 0;
  outC->Out.Radio_Common_Header.t_train_reference = 0;
  outC->Out.Radio_Common_Header.nid_em = 0;
  outC->Out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->Out.Radio_Common_Header.d_sr = 0;
  outC->Out.Radio_Common_Header.t_sh_rqst = 0;
  outC->Out.Radio_Common_Header.d_ref = 0;
  outC->Out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Out.Radio_Common_Header.d_emergencystop = 0;
  outC->Out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i3 = 0; i3 < 30; i3++) {
    outC->Out.packets.PacketHeaders[i3].nid_packet = 0;
    outC->Out.packets.PacketHeaders[i3].q_dir = Q_DIR_Reverse;
    outC->Out.packets.PacketHeaders[i3].valid = kcg_true;
    outC->Out.packets.PacketHeaders[i3].startAddress = 0;
    outC->Out.packets.PacketHeaders[i3].endAddress = 0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->Out.packets.PacketData[i4] = 0;
  }
  outC->Out.sendingRBC.valid = kcg_true;
  outC->Out.sendingRBC.nid_c = 0;
  outC->Out.sendingRBC.rbc_id = 0;
  outC->Out.sendingRBC.device_id = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* InformationFilter_Pkg::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg(
  /* InformationFilter_Pkg::TransitionBuffer::In */ ReceivedMessage_T_Common_Types_Pkg *In,
  /* InformationFilter_Pkg::TransitionBuffer::Write */ kcg_bool Write,
  /* InformationFilter_Pkg::TransitionBuffer::Reset */ kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC)
{
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg _3_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int _2_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::Out */
  static ReceivedMessage_T_Common_Types_Pkg Out1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L12 */
  static ReceivedMessage_T_Common_Types_Pkg _L12_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L13 */
  static kcg_int _L13_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L14 */
  static TransitionBuffer_T_InformationFilter_Pkg _L14_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L5 */
  static ReceivedMessage_T_Common_Types_Pkg _L5_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::then::_L2 */
  static TransitionBuffer_T_InformationFilter_Pkg _L2_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::Out */
  static ReceivedMessage_T_Common_Types_Pkg Out;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else */
  static kcg_bool _16_else_clock_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg _15_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int _14_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::Out */
  static ReceivedMessage_T_Common_Types_Pkg Out13;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L11 */
  static kcg_bool _L1118_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L8 */
  static ReceivedMessage_T_Common_Types_Pkg _L819_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L9 */
  static kcg_int _L920_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L10 */
  static TransitionBuffer_T_InformationFilter_Pkg _L1021_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L4 */
  static ReceivedMessage_T_Common_Types_Pkg _L422_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L3 */
  static kcg_int _L323_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::then::_L1 */
  static TransitionBuffer_T_InformationFilter_Pkg _L124_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg _12_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int _11_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::Out */
  static ReceivedMessage_T_Common_Types_Pkg Out10;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L11 */
  static kcg_int _L1125_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L10 */
  static kcg_int _L1026_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L9 */
  static TransitionBuffer_T_InformationFilter_Pkg _L927_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L7 */
  static TransitionBuffer_T_InformationFilter_Pkg _L7_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L5 */
  static ReceivedMessage_T_Common_Types_Pkg _L528_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L4 */
  static kcg_int _L429_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else::else::_L1 */
  static TransitionBuffer_T_InformationFilter_Pkg _L130_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::Out */
  static ReceivedMessage_T_Common_Types_Pkg Out4;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int _5_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg _6_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L1 */
  static TransitionBuffer_T_InformationFilter_Pkg _L1_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L3 */
  static kcg_int _L3_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L4 */
  static ReceivedMessage_T_Common_Types_Pkg _L417_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L10 */
  static TransitionBuffer_T_InformationFilter_Pkg _L10_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L9 */
  static kcg_int _L9_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L8 */
  static ReceivedMessage_T_Common_Types_Pkg _L8_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1::else::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* InformationFilter_Pkg::TransitionBuffer::Out */
  static ReceivedMessage_T_Common_Types_Pkg Out7;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int _8_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg _9_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::buffer */
  static TransitionBuffer_T_InformationFilter_Pkg last_buffer;
  /* InformationFilter_Pkg::TransitionBuffer::stacksize */
  static kcg_int last_stacksize;
  /* InformationFilter_Pkg::TransitionBuffer::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* InformationFilter_Pkg::TransitionBuffer::c_w */
  static kcg_bool c_w;
  /* InformationFilter_Pkg::TransitionBuffer::c_rw */
  static kcg_bool c_rw;
  /* InformationFilter_Pkg::TransitionBuffer::c_r */
  static kcg_bool c_r;
  /* InformationFilter_Pkg::TransitionBuffer::_L8 */
  static kcg_bool _L8;
  /* InformationFilter_Pkg::TransitionBuffer::_L7 */
  static kcg_bool _L7;
  /* InformationFilter_Pkg::TransitionBuffer::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::TransitionBuffer::_L5 */
  static kcg_bool _L5;
  /* InformationFilter_Pkg::TransitionBuffer::_L4 */
  static ReceivedMessage_T_Common_Types_Pkg _L4;
  /* InformationFilter_Pkg::TransitionBuffer::_L3 */
  static kcg_bool _L3;
  /* InformationFilter_Pkg::TransitionBuffer::_L2 */
  static kcg_bool _L2;
  /* InformationFilter_Pkg::TransitionBuffer::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::TransitionBuffer::_L9 */
  static kcg_int _L9;
  
  _L1 = Write;
  _L3 = !_L1;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L4, In);
  _L6 = _L4.valid;
  _L2 = _L3 & _L6;
  c_w = _L2;
  _L5 = _L6 & _L1;
  _L8 = !_L6;
  _L7 = _L8 & _L1;
  c_rw = _L5;
  c_r = _L7;
  IfBlock1_clock = c_r == kcg_true;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _16_else_clock_IfBlock1 = c_rw == kcg_true;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
    }
    else {
      else_clock_IfBlock1 = c_w == kcg_true;
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L528_IfBlock1, In);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out10, &_L528_IfBlock1);
      }
    }
  }
  /* last_init_ck_buffer */ if (outC->init) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &last_buffer,
      (TransitionBuffer_T_InformationFilter_Pkg *)
        &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
  }
  else {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &last_buffer,
      &outC->buffer);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &_L124_IfBlock1,
      &last_buffer);
  }
  /* last_init_ck_stacksize */ if (outC->init) {
    last_stacksize = 0;
  }
  else {
    last_stacksize = outC->stacksize;
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &_L2_IfBlock1,
      &last_buffer);
    _L4_IfBlock1 = last_stacksize;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L5_IfBlock1, In);
    _L15_IfBlock1 = Reset;
    /* 2 */
    TransitionBuffer_read_only_InformationFilter_Pkg(
      &_L2_IfBlock1,
      _L4_IfBlock1,
      &_L5_IfBlock1,
      _L15_IfBlock1,
      &_L14_IfBlock1,
      &_L13_IfBlock1,
      &_L12_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out1, &_L12_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Out, &Out1);
    _2_stacksize = _L13_IfBlock1;
    outC->stacksize = _2_stacksize;
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &_3_buffer,
      &_L14_IfBlock1);
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
      &outC->buffer,
      &_3_buffer);
  }
  else {
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &_L1_IfBlock1,
        &last_buffer);
      _L3_IfBlock1 = last_stacksize;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L417_IfBlock1, In);
      _L11_IfBlock1 = Reset;
      /* 1 */
      TransitionBuffer_read_write_InformationFilter_Pkg(
        &_L1_IfBlock1,
        _L3_IfBlock1,
        &_L417_IfBlock1,
        _L11_IfBlock1,
        &_L10_IfBlock1,
        &_L9_IfBlock1,
        &_L8_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out7, &_L8_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out, &Out7);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L323_IfBlock1 = last_stacksize;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L422_IfBlock1, In);
        _L1118_IfBlock1 = Reset;
        /* 1 */
        TransitionBuffer_write_only_InformationFilter_Pkg(
          &_L124_IfBlock1,
          _L323_IfBlock1,
          &_L422_IfBlock1,
          _L1118_IfBlock1,
          &_L1021_IfBlock1,
          &_L920_IfBlock1,
          &_L819_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out13, &_L819_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out4, &Out13);
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out4, &Out10);
      }
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&Out, &Out4);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->Out, &Out);
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      _8_stacksize = _L9_IfBlock1;
      stacksize = _8_stacksize;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _14_stacksize = _L920_IfBlock1;
        _5_stacksize = _14_stacksize;
      }
      else {
        _L6_IfBlock1 = Reset;
        _L1125_IfBlock1 = 0;
        _L429_IfBlock1 = last_stacksize;
        /* 2 */ if (_L6_IfBlock1) {
          _L1026_IfBlock1 = _L1125_IfBlock1;
        }
        else {
          _L1026_IfBlock1 = _L429_IfBlock1;
        }
        _11_stacksize = _L1026_IfBlock1;
        _5_stacksize = _11_stacksize;
      }
      stacksize = _5_stacksize;
    }
    outC->stacksize = stacksize;
    /* ck_anon_activ */ if (_16_else_clock_IfBlock1) {
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
        &_9_buffer,
        &_L10_IfBlock1);
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&buffer, &_9_buffer);
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_15_buffer,
          &_L1021_IfBlock1);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_6_buffer,
          &_15_buffer);
      }
      else {
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_L927_IfBlock1,
          (TransitionBuffer_T_InformationFilter_Pkg *)
            &DEFAULT_TransitionBuffer_t_InformationFilter_Pkg);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_L130_IfBlock1,
          &last_buffer);
        /* 1 */ if (_L6_IfBlock1) {
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &_L7_IfBlock1,
            &_L927_IfBlock1);
        }
        else {
          kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
            &_L7_IfBlock1,
            &_L130_IfBlock1);
        }
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_12_buffer,
          &_L7_IfBlock1);
        kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(
          &_6_buffer,
          &_12_buffer);
      }
      kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&buffer, &_6_buffer);
    }
    kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(&outC->buffer, &buffer);
  }
  _L9 = outC->stacksize;
  outC->outStacksize = _L9;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

