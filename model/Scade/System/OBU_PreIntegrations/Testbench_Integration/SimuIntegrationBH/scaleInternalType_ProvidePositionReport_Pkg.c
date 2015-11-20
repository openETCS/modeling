/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaleInternalType_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::scaleInternalType */
kcg_int scaleInternalType_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::scaleInternalType::scale */ Q_SCALE scale,
  /* ProvidePositionReport_Pkg::scaleInternalType::internalValue */ kcg_int internalValue)
{
  /* ProvidePositionReport_Pkg::scaleInternalType::_L1 */
  static Q_SCALE _L1;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L5 */
  static kcg_int _L5;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L6 */
  static kcg_int _L6;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L7 */
  static Location_T_Obu_BasicTypes_Pkg _L7;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L8 */
  static Location_T_Obu_BasicTypes_Pkg _L8;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L9 */
  static Location_T_Obu_BasicTypes_Pkg _L9;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L10 */
  static kcg_int _L10;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::scaleInternalType::_L12 */
  static kcg_int _L12;
  /* ProvidePositionReport_Pkg::scaleInternalType::scaledValue */
  static kcg_int scaledValue;
  
  _L1 = scale;
  _L12 = internalValue;
  _L7 = cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck;
  _L6 = _L12 / _L7;
  _L8 = cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck;
  _L10 = _L12 / _L8;
  _L9 = cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck;
  _L11 = _L12 / _L9;
  switch (_L1) {
    case Q_SCALE_10_cm_scale :
      _L5 = _L6;
      break;
    case Q_SCALE_1_m_scale :
      _L5 = _L10;
      break;
    case Q_SCALE_10_m_scale :
      _L5 = _L11;
      break;
    
  }
  scaledValue = _L5;
  return scaledValue;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** scaleInternalType_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

