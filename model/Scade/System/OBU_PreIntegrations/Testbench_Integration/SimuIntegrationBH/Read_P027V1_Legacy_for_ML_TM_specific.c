/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_Legacy_for_ML_TM_specific.h"

/* TM_specific::Read_P027V1_Legacy_for_ML */
void Read_P027V1_Legacy_for_ML_TM_specific(
  /* TM_specific::Read_P027V1_Legacy_for_ML::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P027V1_Legacy_for_ML::P027_legacy_out */ P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *P027_legacy_out)
{
  /* TM_specific::Read_P027V1_Legacy_for_ML */
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg op_call;
  /* TM_specific::Read_P027V1_Legacy_for_ML */
  static kcg_bool ck_every;
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L2 */
  static P027V1_OBU_T_TM_baseline2 _L2;
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L1 */
  static kcg_bool _L1;
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* TM_specific::Read_P027V1_Legacy_for_ML::_L4 */
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _L4;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, Message_IN);
  /* 1 */ Read_P027V1_TM_baseline2(&_L3, &_L1, &_L2);
  ck_every = _L1;
  /* ck_Read_P027V1_Legacy_for_ML */ if (ck_every) {
    /* 1 */
    C_P027V1_legacy_for_ML_export_TM_conversions_baseline2(&_L2, &op_call);
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &_L4,
      &op_call);
  }
  else {
    kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &_L4,
      (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *)
        &DEFAULT_P027V1_legacy_TM_baseline2);
  }
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    P027_legacy_out,
    &_L4);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_Legacy_for_ML_TM_specific.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

