/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402 */
void Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::Header */ BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::Balise_data_in */ B_data_internal_T_InfraLib *Balise_data_in,
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::Balise_data_out */ B_data_internal_T_InfraLib *Balise_data_out)
{
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_1;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_1;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_1;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_2;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_2;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_2;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_3;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_3;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_3;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_4;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_4;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_4;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_5;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_5;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_5;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_6;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_6;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_6;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_7;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_7;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_7;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_8;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_8;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_8;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_9;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_9;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_9;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_10;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_10;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_10;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_11;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_11;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_11;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_12;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_12;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_12;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_13;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_13;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_13;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_14;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_14;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_14;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_15;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_15;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_15;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_16;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_16;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_16;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_17;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_17;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_17;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_18;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_18;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_18;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_19;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_19;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_19;
  /* InfraLib::No_Packet::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out_20;
  /* InfraLib::No_Packet::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in_20;
  /* InfraLib::No_Packet::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_20;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::B_data_in */
  static CompressedPackets_T_Common_Types_Pkg B_data_in;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::B_data_out */
  static CompressedPackets_T_Common_Types_Pkg B_data_out;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::B_data_link */
  static CompressedPackets_T_Common_Types_Pkg B_data_link;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L4;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L5 */
  static CompressedPackets_T_Common_Types_Pkg _L5;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L6 */
  static CompressedPackets_T_Common_Types_Pkg _L6;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L8 */
  static CompressedPackets_T_Common_Types_Pkg _L8;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L9 */
  static CompressedPackets_T_Common_Types_Pkg _L9;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L10 */
  static CompressedPackets_T_Common_Types_Pkg _L10;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L21 */
  static CompressedPackets_T_Common_Types_Pkg _L21;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L20 */
  static CompressedPackets_T_Common_Types_Pkg _L20;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L19 */
  static CompressedPackets_T_Common_Types_Pkg _L19;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L18 */
  static CompressedPackets_T_Common_Types_Pkg _L18;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L17 */
  static CompressedPackets_T_Common_Types_Pkg _L17;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L16 */
  static CompressedPackets_T_Common_Types_Pkg _L16;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L15 */
  static CompressedPackets_T_Common_Types_Pkg _L15;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L14 */
  static CompressedPackets_T_Common_Types_Pkg _L14;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L13 */
  static CompressedPackets_T_Common_Types_Pkg _L13;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L12 */
  static CompressedPackets_T_Common_Types_Pkg _L12;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L22 */
  static CompressedPackets_T_Common_Types_Pkg _L22;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L24 */
  static CompressedPackets_T_Common_Types_Pkg _L24;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L25 */
  static CompressedPackets_T_Common_Types_Pkg _L25;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L26 */
  static B_data_internal_T_InfraLib _L26;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L28 */
  static BaliseTelegramHeader_int_T_TM _L28;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L29 */
  static B_data_internal_T_InfraLib _L29;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L30 */
  static CompressedPackets_T_Common_Types_Pkg _L30;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L31 */
  static B_data_internal_T_InfraLib _L31;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L32 */
  static B_data_internal_T_InfraLib _L32;
  /* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Packets_BG402::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_B_data_internal_T_InfraLib(&_L26, Balise_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L25, &_L26.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in, &_L25);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L22, &B_data_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_10, &_L22);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_10, &B_data_in_10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_10, &_L1_10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L11, &B_data_out_10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_1, &_L11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_1, &B_data_in_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_1, &_L1_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L2, &B_data_out_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_2, &_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_2, &B_data_in_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_2, &_L1_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, &B_data_out_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_3, &_L3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_3, &B_data_in_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_3, &_L1_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L4, &B_data_out_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_4, &_L4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_4, &B_data_in_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_4, &_L1_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L5, &B_data_out_4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_5, &_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_5, &B_data_in_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_5, &_L1_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L6, &B_data_out_5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_6, &_L6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_6, &B_data_in_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_6, &_L1_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7, &B_data_out_6);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_7, &_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_7, &B_data_in_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_7, &_L1_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L8, &B_data_out_7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_8, &_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_8, &B_data_in_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_8, &_L1_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L9, &B_data_out_8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_9, &_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_9, &B_data_in_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_9, &_L1_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L10, &B_data_out_9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_link, &_L10);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L24, &B_data_link);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_15, &_L24);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_15, &B_data_in_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_15, &_L1_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L16, &B_data_out_15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_20, &_L16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_20, &B_data_in_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_20, &_L1_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L21, &B_data_out_20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_14, &_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_14, &B_data_in_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_14, &_L1_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L15, &B_data_out_14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_18, &_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_18, &B_data_in_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_18, &_L1_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L19, &B_data_out_18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_12, &_L19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_12, &B_data_in_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_12, &_L1_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L13, &B_data_out_12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_16, &_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_16, &B_data_in_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_16, &_L1_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L17, &B_data_out_16);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_19, &_L17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_19, &B_data_in_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_19, &_L1_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L20, &B_data_out_19);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_13, &_L20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_13, &B_data_in_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_13, &_L1_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L14, &B_data_out_13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_17, &_L14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_17, &B_data_in_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_17, &_L1_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L18, &B_data_out_17);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_in_11, &_L18);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1_11, &B_data_in_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out_11, &_L1_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L12, &B_data_out_11);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&B_data_out, &_L12);
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
** Packets_BG402_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

