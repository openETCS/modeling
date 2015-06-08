/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */
#ifndef _Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel_H_
#define _Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel_H_

#include "kcg_types.h"
#include "Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_out */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_353_AmsterdamUtrechtL1_Sheet05_Amstel /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::_L4 */ _L4;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::_L3 */ _L3;
  kcg_real /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::_L2 */ _L2;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::_L6 */ _L6;
} outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617 */
extern void Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel(
  /* AmsterdamUtrechtL1::Sheet05_Amstel::Balises0002_Amstel_UB_Signal_613_to_617::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel *outC);

extern void Balises0002_Amstel_UB_Sig_reset_AmsterdamUtrechtL1_Sheet05_Amstel(
  outC_Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel *outC);

#endif /* _Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0002_Amstel_UB_Sig_AmsterdamUtrechtL1_Sheet05_Amstel.h
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */

