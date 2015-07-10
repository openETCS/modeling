/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */
#ifndef _Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_
#define _Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::SectionData_out */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_352_AmsterdamUtrechtL2_Sheet05_Amstel_Balises /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L3 */ _L3;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L13 */ _L13;
  kcg_real /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L14 */ _L14;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::_L15 */ _L15;
} outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613 */
extern void Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  /* AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);

extern void Balises0001_Amstel_UB_Sig_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
  outC_Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises *outC);

#endif /* _Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0001_Amstel_UB_Sig_AmsterdamUtrechtL2_Sheet05_Amstel_Balises.h
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

