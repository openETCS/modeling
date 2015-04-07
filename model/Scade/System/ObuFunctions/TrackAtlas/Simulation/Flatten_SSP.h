/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T13:57:21
*************************************************************$ */
#ifndef _Flatten_SSP_H_
#define _Flatten_SSP_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_matrix_t /* Flatten_SSP::SSP_matrix */ SSP_matrix;
} inC_Flatten_SSP;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SSP_list_t /* Flatten_SSP::SSPflat */ SSPflat;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSP_matrix_t /* Flatten_SSP::_L1 */ _L1;
  array_int_3 /* Flatten_SSP::_L13 */ _L13;
  array_int_3 /* Flatten_SSP::_L12 */ _L12;
  array_int_3 /* Flatten_SSP::_L11 */ _L11;
  array_int_3 /* Flatten_SSP::_L10 */ _L10;
  array_int_3 /* Flatten_SSP::_L9 */ _L9;
  array_int_3 /* Flatten_SSP::_L8 */ _L8;
  array_int_3 /* Flatten_SSP::_L7 */ _L7;
  array_int_3 /* Flatten_SSP::_L6 */ _L6;
  array_int_3 /* Flatten_SSP::_L5 */ _L5;
  array_int_3 /* Flatten_SSP::_L4 */ _L4;
  array_int_3 /* Flatten_SSP::_L3 */ _L3;
  array_int_6 /* Flatten_SSP::_L25 */ _L25;
  array_int_9 /* Flatten_SSP::_L26 */ _L26;
  array_int_12 /* Flatten_SSP::_L27 */ _L27;
  array_int_15 /* Flatten_SSP::_L28 */ _L28;
  array_int_18 /* Flatten_SSP::_L29 */ _L29;
  array_int_21 /* Flatten_SSP::_L30 */ _L30;
  array_int_24 /* Flatten_SSP::_L31 */ _L31;
  array_int_27 /* Flatten_SSP::_L32 */ _L32;
  array_int_30 /* Flatten_SSP::_L33 */ _L33;
  array_int_33 /* Flatten_SSP::_L34 */ _L34;
} outC_Flatten_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* Flatten_SSP */
extern void Flatten_SSP(inC_Flatten_SSP *inC, outC_Flatten_SSP *outC);

extern void Flatten_SSP_reset(outC_Flatten_SSP *outC);

#endif /* _Flatten_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Flatten_SSP.h
** Generation date: 2015-04-03T13:57:21
*************************************************************$ */

