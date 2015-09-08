/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

void CAST_Int_to_M_VERSION_reset_TM_conversions(
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_M_VERSION */
void CAST_Int_to_M_VERSION_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version_int */kcg_int m_version_int,
  outC_CAST_Int_to_M_VERSION_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _2_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _9_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _7_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _11_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error12;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _13_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error14;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _3_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_M_VERSION::m_version */ M_VERSION _5_m_version;
  /* TM_conversions::CAST_Int_to_M_VERSION::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L4 = m_version_int;
  outC->m_version_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_version_in <=
    INT_M_VERSION_previous_M_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_2_else_clock_IfBlock1 = outC->m_version_in ==
      INT_M_VERSION_1_0_TM_conversions;
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L53_IfBlock1 = kcg_false;
      error6 = outC->_L53_IfBlock1;
      error = error6;
    }
    else {
      outC->_1_else_clock_IfBlock1 = outC->m_version_in ==
        INT_M_VERSION_1_1_TM_conversions;
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L44_IfBlock1 = kcg_false;
        error10 = outC->_L44_IfBlock1;
        error4 = error10;
      }
      else {
        outC->else_clock_IfBlock1 = outC->m_version_in ==
          INT_M_VERSION_2_0_TM_conversions;
        if (outC->else_clock_IfBlock1) {
          outC->_L45_IfBlock1 = kcg_false;
          error14 = outC->_L45_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_L1_IfBlock1 = kcg_true;
          error12 = outC->_L1_IfBlock1;
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
    _2_m_version = outC->_L4_IfBlock1;
    outC->m_version = _2_m_version;
  }
  else {
    if (outC->_2_else_clock_IfBlock1) {
      outC->_L3_IfBlock1 = ENUM_M_VERSION_Version_1_0_TM_conversions;
      _5_m_version = outC->_L3_IfBlock1;
      m_version = _5_m_version;
    }
    else {
      if (outC->_1_else_clock_IfBlock1) {
        outC->_L2_IfBlock1 = ENUM_M_VERSION_Version_1_1_TM_conversions;
        _9_m_version = outC->_L2_IfBlock1;
        _3_m_version = _9_m_version;
      }
      else {
        if (outC->else_clock_IfBlock1) {
          outC->_L26_IfBlock1 = ENUM_M_VERSION_Version_2_0_TM_conversions;
          _13_m_version = outC->_L26_IfBlock1;
          _7_m_version = _13_m_version;
        }
        else {
          outC->_L27_IfBlock1 = ENUM_M_VERSION_Previous_versions_TM_conversions;
          _11_m_version = outC->_L27_IfBlock1;
          _7_m_version = _11_m_version;
        }
        _3_m_version = _7_m_version;
      }
      m_version = _3_m_version;
    }
    outC->m_version = m_version;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_VERSION_TM_conversions.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

