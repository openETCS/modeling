/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* InputManagement::scaledDistance_2_distance */
L_internal_Type_Obu_BasicTypes_Pkg scaledDistance_2_distance_InputManagement(
  /* InputManagement::scaledDistance_2_distance::q_scale */ Q_SCALE q_scale,
  /* InputManagement::scaledDistance_2_distance::d_in */ kcg_int d_in)
{
  /* InputManagement::scaledDistance_2_distance::_L1 */
  static Q_SCALE _L1;
  /* InputManagement::scaledDistance_2_distance::_L2 */
  static kcg_int _L2;
  /* InputManagement::scaledDistance_2_distance::_L7 */
  static kcg_int _L7;
  /* InputManagement::scaledDistance_2_distance::_L8 */
  static Location_T_Obu_BasicTypes_Pkg _L8;
  /* InputManagement::scaledDistance_2_distance::_L9 */
  static Location_T_Obu_BasicTypes_Pkg _L9;
  /* InputManagement::scaledDistance_2_distance::_L10 */
  static Location_T_Obu_BasicTypes_Pkg _L10;
  /* InputManagement::scaledDistance_2_distance::_L12 */
  static kcg_int _L12;
  /* InputManagement::scaledDistance_2_distance::_L13 */
  static kcg_int _L13;
  /* InputManagement::scaledDistance_2_distance::_L14 */
  static kcg_int _L14;
  /* InputManagement::scaledDistance_2_distance::distance */
  static L_internal_Type_Obu_BasicTypes_Pkg distance;
  
  _L1 = q_scale;
  _L2 = d_in;
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
  distance = _L7;
  return distance;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaledDistance_2_distance_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

