/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_
#define _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L13 */ _L13;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FlashingOperator_DMI_Control_Pkg_Utils /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator */ ck_every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L7 */ _L7;
  T_internal_Type_Obu_BasicTypes_Pkg /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L6 */ _L6;
  kcg_real /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L5 */ _L5;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L4 */ _L4;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L2 */ _L2;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L8 */ _L8;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L9 */ _L9;
  kcg_real /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L10 */ _L10;
  kcg_int /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L11 */ _L11;
  kcg_bool /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L14 */ _L14;
} outC_FlashingIconsOperator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FlashingIconsOperator */
extern void FlashingIconsOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input3 */ kcg_bool Input3,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input5 */ kcg_bool Input5,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input6 */ kcg_real Input6,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input7 */ kcg_real Input7,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);

extern void FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FlashingIconsOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _FlashingIconsOperator_DMI_Control_Pkg_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** FlashingIconsOperator_DMI_Control_Pkg_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

