/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _generateMessage_testScenarios_Pkg_H_
#define _generateMessage_testScenarios_Pkg_H_

#include "kcg_types.h"
#include "doLocInacc_trackElements_Pkg.h"
#include "Story00_Story00_first_test.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* testScenarios_Pkg::generateMessage::TrackMessage */ TrackMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Story00_Story00_first_test /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_generateMessage_testScenarios_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* testScenarios_Pkg::generateMessage */
extern void generateMessage_testScenarios_Pkg(
  /* testScenarios_Pkg::generateMessage::position */ L_internal_Type_Obu_BasicTypes_Pkg position,
  /* testScenarios_Pkg::generateMessage::systemTime */ T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* testScenarios_Pkg::generateMessage::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  outC_generateMessage_testScenarios_Pkg *outC);

extern void generateMessage_reset_testScenarios_Pkg(
  outC_generateMessage_testScenarios_Pkg *outC);
extern void generateMessage_init_testScenarios_Pkg(
  outC_generateMessage_testScenarios_Pkg *outC);

#endif /* _generateMessage_testScenarios_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** generateMessage_testScenarios_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

