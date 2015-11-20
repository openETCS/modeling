/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG359_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359 */
void Packets_BG359_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L22 */
  static CompressedPackets_T_Common_Types_Pkg _L22;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L25 */
  static CompressedPackets_T_Common_Types_Pkg _L25;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L26 */
  static B_data_internal_T_InfraLib _L26;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L28 */
  static BaliseTelegramHeader_int_T_TM _L28;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L29 */
  static B_data_internal_T_InfraLib _L29;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L30 */
  static CompressedPackets_T_Common_Types_Pkg _L30;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L31 */
  static B_data_internal_T_InfraLib _L31;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L32 */
  static B_data_internal_T_InfraLib _L32;
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Packets_BG359::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_B_data_internal_T_InfraLib(&_L26, Balise_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L25, &_L26.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in, &_L25);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L22, &B_data_in);
  /* 1 */
  Send_P255_MessageLibBaseline2(
    &_L22,
    (P255_trackside_int_T_TM *) &BGXXX_P255_Packets426,
    &_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out, &_L11);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&_L28, Header);
  kcg_copy_B_data_internal_T_InfraLib(&_L29, &_L26);
  if (kcg_true) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(&_L29.header, &_L28);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L30, &B_data_out);
  kcg_copy_B_data_internal_T_InfraLib(&_L31, &_L29);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L31.packets, &_L30);
  }
  _L33 = kcg_true;
  kcg_copy_B_data_internal_T_InfraLib(&_L32, &_L31);
  if (kcg_true) {
    _L32.balise_passed = _L33;
  }
  kcg_copy_B_data_internal_T_InfraLib(Balise_data_out, &_L32);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Packets_BG359_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

