/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReceiveReportParameters_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void ReceiveReportParameters_init_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 8; i++) {
    outC->rem_reportedBGs[i].valid = kcg_true;
    outC->rem_reportedBGs[i].nidBG = 0;
    outC->rem_reportedBGs[i].location.nominal = 0;
    outC->rem_reportedBGs[i].location.d_min = 0;
    outC->rem_reportedBGs[i].location.d_max = 0;
  }
  outC->_L4_1.valid = kcg_true;
  outC->_L4_1.nid_packet = 0;
  outC->_L4_1.q_dir = Q_DIR_Reverse;
  outC->_L4_1.l_packet = 0;
  outC->_L4_1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_1.t_cycloc = 0;
  outC->_L4_1.d_cycloc = 0;
  outC->_L4_1.m_loc = M_LOC_Now;
  outC->_L4_1.n_iter = 0;
  for (i1 = 0; i1 < 2; i1++) {
    outC->_L4_1.iterPacket58List[i1].d_loc = 0;
    outC->_L4_1.iterPacket58List[i1].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->posRepParam.valid = kcg_true;
  outC->posRepParam.nid_packet = 0;
  outC->posRepParam.q_dir = Q_DIR_Reverse;
  outC->posRepParam.l_packet = 0;
  outC->posRepParam.q_scale = Q_SCALE_10_cm_scale;
  outC->posRepParam.t_cycloc = 0;
  outC->posRepParam.d_cycloc = 0;
  outC->posRepParam.m_loc = M_LOC_Now;
  outC->posRepParam.n_iter = 0;
  for (i2 = 0; i2 < 2; i2++) {
    outC->posRepParam.iterPacket58List[i2].d_loc = 0;
    outC->posRepParam.iterPacket58List[i2].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->present = kcg_true;
  for (i3 = 0; i3 < 8; i3++) {
    outC->out_reportedBGs[i3].valid = kcg_true;
    outC->out_reportedBGs[i3].nidBG = 0;
    outC->out_reportedBGs[i3].location.nominal = 0;
    outC->out_reportedBGs[i3].location.d_min = 0;
    outC->out_reportedBGs[i3].location.d_max = 0;
  }
  /* 1 */
  CheckValidityPacket58_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  CheckValidityPacket58_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::ReceiveReportParameters */
void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  /* linear::MemoryBasic::Memorized */
  static P58_PositionReportParameters_T_Packet_Types_Pkg Memorized_1;
  /* linear::MemoryBasic::Write */
  static kcg_bool Write_1;
  /* linear::MemoryBasic::Init */
  static P58_PositionReportParameters_T_Packet_Types_Pkg Init_1;
  /* linear::MemoryBasic::BM_Input */
  static P58_PositionReportParameters_T_Packet_Types_Pkg BM_Input_1;
  /* linear::MemoryBasic::_L7 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L7_1;
  /* linear::MemoryBasic::_L6 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L6_1;
  /* linear::MemoryBasic::_L5 */
  static kcg_bool _L5_1;
  /* linear::MemoryBasic::_L2 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L2_1;
  static kcg_bool noname;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::reportedBGs */
  static ReportedBGList_T_ProvidePositionReport_Pkg last_reportedBGs;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L6 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L6;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L14 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L14;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L65 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L65;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L66 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L66;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L67 */
  static ReceivedMessage_T_Common_Types_Pkg _L67;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L68 */
  static CompressedPackets_T_Common_Types_Pkg _L68;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L72 */
  static BG_Header_T_BG_Types_Pkg _L72;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L71 */
  static kcg_bool _L71;
  /* ProvidePositionReport_Pkg::ReceiveReportParameters::_L69 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L69;
  
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &_L14,
    (P58_PositionReportParameters_T_Packet_Types_Pkg *)
      &emptyPacket58_ProvidePositionReport_Pkg);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&Init_1, &_L14);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&_L7_1, &Init_1);
  /* 1_fby_1_init_4 */ if (outC->init) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&_L6_1, &_L7_1);
  }
  else {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &_L6_1,
      &outC->_L4_1);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L67, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L68, &_L67.packets);
  /* 1 */ Read_P058_Legacy_TM_specific(&_L68, &_L69);
  _L71 = _L69.valid;
  Write_1 = _L71;
  _L5_1 = Write_1;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&BM_Input_1, &_L69);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&_L2_1, &BM_Input_1);
  /* 1 */ if (_L5_1) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L4_1,
      &_L2_1);
  }
  else {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L4_1,
      &_L6_1);
  }
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &Memorized_1,
    &outC->_L4_1);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(&_L6, &Memorized_1);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L72, &_L67.BG_Common_Header);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&_L66, reportedBGs);
  /* 1 */
  CheckValidityPacket58_ProvidePositionReport_Pkg(
    &_L72,
    &_L66,
    &outC->Context_1);
  _L8 = outC->Context_1.found;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &_L65,
    &outC->Context_1.updatedBGs);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->posRepParam,
    &_L6);
  outC->present = _L71;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->out_reportedBGs,
    &_L65);
  noname = _L8;
  /* last_init_ck_reportedBGs */ if (outC->init) {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &last_reportedBGs,
      (ReportedBGList_T_ProvidePositionReport_Pkg *)
        &cReportedBGList_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &last_reportedBGs,
      &outC->rem_reportedBGs);
  }
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->rem_reportedBGs,
    reportedBGs);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ReceiveReportParameters_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

