/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ODO_doLocInacc_Toolbox_Functions.h"

/* Toolbox::Functions::ODO_doLocInacc */
void ODO_doLocInacc_Toolbox_Functions(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */ L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */ L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  /* Toolbox::Functions::ODO_doLocInacc::locInAcc */ LocWithInAcc_T_Obu_BasicTypes_Pkg *locInAcc)
{
  /* Toolbox::Functions::ODO_doLocInacc::_L2 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L2;
  /* Toolbox::Functions::ODO_doLocInacc::_L9 */
  static kcg_int _L9;
  /* Toolbox::Functions::ODO_doLocInacc::_L12 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* Toolbox::Functions::ODO_doLocInacc::_L13 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L13;
  
  _L9 = 0;
  _L12 = d_min;
  _L13 = d_Max;
  _L2.nominal = _L9;
  _L2.d_min = _L12;
  _L2.d_max = _L13;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(locInAcc, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_doLocInacc_Toolbox_Functions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

