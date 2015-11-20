/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils_H_
#define _ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"
#include "ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils /* 1 */ _1_Context_1[9];
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_9 /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L1 */ _L1;
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L2 */ _L2;
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L3 */ _L3;
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L4 */ _L4;
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L6 */ _L6;
  array_int_9 /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L9 */ _L9;
  kcg_int /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::_L10 */ _L10;
} outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer */
extern void ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer::TrainRunningNumber */ array_int_9 *TrainRunningNumber,
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ArrayOfASCII_to_Integer_reset_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ArrayOfASCII_to_Integer_init_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

