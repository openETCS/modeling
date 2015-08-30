/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Distance_d_inte_TA_Lib_internal.h"

void Normalize_Distance_d_inte_reset_TA_Lib_internal(
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC)
{
}

/* TA_Lib_internal::Normalize_Distance_d_internal_t */
void Normalize_Distance_d_inte_TA_Lib_internal(
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale */Q_SCALE q_scale,
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d */kcg_int d,
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC)
{
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */ L_internal_Type_Obu_BasicTypes_Pkg _1_d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */ L_internal_Type_Obu_BasicTypes_Pkg d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */ L_internal_Type_Obu_BasicTypes_Pkg _2_d_internal;
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */ L_internal_Type_Obu_BasicTypes_Pkg _3_d_internal;
  
  outC->_L1 = q_scale;
  outC->q_scale_in = outC->_L1;
  outC->IfBlock1_clock = outC->q_scale_in == ENUM_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = 10;
    outC->_L1_IfBlock1 = d;
    outC->_L2_IfBlock1 = outC->_L1_IfBlock1 * outC->_L3_IfBlock1;
    _1_d_internal = outC->_L2_IfBlock1;
    outC->d_internal = _1_d_internal;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_scale_in ==
      ENUM_Q_SCALE_1m_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L11_IfBlock1 = d;
      outC->_L22_IfBlock1 = 100;
      outC->_L33_IfBlock1 = outC->_L11_IfBlock1 * outC->_L22_IfBlock1;
      _3_d_internal = outC->_L33_IfBlock1;
      d_internal = _3_d_internal;
    }
    else {
      outC->_L25_IfBlock1 = d;
      outC->_L14_IfBlock1 = 1000;
      outC->_L36_IfBlock1 = outC->_L25_IfBlock1 * outC->_L14_IfBlock1;
      _2_d_internal = outC->_L36_IfBlock1;
      d_internal = _2_d_internal;
    }
    outC->d_internal = d_internal;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Normalize_Distance_d_inte_TA_Lib_internal.c
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

