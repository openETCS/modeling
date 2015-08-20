/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */
#ifndef _Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises_H_
#define _Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises_H_

#include "kcg_types.h"
#include "Balise_Localisation_InfraLib.h"
#include "No_Balise_Packets_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_No_Balise_Packets_InfraLib /* 1 */ _1_Context_1;
  outC_Balise_Localisation_InfraLib /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L2 */ _L2;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L4 */ _L4;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L5 */ _L5;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L15 */ _L15;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L17 */ _L17;
  BaliseTelegramHeader_int_T_TM /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L19 */ _L19;
  kcg_int /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L20 */ _L20;
  kcg_int /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L21 */ _L21;
  BaliseTelegramHeader_int_T_TM /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::_L23 */ _L23;
} outC_Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1 */
extern void Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balise_395_1::PIG_nom */kcg_int PIG_nom,
  outC_Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC);

extern void Balise_395_1_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
  outC_Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises *outC);

#endif /* _Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_395_1_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

