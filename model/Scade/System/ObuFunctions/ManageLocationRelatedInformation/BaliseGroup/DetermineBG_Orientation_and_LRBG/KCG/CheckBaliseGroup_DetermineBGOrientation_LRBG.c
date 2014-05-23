/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBaliseGroup_DetermineBGOrientation_LRBG.h"

/* DetermineBGOrientation_LRBG::CheckBaliseGroup */
Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable CheckBaliseGroup_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::CurrentLRBG */CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG *CurrentLRBG,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::ListOfBGs */ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs *ListOfBGs,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::BGOOrientationAndType */Orientation_DetermineBGOrientation_LRBG_DataDctionary BGOOrientationAndType,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo)
{
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable tmp;
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::Orientation */ Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable Orientation;
  
  tmp = /* 1 */
    CheckSingleBaliseGroup_DetermineBGOrientation_LRBG(
      CurrentLRBG,
      ListOfBGs,
      TrainInfo);
  if (BGOOrientationAndType ==
    Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary) {
    Orientation = tmp;
  }
  else if (BGOOrientationAndType ==
    DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary) {
    Orientation =
      Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  }
  else {
    Orientation =
      Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  }
  return Orientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBaliseGroup_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

