/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init */
void Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::SectionData_in */TrackSectionData_T_InfraLib *SectionData_in,
  /* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init::SectionData_out */TrackSectionData_T_InfraLib *SectionData_out)
{
  static CompressedBaliseMessage_TM tmp1;
  static CompressedBaliseMessage_TM tmp;
  
  kcg_copy_TrackSectionData_T_InfraLib(SectionData_out, SectionData_in);
  /* 1 */
  Balise_Group_14_100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &(*SectionData_in).BG_Message,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG100_Balises_Sim,
    &tmp);
  /* 1 */
  Balise_Group_14_200_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG200_Balises_Sim,
    &tmp1);
  /* 1 */
  Balise_Group_14_201_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &tmp1,
    (*SectionData_in).TrainPosRaw.TrainPosCalibrated,
    (BaliseGroupData_TM *) &BG201_Balises_Sim,
    &(*SectionData_out).BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

