/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_TA_Export.h"

/* TA_Export::GradientProfile_to_DMI */
void GradientProfile_to_DMI_TA_Export(
  /* TA_Export::GradientProfile_to_DMI::EoA */ L_internal_Type_Obu_BasicTypes_Pkg EoA,
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_in */ GradientProfile_t_TrackAtlasTypes *Gradient_Profile_in,
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_for_DMI_out */ GradientProfile_for_DMI_t_TrackAtlasTypes *Gradient_Profile_for_DMI_out)
{
  static kcg_int i1;
  static kcg_int i;
  /* TA_Export::GradientProfile_to_DMI::_L1 */
  static GradientProfile_t_TrackAtlasTypes _L1;
  /* TA_Export::GradientProfile_to_DMI::_L2 */
  static GradientProfile_for_DMI_t_TrackAtlasTypes _L2;
  /* TA_Export::GradientProfile_to_DMI::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_Export::GradientProfile_to_DMI::_L4 */
  static M_TrainTrack_compressed_packets_T_TM_radio_messages _L4;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L1, Gradient_Profile_in);
  _L3 = EoA;
  /* pow */ for (i1 = 0; i1 < 50; i1++) {
    _L4[i1] = _L3;
  }
  /* 1 */ for (i = 0; i < 50; i++) {
    /* 1 */ GradientProfile_to_DMI_loop_TA_Export(&_L1[i], _L4[i], &_L2[i]);
  }
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    Gradient_Profile_for_DMI_out,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GradientProfile_to_DMI_TA_Export.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

