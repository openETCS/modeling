/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */
#ifndef _Read_P005_ForCalcTrainPos_TM_H_
#define _Read_P005_ForCalcTrainPos_TM_H_

#include "kcg_types.h"
#include "Read_P005_TM.h"
#include "C_P005_ForCalcTrainPos_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LinkedBGs_T_BG_Types_Pkg /* TM::Read_P005_ForCalcTrainPos::LinkedBGsOUT */ LinkedBGsOUT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P005_ForCalcTrainPos_TM_conversions /* 1 */ _1_Context_1;
  outC_Read_P005_TM /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* TM::Read_P005_ForCalcTrainPos::_L1 */ _L1;
  NID_LRBG /* TM::Read_P005_ForCalcTrainPos::_L2 */ _L2;
  P005_OBU_T_TM /* TM::Read_P005_ForCalcTrainPos::_L3 */ _L3;
  LinkedBGs_T_BG_Types_Pkg /* TM::Read_P005_ForCalcTrainPos::_L4 */ _L4;
} outC_Read_P005_ForCalcTrainPos_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::Read_P005_ForCalcTrainPos */
extern void Read_P005_ForCalcTrainPos_TM(
  /* TM::Read_P005_ForCalcTrainPos::RadioMessage_IN */CompressedPackets_T_Common_Types_Pkg *RadioMessage_IN,
  /* TM::Read_P005_ForCalcTrainPos::LRBG */NID_LRBG LRBG,
  outC_Read_P005_ForCalcTrainPos_TM *outC);

extern void Read_P005_ForCalcTrainPos_reset_TM(
  outC_Read_P005_ForCalcTrainPos_TM *outC);

#endif /* _Read_P005_ForCalcTrainPos_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P005_ForCalcTrainPos_TM.h
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

