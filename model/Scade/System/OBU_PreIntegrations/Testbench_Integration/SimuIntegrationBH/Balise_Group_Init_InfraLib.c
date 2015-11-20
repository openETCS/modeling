/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_Init_InfraLib.h"

/* InfraLib::Balise_Group_Init */
void Balise_Group_Init_InfraLib(
  /* InfraLib::Balise_Group_Init::TrainPos */ kcg_real TrainPos,
  /* InfraLib::Balise_Group_Init::Engineering_Data */ BaliseGroupData_TM *Engineering_Data,
  /* InfraLib::Balise_Group_Init::BG_internal_out */ B_data_internal_T_InfraLib *BG_internal_out)
{
  /* InfraLib::Balise_Group_Init::_L2 */
  static BaliseGroupData_TM _L2;
  /* InfraLib::Balise_Group_Init::_L14 */
  static kcg_int _L14;
  /* InfraLib::Balise_Group_Init::_L26 */
  static B_data_internal_T_InfraLib _L26;
  /* InfraLib::Balise_Group_Init::_L27 */
  static BaliseTelegramHeader_int_T_TM _L27;
  /* InfraLib::Balise_Group_Init::_L28 */
  static CompressedPackets_T_Common_Types_Pkg _L28;
  /* InfraLib::Balise_Group_Init::_L29 */
  static kcg_int _L29;
  /* InfraLib::Balise_Group_Init::_L30 */
  static kcg_real _L30;
  /* InfraLib::Balise_Group_Init::_L31 */
  static kcg_bool _L31;
  
  kcg_copy_BaliseGroupData_TM(&_L2, Engineering_Data);
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L27,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L28,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L29 = _L2.Pos;
  _L30 = TrainPos;
  _L14 = 0;
  _L31 = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L26.header, &_L27);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L26.packets, &_L28);
  _L26.engineering_BG_location = _L29;
  _L26.TrainPos = _L30;
  _L26.pig_nom_0 = _L14;
  _L26.balise_passed = _L31;
  kcg_copy_B_data_internal_T_InfraLib(BG_internal_out, &_L26);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Balise_Group_Init_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

