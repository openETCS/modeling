/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG.h"

/* DetermineBGOrientation_LRBG::GetBGMessageOrientation */
Orientation_DetermineBGOrientation_LRBG_DataDctionary GetBGMessageOrientation_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::CheckedBGMessage */CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage *CheckedBGMessage)
{
  /* DetermineBGOrientation_LRBG::GetBGMessageOrientation::Orientation */ Orientation_DetermineBGOrientation_LRBG_DataDctionary Orientation;
  
  if ((M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable !=
      (*CheckedBGMessage).headerflag[0].header.m_dup) |
    ((*CheckedBGMessage).headerflag[0].header.n_total ==
      two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable) |
    ((*CheckedBGMessage).headerflag[0].header.n_total ==
      one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable)) {
    Orientation = Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary;
  }
  else {
    Orientation = /* 1 */
      ArrCheck_DetermineBGOrientation_LRBG(
        (*CheckedBGMessage).headerflag[0].header.n_pig);
  }
  return Orientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetBGMessageOrientation_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

