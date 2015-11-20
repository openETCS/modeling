/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlashingIconsOperator_DMI_Control_Pkg_Utils.h"

void FlashingIconsOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  /* 1 */ FlashingOperator_reset_DMI_Control_Pkg_Utils(&outC->Context_1);
}

/* DMI_Control_Pkg::Utils::FlashingIconsOperator */
void FlashingIconsOperator_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input3 */kcg_bool Input3,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input5 */kcg_bool Input5,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input6 */kcg_real Input6,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::SystemTime */T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::Input7 */kcg_real Input7,
  outC_FlashingIconsOperator_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::FlashingIconsOperator::_L14 */ kcg_bool _L14;
  
  _L14 = Input7 != 0.0;
  if (_L14) {
    /* 1 */
    FlashingOperator_DMI_Control_Pkg_Utils(
      _L14,
      SystemTime,
      (kcg_int) Input6,
      &outC->Context_1);
    outC->_L12 = outC->Context_1.flashigOut;
  }
  else if (outC->init) {
    outC->_L12 = kcg_false;
  }
  outC->init = kcg_false;
  outC->yellowBorderBrakeSymbol_toDisplay = outC->_L12 & Input5;
  outC->yellowBorderC1Area_toDisplay = outC->_L12 & Input3;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlashingIconsOperator_DMI_Control_Pkg_Utils.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

