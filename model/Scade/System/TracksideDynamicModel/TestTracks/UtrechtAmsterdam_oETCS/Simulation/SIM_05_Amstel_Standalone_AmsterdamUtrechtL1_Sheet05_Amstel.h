/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:16:11
*************************************************************$ */
#ifndef _SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel_H_
#define _SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel_H_

#include "kcg_types.h"
#include "Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel.h"
#include "TrackInit_InfraLib.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_real /* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone::TrainPosIn */ TrainPosIn;
} inC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone::BaliseMessageOut */ BaliseMessageOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel /* 1 */ _1_Context_1;
  outC_TrackInit_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone::_L2 */ _L2;
  kcg_real /* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone::_L3 */ _L3;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone::_L4 */ _L4;
} outC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL1::Sheet05_Amstel::SIM_05_Amstel_Standalone */
extern void SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel(
  inC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel *inC,
  outC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel *outC);

extern void SIM_05_Amstel_Standalone_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel *outC);

#endif /* _SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SIM_05_Amstel_Standalone_AmsterdamUtrechtL1_Sheet05_Amstel.h
** Generation date: 2015-06-06T10:16:11
*************************************************************$ */

