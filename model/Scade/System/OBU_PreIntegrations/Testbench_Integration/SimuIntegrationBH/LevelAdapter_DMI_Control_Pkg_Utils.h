/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _LevelAdapter_DMI_Control_Pkg_Utils_H_
#define _LevelAdapter_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::LevelIndex */ LevelIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L4 */ _L4;
  M_LEVEL /* DMI_Control_Pkg::Utils::LevelAdapter::_L5 */ _L5;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L6 */ _L6;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L7 */ _L7;
  kcg_bool /* DMI_Control_Pkg::Utils::LevelAdapter::_L8 */ _L8;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L9 */ _L9;
  NID_STM_DMI_Types_Pkg /* DMI_Control_Pkg::Utils::LevelAdapter::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L11 */ _L11;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L12 */ _L12;
  M_LEVEL /* DMI_Control_Pkg::Utils::LevelAdapter::_L13 */ _L13;
  M_LEVEL /* DMI_Control_Pkg::Utils::LevelAdapter::_L14 */ _L14;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L15 */ _L15;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L17 */ _L17;
  kcg_int /* DMI_Control_Pkg::Utils::LevelAdapter::_L18 */ _L18;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Utils::LevelAdapter::_L19 */ _L19;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Utils::LevelAdapter::_L20 */ _L20;
  DMI_level_T_DMI_Types_Pkg /* DMI_Control_Pkg::Utils::LevelAdapter::_L21 */ _L21;
} outC_LevelAdapter_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::LevelAdapter */
extern void LevelAdapter_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::LevelAdapter::level */ DMI_level_T_DMI_Types_Pkg *level,
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelAdapter_reset_DMI_Control_Pkg_Utils(
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelAdapter_init_DMI_Control_Pkg_Utils(
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LevelAdapter_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LevelAdapter_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

