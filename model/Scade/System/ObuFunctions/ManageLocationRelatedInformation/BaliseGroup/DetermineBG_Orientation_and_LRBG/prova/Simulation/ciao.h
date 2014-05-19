/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/prova/Simulation\kcg_s2c_config.txt
** Generation date: 2014-04-14T14:18:48
*************************************************************$ */
#ifndef _ciao_H_
#define _ciao_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* ciao::Input1 */ Input1;
  kcg_int /* ciao::Input2 */ Input2;
} inC_ciao;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* ciao::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* ciao::_L1 */ _L1;
  kcg_int /* ciao::_L2 */ _L2;
  kcg_int /* ciao::_L3 */ _L3;
  kcg_int /* ciao::_L5 */ _L5;
} outC_ciao;

/* ===========  node initialization and cycle functions  =========== */
/* ciao */
extern void ciao(inC_ciao *inC, outC_ciao *outC);

extern void ciao_reset(outC_ciao *outC);

#endif /* _ciao_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ciao.h
** Generation date: 2014-04-14T14:18:48
*************************************************************$ */

