/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */
#ifndef _EBD_Operator_H_
#define _EBD_Operator_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* EBD_Operator::Vebd */ Vebd;
  kcg_real /* EBD_Operator::Vebd_Table */ Vebd_Table;
  kcg_bool /* EBD_Operator::Ceilling_Mode */ Ceilling_Mode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* math::Min::_L21 */ _L21_1;
  kcg_real /* math::Min::_L22 */ _L22_1;
  kcg_real /* math::Min::_L24 */ _L24_1;
  kcg_bool /* math::Min::_L25 */ _L25_1;
  kcg_real /* math::Min::Mi_Output */ Mi_Output_1;
  kcg_real /* math::Min::I2 */ I2_1;
  kcg_real /* math::Min::I1 */ I1_1;
  kcg_real /* EBD_Operator::_L1 */ _L1;
  kcg_real /* EBD_Operator::_L2 */ _L2;
  kcg_real /* EBD_Operator::_L3 */ _L3;
  kcg_real /* EBD_Operator::_L5 */ _L5;
  kcg_real /* EBD_Operator::_L6 */ _L6;
  kcg_real /* EBD_Operator::_L8 */ _L8;
  kcg_real /* EBD_Operator::_L9 */ _L9;
  kcg_real /* EBD_Operator::_L10 */ _L10;
  kcg_real /* EBD_Operator::_L11 */ _L11;
  kcg_real /* EBD_Operator::_L12 */ _L12;
  kcg_real /* EBD_Operator::_L13 */ _L13;
  kcg_real /* EBD_Operator::_L14 */ _L14;
  kcg_real /* EBD_Operator::_L16 */ _L16;
  kcg_bool /* EBD_Operator::_L17 */ _L17;
} outC_EBD_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* EBD_Operator */
extern void EBD_Operator(
  /* EBD_Operator::Next_Vebd */kcg_real Next_Vebd,
  /* EBD_Operator::SIZE */kcg_real SIZE,
  /* EBD_Operator::MRSP */kcg_real MRSP,
  /* EBD_Operator::dV_ebi */kcg_real dV_ebi,
  /* EBD_Operator::Asafe */kcg_real Asafe,
  outC_EBD_Operator *outC);

extern void EBD_Operator_reset(outC_EBD_Operator *outC);

#endif /* _EBD_Operator_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EBD_Operator.h
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

