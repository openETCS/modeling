/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.h"

/* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
void SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg(
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::Header */ Radio_TrackTrain_Header_T_TM *Header,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M03 */ P003V1_trackside_int_T_TM_baseline2 *M03,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M05 */ P005_trackside_int_T_TM *M05,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M15 */ P015_trackside_int_T_TM *M15,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M21 */ P021_trackside_int_T_TM *M21,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M27 */ P027V1_trackside_int_T_TM_baseline2 *M27,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M42 */ P042_trackside_int_T_TM *M42,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M57 */ P057_trackside_int_T_TM *M57,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M58 */ P058_trackside_int_T_TM *M58,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::MessageOUT */ CompressedRadioMessage_TM *MessageOUT)
{
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _16_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _17_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _14_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _15_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _12_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _13_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _10_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _11_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _8_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _9_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _6_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _7_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _4_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _5_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg _2_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _3_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static CompressedPackets_T_Common_Types_Pkg op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _1_op_call;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _18_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _19_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _20_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _21_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _22_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _23_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _24_ck_every;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
  static kcg_bool _25_ck_every;
  static kcg_bool noname;
  static kcg_bool _26_noname;
  static kcg_bool _27_noname;
  static kcg_bool _28_noname;
  static kcg_bool _29_noname;
  static kcg_bool _30_noname;
  static kcg_bool _31_noname;
  static kcg_bool _32_noname;
  static kcg_bool _33_noname;
  static kcg_bool _34_noname;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::RadioMessagePackets_1_2 */
  static CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_1_2;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::RadioMessagePackets_2_3 */
  static CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_2_3;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::RadioMessagePackets_3_4 */
  static CompressedPackets_T_Common_Types_Pkg RadioMessagePackets_3_4;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L1 */
  static P003V1_trackside_int_T_TM_baseline2 _L1;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L2 */
  static P005_trackside_int_T_TM _L2;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L3 */
  static P015_trackside_int_T_TM _L3;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L6 */
  static kcg_bool _L6;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L8 */
  static kcg_bool _L8;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L10 */
  static kcg_bool _L10;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L12 */
  static kcg_bool _L12;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L13 */
  static kcg_bool _L13;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L15 */
  static kcg_bool _L15;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L17 */
  static kcg_bool _L17;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L16 */
  static CompressedPackets_T_Common_Types_Pkg _L16;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L18 */
  static kcg_bool _L18;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L19 */
  static kcg_bool _L19;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L22 */
  static P027V1_trackside_int_T_TM_baseline2 _L22;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L21 */
  static P021_trackside_int_T_TM _L21;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L23 */
  static CompressedPackets_T_Common_Types_Pkg _L23;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L25 */
  static kcg_bool _L25;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L24 */
  static CompressedPackets_T_Common_Types_Pkg _L24;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L26 */
  static kcg_bool _L26;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L27 */
  static kcg_bool _L27;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L28 */
  static kcg_bool _L28;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L30 */
  static kcg_bool _L30;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L29 */
  static CompressedPackets_T_Common_Types_Pkg _L29;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L31 */
  static kcg_bool _L31;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L34 */
  static CompressedPackets_T_Common_Types_Pkg _L34;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L35 */
  static CompressedPackets_T_Common_Types_Pkg _L35;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L48 */
  static kcg_bool _L48;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L46 */
  static kcg_bool _L46;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L47 */
  static CompressedPackets_T_Common_Types_Pkg _L47;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L44 */
  static kcg_bool _L44;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L41 */
  static kcg_bool _L41;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L42 */
  static CompressedPackets_T_Common_Types_Pkg _L42;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L40 */
  static kcg_bool _L40;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L36 */
  static kcg_bool _L36;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L50 */
  static CompressedPackets_T_Common_Types_Pkg _L50;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L51 */
  static P042_trackside_int_T_TM _L51;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L52 */
  static P057_trackside_int_T_TM _L52;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L64 */
  static P042_trackside_int_T_TM _L64;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L62 */
  static kcg_bool _L62;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L61 */
  static CompressedPackets_T_Common_Types_Pkg _L61;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L60 */
  static kcg_bool _L60;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L59 */
  static Radio_TrackTrain_Header_T_TM _L59;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L58 */
  static kcg_bool _L58;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L57 */
  static kcg_bool _L57;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L56 */
  static CompressedPackets_T_Common_Types_Pkg _L56;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L55 */
  static kcg_bool _L55;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L54 */
  static CompressedRadioMessage_TM _L54;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L53 */
  static kcg_bool _L53;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L66 */
  static CompressedPackets_T_Common_Types_Pkg _L66;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L68 */
  static P058_trackside_int_T_TM _L68;
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::_L69 */
  static kcg_bool _L69;
  
  kcg_copy_P058_trackside_int_T_TM(&_L68, M58);
  _L58 = _L68.valid;
  ck_every = _L58;
  kcg_copy_P042_trackside_int_T_TM(&_L64, M42);
  _L62 = _L64.valid;
  _18_ck_every = _L62;
  kcg_copy_P057_trackside_int_T_TM(&_L52, M57);
  _L44 = _L52.valid;
  _20_ck_every = _L44;
  _L69 = kcg_false;
  _19_ck_every = _L69;
  kcg_copy_P042_trackside_int_T_TM(&_L51, M42);
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&_L22, M27);
  _L28 = _L22.valid;
  _21_ck_every = _L28;
  kcg_copy_P021_trackside_int_T_TM(&_L21, M21);
  _L26 = _L21.valid;
  _22_ck_every = _L26;
  kcg_copy_P015_trackside_int_T_TM(&_L3, M15);
  _L18 = _L3.valid;
  _23_ck_every = _L18;
  kcg_copy_P005_trackside_int_T_TM(&_L2, M05);
  _L15 = _L2.valid;
  _24_ck_every = _L15;
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&_L1, M03);
  _L6 = _L1.valid;
  _25_ck_every = _L6;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L35,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  /* ck_SEND_MergeRadioPackets */ if (_25_ck_every) {
    /* 1 */
    Write_P003V1_TM_trackside_baseline2(&_L1, &_L35, &_1_op_call, &op_call);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L34,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  /* ck_SEND_MergeRadioPackets */ if (_25_ck_every) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7, &op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7, &_L34);
  }
  /* ck_SEND_MergeRadioPackets */ if (_24_ck_every) {
    /* 1 */ Write_P005_TM_trackside(&_L2, &_L7, &_3_op_call, &_2_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L11, &_2_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L11, &_L7);
  }
  /* ck_SEND_MergeRadioPackets */ if (_23_ck_every) {
    /* 1 */ Write_P015_TM_trackside(&_L3, &_L11, &_5_op_call, &_4_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L16, &_4_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L16, &_L11);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &RadioMessagePackets_1_2,
    &_L16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L23,
    &RadioMessagePackets_1_2);
  /* ck_SEND_MergeRadioPackets */ if (_22_ck_every) {
    /* 1 */ Write_P021_TM_trackside(&_L21, &_L23, &_7_op_call, &_6_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L24, &_6_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L24, &_L23);
  }
  /* ck_SEND_MergeRadioPackets */ if (_21_ck_every) {
    /* 1 */
    Write_P027V1_TM_trackside_baseline2(&_L22, &_L24, &_9_op_call, &_8_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L29, &_8_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L29, &_L24);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &RadioMessagePackets_2_3,
    &_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L50,
    &RadioMessagePackets_2_3);
  /* ck_SEND_MergeRadioPackets */ if (_19_ck_every) {
    /* 2 */ Write_P042_TM_trackside(&_L51, &_L50, &_13_op_call, &_12_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L47, &_12_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L47, &_L50);
  }
  /* ck_SEND_MergeRadioPackets */ if (_20_ck_every) {
    /* 1 */ Write_P057_TM_trackside(&_L52, &_L47, &_11_op_call, &_10_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L42, &_10_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L42, &_L47);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &RadioMessagePackets_3_4,
    &_L42);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L66,
    &RadioMessagePackets_3_4);
  /* ck_SEND_MergeRadioPackets */ if (_18_ck_every) {
    /* 1 */ Write_P042_TM_trackside(&_L64, &_L66, &_15_op_call, &_14_op_call);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L61, &_14_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L61, &_L66);
  }
  /* ck_SEND_MergeRadioPackets */ if (ck_every) {
    /* 1 */ Write_P058_TM_trackside(&_L68, &_L61, &_17_op_call, &_16_op_call);
  }
  _L10 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_25_ck_every) {
    _L8 = _1_op_call;
  }
  else {
    _L8 = _L10;
  }
  noname = _L8;
  _L13 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_24_ck_every) {
    _L12 = _3_op_call;
  }
  else {
    _L12 = _L13;
  }
  _26_noname = _L12;
  _L19 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_23_ck_every) {
    _L17 = _5_op_call;
  }
  else {
    _L17 = _L19;
  }
  _27_noname = _L17;
  _L27 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_22_ck_every) {
    _L25 = _7_op_call;
  }
  else {
    _L25 = _L27;
  }
  _28_noname = _L25;
  _L31 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_21_ck_every) {
    _L30 = _9_op_call;
  }
  else {
    _L30 = _L31;
  }
  _29_noname = _L30;
  _L36 = kcg_false;
  _L40 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_19_ck_every) {
    _L46 = _13_op_call;
  }
  else {
    _L46 = _L40;
  }
  _30_noname = _L46;
  /* ck_SEND_MergeRadioPackets */ if (_20_ck_every) {
    _L41 = _11_op_call;
  }
  else {
    _L41 = _L36;
  }
  _31_noname = _L41;
  _L48 = _L51.valid;
  _L55 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (_18_ck_every) {
    _L60 = _15_op_call;
  }
  else {
    _L60 = _L55;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L59, Header);
  /* ck_SEND_MergeRadioPackets */ if (ck_every) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L56, &_16_op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L56, &_L61);
  }
  _L53 = kcg_false;
  /* ck_SEND_MergeRadioPackets */ if (ck_every) {
    _L57 = _17_op_call;
  }
  else {
    _L57 = _L53;
  }
  _32_noname = _L57;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L54.Header, &_L59);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L54.Messages, &_L56);
  kcg_copy_CompressedRadioMessage_TM(MessageOUT, &_L54);
  _33_noname = _L60;
  _34_noname = _L48;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MergeRadioPackets_RBC_SendMergeRadio_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

