/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */
#ifndef _RECV_ReadRadioDataElement_H_
#define _RECV_ReadRadioDataElement_H_

#include "kcg_types.h"
#include "RECV_ReadRadioDataElementLoop.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* RECV_ReadRadioDataElement::Found */ Found;
  MetadataElement_T_Common_Types_Pkg /* RECV_ReadRadioDataElement::HeaderFound */ HeaderFound;
  CompressedRadioData /* RECV_ReadRadioDataElement::DataIn */ DataIn;
} inC_RECV_ReadRadioDataElement;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DataElememtsAsArray /* RECV_ReadRadioDataElement::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadRadioDataElementLoop /* 1 */ Context_1[100];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* RECV_ReadRadioDataElement::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* RECV_ReadRadioDataElement::_L2 */ _L2;
  CompressedRadioData /* RECV_ReadRadioDataElement::_L3 */ _L3;
  kcg_int /* RECV_ReadRadioDataElement::_L4 */ _L4;
  array__177 /* RECV_ReadRadioDataElement::_L5 */ _L5;
  array_int_200_100 /* RECV_ReadRadioDataElement::_L6 */ _L6;
  array_int_100 /* RECV_ReadRadioDataElement::_L7 */ _L7;
} outC_RECV_ReadRadioDataElement;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ReadRadioDataElement */
extern void RECV_ReadRadioDataElement(
  inC_RECV_ReadRadioDataElement *inC,
  outC_RECV_ReadRadioDataElement *outC);

extern void RECV_ReadRadioDataElement_reset(
  outC_RECV_ReadRadioDataElement *outC);

#endif /* _RECV_ReadRadioDataElement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioDataElement.h
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */

