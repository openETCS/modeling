/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */
#ifndef _CheckBaliseGroup_DetermineBGOrientation_LRBG_H_
#define _CheckBaliseGroup_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"
#include "CheckSingleBaliseGroup_DetermineBGOrientation_LRBG.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::CheckBaliseGroup::Orientation */ Orientation;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckSingleBaliseGroup_DetermineBGOrientation_LRBG /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_LCurrentLRBG */ _LCurrentLRBG;
  ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_LListOfBGs */ _LListOfBGs;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_LBGOOrientationAndType */ _LBGOOrientationAndType;
  TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_LTrainInfo */ _LTrainInfo;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_Lchecksinglebalisegroup_Orientation */ _Lchecksinglebalisegroup_Orientation;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L1 */ _L1;
  kcg_bool /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L2 */ _L2;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L3 */ _L3;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L8 */ _L8;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L6 */ _L6;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L7 */ _L7;
  kcg_bool /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L5 */ _L5;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::CheckBaliseGroup::_L4 */ _L4;
} outC_CheckBaliseGroup_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::CheckBaliseGroup */
extern void CheckBaliseGroup_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::CurrentLRBG */CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG *CurrentLRBG,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::ListOfBGs */ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs *ListOfBGs,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::BGOOrientationAndType */Orientation_DetermineBGOrientation_LRBG_DataDctionary BGOOrientationAndType,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo,
  outC_CheckBaliseGroup_DetermineBGOrientation_LRBG *outC);

extern void CheckBaliseGroup_reset_DetermineBGOrientation_LRBG(
  outC_CheckBaliseGroup_DetermineBGOrientation_LRBG *outC);

#endif /* _CheckBaliseGroup_DetermineBGOrientation_LRBG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBaliseGroup_DetermineBGOrientation_LRBG.h
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

