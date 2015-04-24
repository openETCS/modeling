/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _InsertElemFIFO_DMI_Control_Pkg_Utils_H_
#define _InsertElemFIFO_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::InsertElemFIFO::condition */ condition;
  kcg_int /* DMI_Control_Pkg::Utils::InsertElemFIFO::entryValue */ entryValue;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_InsertElemFIFO_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::InsertElemFIFO */
extern void InsertElemFIFO_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::counterValue */ kcg_int counterValue,
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::newIndexMsg */ kcg_int newIndexMsg,
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils *outC);

extern void InsertElemFIFO_reset_DMI_Control_Pkg_Utils(
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils *outC);
extern void InsertElemFIFO_init_DMI_Control_Pkg_Utils(
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils *outC);

#endif /* _InsertElemFIFO_DMI_Control_Pkg_Utils_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** InsertElemFIFO_DMI_Control_Pkg_Utils.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

