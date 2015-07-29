/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _ACCeler_Operator_H_
#define _ACCeler_Operator_H_

#include "kcg_types.h"
#include "AEB_Operator.h"
#include "ASB_Operator.h"
#include "ComputeAcc.h"
#include "Bool_Spreader_Operator_2.h"
#include "Spreader_Operator_8_8.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_25 /* ACCeler_Operator::Asafe */ Asafe;
  array_real_25 /* ACCeler_Operator::Aservice */ Aservice;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AEB_Operator /* 1 */ _2_Context_1[25];
  outC_Bool_Spreader_Operator_2 /* 1 */ _1_Context_1;
  outC_ASB_Operator /* 1 */ Context_1[25];
  outC_ComputeAcc /* ComputeAcc */ Context_ComputeAcc[25];
  outC_Spreader_Operator_8_8 /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_real_25 /* ACCeler_Operator::_L1 */ _L1;
  array__1550 /* ACCeler_Operator::_L2 */ _L2;
  array__1553 /* ACCeler_Operator::_L3 */ _L3;
  array_bool_25 /* ACCeler_Operator::_L4 */ _L4;
  array_real_25 /* ACCeler_Operator::_L5 */ _L5;
  array_real_25 /* ACCeler_Operator::_L13 */ _L13;
  array_real_25 /* ACCeler_Operator::_L14 */ _L14;
  array__1589 /* ACCeler_Operator::_L16 */ _L16;
  array_real_25 /* ACCeler_Operator::_L17 */ _L17;
  array_bool_25 /* ACCeler_Operator::_L19 */ _L19;
  array_real_25 /* ACCeler_Operator::_L21 */ _L21;
  array_real_25 /* ACCeler_Operator::_L24 */ _L24;
  array_real_25 /* ACCeler_Operator::_L25 */ _L25;
} outC_ACCeler_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* ACCeler_Operator */
extern void ACCeler_Operator(
  /* ACCeler_Operator::MRSP */array_real_25 *MRSP,
  /* ACCeler_Operator::Position */array_real_25 *Position,
  /* ACCeler_Operator::Adh */array__1550 *Adh7,
  /* ACCeler_Operator::Gradient */array__1553 *Gradient,
  outC_ACCeler_Operator *outC);

extern void ACCeler_Operator_reset(outC_ACCeler_Operator *outC);

#endif /* _ACCeler_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ACCeler_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

