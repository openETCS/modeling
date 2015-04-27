/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _FIFO_Integer_DMI_Control_Pkg_Utils_5_H_
#define _FIFO_Integer_DMI_Control_Pkg_Utils_5_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "InsertElemFIFO_DMI_Control_Pkg_Utils.h"
#include "Counter_pwlinear_int.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FIFO_Integer::isFull */ isFull;
  kcg_bool /* DMI_Control_Pkg::Utils::FIFO_Integer::isEmpty */ isEmpty;
  array_int_5 /* DMI_Control_Pkg::Utils::FIFO_Integer::FIFO_Queue */ FIFO_Queue;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM2 /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2 */ SM2_state_nxt;
  kcg_bool /* DMI_Control_Pkg::Utils::FIFO_Integer::SM2 */ SM2_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils /* 2 */ _2_Context_2[5];
  outC_Counter_pwlinear_int /* 1 */ _1_Context_1;
  outC_RisingEdge_digital /* 1 */ Context_1;
  outC_RisingEdge_digital /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_FIFO_Integer_DMI_Control_Pkg_Utils_5;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FIFO_Integer */
extern void FIFO_Integer_DMI_Control_Pkg_Utils_5(
  /* DMI_Control_Pkg::Utils::FIFO_Integer::entryValue */ kcg_int entryValue,
  /* DMI_Control_Pkg::Utils::FIFO_Integer::insert */ kcg_bool insert,
  /* DMI_Control_Pkg::Utils::FIFO_Integer::delete */ kcg_bool delete,
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 *outC);

extern void FIFO_Integer_reset_DMI_Control_Pkg_Utils_5(
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 *outC);
extern void FIFO_Integer_init_DMI_Control_Pkg_Utils_5(
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 *outC);

#endif /* _FIFO_Integer_DMI_Control_Pkg_Utils_5_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** FIFO_Integer_DMI_Control_Pkg_Utils_5.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

