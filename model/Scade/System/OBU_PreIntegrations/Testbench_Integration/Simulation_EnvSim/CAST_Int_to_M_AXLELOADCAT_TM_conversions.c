/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_AXLELOADCAT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_AXLELOADCAT */
M_AXLELOADCAT CAST_Int_to_M_AXLELOADCAT_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::int__m_axleloadcatt_in */kcg_int int__m_axleloadcatt_in)
{
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_AXLELOADCAT::m_axleloadcat */
  static M_AXLELOADCAT m_axleloadcat;
  
  IfBlock1_clock = int__m_axleloadcatt_in == INT_M_AXLELOADCAT_A_TM_conversions;
  if (IfBlock1_clock) {
    m_axleloadcat = ENUM_M_AXLELOADCAT_A_TM_conversions;
  }
  else {
    _10_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
      INT_M_AXLELOADCAT_B1_TM_conversions;
    if (_10_else_clock_IfBlock1) {
      m_axleloadcat = ENUM_M_AXLELOADCAT_B1_TM_conversions;
    }
    else {
      _9_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
        INT_M_AXLELOADCAT_B2_TM_conversions;
      if (_9_else_clock_IfBlock1) {
        m_axleloadcat = ENUM_M_AXLELOADCAT_B2_TM_conversions;
      }
      else {
        _8_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
          INT_M_AXLELOADCAT_C2_TM_conversions;
        if (_8_else_clock_IfBlock1) {
          m_axleloadcat = ENUM_M_AXLELOADCAT_C2_TM_conversions;
        }
        else {
          _7_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
            INT_M_AXLELOADCAT_C3_TM_conversions;
          if (_7_else_clock_IfBlock1) {
            m_axleloadcat = ENUM_M_AXLELOADCAT_C3_TM_conversions;
          }
          else {
            _6_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
              INT_M_AXLELOADCAT_D2_TM_conversions;
            if (_6_else_clock_IfBlock1) {
              m_axleloadcat = ENUM_M_AXLELOADCAT_D2_TM_conversions;
            }
            else {
              _5_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
                INT_M_AXLELOADCAT_D3_TM_conversions;
              if (_5_else_clock_IfBlock1) {
                m_axleloadcat = ENUM_M_AXLELOADCAT_D3_TM_conversions;
              }
              else {
                _4_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
                  INT_M_AXLELOADCAT_D4_TM_conversions;
                if (_4_else_clock_IfBlock1) {
                  m_axleloadcat = ENUM_M_AXLELOADCAT_D4_TM_conversions;
                }
                else {
                  _3_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
                    INT_M_AXLELOADCAT_D4XL_TM_conversions;
                  if (_3_else_clock_IfBlock1) {
                    m_axleloadcat = ENUM_M_AXLELOADCAT_D4XL_TM_conversions;
                  }
                  else {
                    _2_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
                      INT_M_AXLELOADCAT_E4_TM_conversions;
                    if (_2_else_clock_IfBlock1) {
                      m_axleloadcat = ENUM_M_AXLELOADCAT_E4_TM_conversions;
                    }
                    else {
                      _1_else_clock_IfBlock1 = int__m_axleloadcatt_in ==
                        INT_M_AXLELOADCAT_E5_TM_conversions;
                      if (_1_else_clock_IfBlock1) {
                        m_axleloadcat = ENUM_M_AXLELOADCAT_E5_TM_conversions;
                      }
                      else {
                        else_clock_IfBlock1 = int__m_axleloadcatt_in ==
                          INT_M_AXLELOADCAT_HS17_TM_conversions;
                        if (else_clock_IfBlock1) {
                          m_axleloadcat =
                            ENUM_M_AXLELOADCAT_HS17_TM_conversions;
                        }
                        else {
                          m_axleloadcat = ENUM_M_AXLELOADCAT_E5_TM_conversions;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m_axleloadcat;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_AXLELOADCAT_TM_conversions.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

