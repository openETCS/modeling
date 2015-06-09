/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */
#ifndef _Send_P005_InfraLib_H_
#define _Send_P005_InfraLib_H_

#include "kcg_types.h"
#include "Write_P005_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* InfraLib::Send_P005::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P005_TM_trackside /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* InfraLib::Send_P005::_L3 */ _L3;
  P005_trackside_int_T_TM /* InfraLib::Send_P005::_L4 */ _L4;
  kcg_bool /* InfraLib::Send_P005::_L8 */ _L8;
  kcg_bool /* InfraLib::Send_P005::_L6 */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* InfraLib::Send_P005::_L7 */ _L7;
  kcg_bool /* InfraLib::Send_P005::_L5 */ _L5;
} outC_Send_P005_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::Send_P005 */
extern void Send_P005_InfraLib(
  /* InfraLib::Send_P005::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* InfraLib::Send_P005::P005 */P005_trackside_int_T_TM *P005,
  outC_Send_P005_InfraLib *outC);

extern void Send_P005_reset_InfraLib(outC_Send_P005_InfraLib *outC);

#endif /* _Send_P005_InfraLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P005_InfraLib.h
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

