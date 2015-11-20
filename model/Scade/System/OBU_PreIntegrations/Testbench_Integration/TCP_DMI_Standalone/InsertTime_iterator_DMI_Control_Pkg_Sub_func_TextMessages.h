/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::condition */ condition;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::hh */ hh;
  kcg_real /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::mm */ mm;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator */
extern void InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::Position */kcg_int Position,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_hh */kcg_real new_hh,
  /* DMI_Control_Pkg::Sub_func::TextMessages::InsertTime_iterator::new_mm */kcg_real new_mm,
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void InsertTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#endif /* _InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** InsertTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */

