/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP */
L_internal_Type_Obu_BasicTypes_Pkg ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop)
{
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */
  static L_internal_Type_Obu_BasicTypes_Pkg _2_d_emergencystop_normalized;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_cm_scale::_L1 */
  static kcg_int _L1_WhenBlock1_Q_SCALE_10_cm_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_cm_scale::_L2 */
  static kcg_int _L2_WhenBlock1_Q_SCALE_10_cm_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_cm_scale::_L3 */
  static D_EMERGENCYSTOP _L3_WhenBlock1_Q_SCALE_10_cm_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_d_emergencystop_normalized;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_1_m_scale::_L1 */
  static D_EMERGENCYSTOP _L1_WhenBlock1_Q_SCALE_1_m_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_1_m_scale::_L2 */
  static kcg_int _L2_WhenBlock1_Q_SCALE_1_m_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_1_m_scale::_L3 */
  static kcg_int _L3_WhenBlock1_Q_SCALE_1_m_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */
  static L_internal_Type_Obu_BasicTypes_Pkg d_emergencystop_normalized;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_m_scale::_L1 */
  static D_EMERGENCYSTOP _L1_WhenBlock1_Q_SCALE_10_m_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_m_scale::_L2 */
  static kcg_int _L2_WhenBlock1_Q_SCALE_10_m_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_m_scale::_L3 */
  static kcg_int _L3_WhenBlock1_Q_SCALE_10_m_scale;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1 */
  static Q_SCALE WhenBlock1_clock;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_d_emergencystop_normalized;
  
  WhenBlock1_clock = q_scale;
  /* ck_WhenBlock1 */ switch (WhenBlock1_clock) {
    case Q_SCALE_10_cm_scale :
      _L3_WhenBlock1_Q_SCALE_10_cm_scale = d_emergencystop;
      _L1_WhenBlock1_Q_SCALE_10_cm_scale = 10;
      _L2_WhenBlock1_Q_SCALE_10_cm_scale = _L3_WhenBlock1_Q_SCALE_10_cm_scale *
        _L1_WhenBlock1_Q_SCALE_10_cm_scale;
      _2_d_emergencystop_normalized = _L2_WhenBlock1_Q_SCALE_10_cm_scale;
      _3_d_emergencystop_normalized = _2_d_emergencystop_normalized;
      break;
    case Q_SCALE_1_m_scale :
      _L1_WhenBlock1_Q_SCALE_1_m_scale = d_emergencystop;
      _L2_WhenBlock1_Q_SCALE_1_m_scale = 100;
      _L3_WhenBlock1_Q_SCALE_1_m_scale = _L1_WhenBlock1_Q_SCALE_1_m_scale *
        _L2_WhenBlock1_Q_SCALE_1_m_scale;
      _1_d_emergencystop_normalized = _L3_WhenBlock1_Q_SCALE_1_m_scale;
      _3_d_emergencystop_normalized = _1_d_emergencystop_normalized;
      break;
    case Q_SCALE_10_m_scale :
      _L1_WhenBlock1_Q_SCALE_10_m_scale = d_emergencystop;
      _L2_WhenBlock1_Q_SCALE_10_m_scale = 1000;
      _L3_WhenBlock1_Q_SCALE_10_m_scale = _L1_WhenBlock1_Q_SCALE_10_m_scale *
        _L2_WhenBlock1_Q_SCALE_10_m_scale;
      d_emergencystop_normalized = _L3_WhenBlock1_Q_SCALE_10_m_scale;
      _3_d_emergencystop_normalized = d_emergencystop_normalized;
      break;
    
  }
  return _3_d_emergencystop_normalized;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

