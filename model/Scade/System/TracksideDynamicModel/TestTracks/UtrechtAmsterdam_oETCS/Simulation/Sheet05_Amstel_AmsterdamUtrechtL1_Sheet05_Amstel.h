/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */
#ifndef _Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel_H_
#define _Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel_H_

#include "kcg_types.h"
#include "Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.h"
#include "Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.h"
#include "TrackDiscontinuity_InfraLib.h"

/* ========================  input structure  ====================== */
typedef struct {
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::SectionData_in */ SectionData_in;
} inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::SectionData_out */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel /* 1 */ _2_Context_1;
  outC_TrackDiscontinuity_InfraLib /* 2 */ Context_2;
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel /* 1 */ _1_Context_1;
  outC_TrackDiscontinuity_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::_L4 */ _L4;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::_L5 */ _L5;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::_L6 */ _L6;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel::_L7 */ _L7;
} outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL1::Sheet05_Amstel::Sheet05_Amstel */
extern void Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel(
  inC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel *inC,
  outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel *outC);

extern void Sheet05_Amstel_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel *outC);

#endif /* _Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet05_Amstel_AmsterdamUtrechtL1_Sheet05_Amstel.h
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

