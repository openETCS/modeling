/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _No_Balise_Packets_InfraLib_H_
#define _No_Balise_Packets_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  B_data_internal_T_InfraLib /* InfraLib::No_Balise_Packets::Balise_data_out */ Balise_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_InfraLib /* InfraLib::No_Balise_Packets::_L36 */ _L36;
  kcg_bool /* InfraLib::No_Balise_Packets::_L35 */ _L35;
  BaliseTelegramHeader_int_T_TM /* InfraLib::No_Balise_Packets::_L32 */ _L32;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise_Packets::_L31 */ _L31;
  B_data_internal_T_InfraLib /* InfraLib::No_Balise_Packets::_L30 */ _L30;
} outC_No_Balise_Packets_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::No_Balise_Packets */
extern void No_Balise_Packets_InfraLib(
  /* InfraLib::No_Balise_Packets::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* InfraLib::No_Balise_Packets::Balise_data_in */B_data_internal_T_InfraLib *Balise_data_in,
  outC_No_Balise_Packets_InfraLib *outC);

extern void No_Balise_Packets_reset_InfraLib(
  outC_No_Balise_Packets_InfraLib *outC);

#endif /* _No_Balise_Packets_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** No_Balise_Packets_InfraLib.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

