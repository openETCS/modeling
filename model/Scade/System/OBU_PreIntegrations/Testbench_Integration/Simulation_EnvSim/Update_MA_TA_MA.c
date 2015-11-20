/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_MA_TA_MA.h"

void Update_MA_reset_TA_MA(outC_Update_MA_TA_MA *outC)
{
  outC->init = kcg_true;
}

/* TA_MA::Update_MA */
void Update_MA_TA_MA(
  /* TA_MA::Update_MA::ProfileIn */MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA *outC)
{
  /* TA_MA::Update_MA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_MA::Update_MA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_MA::Update_MA::action */
  static ActionType_TA_MA action;
  
  if ((*ProfileIn).valid) {
    action = replace_MA_TA_MA;
  }
  else {
    action = keep_MA_TA_MA;
  }
  IfBlock1_clock = action == replace_MA_TA_MA;
  if (IfBlock1_clock) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_in_force, ProfileIn);
  }
  else {
    else_clock_IfBlock1 = action == delete_MA_TA_MA;
    if (else_clock_IfBlock1) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &outC->MA_in_force,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
    else if (outC->init) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &outC->MA_in_force,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
    }
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Update_MA_TA_MA.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

