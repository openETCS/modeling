/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _FlashingOperator_DMI_Control_Pkg_Utils_H_
#define _FlashingOperator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingOperator::flashigOut */ flashigOut;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingOperator::active */ active;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingOperator::SM1::start::_L10 */ _L10_SM1_start;
  _12_SSM_ST_SM1 /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */ SM1_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_FlashingOperator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FlashingOperator */
extern void FlashingOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingOperator::OnOff */ kcg_bool OnOff,
  /* DMI_Control_Pkg::Utils::FlashingOperator::SystemTime */ kcg_int SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingOperator::Interval */ kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);

extern void FlashingOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);
extern void FlashingOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);

#endif /* _FlashingOperator_DMI_Control_Pkg_Utils_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** FlashingOperator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

