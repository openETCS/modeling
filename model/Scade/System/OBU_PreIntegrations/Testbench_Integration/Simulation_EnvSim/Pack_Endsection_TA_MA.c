/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pack_Endsection_TA_MA.h"

/* TA_MA::Pack_Endsection */
void Pack_Endsection_TA_MA(
  /* TA_MA::Pack_Endsection::Packet15_in */P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Pack_Endsection::endsection */P015_section_enum_T_TM *endsection)
{
  (*endsection).valid = kcg_true;
  (*endsection).l_section = (*Packet15_in).l_endsection;
  (*endsection).q_sectiontimer = (*Packet15_in).q_sectiontimer;
  (*endsection).t_sectiontimer = (*Packet15_in).t_sectiontimer;
  (*endsection).d_sectiontimerstoploc = (*Packet15_in).d_sectiontimerstoploc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Pack_Endsection_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

