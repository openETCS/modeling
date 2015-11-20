/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingIconsOperator_DMI_Control_Pkg_Utils.h"

#ifndef KCG_USER_DEFINED_INIT
void FlashingIconsOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->_L14 = kcg_true;
  outC->_L11 = 0;
  outC->_L10 = 0.0;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = 0.0;
  outC->_L6 = 0;
  outC->_L7 = 0.0;
  outC->ck_every = kcg_true;
  outC->init = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->yellowBorderBrakeSymbol_toDisplay = kcg_true;
  outC->yellowBorderC1Area_toDisplay = kcg_true;
  /* 1 */ FlashingOperator_init_DMI_Control_Pkg_Utils(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* 1 */ FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_1);
}

/* DMI_Control_Pkg::Utils::FlashingIconsOperator */
void FlashingIconsOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input3 */ kcg_bool Input3,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input5 */ kcg_bool Input5,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input6 */ kcg_real Input6,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input7 */ kcg_real Input7,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator */
  static kcg_bool tmp1;
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator */
  static kcg_bool tmp;
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator */
  static kcg_bool op_call;
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator */
  static kcg_bool _2_op_call;
  static kcg_bool noname;
  
  outC->_L7 = Input7;
  outC->_L10 = 0.0;
  outC->_L14 = outC->_L7 != outC->_L10;
  outC->ck_every = outC->_L14;
  outC->_L6 = SystemTime;
  outC->_L5 = Input6;
  outC->_L11 = (kcg_int) outC->_L5;
  /* ck_FlashingIconsOperator */ if (outC->ck_every) {
    /* 1 */
    FlashingOperator_DMI_Control_Pkg_Utils(
      outC->_L14,
      outC->_L6,
      outC->_L11,
      &outC->Context_1);
    _2_op_call = outC->Context_1.flashigOut;
    op_call = outC->Context_1.active;
  }
  outC->_L4 = Input5;
  /* ck_FlashingIconsOperator */ if (outC->ck_every) {
    outC->_L12 = _2_op_call;
  }
  else {
    if (outC->init) {
      tmp1 = kcg_false;
    }
    else {
      tmp1 = outC->_L12;
    }
    outC->_L12 = tmp1;
  }
  outC->_L9 = outC->_L12 & outC->_L4;
  outC->yellowBorderBrakeSymbol_toDisplay = outC->_L9;
  outC->_L2 = Input3;
  outC->_L8 = outC->_L12 & outC->_L2;
  outC->yellowBorderC1Area_toDisplay = outC->_L8;
  /* ck_FlashingIconsOperator */ if (outC->ck_every) {
    outC->_L13 = op_call;
  }
  else {
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->_L13;
    }
    outC->_L13 = tmp;
  }
  noname = outC->_L13;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FlashingIconsOperator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

