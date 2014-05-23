/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckSingleBaliseGroup_DetermineBGOrientation_LRBG.h"

/* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup */
Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable CheckSingleBaliseGroup_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::CurrentLRBG */CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG *CurrentLRBG,
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::ListOFBgs */ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs *ListOFBgs,
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo)
{
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::_L79 */ Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable _L79;
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::_L135 */ Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable _L135;
  /* DetermineBGOrientation_LRBG::CheckSingleBaliseGroup::Orientation */ Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable Orientation;
  
  if ((*CurrentLRBG).filteredbgmessage.q_dirlrbg !=
    Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable) {
    _L79 = (*CurrentLRBG).filteredbgmessage.q_dirlrbg;
  }
  else {
    _L79 = (*ListOFBgs)[0].filteredbgmessage.q_dirlrbg;
  }
  if (((*TrainInfo).m_leveltr ==
      M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable) |
    ((*TrainInfo).m_leveltr ==
      M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable)) {
    _L135 = _L79;
  }
  else if ((*CurrentLRBG).filteredbgmessage.q_dirlrbg ==
    (*ListOFBgs)[0].filteredbgmessage.q_dirlrbg) {
    if (one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable ==
      (*ListOFBgs)[0].filteredbgmessage.checkedbgmessage.headerflag[0].header.n_total) {
      _L135 = _L79;
    }
    else if (Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable ==
      (*CurrentLRBG).filteredbgmessage.checkedbgmessage.headerflag[0].header.q_link) {
      _L135 = (*ListOFBgs)[0].filteredbgmessage.q_dirlrbg;
    }
    else {
      _L135 = (*CurrentLRBG).filteredbgmessage.q_dirlrbg;
    }
  }
  else {
    _L135 =
      Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  }
  if (_L135 ==
    Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable) {
    Orientation =
      Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  }
  else if (_L135 ==
    Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable) {
    Orientation =
      Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  }
  else {
    Orientation =
      Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  }
  return Orientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckSingleBaliseGroup_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

