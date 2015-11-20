/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_OutputManagement.h"

void Output_To_DMI_reset_OutputManagement(
  outC_Output_To_DMI_OutputManagement *outC)
{
  outC->init = kcg_true;
}

/* OutputManagement::Output_To_DMI */
void Output_To_DMI_OutputManagement(
  /* OutputManagement::Output_To_DMI::Level_Mode_Compatible */kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_To_DMI::needsAckFromDriver */kcg_bool needsAckFromDriver,
  /* OutputManagement::Output_To_DMI::Data_To_DMI_From_Mode */T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* OutputManagement::Output_To_DMI::announcedLevelTransition */T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* OutputManagement::Output_To_DMI::isAvailableForUse */kcg_bool isAvailableForUse,
  outC_Output_To_DMI_OutputManagement *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* OutputManagement::Output_To_DMI::IfBlock1::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* OutputManagement::Output_To_DMI::IfBlock1::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC =
    (*Data_To_DMI_From_Mode).SH_Refused_By_RBC;
  outC->Data_To_DMI_Ack.LevelNeedsAck = needsAckFromDriver;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel.LevelTransition,
    announcedLevelTransition);
  outC->announcedLevel.IsAvailableForUse = isAvailableForUse;
  if ((*Data_To_DMI_From_Mode).Ack_LS) {
    tmp1 = kcg_true;
  }
  else {
    _7_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_OS;
    if (_7_else_clock_IfBlock1) {
      tmp1 = kcg_true;
    }
    else {
      _6_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_RV;
      if (_6_else_clock_IfBlock1) {
        tmp1 = kcg_true;
      }
      else {
        _5_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_SH;
        if (_5_else_clock_IfBlock1) {
          tmp1 = kcg_true;
        }
        else {
          _4_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_SN;
          if (_4_else_clock_IfBlock1) {
            tmp1 = kcg_true;
          }
          else {
            _3_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_SR;
            if (_3_else_clock_IfBlock1) {
              tmp1 = kcg_true;
            }
            else {
              _2_else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_TR;
              if (_2_else_clock_IfBlock1) {
                tmp1 = kcg_true;
              }
              else {
                else_clock_IfBlock1 = (*Data_To_DMI_From_Mode).Ack_UN;
                if (else_clock_IfBlock1) {
                  tmp1 = kcg_true;
                }
                else {
                  tmp1 = needsAckFromDriver;
                }
              }
            }
          }
        }
      }
    }
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp = outC->rem_needsAckFromDriver;
  }
  outC->Data_To_DMI_Ack.valid = Level_Mode_Compatible & (tmp1 |
      (needsAckFromDriver != tmp) | (*Data_To_DMI_From_Mode).SH_Refused_By_RBC);
  if ((*Data_To_DMI_From_Mode).Ack_LS) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Limited_Supervision;
  }
  else if (_7_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_On_Sight;
  }
  else if (_6_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Reversing;
  }
  else if (_5_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Shunting;
  }
  else if (_4_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_National_System;
  }
  else if (_3_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Staff_Responsible;
  }
  else if (_2_else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Trip;
  }
  else if (else_clock_IfBlock1) {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Unfitted;
  }
  else {
    outC->Data_To_DMI_Ack.whichMode = M_MODE_Stand_By;
  }
  outC->rem_needsAckFromDriver = needsAckFromDriver;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Output_To_DMI_OutputManagement.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

