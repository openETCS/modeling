/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:30
*************************************************************$ */
#ifndef _FlashingOperator_DMI_Control_Pkg_Utils_H_
#define _FlashingOperator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

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
  kcg_int /* DMI_Control_Pkg::Utils::FlashingOperator::SM1::start::counter */ counter_SM1_start;
  _9_SSM_ST_SM1 /* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_FlashingOperator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FlashingOperator */
extern void FlashingOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingOperator::OnOff */kcg_bool OnOff,
  /* DMI_Control_Pkg::Utils::FlashingOperator::SystemTime */kcg_int SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingOperator::Interval */kcg_int Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);

extern void FlashingOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);

#endif /* _FlashingOperator_DMI_Control_Pkg_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlashingOperator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T19:43:30
*************************************************************$ */

