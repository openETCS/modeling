/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */
#ifndef _Balise_Group_Close_InfraLib_H_
#define _Balise_Group_Close_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InfraLib::Balise_Group_Close::Error_out */ Error_out;
  CompressedBaliseMessage_TM /* InfraLib::Balise_Group_Close::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* InfraLib::Balise_Group_Close::_L2 */ _L2;
  CompressedBaliseMessage_TM /* InfraLib::Balise_Group_Close::_L20 */ _L20;
  B_data_internal_T_InfraLib /* InfraLib::Balise_Group_Close::_L21 */ _L21;
  BaliseTelegramHeader_int_T_TM /* InfraLib::Balise_Group_Close::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* InfraLib::Balise_Group_Close::_L23 */ _L23;
  CompressedBaliseMessage_TM /* InfraLib::Balise_Group_Close::_L24 */ _L24;
  kcg_bool /* InfraLib::Balise_Group_Close::_L25 */ _L25;
  kcg_bool /* InfraLib::Balise_Group_Close::_L26 */ _L26;
} outC_Balise_Group_Close_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Balise_Group_Close */
extern void Balise_Group_Close_InfraLib(
  /* InfraLib::Balise_Group_Close::BG_internal_in */B_data_internal_T_InfraLib *BG_internal_in,
  /* InfraLib::Balise_Group_Close::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  outC_Balise_Group_Close_InfraLib *outC);

extern void Balise_Group_Close_reset_InfraLib(
  outC_Balise_Group_Close_InfraLib *outC);

#endif /* _Balise_Group_Close_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Close_InfraLib.h
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

