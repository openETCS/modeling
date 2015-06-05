/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */
#ifndef _TestStory00A_P005_Internal_H_
#define _TestStory00A_P005_Internal_H_

#include "kcg_types.h"
#include "Story00A_FirstTest.h"
#include "Read_P005_ForCalcTrainPos_TM.h"

/* ========================  input structure  ====================== */
typedef struct {
  NID_LRBG /* Internal::TestStory00A_P005::LRBG */ LRBG;
  kcg_real /* Internal::TestStory00A_P005::Loc */ Loc;
} inC_TestStory00A_P005_Internal;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TelegramHeader_T_BG_Types_Pkg /* Internal::TestStory00A_P005::TelegramHeader */ TelegramHeader;
  LinkedBGs_T_BG_Types_Pkg /* Internal::TestStory00A_P005::LinkedBGsOUT */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P005_ForCalcTrainPos_TM /* 1 */ _1_Context_1;
  outC_Story00A_FirstTest /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TelegramHeader_T_BG_Types_Pkg /* Internal::TestStory00A_P005::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* Internal::TestStory00A_P005::_L1 */ _L1;
  LinkedBGs_T_BG_Types_Pkg /* Internal::TestStory00A_P005::_L3 */ _L3;
  NID_LRBG /* Internal::TestStory00A_P005::_L4 */ _L4;
  kcg_real /* Internal::TestStory00A_P005::_L5 */ _L5;
} outC_TestStory00A_P005_Internal;

/* ===========  node initialization and cycle functions  =========== */
/* Internal::TestStory00A_P005 */
extern void TestStory00A_P005_Internal(
  inC_TestStory00A_P005_Internal *inC,
  outC_TestStory00A_P005_Internal *outC);

extern void TestStory00A_P005_reset_Internal(
  outC_TestStory00A_P005_Internal *outC);

#endif /* _TestStory00A_P005_Internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestStory00A_P005_Internal.h
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

