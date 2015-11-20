/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_to_DMI_TA_Export.h"

/* TA_Export::MRSP_to_DMI */
void MRSP_to_DMI_TA_Export(
  /* TA_Export::MRSP_to_DMI::EoA */L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::MRSP_to_DMI::MRSP_in */MRSP_Profile_t_TrackAtlasTypes *MRSP_in,
  /* TA_Export::MRSP_to_DMI::MRSP_to_DMI */MRSP_Profile_t_TrackAtlasTypes *MRSP_to_DMI)
{
  static MRSP_reduction_acc_TA_Export tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_Export::MRSP_to_DMI::_L665 */
  static MRSP_reduction_acc_TA_Export _L665;
  /* TA_Export::MRSP_to_DMI::_L669 */
  static kcg_int _L669;
  
  kcg_copy_MRSP_reduction_acc_TA_Export(
    &_L665,
    (MRSP_reduction_acc_TA_Export *) &DEFAULT_MRSP_reduction_acc_TA_Export);
  for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_reduction_acc_TA_Export(&tmp1, &_L665);
    /* 1 */ MRSP_reduction_TA_Export(i, &tmp1, MRSP_in, &tmp, &_L665);
    if (!tmp) {
      break;
    }
  }
  for (i = 0; i < 110; i++) {
    /* 1 */
    MRSP_limit_to_EOA_TA_Export(i, &_L665.MRSP, EoA, &tmp, &(*MRSP_to_DMI)[i]);
    _L669 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L669; i < 110; i++) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &(*MRSP_to_DMI)[i],
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_to_DMI_TA_Export.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

