/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS */
M_SUPERVISION_STATUS_DMI_Types_Pkg CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables(
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::m_supervision_status_int */M_SUPERVISION_STATUS_INT_T_DATA m_supervision_status_int)
{
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::IfBlock1::else */ kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::IfBlock1::else::else::else */ kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::IfBlock1::else::else::else::else */ kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::IfBlock1::else::else */ kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_int_to_M_SUPERVISION_STATUS::m_supervision_status_ct */ M_SUPERVISION_STATUS_DMI_Types_Pkg m_supervision_status_ct;
  
  IfBlock1_clock = m_supervision_status_int == INT_M_SUPERVISION_STATUS_CSM;
  if (IfBlock1_clock) {
    m_supervision_status_ct = ENUM_M_SUPERVISION_STATUS_CSM;
  }
  else {
    _3_else_clock_IfBlock1 = m_supervision_status_int ==
      INT_M_SUPERVISION_STATUS_PIM;
    if (_3_else_clock_IfBlock1) {
      m_supervision_status_ct = ENUM_M_SUPERVISION_STATUS_PIM;
    }
    else {
      _2_else_clock_IfBlock1 = m_supervision_status_int ==
        INT_M_SUPERVISION_STATUS_TSM;
      if (_2_else_clock_IfBlock1) {
        m_supervision_status_ct = ENUM_M_SUPERVISION_STATUS_TSM;
      }
      else {
        _1_else_clock_IfBlock1 = m_supervision_status_int ==
          INT_M_SUPERVISION_STATUS_RSM;
        if (_1_else_clock_IfBlock1) {
          m_supervision_status_ct = ENUM_M_SUPERVISION_STATUS_RSM;
        }
        else {
          else_clock_IfBlock1 = m_supervision_status_int ==
            INT_M_SUPERVISION_STATUS_supervision_status_unknown;
          if (else_clock_IfBlock1) {
            m_supervision_status_ct =
              ENUM_M_SUPERVISION_STATUS_supervision_status_unknown;
          }
          else {
            m_supervision_status_ct = ENUM_M_SUPERVISION_STATUS_CSM;
          }
        }
      }
    }
  }
  return m_supervision_status_ct;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_int_to_M_SUPERVISION_STATUS_DATA_Variables.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

