/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"

/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::BG_passed */ kcg_bool *BG_passed,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::onlyBGsAnnouncedViaRadio */ kcg_bool *onlyBGsAnnouncedViaRadio)
{
  TM_CompressedRadioMessage tmp;
  TM_Radio_TrackTrain_Header_T tmp1;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L248 */ LinkedBGs_T_BG_Types_Pkg _L248;
  
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*passedBG).BG_Header,
    &(*msgFromTrack).BG_Common_Header);
  kcg_copy_TM_Radio_TrackTrain_Header_T(
    &tmp1,
    (TM_Radio_TrackTrain_Header_T *)
      &cTM_Radio_TrackTrain_Header_Default_CalculateTrainPosition_Pkg_msgAdapter_Pkg);
  tmp1.nid_lrbg = (*msgFromTrack).Radio_Common_Header.nid_lrbg;
  kcg_copy_TM_Radio_TrackTrain_Header_T(&tmp.Header, &tmp1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp.Messages,
    &(*msgFromTrack).packets);
  /* 3 */ RECV_ReadPacket005(&tmp, &_L248);
  (*passedBG).valid = ((*msgFromTrack).valid &
      (*msgFromTrack).BG_Common_Header.valid) | ((*msgFromTrack).valid &
      _L248[0].valid);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&(*passedBG).linkedBGs, &_L248);
  *onlyBGsAnnouncedViaRadio = (*msgFromTrack).valid &
    !(*msgFromTrack).BG_Common_Header.valid & ((*msgFromTrack).source ==
      msrc_Euroradio_Common_Types_Pkg) & _L248[0].valid;
  *BG_passed = (*msgFromTrack).valid & (msrc_Eurobalise_Common_Types_Pkg ==
      (*msgFromTrack).source) & (*msgFromTrack).BG_Common_Header.valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

