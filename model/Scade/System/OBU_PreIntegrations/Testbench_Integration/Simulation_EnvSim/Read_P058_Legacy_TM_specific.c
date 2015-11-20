/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P058_Legacy_TM_specific.h"

/* TM_specific::Read_P058_Legacy */
void Read_P058_Legacy_TM_specific(
  /* TM_specific::Read_P058_Legacy::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P058_Legacy::P058_legacy_out */P58_PositionReportParameters_T_Packet_Types_Pkg *P058_legacy_out)
{
  /* TM_specific::Read_P058_Legacy::_L2 */
  static P058_OBU_T_TM _L2;
  /* TM_specific::Read_P058_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P058_TM(Message_IN, &_L1, &_L2);
  if (_L1) {
    /* 1 */ C_P058_to_legacy_t_TM_conversions(&_L2, P058_legacy_out);
  }
  else {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      P058_legacy_out,
      (P58_PositionReportParameters_T_Packet_Types_Pkg *)
        &DEFAULT_P058_legacy_TM_specific);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P058_Legacy_TM_specific.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

