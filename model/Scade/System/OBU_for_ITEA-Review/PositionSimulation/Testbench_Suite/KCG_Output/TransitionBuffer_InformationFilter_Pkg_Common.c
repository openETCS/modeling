/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_InformationFilter_Pkg_Common.h"

void TransitionBuffer_init_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  int i1;
  int i;
  
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->_L50 = 0;
  outC->_L32 = 0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 500; i1++) {
      outC->buffer[i].packets.PacketData[i1] = 0;
    }
    for (i1 = 0; i1 < 30; i1++) {
      outC->buffer[i].packets.PacketHeaders[i1].endAddress = 0;
      outC->buffer[i].packets.PacketHeaders[i1].startAddress = 0;
      outC->buffer[i].packets.PacketHeaders[i1].valid = kcg_true;
      outC->buffer[i].packets.PacketHeaders[i1].q_dir = Q_DIR_Reverse;
      outC->buffer[i].packets.PacketHeaders[i1].nid_packet = 0;
    }
    outC->buffer[i].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i].Radio_Common_Header.d_emergencystop = 0;
    outC->buffer[i].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->buffer[i].Radio_Common_Header.d_ref = 0;
    outC->buffer[i].Radio_Common_Header.t_sh_rqst = 0.0;
    outC->buffer[i].Radio_Common_Header.d_sr = 0;
    outC->buffer[i].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->buffer[i].Radio_Common_Header.nid_em = 0;
    outC->buffer[i].Radio_Common_Header.t_train_reference = 0.0;
    outC->buffer[i].Radio_Common_Header.nid_lrbg = 0;
    outC->buffer[i].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->buffer[i].Radio_Common_Header.t_train = 0.0;
    outC->buffer[i].Radio_Common_Header.nid_message = 0;
    outC->buffer[i].Radio_Common_Header.receivedSystemTime = 0;
    outC->buffer[i].Radio_Common_Header.radioDevice = 0;
    outC->buffer[i].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->buffer[i].BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
    outC->buffer[i].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->buffer[i].BG_Common_Header.q_nvlocacc = 0;
    outC->buffer[i].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->buffer[i].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->buffer[i].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->buffer[i].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->buffer[i].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->buffer[i].BG_Common_Header.bgPosition.acceleration = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.speed.v_upper = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.speed.v_lower = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.odo.o_max = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.odo.o_min = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.odo.o_nominal = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.timestamp = 0;
    outC->buffer[i].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->buffer[i].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->buffer[i].BG_Common_Header.nid_bg = 0;
    outC->buffer[i].BG_Common_Header.nid_c = 0;
    outC->buffer[i].BG_Common_Header.m_mcount = 0;
    outC->buffer[i].BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->buffer[i].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->buffer[i].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->buffer[i].BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->buffer[i].BG_Common_Header.valid = kcg_true;
    outC->buffer[i].radioMetadata.m_version = kcg_true;
    outC->buffer[i].radioMetadata.d_emergencystop = kcg_true;
    outC->buffer[i].radioMetadata.q_dir = kcg_true;
    outC->buffer[i].radioMetadata.d_ref = kcg_true;
    outC->buffer[i].radioMetadata.t_sh_rqst = kcg_true;
    outC->buffer[i].radioMetadata.d_sr = kcg_true;
    outC->buffer[i].radioMetadata.q_scale = kcg_true;
    outC->buffer[i].radioMetadata.nid_em = kcg_true;
    outC->buffer[i].radioMetadata.t_train_reference = kcg_true;
    outC->buffer[i].source = msrc_undefined_Common_Types_Pkg;
    outC->buffer[i].valid = kcg_true;
  }
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 500; i1++) {
      outC->_L4_IfBlock1[i].packets.PacketData[i1] = 0;
    }
    for (i1 = 0; i1 < 30; i1++) {
      outC->_L4_IfBlock1[i].packets.PacketHeaders[i1].endAddress = 0;
      outC->_L4_IfBlock1[i].packets.PacketHeaders[i1].startAddress = 0;
      outC->_L4_IfBlock1[i].packets.PacketHeaders[i1].valid = kcg_true;
      outC->_L4_IfBlock1[i].packets.PacketHeaders[i1].q_dir = Q_DIR_Reverse;
      outC->_L4_IfBlock1[i].packets.PacketHeaders[i1].nid_packet = 0;
    }
    outC->_L4_IfBlock1[i].Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i].Radio_Common_Header.d_emergencystop = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L4_IfBlock1[i].Radio_Common_Header.d_ref = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.t_sh_rqst = 0.0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.d_sr = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4_IfBlock1[i].Radio_Common_Header.nid_em = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.t_train_reference = 0.0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.nid_lrbg = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L4_IfBlock1[i].Radio_Common_Header.t_train = 0.0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.nid_message = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.receivedSystemTime = 0;
    outC->_L4_IfBlock1[i].Radio_Common_Header.radioDevice = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    outC->_L4_IfBlock1[i].BG_Common_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4_IfBlock1[i].BG_Common_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4_IfBlock1[i].BG_Common_Header.q_nvlocacc = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
      0;
    outC->_L4_IfBlock1[i].BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
      0;
    outC->_L4_IfBlock1[i].BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
      0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.acceleration = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.speed.v_upper = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.speed.v_lower = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.odo.o_max = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.odo.o_min = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.odo.o_nominal = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.timestamp = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.bgPosition.valid = kcg_true;
    outC->_L4_IfBlock1[i].BG_Common_Header.q_link = Q_LINK_Unlinked;
    outC->_L4_IfBlock1[i].BG_Common_Header.nid_bg = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.nid_c = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.m_mcount = 0;
    outC->_L4_IfBlock1[i].BG_Common_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4_IfBlock1[i].BG_Common_Header.q_media = Q_MEDIA_Balise;
    outC->_L4_IfBlock1[i].BG_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_IfBlock1[i].BG_Common_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4_IfBlock1[i].BG_Common_Header.valid = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.m_version = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.d_emergencystop = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.q_dir = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.d_ref = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.t_sh_rqst = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.d_sr = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.q_scale = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.nid_em = kcg_true;
    outC->_L4_IfBlock1[i].radioMetadata.t_train_reference = kcg_true;
    outC->_L4_IfBlock1[i].source = msrc_undefined_Common_Types_Pkg;
    outC->_L4_IfBlock1[i].valid = kcg_true;
  }
  outC->_L20_IfBlock1 = 0;
  outC->outMessageAvailable = kcg_true;
  for (i = 0; i < 500; i++) {
    outC->outMessage.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->outMessage.packets.PacketHeaders[i].endAddress = 0;
    outC->outMessage.packets.PacketHeaders[i].startAddress = 0;
    outC->outMessage.packets.PacketHeaders[i].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[i].nid_packet = 0;
  }
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.Radio_Common_Header.d_emergencystop = 0;
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_ref = 0;
  outC->outMessage.Radio_Common_Header.t_sh_rqst = 0.0;
  outC->outMessage.Radio_Common_Header.d_sr = 0;
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.nid_em = 0;
  outC->outMessage.Radio_Common_Header.t_train_reference = 0.0;
  outC->outMessage.Radio_Common_Header.nid_lrbg = 0;
  outC->outMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.t_train = 0.0;
  outC->outMessage.Radio_Common_Header.nid_message = 0;
  outC->outMessage.Radio_Common_Header.receivedSystemTime = 0;
  outC->outMessage.Radio_Common_Header.radioDevice = 0;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outMessage.BG_Common_Header.q_nvlocacc = 0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = 0;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.nid_bg = 0;
  outC->outMessage.BG_Common_Header.nid_c = 0;
  outC->outMessage.BG_Common_Header.m_mcount = 0;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.valid = kcg_true;
}


