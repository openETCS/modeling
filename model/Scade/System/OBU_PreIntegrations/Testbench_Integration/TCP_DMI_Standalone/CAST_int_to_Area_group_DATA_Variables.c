/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_Area_group_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_Area_group */
Area_group_T_DMI_Types_Pkg CAST_int_to_Area_group_DATA_Variables(
  /* DATA::Variables::CAST_int_to_Area_group::area_group_int */Area_group_INT_T_DATA area_group_int)
{
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else */ kcg_bool _6_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else::else::else */ kcg_bool _4_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else::else::else::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else::else::else::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else::else::else::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else::else::else::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1::else::else */ kcg_bool _5_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_Area_group::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_Area_group::area_group_ct */ Area_group_T_DMI_Types_Pkg area_group_ct;
  
  IfBlock1_clock = area_group_int == INT_Area_group_T_A;
  if (IfBlock1_clock) {
    area_group_ct = ENUM_Area_group_T_A;
  }
  else {
    _6_else_clock_IfBlock1 = area_group_int == INT_Area_group_T_B;
    if (_6_else_clock_IfBlock1) {
      area_group_ct = ENUM_Area_group_T_B;
    }
    else {
      _5_else_clock_IfBlock1 = area_group_int == INT_Area_group_T_C;
      if (_5_else_clock_IfBlock1) {
        area_group_ct = ENUM_Area_group_T_C;
      }
      else {
        _4_else_clock_IfBlock1 = area_group_int == INT_Area_group_T_D;
        if (_4_else_clock_IfBlock1) {
          area_group_ct = ENUM_Area_group_T_D;
        }
        else {
          _3_else_clock_IfBlock1 = area_group_int == INT_Area_group_T_E;
          if (_3_else_clock_IfBlock1) {
            area_group_ct = ENUM_Area_group_T_E;
          }
          else {
            _2_else_clock_IfBlock1 = area_group_int == INT_Area_group_T_F;
            if (_2_else_clock_IfBlock1) {
              area_group_ct = ENUM_Area_group_T_F;
            }
            else {
              _1_else_clock_IfBlock1 = area_group_int == INT_Area_group_T_G;
              if (_1_else_clock_IfBlock1) {
                area_group_ct = ENUM_Area_group_T_G;
              }
              else {
                else_clock_IfBlock1 = area_group_int == INT_Area_group_T_H;
                if (else_clock_IfBlock1) {
                  area_group_ct = ENUM_Area_group_T_H;
                }
                else {
                  area_group_ct = ENUM_Area_group_T_H;
                }
              }
            }
          }
        }
      }
    }
  }
  return area_group_ct;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_Area_group_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

