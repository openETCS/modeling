/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */
#ifndef _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_
#define _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::yellowBorderC1Area_toDisplay */ yellowBorderC1Area_toDisplay;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::yellowBorderBrakeSymbol_toDisplay */ yellowBorderBrakeSymbol_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L12 */ _L12;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FlashingOperator_DMI_Control_Pkg_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_FlashingIconsOperator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FlashingIconsOperator */
extern void FlashingIconsOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input3 */kcg_bool Input3,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input5 */kcg_bool Input5,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input6 */kcg_real Input6,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input7 */kcg_real Input7,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);

extern void FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);

#endif /* _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlashingIconsOperator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T19:43:32
*************************************************************$ */

