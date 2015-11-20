/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg.h"

/* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert */
kcg_real LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg(
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::inDistanceToLRBG */ D_LRBG inDistanceToLRBG,
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::in_Q_SCALE */ Q_SCALE in_Q_SCALE)
{
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::outDistanceToLRBGInMeters */
  static kcg_real _2_outDistanceToLRBGInMeters;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_1_m_scale::_L2 */
  static kcg_real _L2_WhenBlock1_Q_SCALE_1_m_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_1_m_scale::_L1 */
  static D_LRBG _L1_WhenBlock1_Q_SCALE_1_m_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::outDistanceToLRBGInMeters */
  static kcg_real _1_outDistanceToLRBGInMeters;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_cm_scale::_L4 */
  static kcg_real _L4_WhenBlock1_Q_SCALE_10_cm_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_cm_scale::_L3 */
  static kcg_real _L3_WhenBlock1_Q_SCALE_10_cm_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_cm_scale::_L2 */
  static kcg_real _L2_WhenBlock1_Q_SCALE_10_cm_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_cm_scale::_L1 */
  static D_LRBG _L1_WhenBlock1_Q_SCALE_10_cm_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::outDistanceToLRBGInMeters */
  static kcg_real outDistanceToLRBGInMeters;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_m_scale::_L3 */
  static kcg_real _L3_WhenBlock1_Q_SCALE_10_m_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_m_scale::_L4 */
  static kcg_real _L4_WhenBlock1_Q_SCALE_10_m_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_m_scale::_L5 */
  static D_LRBG _L5_WhenBlock1_Q_SCALE_10_m_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1::Q_SCALE_10_m_scale::_L6 */
  static kcg_real _L6_WhenBlock1_Q_SCALE_10_m_scale;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::WhenBlock1 */
  static Q_SCALE WhenBlock1_clock;
  /* RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert::outDistanceToLRBGInMeters */
  static kcg_real _3_outDistanceToLRBGInMeters;
  
  WhenBlock1_clock = in_Q_SCALE;
  /* ck_WhenBlock1 */ switch (WhenBlock1_clock) {
    case Q_SCALE_10_cm_scale :
      _L1_WhenBlock1_Q_SCALE_10_cm_scale = inDistanceToLRBG;
      _L2_WhenBlock1_Q_SCALE_10_cm_scale = (kcg_real)
          _L1_WhenBlock1_Q_SCALE_10_cm_scale;
      _L4_WhenBlock1_Q_SCALE_10_cm_scale = 0.1;
      _L3_WhenBlock1_Q_SCALE_10_cm_scale = _L2_WhenBlock1_Q_SCALE_10_cm_scale *
        _L4_WhenBlock1_Q_SCALE_10_cm_scale;
      _1_outDistanceToLRBGInMeters = _L3_WhenBlock1_Q_SCALE_10_cm_scale;
      _3_outDistanceToLRBGInMeters = _1_outDistanceToLRBGInMeters;
      break;
    case Q_SCALE_1_m_scale :
      _L1_WhenBlock1_Q_SCALE_1_m_scale = inDistanceToLRBG;
      _L2_WhenBlock1_Q_SCALE_1_m_scale = (kcg_real)
          _L1_WhenBlock1_Q_SCALE_1_m_scale;
      _2_outDistanceToLRBGInMeters = _L2_WhenBlock1_Q_SCALE_1_m_scale;
      _3_outDistanceToLRBGInMeters = _2_outDistanceToLRBGInMeters;
      break;
    case Q_SCALE_10_m_scale :
      _L5_WhenBlock1_Q_SCALE_10_m_scale = inDistanceToLRBG;
      _L6_WhenBlock1_Q_SCALE_10_m_scale = (kcg_real)
          _L5_WhenBlock1_Q_SCALE_10_m_scale;
      _L3_WhenBlock1_Q_SCALE_10_m_scale = 10.0;
      _L4_WhenBlock1_Q_SCALE_10_m_scale = _L6_WhenBlock1_Q_SCALE_10_m_scale *
        _L3_WhenBlock1_Q_SCALE_10_m_scale;
      outDistanceToLRBGInMeters = _L4_WhenBlock1_Q_SCALE_10_m_scale;
      _3_outDistanceToLRBGInMeters = outDistanceToLRBGInMeters;
      break;
    
  }
  return _3_outDistanceToLRBGInMeters;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

