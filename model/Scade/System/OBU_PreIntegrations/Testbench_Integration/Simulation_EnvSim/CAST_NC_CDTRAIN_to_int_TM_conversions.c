/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NC_CDTRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_NC_CDTRAIN_to_int */
kcg_int CAST_NC_CDTRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::nc_cdtrain */NC_CDTRAIN nc_cdtrain)
{
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_NC_CDTRAIN_to_int::nc_cdtrain_int */
  static kcg_int nc_cdtrain_int;
  
  IfBlock1_clock = nc_cdtrain == ENUM_NC_CDTRAIN_080mm_TM_conversions;
  if (IfBlock1_clock) {
    nc_cdtrain_int = INT_NC_CDTRAIN_080mm_TM_conversions;
  }
  else {
    _9_else_clock_IfBlock1 = nc_cdtrain == ENUM_NC_CDTRAIN_100mm_TM_conversions;
    if (_9_else_clock_IfBlock1) {
      nc_cdtrain_int = INT_NC_CDTRAIN_100mm_TM_conversions;
    }
    else {
      _8_else_clock_IfBlock1 = nc_cdtrain ==
        ENUM_NC_CDTRAIN_130mm_TM_conversions;
      if (_8_else_clock_IfBlock1) {
        nc_cdtrain_int = INT_NC_CDTRAIN_130mm_TM_conversions;
      }
      else {
        _7_else_clock_IfBlock1 = nc_cdtrain ==
          ENUM_NC_CDTRAIN_150mm_TM_conversions;
        if (_7_else_clock_IfBlock1) {
          nc_cdtrain_int = INT_NC_CDTRAIN_150mm_TM_conversions;
        }
        else {
          _6_else_clock_IfBlock1 = nc_cdtrain ==
            ENUM_NC_CDTRAIN_165mm_TM_conversions;
          if (_6_else_clock_IfBlock1) {
            nc_cdtrain_int = INT_NC_CDTRAIN_165mm_TM_conversions;
          }
          else {
            _5_else_clock_IfBlock1 = nc_cdtrain ==
              ENUM_NC_CDTRAIN_180mm_TM_conversions;
            if (_5_else_clock_IfBlock1) {
              nc_cdtrain_int = INT_NC_CDTRAIN_180mm_TM_conversions;
            }
            else {
              _4_else_clock_IfBlock1 = nc_cdtrain ==
                ENUM_NC_CDTRAIN_210mm_TM_conversions;
              if (_4_else_clock_IfBlock1) {
                nc_cdtrain_int = INT_NC_CDTRAIN_210mm_TM_conversions;
              }
              else {
                _3_else_clock_IfBlock1 = nc_cdtrain ==
                  ENUM_NC_CDTRAIN_225mm_TM_conversions;
                if (_3_else_clock_IfBlock1) {
                  nc_cdtrain_int = INT_NC_CDTRAIN_225mm_TM_conversions;
                }
                else {
                  _2_else_clock_IfBlock1 = nc_cdtrain ==
                    ENUM_NC_CDTRAIN_245mm_TM_conversions;
                  if (_2_else_clock_IfBlock1) {
                    nc_cdtrain_int = INT_NC_CDTRAIN_245mm_TM_conversions;
                  }
                  else {
                    _1_else_clock_IfBlock1 = nc_cdtrain ==
                      ENUM_NC_CDTRAIN_275mm_TM_conversions;
                    if (_1_else_clock_IfBlock1) {
                      nc_cdtrain_int = INT_NC_CDTRAIN_275mm_TM_conversions;
                    }
                    else {
                      else_clock_IfBlock1 = nc_cdtrain ==
                        ENUM_NC_CDTRAIN_300mm_TM_conversions;
                      if (else_clock_IfBlock1) {
                        nc_cdtrain_int = INT_NC_CDTRAIN_300mm_TM_conversions;
                      }
                      else {
                        nc_cdtrain_int = INT_NC_CDTRAIN_300mm_TM_conversions;
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
  return nc_cdtrain_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NC_CDTRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

