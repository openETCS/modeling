/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises_H_
#define _Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises_H_

#include "kcg_types.h"
#include "Balise_Group_374_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balise_Group_375_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balise_Group_376_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"
#include "Balise_Group_377_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_out */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_377_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* 1 */ _3_Context_1;
  outC_Balise_Group_376_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* 1 */ _2_Context_1;
  outC_Balise_Group_375_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* 1 */ _1_Context_1;
  outC_Balise_Group_374_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L4 */ _L4;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L3 */ _L3;
  kcg_real /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L2 */ _L2;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L1 */ _L1;
  TrackSectionData_T_InfraLib /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L6 */ _L6;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L7 */ _L7;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L8 */ _L8;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::_L9 */ _L9;
} outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude */
extern void Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  /* AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises *outC);

extern void Balises0005_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
  outC_Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises *outC);

#endif /* _Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

