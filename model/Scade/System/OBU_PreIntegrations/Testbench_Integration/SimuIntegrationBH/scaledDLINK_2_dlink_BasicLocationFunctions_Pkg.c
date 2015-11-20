/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink */
void scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_scale */ Q_SCALE q_scale,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::d_link */ D_LINK d_link,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::q_locacc */ Q_LOCACC q_locacc,
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L1 */
  static Q_SCALE _L1;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L2 */
  static D_LINK _L2;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L3 */
  static Q_LOCACC _L3;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L7 */
  static kcg_int _L7;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L8 */
  static Location_T_Obu_BasicTypes_Pkg _L8;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L9 */
  static Location_T_Obu_BasicTypes_Pkg _L9;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L10 */
  static Location_T_Obu_BasicTypes_Pkg _L10;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L11 */
  static Location_T_Obu_BasicTypes_Pkg _L11;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L12 */
  static kcg_int _L12;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L13 */
  static kcg_int _L13;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L14 */
  static kcg_int _L14;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L15 */
  static kcg_int _L15;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L22 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L22;
  /* BasicLocationFunctions_Pkg::scaledDLINK_2_dlink::_L25 */
  static kcg_int _L25;
  
  _L1 = q_scale;
  _L2 = d_link;
  _L3 = q_locacc;
  _L8 = cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
  _L12 = _L2 * _L8;
  _L10 = cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
  _L13 = _L2 * _L10;
  _L9 = cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
  _L14 = _L2 * _L9;
  switch (_L1) {
    case Q_SCALE_10_cm_scale :
      _L7 = _L12;
      break;
    case Q_SCALE_1_m_scale :
      _L7 = _L13;
      break;
    case Q_SCALE_10_m_scale :
      _L7 = _L14;
      break;
    
  }
  _L11 = cQLOCACC_resolution_TrainPosition_Types_Pck;
  _L15 = _L3 * _L11;
  _L25 = - _L15;
  _L22.nominal = _L7;
  _L22.d_min = _L25;
  _L22.d_max = _L15;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(distance, &_L22);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

