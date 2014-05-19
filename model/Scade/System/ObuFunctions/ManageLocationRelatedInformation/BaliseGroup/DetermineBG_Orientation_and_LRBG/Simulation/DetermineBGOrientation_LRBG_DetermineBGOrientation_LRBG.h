/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */
#ifndef _DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_H_
#define _DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"
#include "CheckBaliseGroup_DetermineBGOrientation_LRBG.h"
#include "FinalCheck_DetermineBGOrientation_LRBG.h"
#include "GetBGMessageOrientation_DetermineBGOrientation_LRBG.h"

/* ========================  input structure  ====================== */
typedef struct {
  CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::CurrentLRBG */ CurrentLRBG;
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::CheckedBGMessage */ CheckedBGMessage;
  ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::ListOfBGs */ ListOfBGs;
  TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::TrainInfo */ TrainInfo;
  RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::RBCOrientationReport */ RBCOrientationReport;
} inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::FilterBGMessage */ FilterBGMessage;
  Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::RBCReport */ RBCReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FinalCheck_DetermineBGOrientation_LRBG /* 1 */ _2_Context_1;
  outC_CheckBaliseGroup_DetermineBGOrientation_LRBG /* 1 */ _1_Context_1;
  outC_GetBGMessageOrientation_DetermineBGOrientation_LRBG /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_LCurrentLRBG */ _LCurrentLRBG;
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_LCheckedBGMessage */ _LCheckedBGMessage;
  ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_LListOfBGs */ _LListOfBGs;
  TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_LTrainInfo */ _LTrainInfo;
  RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_LRBCOrientationReport */ _LRBCOrientationReport;
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_Lchecksinglebalisegroup_Orientation */ _Lchecksinglebalisegroup_Orientation;
  Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_Lfinalcheck_RBCReport */ _Lfinalcheck_RBCReport;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_Lgetbgmessageorientation_BGOOrientationAndType */ _Lgetbgmessageorientation_BGOOrientationAndType;
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage /* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG::_Lfinalcheck_FilteredBGMessage */ _Lfinalcheck_FilteredBGMessage;
} outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG */
extern void DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG(
  inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *inC,
  outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *outC);

extern void DetermineBGOrientation_LRBG_reset_DetermineBGOrientation_LRBG(
  outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *outC);

#endif /* _DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.h
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

