/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSingleBaliseGroup_DetermineBGOrientation_LRBG.h"

void CheckSingleBaliseGroup_reset_DetermineBGOrientation_LRBG(
  outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG *outC)
{
}

/* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup */
void CheckSingleBaliseGroup_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::CurrentLRBG */CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG *CurrentLRBG,
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::ListOFBgs */ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs *ListOFBgs,
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo,
  outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG *outC)
{
  kcg_copy_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(
    &outC->_L2,
    ListOFBgs);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L57,
    &outC->_L2[19]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L56,
    &outC->_L2[18]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L55,
    &outC->_L2[17]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L54,
    &outC->_L2[16]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L53,
    &outC->_L2[15]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L52,
    &outC->_L2[14]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L51,
    &outC->_L2[13]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L50,
    &outC->_L2[12]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L49,
    &outC->_L2[11]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L48,
    &outC->_L2[10]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L47,
    &outC->_L2[9]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L46,
    &outC->_L2[8]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L45,
    &outC->_L2[7]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L44,
    &outC->_L2[6]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L43,
    &outC->_L2[5]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L42,
    &outC->_L2[4]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L41,
    &outC->_L2[3]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L40,
    &outC->_L2[2]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L39,
    &outC->_L2[1]);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L1,
    CurrentLRBG);
  kcg_copy_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L125,
    &outC->_L1.position);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L38,
    &outC->_L2[0]);
  kcg_copy_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_L127,
    &outC->_L38.position);
  kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
    &outC->_L124,
    &outC->_L1.filteredbgmessage);
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L131,
    &outC->_L124.checkedbgmessage);
  kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
    &outC->_L126,
    &outC->_L38.filteredbgmessage);
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L133,
    &outC->_L126.checkedbgmessage);
  kcg_copy_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(
    &outC->_L174,
    TrainInfo);
  outC->_L173 = outC->_L174.m_mode;
  outC->_L183 = outC->_L131.additionalinformation;
  kcg_copy_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L182,
    &outC->_L131.headerflag);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L199,
    &outC->_L182[7]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L198,
    &outC->_L182[6]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L197,
    &outC->_L182[5]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L196,
    &outC->_L182[4]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L195,
    &outC->_L182[3]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L194,
    &outC->_L182[2]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L193,
    &outC->_L182[1]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L192,
    &outC->_L182[0]);
  kcg_copy_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L203,
    &outC->_L192.flag);
  kcg_copy_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(
    &outC->_L202,
    &outC->_L192.header);
  outC->_L225 = outC->_L202.m_dup;
  outC->_L224 = outC->_L202.m_mcount;
  outC->_L223 = outC->_L202.nid_c;
  outC->_L222 = outC->_L202.nid_bg;
  outC->_L221 = outC->_L202.q_link;
  outC->_L220 = outC->_L202.q_updown;
  outC->_L219 = outC->_L202.q_media;
  outC->_L218 = outC->_L202.n_pig;
  outC->_L217 = outC->_L202.n_total;
  kcg_copy_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L274,
    &outC->_L133.headerflag);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L256,
    &outC->_L274[0]);
  kcg_copy_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L255,
    &outC->_L256.flag);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L263,
    &outC->_L274[7]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L262,
    &outC->_L274[6]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L261,
    &outC->_L274[5]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L260,
    &outC->_L274[4]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L259,
    &outC->_L274[3]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L258,
    &outC->_L274[2]);
  kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L257,
    &outC->_L274[1]);
  kcg_copy_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM(
    &outC->_L254,
    &outC->_L256.header);
  outC->_L273 = outC->_L254.m_dup;
  outC->_L272 = outC->_L254.m_mcount;
  outC->_L271 = outC->_L254.nid_c;
  outC->_L270 = outC->_L254.nid_bg;
  outC->_L269 = outC->_L254.q_link;
  outC->_L268 = outC->_L254.q_updown;
  outC->_L267 = outC->_L254.q_media;
  outC->_L266 = outC->_L254.n_pig;
  outC->_L265 = outC->_L254.n_total;
  outC->_L275 = outC->_L133.additionalinformation;
  outC->_L130 = outC->_L124.q_dirlrbg;
  outC->_L132 = outC->_L126.q_dirlrbg;
  outC->_L253 = outC->_L130 == outC->_L132;
  outC->_L277 =
    one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L276 = outC->_L277 == outC->_L265;
  outC->_L82 =
    Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L81 = outC->_L130 != outC->_L82;
  if (outC->_L81) {
    outC->_L79 = outC->_L130;
  }
  else {
    outC->_L79 = outC->_L132;
  }
  outC->_L226 =
    Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L179 = outC->_L226 == outC->_L221;
  if (outC->_L179) {
    outC->_L178 = outC->_L132;
  }
  else {
    outC->_L178 = outC->_L130;
  }
  if (outC->_L276) {
    outC->_L278 = outC->_L79;
  }
  else {
    outC->_L278 = outC->_L178;
  }
  outC->_L252 =
    Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  if (outC->_L253) {
    outC->_L251 = outC->_L278;
  }
  else {
    outC->_L251 = outC->_L252;
  }
  outC->_L300 =
    Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L299 =
    Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L172 = outC->_L174.m_leveltr;
  outC->_L176 =
    M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L175 = outC->_L172 == outC->_L176;
  if (outC->_L175) {
    outC->_L135 = outC->_L79;
  }
  else {
    outC->_L135 = outC->_L251;
  }
  outC->_L298 = outC->_L135 == outC->_L299;
  outC->_L297 =
    Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  if (outC->_L298) {
    outC->_L296 = outC->_L297;
  }
  else {
    outC->_L296 = outC->_L300;
  }
  outC->_L287 =
    Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L286 =
    Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L283 = outC->_L135 == outC->_L287;
  if (outC->_L283) {
    outC->_L282 = outC->_L286;
  }
  else {
    outC->_L282 = outC->_L296;
  }
  outC->_L264 = outC->_L254.m_version;
  outC->_L216 = outC->_L202.m_version;
  outC->Orientation = outC->_L282;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSingleBaliseGroup_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

