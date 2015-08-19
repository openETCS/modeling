/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _MRSP_Operator_H_
#define _MRSP_Operator_H_

#include "kcg_types.h"
#include "dV_Operator.h"
#include "Spreader_Operator_8_4.h"
#include "Spreader_Operator_2_2.h"
#include "Min3_math_real.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_real_25 /* MRSP_Operator::MRSP */ MRSP;
  array_real_25 /* MRSP_Operator::dV_ebi */ dV_ebi;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_dV_Operator /* 1 */ _3_Context_1[25];
  outC_Min3_math_real /* 2 */ _2_Context_2[25];
  outC_Spreader_Operator_2_2 /* 4 */ Context_4;
  outC_Spreader_Operator_2_2 /* 3 */ _1_Context_3;
  outC_Spreader_Operator_2_2 /* 2 */ Context_2;
  outC_Min3_math_real /* 3 */ Context_3[25];
  outC_Spreader_Operator_8_4 /* 1 */ Context_1;
  outC_Spreader_Operator_2_2 /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_bool_25 /* math::Min::_L25 */ _L25_2;
  array_real_25 /* math::Min::_L24 */ _L24_2;
  array_real_25 /* math::Min::_L22 */ _L22_2;
  array_real_25 /* math::Min::_L21 */ _L21_2;
  array__1553 /* MRSP_Operator::_L1 */ _L1;
  array_real_25 /* MRSP_Operator::_L2 */ _L2;
  array__1547 /* MRSP_Operator::_L4 */ _L4;
  array__1547 /* MRSP_Operator::_L5 */ _L5;
  array__1547 /* MRSP_Operator::_L7 */ _L7;
  array_real_25 /* MRSP_Operator::_L8 */ _L8;
  array_real_25 /* MRSP_Operator::_L9 */ _L9;
  array_real_25 /* MRSP_Operator::_L10 */ _L10;
  array_real_25 /* MRSP_Operator::_L11 */ _L11;
  array_real_25 /* MRSP_Operator::_L13 */ _L13;
  array__1547 /* MRSP_Operator::_L14 */ _L14;
  array_real_25 /* MRSP_Operator::_L15 */ _L15;
  array_real_25 /* MRSP_Operator::_L16 */ _L16;
  array_real_25 /* MRSP_Operator::_L17 */ _L17;
  array_real_25 /* MRSP_Operator::_L18 */ _L18;
  array_real_25 /* MRSP_Operator::_L19 */ _L19;
} outC_MRSP_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* MRSP_Operator */
extern void MRSP_Operator(
  /* MRSP_Operator::SSP */array__1553 *SSP,
  /* MRSP_Operator::TSR_1 */array__1547 *TSR_1,
  /* MRSP_Operator::TSR_2 */array__1547 *TSR_2,
  /* MRSP_Operator::TSR_3 */array__1547 *TSR_3,
  /* MRSP_Operator::MA_EOA */array__1547 *MA_EOA,
  /* MRSP_Operator::Position */array_real_25 *Position,
  outC_MRSP_Operator *outC);

extern void MRSP_Operator_reset(outC_MRSP_Operator *outC);

#endif /* _MRSP_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

