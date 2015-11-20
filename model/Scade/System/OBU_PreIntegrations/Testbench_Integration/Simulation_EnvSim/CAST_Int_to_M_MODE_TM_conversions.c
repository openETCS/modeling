/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MODE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_MODE */
M_MODE CAST_Int_to_M_MODE_TM_conversions(
  /* TM_conversions::CAST_Int_to_M_MODE::m_mode_int */kcg_int m_mode_int)
{
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_MODE::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_M_MODE::m_mode */
  static M_MODE m_mode;
  
  IfBlock1_clock = m_mode_int == INT_M_MODE_Full_Supervision_TM_conversions;
  if (IfBlock1_clock) {
    m_mode = ENUM_M_MODE_Full_Supervision_TM_conversions;
  }
  else {
    _14_else_clock_IfBlock1 = m_mode_int == INT_M_MODE_Isolation_TM_conversions;
    if (_14_else_clock_IfBlock1) {
      m_mode = ENUM_M_MODE_Isolation_TM_conversions;
    }
    else {
      _13_else_clock_IfBlock1 = m_mode_int ==
        INT_M_MODE_Limited_Supervision_TM_conversions;
      if (_13_else_clock_IfBlock1) {
        m_mode = ENUM_M_MODE_Limited_Supervision_TM_conversions;
      }
      else {
        _12_else_clock_IfBlock1 = m_mode_int ==
          INT_M_MODE_National_System_TM_conversions;
        if (_12_else_clock_IfBlock1) {
          m_mode = ENUM_M_MODE_National_System_TM_conversions;
        }
        else {
          _11_else_clock_IfBlock1 = m_mode_int ==
            INT_M_MODE_Non_Leading_TM_conversions;
          if (_11_else_clock_IfBlock1) {
            m_mode = ENUM_M_MODE_Non_Leading_TM_conversions;
          }
          else {
            _10_else_clock_IfBlock1 = m_mode_int ==
              INT_M_MODE_On_Sight_TM_conversions;
            if (_10_else_clock_IfBlock1) {
              m_mode = ENUM_M_MODE_On_Sight_TM_conversions;
            }
            else {
              _9_else_clock_IfBlock1 = m_mode_int ==
                INT_M_MODE_Passive_Shunting_TM_conversions;
              if (_9_else_clock_IfBlock1) {
                m_mode = ENUM_M_MODE_Passive_Shunting_TM_conversions;
              }
              else {
                _8_else_clock_IfBlock1 = m_mode_int ==
                  INT_M_MODE_Post_Trip_TM_conversions;
                if (_8_else_clock_IfBlock1) {
                  m_mode = ENUM_M_MODE_Post_Trip_TM_conversions;
                }
                else {
                  _7_else_clock_IfBlock1 = m_mode_int ==
                    INT_M_MODE_Reversing_TM_conversions;
                  if (_7_else_clock_IfBlock1) {
                    m_mode = ENUM_M_MODE_Reversing_TM_conversions;
                  }
                  else {
                    _6_else_clock_IfBlock1 = m_mode_int ==
                      INT_M_MODE_Shunting_TM_conversions;
                    if (_6_else_clock_IfBlock1) {
                      m_mode = ENUM_M_MODE_Shunting_TM_conversions;
                    }
                    else {
                      _5_else_clock_IfBlock1 = m_mode_int ==
                        INT_M_MODE_Sleeping_TM_conversions;
                      if (_5_else_clock_IfBlock1) {
                        m_mode = ENUM_M_MODE_Sleeping_TM_conversions;
                      }
                      else {
                        _4_else_clock_IfBlock1 = m_mode_int ==
                          INT_M_MODE_Staff_Responsible_TM_conversions;
                        if (_4_else_clock_IfBlock1) {
                          m_mode = ENUM_M_MODE_Staff_Responsible_TM_conversions;
                        }
                        else {
                          _3_else_clock_IfBlock1 = m_mode_int ==
                            INT_M_MODE_Stand_By_TM_conversions;
                          if (_3_else_clock_IfBlock1) {
                            m_mode = ENUM_M_MODE_Stand_By_TM_conversions;
                          }
                          else {
                            _2_else_clock_IfBlock1 = m_mode_int ==
                              INT_M_MODE_System_Failure_TM_conversions;
                            if (_2_else_clock_IfBlock1) {
                              m_mode =
                                ENUM_M_MODE_System_Failure_TM_conversions;
                            }
                            else {
                              _1_else_clock_IfBlock1 = m_mode_int ==
                                INT_M_MODE_Trip_TM_conversions;
                              if (_1_else_clock_IfBlock1) {
                                m_mode = ENUM_M_MODE_Trip_TM_conversions;
                              }
                              else {
                                else_clock_IfBlock1 = m_mode_int ==
                                  INT_M_MODE_Unfitted_TM_conversions;
                                if (else_clock_IfBlock1) {
                                  m_mode = ENUM_M_MODE_Unfitted_TM_conversions;
                                }
                                else {
                                  m_mode =
                                    ENUM_M_MODE_System_Failure_TM_conversions;
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
        }
      }
    }
  }
  return m_mode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_M_MODE_TM_conversions.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

