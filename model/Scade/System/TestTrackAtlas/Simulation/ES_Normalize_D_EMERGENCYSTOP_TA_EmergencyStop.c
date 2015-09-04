/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

void ES_Normalize_D_EMERGENCYSTOP_reset_TA_EmergencyStop(
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC)
{
}

/* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP */
void ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */ L_internal_Type_Obu_BasicTypes_Pkg _2_d_emergencystop_normalized;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */ L_internal_Type_Obu_BasicTypes_Pkg _1_d_emergencystop_normalized;
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */ L_internal_Type_Obu_BasicTypes_Pkg d_emergencystop_normalized;
  
  outC->WhenBlock1_clock = q_scale;
  switch (outC->WhenBlock1_clock) {
    case Q_SCALE_10_cm_scale :
      outC->_L3_WhenBlock1_Q_SCALE_10_cm_scale = d_emergencystop;
      outC->_L1_WhenBlock1_Q_SCALE_10_cm_scale = 10;
      outC->_L2_WhenBlock1_Q_SCALE_10_cm_scale =
        outC->_L3_WhenBlock1_Q_SCALE_10_cm_scale *
        outC->_L1_WhenBlock1_Q_SCALE_10_cm_scale;
      _2_d_emergencystop_normalized = outC->_L2_WhenBlock1_Q_SCALE_10_cm_scale;
      outC->d_emergencystop_normalized = _2_d_emergencystop_normalized;
      break;
    case Q_SCALE_1_m_scale :
      outC->_L1_WhenBlock1_Q_SCALE_1_m_scale = d_emergencystop;
      outC->_L2_WhenBlock1_Q_SCALE_1_m_scale = 100;
      outC->_L3_WhenBlock1_Q_SCALE_1_m_scale =
        outC->_L1_WhenBlock1_Q_SCALE_1_m_scale *
        outC->_L2_WhenBlock1_Q_SCALE_1_m_scale;
      _1_d_emergencystop_normalized = outC->_L3_WhenBlock1_Q_SCALE_1_m_scale;
      outC->d_emergencystop_normalized = _1_d_emergencystop_normalized;
      break;
    case Q_SCALE_10_m_scale :
      outC->_L1_WhenBlock1_Q_SCALE_10_m_scale = d_emergencystop;
      outC->_L2_WhenBlock1_Q_SCALE_10_m_scale = 1000;
      outC->_L3_WhenBlock1_Q_SCALE_10_m_scale =
        outC->_L1_WhenBlock1_Q_SCALE_10_m_scale *
        outC->_L2_WhenBlock1_Q_SCALE_10_m_scale;
      d_emergencystop_normalized = outC->_L3_WhenBlock1_Q_SCALE_10_m_scale;
      outC->d_emergencystop_normalized = d_emergencystop_normalized;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

