/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"

void msg_2_passedBG_reset_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC)
{
  /* 2 */ Read_P005_ForCalcTrainPos_reset_TM_specific(&outC->_2_Context_2);
  /* 3 */
  NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_3);
  /* 1 */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_1_Context_1);
  /* 2 */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_2);
  /* 1 */ DECODE_NID_LRBG_reset_TM_conversions(&outC->Context_1);
}

/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC)
{
  RadioMetadata_T_Common_Types_Pkg noname;
  NID_BG _1_noname;
  RBC_Id_T_Common_Types_Pkg _2_noname;
  NID_LRBG _3_noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L13, msgFromTrack);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L322, &outC->_L13.sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L12,
    &outC->_L13.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L11,
    &outC->_L13.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L10, &outC->_L13.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->_L13.radioMetadata);
  outC->_L8 = outC->_L13.source;
  outC->_L328 = 100000;
  outC->_L90 = outC->_L11.nid_lrbg;
  /* 1 */ DECODE_NID_LRBG_TM_conversions(outC->_L90, &outC->Context_1);
  outC->_L323 = outC->Context_1.nid_c;
  outC->_L324 = outC->Context_1.nid_bg;
  outC->_L327 = outC->_L324 % outC->_L328;
  _3_noname = outC->_L90;
  outC->_L326 = kcg_true;
  /* 2 */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L326,
    outC->_L323,
    outC->_L327,
    &outC->Context_2);
  outC->_L325 = outC->Context_2.nidLRBG;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_2_noname, &outC->_L322);
  outC->_L7 = outC->_L13.valid;
  outC->_L109 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L114 = outC->_L8 == outC->_L109;
  outC->_L300 = outC->_L10.valid;
  outC->_L297 = outC->_L10.nid_c;
  outC->_L298 = outC->_L10.nid_bg;
  /* 1 */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L300,
    outC->_L297,
    outC->_L298,
    &outC->_1_Context_1);
  outC->_L299 = outC->_1_Context_1.nidLRBG;
  if (outC->_L114) {
    outC->_L296 = outC->_L325;
  }
  else {
    outC->_L296 = outC->_L299;
  }
  /* 3 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L7,
    outC->_L296,
    &outC->Context_3);
  outC->_L305 = outC->Context_3.nidC;
  outC->_L306 = outC->Context_3.nidBG;
  _1_noname = outC->_L306;
  /* 2 */
  Read_P005_ForCalcTrainPos_TM_specific(
    &outC->_L12,
    outC->_L296,
    outC->_L305,
    &outC->_2_Context_2);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &outC->_L295,
    &outC->_2_Context_2.LinkedBGsOUT);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&noname, &outC->_L9);
  outC->_L245 = outC->_L295[0].valid;
  outC->_L94 = outC->_L10.valid;
  outC->_L112 = !outC->_L94;
  outC->_L113 = outC->_L7 & outC->_L112 & outC->_L114 & outC->_L245;
  outC->onlyBGsAnnouncedViaRadio = outC->_L113;
  outC->_L108 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L110 = outC->_L108 == outC->_L8;
  outC->_L111 = outC->_L7 & outC->_L110 & outC->_L94;
  outC->BG_passed = outC->_L111;
  outC->_L93 = outC->_L7 & outC->_L94;
  outC->_L91 = outC->_L7 & outC->_L245;
  outC->_L95 = outC->_L93 | outC->_L91;
  outC->_L80.valid = outC->_L95;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L80.BG_Header, &outC->_L10);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L80.linkedBGs, &outC->_L295);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->passedBG, &outC->_L80);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

