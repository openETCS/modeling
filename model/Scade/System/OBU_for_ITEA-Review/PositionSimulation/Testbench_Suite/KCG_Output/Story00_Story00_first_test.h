/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _Story00_Story00_first_test_H_
#define _Story00_Story00_first_test_H_

#include "kcg_types.h"
#include "RECV_ConvertBaliseHeader_CT.h"
#include "Story00_BTM_Story00_first_test.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TelegramHeader_T_BG_Types_Pkg /* Story00_first_test::Story00::TelegramHeader */ TelegramHeader;
  CompressedPackets_T_Common_Types_Pkg /* Story00_first_test::Story00::Packets_Out */ Packets_Out;
  LinkedBGs_T_BG_Types_Pkg /* Story00_first_test::Story00::LinkedBGs */ LinkedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Story00_BTM_Story00_first_test /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Story00_Story00_first_test;

/* ===========  node initialization and cycle functions  =========== */
/* Story00_first_test::Story00 */
extern void Story00_Story00_first_test(
  /* Story00_first_test::Story00::Loc */ kcg_real Loc,
  /* Story00_first_test::Story00::PosReport */ kcg_int PosReport,
  /* Story00_first_test::Story00::UsePosReport */ kcg_bool UsePosReport,
  outC_Story00_Story00_first_test *outC);

extern void Story00_reset_Story00_first_test(
  outC_Story00_Story00_first_test *outC);
extern void Story00_init_Story00_first_test(
  outC_Story00_Story00_first_test *outC);

#endif /* _Story00_Story00_first_test_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Story00_Story00_first_test.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