void TransitionBuffer_reset_InformationFilter_Pkg_Common(
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::Common::TransitionBuffer */
void TransitionBuffer_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::TransitionBuffer::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inStoreMessage */ kcg_bool inStoreMessage,
  /* InformationFilter_Pkg::Common::TransitionBuffer::inReadMessage */ kcg_bool inReadMessage,
  outC_TransitionBuffer_InformationFilter_Pkg_Common *outC)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* InformationFilter_Pkg::Common::TransitionBuffer::size */ kcg_int size;
  /* InformationFilter_Pkg::Common::TransitionBuffer::entry */ kcg_int entry;
  /* InformationFilter_Pkg::Common::TransitionBuffer::_L38 */ kcg_int _L38;
  /* InformationFilter_Pkg::Common::TransitionBuffer::_L44 */ kcg_bool _L44;
  
  if (inStoreMessage) {
    if (outC->init) {
      _L38 = 0;
      kcg_copy_Buffer_DataDictionary_Pkg(
        &outC->_L4_IfBlock1,
        (Buffer_DataDictionary_Pkg *) &INIT_BUFFER_Config_Pkg);
    }
    else {
      _L38 = outC->_L20_IfBlock1;
    }
    if ((0 <= _L38) & (_L38 < 3)) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L4_IfBlock1[_L38],
        inMessage);
    }
    kcg_copy_Buffer_DataDictionary_Pkg(&outC->buffer, &outC->_L4_IfBlock1);
    outC->_L20_IfBlock1 = (_L38 + 1) % MAX_TRANSITION_BUFFFER_SIZE_Config_Pkg;
    tmp1 = 1;
    outC->init = kcg_false;
  }
  else {
    if (outC->init1) {
      kcg_copy_Buffer_DataDictionary_Pkg(
        &outC->buffer,
        (Buffer_DataDictionary_Pkg *) &INIT_BUFFER_Config_Pkg);
    }
    tmp1 = 0;
  }
  if (outC->init1) {
    entry = 0;
    outC->init1 = kcg_false;
    _L38 = 0;
  }
  else {
    entry = outC->_L50;
    _L38 = outC->_L32;
  }
  if ((0 <= entry) & (entry < 3)) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &outC->buffer[entry]);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  }
  if (_L38 <= MAX_TRANSITION_BUFFFER_SIZE_Config_Pkg) {
    size = _L38;
  }
  else {
    size = MAX_TRANSITION_BUFFFER_SIZE_Config_Pkg;
  }
  _L44 = inReadMessage & (size > 0);
  if (_L44) {
    tmp = - 1;
    _L38 = 1;
    outC->outMessageAvailable = kcg_true;
  }
  else {
    tmp = 0;
    _L38 = 0;
    outC->outMessageAvailable = kcg_false;
  }
  outC->_L32 = size + tmp1 + tmp;
  if (inStoreMessage & (size == 3)) {
    tmp = 1;
  }
  else {
    tmp = 0;
  }
  outC->_L50 = (entry + _L38 + tmp) % MAX_TRANSITION_BUFFFER_SIZE_Config_Pkg;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TransitionBuffer_InformationFilter_Pkg_Common.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

