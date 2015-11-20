/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Update_MA_TA_MA.h"

#ifndef KCG_USER_DEFINED_INIT
void Update_MA_init_TA_MA(outC_Update_MA_TA_MA *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->MA_in_force.valid = kcg_true;
  outC->MA_in_force.Level = MA_L1_TrackAtlasTypes;
  outC->MA_in_force.q_dir = Q_DIR_Reverse;
  outC->MA_in_force.v_main = 0;
  outC->MA_in_force.v_loa = 0;
  outC->MA_in_force.t_loa_unlimited = kcg_true;
  outC->MA_in_force.t_loa = 0;
  outC->MA_in_force.n_iter = 0;
  for (i = 0; i < 10; i++) {
    outC->MA_in_force.sections[i].valid = kcg_true;
    outC->MA_in_force.sections[i].q_endsection = kcg_true;
    outC->MA_in_force.sections[i].l_section = 0;
    outC->MA_in_force.sections[i].q_sectiontimer = kcg_true;
    outC->MA_in_force.sections[i].t_sectiontimer = 0;
    outC->MA_in_force.sections[i].d_sectiontimerstoploc = 0;
  }
  outC->MA_in_force.q_dangerpoint = kcg_true;
  outC->MA_in_force.dangerpoint.d_DP_or_OL = 0;
  outC->MA_in_force.dangerpoint.v_release = 0;
  outC->MA_in_force.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_in_force.q_overlap = kcg_true;
  outC->MA_in_force.overlap.d_DP_or_OL = 0;
  outC->MA_in_force.overlap.v_release = 0;
  outC->MA_in_force.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_in_force.q_endtimer = kcg_true;
  outC->MA_in_force.endtimer_t.t_endtimer = 0;
  outC->MA_in_force.endtimer_t.d_endtimerstoploc = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Update_MA_reset_TA_MA(outC_Update_MA_TA_MA *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_MA::Update_MA */
void Update_MA_TA_MA(
  /* TA_MA::Update_MA::ProfileIn */ MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA *outC)
{
  /* TA_MA::Update_MA::MA_in_force */
  static MovementAuthority_t_TrackAtlasTypes _1_MA_in_force;
  /* TA_MA::Update_MA::IfBlock1::then::_L1 */
  static MovementAuthority_t_TrackAtlasTypes _L1_IfBlock1;
  /* TA_MA::Update_MA::MA_in_force */
  static MovementAuthority_t_TrackAtlasTypes MA_in_force;
  /* TA_MA::Update_MA::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_MA::Update_MA::IfBlock1::else::else::_L3 */
  static MovementAuthority_t_TrackAtlasTypes _L3_IfBlock1;
  /* TA_MA::Update_MA::MA_in_force */
  static MovementAuthority_t_TrackAtlasTypes _2_MA_in_force;
  /* TA_MA::Update_MA::IfBlock1::else::then::_L1 */
  static MovementAuthority_t_TrackAtlasTypes _L14_IfBlock1;
  /* TA_MA::Update_MA::MA_in_force */
  static MovementAuthority_t_TrackAtlasTypes _3_MA_in_force;
  /* TA_MA::Update_MA::MA_in_force */
  static MovementAuthority_t_TrackAtlasTypes last_MA_in_force;
  /* TA_MA::Update_MA::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_MA::Update_MA::action */
  static ActionType_TA_MA action;
  /* TA_MA::Update_MA::_L34 */
  static MovementAuthority_t_TrackAtlasTypes _L34;
  /* TA_MA::Update_MA::_L65 */
  static kcg_bool _L65;
  /* TA_MA::Update_MA::_L66 */
  static ActionType_TA_MA _L66;
  /* TA_MA::Update_MA::_L67 */
  static ActionType_TA_MA _L67;
  /* TA_MA::Update_MA::_L68 */
  static ActionType_TA_MA _L68;
  
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L34, ProfileIn);
  _L65 = _L34.valid;
  _L67 = replace_MA_TA_MA;
  _L68 = keep_MA_TA_MA;
  /* 1 */ if (_L65) {
    _L66 = _L67;
  }
  else {
    _L66 = _L68;
  }
  action = _L66;
  IfBlock1_clock = action == replace_MA_TA_MA;
  /* last_init_ck_MA_in_force */ if (outC->init) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &last_MA_in_force,
      (MovementAuthority_t_TrackAtlasTypes *)
        &DEFAULT_MovementAuthority_TrackAtlasTypes);
  }
  else {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &last_MA_in_force,
      &outC->MA_in_force);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(&_L1_IfBlock1, ProfileIn);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &_1_MA_in_force,
      &_L1_IfBlock1);
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_in_force,
      &_1_MA_in_force);
  }
  else {
    else_clock_IfBlock1 = action == delete_MA_TA_MA;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_L14_IfBlock1,
        (MovementAuthority_t_TrackAtlasTypes *)
          &DEFAULT_MovementAuthority_TrackAtlasTypes);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_3_MA_in_force,
        &_L14_IfBlock1);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &MA_in_force,
        &_3_MA_in_force);
    }
    else {
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_L3_IfBlock1,
        &last_MA_in_force);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &_2_MA_in_force,
        &_L3_IfBlock1);
      kcg_copy_MovementAuthority_t_TrackAtlasTypes(
        &MA_in_force,
        &_2_MA_in_force);
    }
    kcg_copy_MovementAuthority_t_TrackAtlasTypes(
      &outC->MA_in_force,
      &MA_in_force);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Update_MA_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

