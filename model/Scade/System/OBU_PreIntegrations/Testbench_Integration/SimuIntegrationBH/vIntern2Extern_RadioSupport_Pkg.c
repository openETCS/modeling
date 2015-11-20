/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vIntern2Extern_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::vIntern2Extern */
V_TRAIN vIntern2Extern_RadioSupport_Pkg(
  /* RadioSupport_Pkg::vIntern2Extern::v_intern */ V_internal_Type_Obu_BasicTypes_Pkg v_intern)
{
  /* RadioSupport_Pkg::vIntern2Extern::_L1 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L1;
  /* RadioSupport_Pkg::vIntern2Extern::_L2 */
  static kcg_int _L2;
  /* RadioSupport_Pkg::vIntern2Extern::_L3 */
  static kcg_int _L3;
  /* RadioSupport_Pkg::vIntern2Extern::_L4 */
  static kcg_int _L4;
  /* RadioSupport_Pkg::vIntern2Extern::_L5 */
  static kcg_int _L5;
  /* RadioSupport_Pkg::vIntern2Extern::v_SRS */
  static V_TRAIN v_SRS;
  
  _L1 = v_intern;
  _L3 = 36;
  _L2 = _L1 * _L3;
  _L5 = 200;
  _L4 = _L2 / _L5;
  v_SRS = _L4;
  return v_SRS;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** vIntern2Extern_RadioSupport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

