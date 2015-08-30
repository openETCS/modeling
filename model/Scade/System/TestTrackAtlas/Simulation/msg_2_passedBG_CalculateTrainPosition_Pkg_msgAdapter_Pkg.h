/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */
#ifndef _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_
#define _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_

#include "kcg_types.h"
#include "DECODE_NID_LRBG_TM_conversions.h"
#include "nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"
#include "Read_P005_ForCalcTrainPos_TM_specific.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::passedBG */ passedBG;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::BG_passed */ BG_passed;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::onlyBGsAnnouncedViaRadio */ onlyBGsAnnouncedViaRadio;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P005_ForCalcTrainPos_TM_specific /* 2 */ _2_Context_2;
  outC_NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 3 */ Context_3;
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 1 */ _1_Context_1;
  outC_nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg /* 2 */ Context_2;
  outC_DECODE_NID_LRBG_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L12 */ _L12;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L11 */ _L11;
  BG_Header_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L10 */ _L10;
  RadioMetadata_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L9 */ _L9;
  MsgSource_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L8 */ _L8;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L7 */ _L7;
  ReceivedMessage_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L13 */ _L13;
  passedBG_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L80 */ _L80;
  NID_LRBG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L90 */ _L90;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L91 */ _L91;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L93 */ _L93;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L94 */ _L94;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L95 */ _L95;
  MsgSource_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L109 */ _L109;
  MsgSource_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L108 */ _L108;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L110 */ _L110;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L111 */ _L111;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L112 */ _L112;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L113 */ _L113;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L245 */ _L245;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L114 */ _L114;
  LinkedBGs_T_BG_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L295 */ _L295;
  NID_LRBG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L296 */ _L296;
  NID_C /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L297 */ _L297;
  NID_BG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L298 */ _L298;
  NID_LRBG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L299 */ _L299;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L300 */ _L300;
  NID_BG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L306 */ _L306;
  NID_C /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L305 */ _L305;
  RBC_Id_T_Common_Types_Pkg /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L322 */ _L322;
  NID_BG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L324 */ _L324;
  NID_C /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L323 */ _L323;
  NID_LRBG /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L325 */ _L325;
  kcg_bool /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L326 */ _L326;
  kcg_int /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L327 */ _L327;
  kcg_int /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L328 */ _L328;
} outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
extern void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC);

extern void msg_2_passedBG_reset_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC);

#endif /* _msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

