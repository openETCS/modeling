/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */
#ifndef _RECV_ExtractDataFromRadio_H_
#define _RECV_ExtractDataFromRadio_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RECV_ExtractDataFromRadio::Cont */ Cont;
  kcg_int /* RECV_ExtractDataFromRadio::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* RECV_ExtractDataFromRadio::_L1 */ _L1;
  kcg_int /* RECV_ExtractDataFromRadio::_L3 */ _L3;
  kcg_int /* RECV_ExtractDataFromRadio::_L4 */ _L4;
  CompressedBaliseData /* RECV_ExtractDataFromRadio::_L9 */ _L9;
  kcg_bool /* RECV_ExtractDataFromRadio::_L18 */ _L18;
  kcg_int /* RECV_ExtractDataFromRadio::_L20 */ _L20;
  kcg_int /* RECV_ExtractDataFromRadio::_L29 */ _L29;
  kcg_int /* RECV_ExtractDataFromRadio::_L30 */ _L30;
  kcg_int /* RECV_ExtractDataFromRadio::_L31 */ _L31;
  kcg_int /* RECV_ExtractDataFromRadio::_L32 */ _L32;
  kcg_int /* RECV_ExtractDataFromRadio::_L33 */ _L33;
  kcg_int /* RECV_ExtractDataFromRadio::_L34 */ _L34;
} outC_RECV_ExtractDataFromRadio;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ExtractDataFromRadio */
extern void RECV_ExtractDataFromRadio(
  /* RECV_ExtractDataFromRadio::Index */kcg_int Index,
  /* RECV_ExtractDataFromRadio::PacketData */CompressedBaliseData *PacketData,
  /* RECV_ExtractDataFromRadio::AddressStart */kcg_int AddressStart,
  /* RECV_ExtractDataFromRadio::AddressEnd */kcg_int AddressEnd,
  outC_RECV_ExtractDataFromRadio *outC);

extern void RECV_ExtractDataFromRadio_reset(
  outC_RECV_ExtractDataFromRadio *outC);

#endif /* _RECV_ExtractDataFromRadio_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ExtractDataFromRadio.h
** Generation date: 2015-03-05T01:50:58
*************************************************************$ */

