/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-20T18:38:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG.h"

void GetBGMessageOrientation_reset_DetermineBGOrientation_LRBG(
  outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG *outC)
{
  /* 1 */ ArrCheck_reset_DetermineBGOrientation_LRBG(&outC->Context_1);
}

/* DetermineBGOrientation_LRBG::GetBGMessageOrientation */
void GetBGMessageOrientation_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::CheckedBGMessage */CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage *CheckedBGMessage,
  outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG *outC)
{
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L1,
    CheckedBGMessage);
  outC->_L13 = outC->_L1.additionalinformation;
  kcg_copy_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L12,
    &outC->_L1.headerflag);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L31,
    &outC->_L12[7]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L30,
    &outC->_L12[6]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L29,
    &outC->_L12[5]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L28,
    &outC->_L12[4]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L27,
    &outC->_L12[3]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L26,
    &outC->_L12[2]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L25,
    &outC->_L12[1]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L24,
    &outC->_L12[0]);
  kcg_copy_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L35,
    &outC->_L24.flag);
  kcg_copy_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(
    &outC->_L34,
    &outC->_L24.header);
  outC->_L110 = outC->_L34.m_dup;
  outC->_L109 = outC->_L34.m_mcount;
  outC->_L108 = outC->_L34.nid_c;
  outC->_L107 = outC->_L34.nid_bg;
  outC->_L106 = outC->_L34.q_link;
  outC->_L105 = outC->_L34.q_updown;
  outC->_L104 = outC->_L34.q_media;
  outC->_L103 = outC->_L34.n_pig;
  outC->_L102 = outC->_L34.n_total;
  outC->_L323 =
    M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L324 = outC->_L323 != outC->_L110;
  outC->_L320 =
    two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L319 = outC->_L102 == outC->_L320;
  outC->_L321 = outC->_L324 | outC->_L319;
  outC->_L316 =
    one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L315 = outC->_L102 == outC->_L316;
  outC->_L318 = outC->_L321 | outC->_L315;
  outC->_L317 = Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary;
  /* 1 */ ArrCheck_DetermineBGOrientation_LRBG(outC->_L103, &outC->Context_1);
  outC->_L310 = outC->Context_1.Orientation;
  if (outC->_L318) {
    outC->_L311 = outC->_L317;
  }
  else {
    outC->_L311 = outC->_L310;
  }
  outC->Orientation = outC->_L311;
  outC->_L101 = outC->_L34.m_version;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetBGMessageOrientation_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-20T18:38:18
*************************************************************$ */

