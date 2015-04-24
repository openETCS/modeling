/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _Balise_Group_Close_FirstTest_InfraLib_H_
#define _Balise_Group_Close_FirstTest_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* FirstTest::InfraLib::Balise_Group_Close::Error_out */ Error_out;
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_Close::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_Close::_L2 */ _L2;
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_Close::_L20 */ _L20;
  B_data_internal_FirstTest_InfraLib /* FirstTest::InfraLib::Balise_Group_Close::_L21 */ _L21;
  TM_BaliseTelegramHeader_int_T /* FirstTest::InfraLib::Balise_Group_Close::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::InfraLib::Balise_Group_Close::_L23 */ _L23;
  TM_CompressedBaliseMessage /* FirstTest::InfraLib::Balise_Group_Close::_L24 */ _L24;
  kcg_bool /* FirstTest::InfraLib::Balise_Group_Close::_L25 */ _L25;
  kcg_bool /* FirstTest::InfraLib::Balise_Group_Close::_L26 */ _L26;
} outC_Balise_Group_Close_FirstTest_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::InfraLib::Balise_Group_Close */
extern void Balise_Group_Close_FirstTest_InfraLib(
  /* FirstTest::InfraLib::Balise_Group_Close::BG_internal_in */B_data_internal_FirstTest_InfraLib *BG_internal_in,
  /* FirstTest::InfraLib::Balise_Group_Close::BG_message_in */TM_CompressedBaliseMessage *BG_message_in,
  outC_Balise_Group_Close_FirstTest_InfraLib *outC);

extern void Balise_Group_Close_reset_FirstTest_InfraLib(
  outC_Balise_Group_Close_FirstTest_InfraLib *outC);

#endif /* _Balise_Group_Close_FirstTest_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_Close_FirstTest_InfraLib.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

