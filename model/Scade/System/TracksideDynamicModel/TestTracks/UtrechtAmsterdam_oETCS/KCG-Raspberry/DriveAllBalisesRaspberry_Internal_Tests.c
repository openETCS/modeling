/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG-Raspberry\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:26:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DriveAllBalisesRaspberry_Internal_Tests.h"

void DriveAllBalisesRaspberry_reset_Internal_Tests(void)
{
  Ctxt_DriveAllBalisesRaspberry_Internal_Tests.init = kcg_true;
}

/* Internal_Tests::DriveAllBalisesRaspberry */
void DriveAllBalisesRaspberry_Internal_Tests(void)
{
  static kcg_real tmp41;
  static kcg_real tmp40;
  static kcg_int tmp39;
  static kcg_int tmp38;
  static kcg_int tmp37;
  static kcg_real tmp36;
  static kcg_int tmp35;
  static kcg_bool tmp34;
  static kcg_bool tmp33;
  static MetadataElement_T_Common_Types_Pkg tmp32;
  static kcg_bool tmp31;
  static kcg_bool tmp30;
  static B_data_internal_T_InfraLib tmp29;
  static B_data_internal_T_InfraLib tmp28;
  static CompressedPackets_T_Common_Types_Pkg tmp27;
  static MetadataElement_T_Common_Types_Pkg tmp26;
  static kcg_real tmp25;
  static B_data_internal_T_InfraLib tmp24;
  static B_data_internal_T_InfraLib tmp23;
  static B_data_internal_T_InfraLib tmp22;
  static B_data_internal_T_InfraLib tmp21;
  static B_data_internal_T_InfraLib tmp20;
  static B_data_internal_T_InfraLib tmp19;
  static B_data_internal_T_InfraLib tmp18;
  static B_data_internal_T_InfraLib tmp17;
  static B_data_internal_T_InfraLib tmp16;
  static B_data_internal_T_InfraLib tmp15;
  static B_data_internal_T_InfraLib tmp14;
  static B_data_internal_T_InfraLib tmp13;
  static B_data_internal_T_InfraLib tmp12;
  static B_data_internal_T_InfraLib tmp11;
  static B_data_internal_T_InfraLib tmp10;
  static array__463509 tmp9;
  static P041_sections_array_flat_T_TM tmp8;
  static B_data_internal_T_InfraLib tmp7;
  static array__463543 tmp6;
  static P046_sections_array_flat_T_TM tmp5;
  static B_data_internal_T_InfraLib tmp4;
  static B_data_internal_T_InfraLib tmp3;
  static MetadataElement_T_Common_Types_Pkg tmp2;
  static array__463543 tmp1;
  static P046_sections_array_flat_T_TM tmp;
  /* InfraLib::TrackDiscontinuity::_L16 */
  static TrackSectionData_T_InfraLib _L16_2_1_1;
  /* InfraLib::TrackDiscontinuity::_L88 */
  static TrackSectionData_T_InfraLib _L88_2_1_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_3_1_1_1;
  /* InfraLib::Balise_Interdistance::_L5 */
  static kcg_real _L5_1_1_1_1_1_1_1;
  /* math::Abs::_L5 */
  static kcg_int _L5_1_1_1_1_1_1_1_1;
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balise_373_1::_L17 */
  static B_data_internal_T_InfraLib _L17_1_2_1_1_1;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */
  static array_int_3_33 _87__L74_1_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P041_tracksim_compr::_L209 */
  static array_int_395 _86__L209_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P041_tracksim_compr::_L376 */
  static array_int_1 _L376_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _85__L407_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::C_P046_flatten_sections::_L74 */
  static array_int_2_33 _L74_1_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P046_tracksim_compr::_L209 */
  static array_int_430 _84__L209_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P042_tracksim_compr::_L383 */
  static array_int_500 _80__L383_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _79__L406_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _78__L407_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _77__L408_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _76__L7_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _75__L3_1_1_1_1_1_1_1_1_1;
  /* MessageLibBaseline2::Send_P042::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _74__L7_1_1_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::C_P255_tracksim_compr::_L204 */
  static MetadataElement_T_Common_Types_Pkg _71__L204_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P255_tracksim_compr::_L383 */
  static array_int_500 _70__L383_1_1_1_1_1_1_1_1_1;
  static kcg_int _69_noname_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _68__L406_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _67__L407_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _66__L408_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _65__L7_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _64__L3_1_1_1_1_1_1_1_1_1;
  /* MessageLibBaseline2::Send_P255::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3_1_1_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1;
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::_L209 */
  static array_int_444 _60__L209_1_1_1_1_1_1_1_1_1;
  static kcg_int _59_noname_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _58__L407_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _57__L408_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _56__L7_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _55__L3_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::C_P046_flatten_sections::_L74 */
  static array_int_2_33 _L74_1_1_1_2_1_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::C_P046_tracksim_compr::_L209 */
  static array_int_430 _L209_1_1_2_1_1_1_1_1_1;
  /* TM_conversions::C_P046_tracksim_compr::_L376 */
  static array_int_1 _L376_1_1_2_1_1_1_1_1_1;
  static kcg_int noname_1_1_2_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _L408_1_1_1_1_1_2_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1_2_1_1_2_1_1_1;
  /* TM_conversions::C_P042_tracksim_compr::_L209 */
  static array_int_492 _L209_1_1_2_1_1_2_1_1_1;
  /* TM_conversions::C_P042_tracksim_compr::_L383 */
  static array_int_500 _L383_1_1_2_1_1_2_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _L406_1_1_2_1_1_2_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _L407_1_1_2_1_1_2_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _L408_1_1_2_1_1_2_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7_1_1_2_1_1_2_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3_1_1_2_1_1_2_1_1_1;
  /* MessageLibBaseline2::Send_P042::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3_2_1_1_2_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1;
  /* TM_conversions::C_P042_tracksim_compr::_L209 */
  static array_int_492 _L209_1_1_1_1_1_2_1_1_1;
  static kcg_int noname_1_1_1_1_1_2_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _L407_1_1_1_1_1_2_1_1_1;
  /* TM_conversions::C_P255_tracksim_compr::_L204 */
  static MetadataElement_T_Common_Types_Pkg _L204_1_1_1_1_1_2_1_1_1;
  /* InfraLib::Balise_Localisation::_L96 */
  static kcg_bool _L96_1_1_1_1_1_1;
  /* InfraLib::Balise_Group_Close::_L21 */
  static B_data_internal_T_InfraLib _L21_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P045_tracksim_compr::_L209 */
  static array_int_496 _49__L209_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P045_tracksim_compr::_L383 */
  static array_int_500 _48__L383_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _47__L406_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _46__L407_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _45__L408_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _44__L7_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _43__L3_1_1_1_1_1_1_1_1_1;
  /* MessageLibBaseline2::Send_P045::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7_1_1_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1;
  /* TM_conversions::C_P255_tracksim_compr::_L204 */
  static MetadataElement_T_Common_Types_Pkg _L204_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P255_tracksim_compr::_L209 */
  static array_int_499 _L209_1_1_1_1_1_1_1_1_1;
  /* TM_conversions::C_P255_tracksim_compr::_L383 */
  static array_int_500 _L383_1_1_1_1_1_1_1_1_1;
  static kcg_int noname_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L406 */
  static array_int_500 _L406_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L407 */
  static kcg_int _L407_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_MessageData::_L408 */
  static kcg_int _L408_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7_1_1_1_1_1_1_1_1_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3_1_1_1_1_1_1_1_1_1;
  /* Internal_Tests::TriggerBaliseByIndex::_L4 */
  static BPos_Single_Internal_Tests _L4_1_1_1;
  
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L21_1_1_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L21_1_1_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L21_1_1_1_1_1.engineering_BG_location = BG352_Balises426.Pos;
  _L21_1_1_1_1_1.pig_nom_0 = 0;
  _L21_1_1_1_1_1.balise_passed = kcg_false;
  kcg_copy_CompressedBaliseMessage_TM(
    &_L16_2_1_1.BG_Message,
    (CompressedBaliseMessage_TM *) &DEFAULT_BTMMessage_TM);
  _L408_1_1_1_1_1_2_1_1_1 = 1659 - 400;
  tmp39 = BG352_header_B0_Balises426.n_pig - BG352_header_B0_Balises426.n_pig;
  _L5_1_1_1_1_1_1_1 = - 1.0;
  if (Ctxt_DriveAllBalisesRaspberry_Internal_Tests.init) {
    Ctxt_DriveAllBalisesRaspberry_Internal_Tests.init = kcg_false;
    Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1_1_1_1 = 0;
  }
  else {
    Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1_1_1_1 = 1 +
      Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1_1_1_1;
  }
  _L5_3_1_1_1 = Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1_1_1_1 / 3 %
    100;
  kcg_copy_BPos_Single_Internal_Tests(
    &_L4_1_1_1,
    (BPos_Single_Internal_Tests *) &DEFAULT_BPos_single_Internal_Tests);
  for (
    _L5_1_1_1_1_1_1_1_1 = 0;
    _L5_1_1_1_1_1_1_1_1 < 100;
    _L5_1_1_1_1_1_1_1_1++) {
    if ((0 <= _L5_3_1_1_1) & (_L5_3_1_1_1 < 100)) {
      kcg_copy_BPos_Single_Internal_Tests(
        &_L4_1_1_1,
        (BPos_Single_Internal_Tests *)
          &BalisePositions_Internal_Tests[_L5_3_1_1_1]);
    }
    else {
      kcg_copy_BPos_Single_Internal_Tests(
        &_L4_1_1_1,
        (BPos_Single_Internal_Tests *) &DEFAULT_BPos_single_Internal_Tests);
    }
    if (!kcg_false) {
      break;
    }
  }
  if (Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1_1_1_1 % 3 == 0) {
    tmp40 = 0.0;
  }
  else {
    tmp40 = Distance_Balises_in_BG_InfraLib;
  }
  if (Ctxt_DriveAllBalisesRaspberry_Internal_Tests._L1_1_1_1 % 2 == 0) {
    tmp41 = 0.0;
  }
  else {
    tmp41 = Distance_Balises_in_BG_InfraLib * _L5_1_1_1_1_1_1_1;
  }
  _L16_2_1_1.TrainPosRaw.TrainPos_in = tmp40 + tmp41 + _L4_1_1_1.TrainPos;
  _L16_2_1_1.TrainPosRaw.OffsetTotal = 0;
  _L16_2_1_1.TrainPosRaw.TrainPosCalibrated = 0.0;
  _L5_3_1_1_1 = 105650 - 104775;
  if (0 <= _L5_3_1_1_1) {
    tmp37 = _L5_3_1_1_1;
  }
  else {
    tmp37 = - _L5_3_1_1_1;
  }
  tmp38 = _L16_2_1_1.TrainPosRaw.OffsetTotal + tmp37;
  _L96_1_1_1_1_1_1 = (_L16_2_1_1.TrainPosRaw.TrainPos_in >= (kcg_real)
        _L16_2_1_1.TrainPosRaw.OffsetTotal) &
    (_L16_2_1_1.TrainPosRaw.TrainPos_in < (kcg_real) tmp38);
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  kcg_copy_TrainPosRaw_T_InfraLib(
    &_L88_2_1_1.TrainPosRaw,
    &_L16_2_1_1.TrainPosRaw);
  _L88_2_1_1.TrainPosRaw.OffsetTotal = tmp38;
  if (_L96_1_1_1_1_1_1) {
    if (_L5_3_1_1_1 >= 0) {
      tmp41 = (kcg_real) 1;
    }
    else {
      tmp41 = (kcg_real) - 1;
    }
    _L88_2_1_1.TrainPosRaw.TrainPosCalibrated =
      (_L16_2_1_1.TrainPosRaw.TrainPos_in - (kcg_real)
          _L16_2_1_1.TrainPosRaw.OffsetTotal) * tmp41 + (kcg_real) 104775;
  }
  else {
    _L88_2_1_1.TrainPosRaw.TrainPosCalibrated = 0.0;
  }
  _L21_1_1_1_1_1.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  if (0 <= tmp39) {
    tmp40 = (kcg_real) tmp39;
  }
  else {
    tmp40 = (kcg_real) - tmp39;
  }
  if (BG352_header_B0_Balises426.n_pig == 0) {
    tmp41 = 1.0;
  }
  else {
    tmp41 = _L5_1_1_1_1_1_1_1;
  }
  tmp36 = tmp40 * (tmp41 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L21_1_1_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  if (Half_Distance_Balises_in_BG_InfraLib <= ReleaseDelta_InfraLib) {
    tmp41 = Half_Distance_Balises_in_BG_InfraLib;
  }
  else {
    tmp41 = ReleaseDelta_InfraLib;
  }
  _L96_1_1_1_1_1_1 = (tmp36 + tmp41 > _L21_1_1_1_1_1.TrainPos) & (tmp36 -
      tmp41 <= _L21_1_1_1_1_1.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG352_P045_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG352_P045_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG352_P045_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG352_P045_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG352_P045_Packets426.NID_MN;
      tmp32.valid = BG352_P045_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket045_TM - 1;
      IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG352_P045_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG352_P045_Packets426.NID_PACKET == 45) {
        tmp32.nid_packet = 45 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG352_P045_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG352_P045_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG352_P045_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _43__L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L5_3_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        tmp34 =
          _L21_1_1_1_1_1.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _43__L3_1_1_1_1_1_1_1_1_1 =
            _L21_1_1_1_1_1.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _43__L3_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        }
        noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_43__L3_1_1_1_1_1_1_1_1_1 == 0) {
        _45__L408_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _45__L408_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      _44__L7_1_1_1_1_1_1_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1 +
        (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 496;
        _L5_1_1_1_1_1_1_1_1++) {
        _49__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_496(
        &_48__L383_1_1_1_1_1_1_1_1_1[4],
        &_49__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _44__L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _45__L408_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _45__L408_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _45__L408_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _45__L408_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L21_1_1_1_1_1.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L21_1_1_1_1_1.packets.PacketHeaders);
      tmp32.startAddress = _45__L408_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _44__L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= noname_1_1_1_1_1_1_1_1_1 - 1) & (noname_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[noname_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L21_1_1_1_1_1.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &_L21_1_1_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG352_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp38 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp38 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = tmp38;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp37 = _L3_1_1_1_1_1_1_1_1_1;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L3_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L3_1_1_1_1_1_1_1_1_1 = tmp37;
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L3_1_1_1_1_1_1_1_1_1 == 0) {
        _L408_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      _L7_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L408_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L408_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L408_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= tmp35 - 1) & (tmp35 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[tmp35 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
  }
  tmp24.pig_nom_0 = BG352_header_B0_Balises426.n_pig;
  _L5_3_1_1_1 = BG352_header_B1_Balises426.n_pig - tmp24.pig_nom_0;
  if (0 <= _L5_3_1_1_1) {
    tmp40 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp40 = (kcg_real) - _L5_3_1_1_1;
  }
  if (tmp24.pig_nom_0 == 0) {
    tmp36 = 1.0;
  }
  else {
    tmp36 = _L5_1_1_1_1_1_1_1;
  }
  tmp25 = tmp40 * (tmp36 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp24.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp25 + tmp41 > tmp24.TrainPos) & (tmp25 - tmp41 <=
      tmp24.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG352_P045_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG352_P045_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG352_P045_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG352_P045_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG352_P045_Packets426.NID_MN;
      tmp32.valid = BG352_P045_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket045_TM - 1;
      IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG352_P045_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG352_P045_Packets426.NID_PACKET == 45) {
        tmp35 = 45 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG352_P045_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp35 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = tmp35;
      if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG352_P045_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG352_P045_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _44__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp39 = _44__L7_1_1_1_1_1_1_1_1_1;
        tmp34 = tmp24.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _44__L7_1_1_1_1_1_1_1_1_1 =
            tmp24.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _44__L7_1_1_1_1_1_1_1_1_1 = tmp39;
        }
        _43__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_44__L7_1_1_1_1_1_1_1_1_1 == 0) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      _45__L408_1_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 +
        (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 496;
        _L5_1_1_1_1_1_1_1_1++) {
        _49__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_496(
        &_48__L383_1_1_1_1_1_1_1_1_1[4],
        &_49__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _45__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _46__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _46__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp24.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L5_3_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp24.packets.PacketHeaders);
      tmp32.startAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _45__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _43__L3_1_1_1_1_1_1_1_1_1 - 1) & (_43__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_43__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp24.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp24);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG352_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp38 = _L7_1_1_1_1_1_1_1_1_1;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L7_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L7_1_1_1_1_1_1_1_1_1 = tmp38;
        }
        _L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L7_1_1_1_1_1_1_1_1_1 == 0) {
        _L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L407_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L3_1_1_1_1_1_1_1_1_1 - 1) & (_L3_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp29);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp24);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG353_Balises426.Pos;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  _L21_1_1_1_1_1.pig_nom_0 = tmp24.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (_L21_1_1_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &_L21_1_1_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &_L21_1_1_1_1_1.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  _L5_3_1_1_1 = BG353_header_B0_Balises426.n_pig -
    BG353_header_B0_Balises426.n_pig;
  tmp37 = 32962 - _L408_1_1_1_1_1_2_1_1_1;
  if (0 <= tmp37) {
    tmp38 = tmp37;
  }
  else {
    tmp38 = - tmp37;
  }
  tmp39 = _L16_2_1_1.TrainPosRaw.OffsetTotal + tmp38;
  _L96_1_1_1_1_1_1 = (_L16_2_1_1.TrainPosRaw.TrainPos_in >= (kcg_real)
        _L16_2_1_1.TrainPosRaw.OffsetTotal) &
    (_L16_2_1_1.TrainPosRaw.TrainPos_in < (kcg_real) tmp39);
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  kcg_copy_TrainPosRaw_T_InfraLib(
    &_L88_2_1_1.TrainPosRaw,
    &_L16_2_1_1.TrainPosRaw);
  _L88_2_1_1.TrainPosRaw.OffsetTotal = tmp39;
  if (_L96_1_1_1_1_1_1) {
    if (tmp37 >= 0) {
      tmp40 = (kcg_real) 1;
    }
    else {
      tmp40 = (kcg_real) - 1;
    }
    _L88_2_1_1.TrainPosRaw.TrainPosCalibrated =
      (_L16_2_1_1.TrainPosRaw.TrainPos_in - (kcg_real)
          _L16_2_1_1.TrainPosRaw.OffsetTotal) * tmp40 + (kcg_real)
        _L408_1_1_1_1_1_2_1_1_1;
  }
  else {
    _L88_2_1_1.TrainPosRaw.TrainPosCalibrated = 0.0;
  }
  tmp28.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG353_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <= tmp28.TrainPos);
  if (tmp30) {
    if (BG353_P042_N_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG353_P042_N_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG353_P042_N_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG353_P042_N_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG353_P042_N_Packets426.Q_RBC;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[4] = BG353_P042_N_Packets426.NID_C;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[5] = BG353_P042_N_Packets426.NID_RBC;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[6] = BG353_P042_N_Packets426.NID_RADIO;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[7] =
        BG353_P042_N_Packets426.Q_SLEEPSESSION;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG353_P042_N_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket042_TM - 1;
      _L96_1_1_1_1_1_1 = BG353_P042_N_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG353_P042_N_Packets426.NID_PACKET == 42) {
        noname_1_1_1_1_1_1_1_1_1 = 42 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG353_P042_N_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        noname_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = noname_1_1_1_1_1_1_1_1_1;
      if (_L96_1_1_1_1_1_1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
          BG353_P042_N_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
            BG353_P042_N_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      tmp37 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_1_1_1_1 = tmp37;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          tmp37 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          tmp37 = _L407_1_1_1_1_1_1_1_1_1;
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (tmp37 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = tmp37 + 1;
      }
      _L408_1_1_1_1_1_2_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_48__L383_1_1_1_1_1_1_1_1_1[8],
        &_L209_1_1_1_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L408_1_1_1_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L407_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L5_3_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L408_1_1_1_1_1_2_1_1_1;
      if ((0 <= tmp39 - 1) & (tmp39 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[tmp39 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    if (BG353_P042_R_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BG353_P042_R_Packets426.NID_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[1] = BG353_P042_R_Packets426.Q_DIR;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[2] = BG353_P042_R_Packets426.L_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[3] = BG353_P042_R_Packets426.Q_RBC;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[4] = BG353_P042_R_Packets426.NID_C;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[5] = BG353_P042_R_Packets426.NID_RBC;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[6] = BG353_P042_R_Packets426.NID_RADIO;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[7] = BG353_P042_R_Packets426.Q_SLEEPSESSION;
      tmp32.valid = BG353_P042_R_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket042_TM - 1;
      IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG353_P042_R_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG353_P042_R_Packets426.NID_PACKET == 42) {
        _L408_1_1_1_1_1_1_1_1_1 = 42 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG353_P042_R_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = _L408_1_1_1_1_1_1_1_1_1;
      if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          BG353_P042_R_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
            BG353_P042_R_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L3_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L3_1_1_2_1_1_2_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L3_1_1_2_1_1_2_1_1_1 = _L7_1_1_1_1_1_1_1_1_1;
        }
        noname_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L3_1_1_2_1_1_2_1_1_1 == 0) {
        _L408_1_1_2_1_1_2_1_1_1 = 0;
      }
      else {
        _L408_1_1_2_1_1_2_1_1_1 = _L3_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L7_1_1_2_1_1_2_1_1_1 = _L408_1_1_2_1_1_2_1_1_1 + (tmp32.endAddress -
          tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_L383_1_1_2_1_1_2_1_1_1[8],
        &_L209_1_1_2_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp34 = _L7_1_1_2_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp34 & (_L5_1_1_1_1_1_1_1_1 >= _L408_1_1_2_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L408_1_1_2_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L408_1_1_2_1_1_2_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L408_1_1_2_1_1_2_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L407_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      tmp32.startAddress = _L408_1_1_2_1_1_2_1_1_1;
      tmp32.endAddress = _L7_1_1_2_1_1_2_1_1_1;
      if ((0 <= noname_1_1_1_1_1_2_1_1_1 - 1) & (noname_1_1_1_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[noname_1_1_1_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG353_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _44__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp35 = _44__L7_1_1_1_1_1_1_1_1_1;
        tmp33 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp33) {
          _44__L7_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _44__L7_1_1_1_1_1_1_1_1_1 = tmp35;
        }
        _43__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
      if (_44__L7_1_1_1_1_1_1_1_1_1 == 0) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      _45__L408_1_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp31 = _45__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp31 & (_L5_1_1_1_1_1_1_1_1 >= _46__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _46__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp26.startAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _45__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _43__L3_1_1_1_1_1_1_1_1_1 - 1) & (_43__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_43__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp24.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp24);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp28);
  }
  _L21_1_1_1_1_1.pig_nom_0 = BG353_header_B0_Balises426.n_pig;
  _L5_3_1_1_1 = BG353_header_B1_Balises426.n_pig - _L21_1_1_1_1_1.pig_nom_0;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (_L21_1_1_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L21_1_1_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > _L21_1_1_1_1_1.TrainPos) & (tmp40 -
      tmp41 <= _L21_1_1_1_1_1.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG353_P042_N_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG353_P042_N_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG353_P042_N_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG353_P042_N_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG353_P042_N_Packets426.Q_RBC;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[4] = BG353_P042_N_Packets426.NID_C;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[5] = BG353_P042_N_Packets426.NID_RBC;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[6] = BG353_P042_N_Packets426.NID_RADIO;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[7] =
        BG353_P042_N_Packets426.Q_SLEEPSESSION;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG353_P042_N_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket042_TM - 1;
      _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
        BG353_P042_N_Packets426.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
      if (BG353_P042_N_Packets426.NID_PACKET == 42) {
        _L7_1_1_1_1_1_1_1_1_1 = 42 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG353_P042_N_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L7_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L7_1_1_1_1_1_1_1_1_1;
      if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
          BG353_P042_N_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
            BG353_P042_N_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _L21_1_1_1_1_1.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _46__L407_1_1_1_1_1_1_1_1_1 =
            _L21_1_1_1_1_1.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _46__L407_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        }
        _45__L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_46__L407_1_1_1_1_1_1_1_1_1 == 0) {
        _L407_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_2_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 + 1;
      }
      _L408_1_1_1_1_1_2_1_1_1 = _L407_1_1_1_1_1_2_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_48__L383_1_1_1_1_1_1_1_1_1[8],
        &_L209_1_1_1_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L408_1_1_1_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 & (_L5_1_1_1_1_1_1_1_1 >=
            _L407_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_2_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_2_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L21_1_1_1_1_1.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        noname_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &_L21_1_1_1_1_1.packets.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L407_1_1_1_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L408_1_1_1_1_1_2_1_1_1;
      if ((0 <= _45__L408_1_1_1_1_1_1_1_1_1 - 1) &
        (_45__L408_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_45__L408_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &_L21_1_1_1_1_1.packets);
    }
    if (BG353_P042_R_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BG353_P042_R_Packets426.NID_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[1] = BG353_P042_R_Packets426.Q_DIR;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[2] = BG353_P042_R_Packets426.L_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[3] = BG353_P042_R_Packets426.Q_RBC;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[4] = BG353_P042_R_Packets426.NID_C;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[5] = BG353_P042_R_Packets426.NID_RBC;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[6] = BG353_P042_R_Packets426.NID_RADIO;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[7] = BG353_P042_R_Packets426.Q_SLEEPSESSION;
      tmp32.valid = BG353_P042_R_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket042_TM - 1;
      IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG353_P042_R_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG353_P042_R_Packets426.NID_PACKET == 42) {
        tmp35 = 42 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG353_P042_R_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp35 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = tmp35;
      if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          BG353_P042_R_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
            BG353_P042_R_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L7_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp39 = _L7_1_1_2_1_1_2_1_1_1;
        tmp34 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _L7_1_1_2_1_1_2_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L7_1_1_2_1_1_2_1_1_1 = tmp39;
        }
        _L3_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_L7_1_1_2_1_1_2_1_1_1 == 0) {
        _L407_1_1_2_1_1_2_1_1_1 = 0;
      }
      else {
        _L407_1_1_2_1_1_2_1_1_1 = _L7_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L408_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1 + (tmp32.endAddress -
          tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_L383_1_1_2_1_1_2_1_1_1[8],
        &_L209_1_1_2_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _L408_1_1_2_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _L407_1_1_2_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_2_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_2_1_1_2_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_2_1_1_2_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L5_3_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      tmp32.startAddress = _L407_1_1_2_1_1_2_1_1_1;
      tmp32.endAddress = _L408_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L3_1_1_2_1_1_2_1_1_1 - 1) & (_L3_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L3_1_1_2_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &_L21_1_1_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG353_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L407_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp38 = _L407_1_1_1_1_1_1_1_1_1;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L407_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_1_1_1_1_1_1_1 = tmp38;
        }
        _L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L407_1_1_1_1_1_1_1_1_1 == 0) {
        _43__L3_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _43__L3_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp37 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp37 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = tmp37;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      noname_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = noname_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _43__L3_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _43__L3_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _43__L3_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _43__L3_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp26.startAddress = _43__L3_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = noname_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L408_1_1_1_1_1_1_1_1_1 - 1) & (_L408_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L408_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG370_Balises426.Pos;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp24.pig_nom_0 = _L21_1_1_1_1_1.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L5_3_1_1_1 = BG370_header_B1_Balises426.n_pig -
    BG370_header_B1_Balises426.n_pig;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG370_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG370_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      tmp32.valid = BGxxx_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        tmp38 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp38 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = tmp38;
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      tmp35 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp37 = tmp35;
        tmp31 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          tmp35 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          tmp35 = tmp37;
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (tmp35 == 0) {
        _L7_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L7_1_1_1_1_1_1_1_1_1 = tmp35 + 1;
      }
      _L3_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1 + (tmp32.endAddress -
          tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L3_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L7_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L7_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L7_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L7_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp26, &tmp32);
      tmp26.startAddress = _L7_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= tmp39 - 1) & (tmp39 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[tmp39 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L21_1_1_1_1_1.packets,
      &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp28);
  }
  tmp24.pig_nom_0 = BG370_header_B1_Balises426.n_pig;
  _L407_1_1_1_1_1_1_1_1_1 = BG370_header_B0_Balises426.n_pig - tmp24.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp24.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp24.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp24.TrainPos) &
    (tmp40 - tmp41 <= tmp24.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp24);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG370_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _45__L408_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _43__L3_1_1_1_1_1_1_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp24.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _45__L408_1_1_1_1_1_1_1_1_1 =
            tmp24.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _45__L408_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_45__L408_1_1_1_1_1_1_1_1_1 == 0) {
        _L408_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        _L408_1_1_1_1_1_2_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        noname_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        noname_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = noname_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _46__L407_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _46__L407_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L408_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_2_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L408_1_1_1_1_1_2_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp24.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L407_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp24.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_1_1_1_1,
        &_L204_1_1_1_1_1_2_1_1_1);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L408_1_1_1_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      if ((0 <= _44__L7_1_1_1_1_1_1_1_1_1 - 1) & (_44__L7_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_44__L7_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp24.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp29);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp24);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG341_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  _L21_1_1_1_1_1.pig_nom_0 = tmp24.pig_nom_0;
  noname_1_1_1_1_1_2_1_1_1 = BG341_header_B1_Balises426.n_pig -
    BG341_header_B1_Balises426.n_pig;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (BG341_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG341_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp32.valid = BGXXX_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L7_1_1_2_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L7_1_1_2_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = _L7_1_1_2_1_1_2_1_1_1;
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L5_3_1_1_1 = tmp37 + (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = _L5_3_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp26, &tmp32);
      tmp26.startAddress = tmp37;
      tmp26.endAddress = _L5_3_1_1_1;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp24.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp24);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp28);
  }
  tmp23.pig_nom_0 = BG341_header_B1_Balises426.n_pig;
  tmp39 = BG341_header_B0_Balises426.n_pig - tmp23.pig_nom_0;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (tmp23.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp23.TrainPos) & (tmp40 - tmp41 <=
      tmp23.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG341_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L408_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp23.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L408_1_1_1_1_1_1_1_1_1 =
            tmp23.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        }
        _L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L408_1_1_1_1_1_1_1_1_1 == 0) {
        noname_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        noname_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp35 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp35 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = tmp35;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L407_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= noname_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - noname_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - noname_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              noname_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp23.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _43__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp23.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_1_1_1_1,
        &_L204_1_1_1_1_1_2_1_1_1);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = noname_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L7_1_1_1_1_1_1_1_1_1 - 1) & (_L7_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L7_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp23.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp23);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG369_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp24.pig_nom_0 = tmp23.pig_nom_0;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG369_header_B0_Balises426.n_pig -
    BG369_header_B0_Balises426.n_pig;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG369_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    if (BG369_P137_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG369_P137_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG369_P137_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG369_P137_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG369_P137_Packets426.Q_SRSTOP;
      tmp32.valid = BG369_P137_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket137_TM - 1;
      else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = BG369_P137_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG369_P137_Packets426.NID_PACKET == 137) {
        tmp32.nid_packet = 137 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG369_P137_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG369_P137_Packets426.Q_DIR ==
          INT_Q_DIR_reverse_TM_conversions;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
            BG369_P137_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L5_3_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L408_1_1_1_1_1_2_1_1_1 = _L5_3_1_1_1;
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L5_3_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L5_3_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        }
        noname_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L5_3_1_1_1 == 0) {
        tmp38 = 0;
      }
      else {
        tmp38 = _L5_3_1_1_1 + 1;
      }
      tmp37 = tmp38 + (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 496;
        _L5_1_1_1_1_1_1_1_1++) {
        _49__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_496(
        &_48__L383_1_1_1_1_1_1_1_1_1[4],
        &_49__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = tmp37 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp38)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp38) & (_L5_1_1_1_1_1_1_1_1 -
              tmp38 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp38];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      tmp32.startAddress = tmp38;
      tmp32.endAddress = tmp37;
      if ((0 <= noname_1_1_1_1_1_2_1_1_1 - 1) & (noname_1_1_1_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[noname_1_1_1_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG369_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _46__L407_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _45__L408_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        tmp39 = 0;
      }
      else {
        tmp39 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_2_1_1_2_1_1_1 = tmp39 + (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp39)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp39) & (_L5_1_1_1_1_1_1_1_1 -
              tmp39 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp39];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp35;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = tmp39;
      tmp26.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp23.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp23);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp28);
  }
  tmp22.pig_nom_0 = BG369_header_B0_Balises426.n_pig;
  _L3_1_1_1_1_1_1_1_1_1 = BG369_header_B1_Balises426.n_pig - tmp22.pig_nom_0;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp22.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp22.TrainPos) & (tmp40 - tmp41 <=
      tmp22.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG369_P137_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BG369_P137_Packets426.NID_PACKET;
      (&_L383_1_1_1_1_1_1_1_1_1[0])[1] = BG369_P137_Packets426.Q_DIR;
      (&_L383_1_1_1_1_1_1_1_1_1[0])[2] = BG369_P137_Packets426.L_PACKET;
      (&_L383_1_1_1_1_1_1_1_1_1[0])[3] = BG369_P137_Packets426.Q_SRSTOP;
      tmp26.valid = BG369_P137_Packets426.valid;
      tmp26.startAddress = 0;
      tmp26.endAddress = DIM_MaxElementsPacket137_TM - 1;
      _44__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        noname_1_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        tmp34 = tmp22.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _44__L7_1_1_1_1_1_1_1_1_1 =
            tmp22.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _44__L7_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        }
        _43__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_44__L7_1_1_1_1_1_1_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _44__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = BG369_P137_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG369_P137_Packets426.NID_PACKET == 137) {
        _L407_1_1_1_1_1_1_1_1_1 = 137 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG369_P137_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L407_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp26.nid_packet = _L407_1_1_1_1_1_1_1_1_1;
      if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
        tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG369_P137_Packets426.Q_DIR ==
          INT_Q_DIR_reverse_TM_conversions;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG369_P137_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L5_3_1_1_1 = tmp37 + (tmp26.endAddress - tmp26.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 496;
        _L5_1_1_1_1_1_1_1_1++) {
        _49__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_496(
        &_L383_1_1_1_1_1_1_1_1_1[4],
        &_49__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _L5_3_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp22.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp22.packets.PacketHeaders);
      tmp26.startAddress = tmp37;
      tmp26.endAddress = _L5_3_1_1_1;
      if ((0 <= _43__L3_1_1_1_1_1_1_1_1_1 - 1) & (_43__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_43__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp22.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG369_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      tmp32.valid = BGxxx_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      tmp35 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L408_1_1_1_1_1_1_1_1_1 = tmp35;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          tmp35 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          tmp35 = _L408_1_1_1_1_1_1_1_1_1;
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (tmp35 == 0) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = tmp35 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        tmp32.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _45__L408_1_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 +
        (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _45__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _46__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _46__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L408_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_2_1_1_1,
        &tmp32);
      _L204_1_1_1_1_1_2_1_1_1.startAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = _45__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= tmp39 - 1) & (tmp39 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[tmp39 - 1],
          &_L204_1_1_1_1_1_2_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp29);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp22);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG368_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp23.pig_nom_0 = tmp22.pig_nom_0;
  _L407_1_1_1_1_1_2_1_1_1 = BG368_header_B0_Balises426.n_pig -
    BG368_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (BG368_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG368_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      tmp26.valid = BGxxx_P255_Packets426.valid;
      tmp26.startAddress = 0;
      tmp26.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        tmp26.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp26.nid_packet = ERROR_nid_packet_TM;
      }
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        noname_1_1_1_1_1_2_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        _L3_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L3_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_2_1_1_2_1_1_1 = _L3_1_1_1_1_1_1_1_1_1 + (tmp26.endAddress -
          tmp26.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L3_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L3_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L3_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L3_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L5_3_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_1_1_1_1,
        &tmp26);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L3_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp22.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp22);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp28);
  }
  tmp21.pig_nom_0 = BG368_header_B0_Balises426.n_pig;
  tmp37 = BG368_header_B1_Balises426.n_pig - tmp21.pig_nom_0;
  if (0 <= tmp37) {
    tmp36 = (kcg_real) tmp37;
  }
  else {
    tmp36 = (kcg_real) - tmp37;
  }
  if (tmp21.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp21.TrainPos) & (tmp40 - tmp41 <=
      tmp21.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG368_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp39 = _L7_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp21.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L7_1_1_1_1_1_1_1_1_1 =
            tmp21.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L7_1_1_1_1_1_1_1_1_1 = tmp39;
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L7_1_1_1_1_1_1_1_1_1 == 0) {
        _L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        tmp38 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp38 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = tmp38;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp21.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp21.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = _L407_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= tmp35 - 1) & (tmp35 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[tmp35 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp21.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp29);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp21);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG367_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp22.pig_nom_0 = tmp21.pig_nom_0;
  _43__L3_1_1_1_1_1_1_1_1_1 = BG367_header_B1_Balises426.n_pig -
    BG367_header_B1_Balises426.n_pig;
  if (0 <= _43__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _43__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _43__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG367_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG367_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _44__L7_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L408_1_1_1_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_1_1_1_2_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        }
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L408_1_1_1_1_1_2_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_1_1_1_2_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_1_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _L407_1_1_1_1_1_2_1_1_1;
      if ((0 <= _46__L407_1_1_1_1_1_1_1_1_1 - 1) &
        (_46__L407_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_46__L407_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp21.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp21);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp28);
  }
  tmp20.pig_nom_0 = BG367_header_B1_Balises426.n_pig;
  noname_1_1_1_1_1_2_1_1_1 = BG367_header_B0_Balises426.n_pig - tmp20.pig_nom_0;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (tmp20.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp20.TrainPos) &
    (tmp40 - tmp41 <= tmp20.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG367_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp20.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp20.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L7_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        tmp38 = 0;
      }
      else {
        tmp38 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      tmp37 = tmp38 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = tmp37 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp38)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp38) & (_L5_1_1_1_1_1_1_1_1 -
              tmp38 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp38];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp20.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp39;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp20.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp38;
      tmp32.endAddress = tmp37;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp20.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp29);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp20);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG366_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp21.pig_nom_0 = tmp20.pig_nom_0;
  tmp35 = BG366_header_B1_Balises426.n_pig - BG366_header_B1_Balises426.n_pig;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (BG366_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG366_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      noname_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          noname_1_1_1_1_1_1_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          noname_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1;
        }
        _L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (noname_1_1_1_1_1_1_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = noname_1_1_1_1_1_1_1_1_1 + 1;
      }
      _43__L3_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _43__L3_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _43__L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L407_1_1_1_1_1_1_1_1_1 - 1) & (_L407_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L407_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp20.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp20);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp28);
  }
  tmp19.pig_nom_0 = BG366_header_B1_Balises426.n_pig;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG366_header_B0_Balises426.n_pig -
    tmp19.pig_nom_0;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp19.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp19.TrainPos) &
    (tmp40 - tmp41 <= tmp19.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG366_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L407_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _46__L407_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp19.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L407_1_1_1_1_1_2_1_1_1 =
            tmp19.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_1_1_1_2_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        }
        _L408_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_1_1_1_2_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _L407_1_1_1_1_1_2_1_1_1 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      noname_1_1_1_1_1_2_1_1_1 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          noname_1_1_1_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp19.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp19.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = noname_1_1_1_1_1_2_1_1_1;
      if ((0 <= _L408_1_1_1_1_1_2_1_1_1 - 1) & (_L408_1_1_1_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L408_1_1_1_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp19.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp29);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp19);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG365_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp20.pig_nom_0 = tmp19.pig_nom_0;
  tmp39 = BG365_header_B1_Balises426.n_pig - BG365_header_B1_Balises426.n_pig;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (BG365_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG365_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L7_1_1_2_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L7_1_1_2_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L7_1_1_2_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      tmp35 = _L5_3_1_1_1 + (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = tmp35 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = tmp35;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp19.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp19);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp28);
  }
  tmp18.pig_nom_0 = BG365_header_B1_Balises426.n_pig;
  _L7_1_1_1_1_1_1_1_1_1 = BG365_header_B0_Balises426.n_pig - tmp18.pig_nom_0;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp18.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp18.TrainPos) & (tmp40 - tmp41 <=
      tmp18.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG365_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _43__L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp18.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _43__L3_1_1_1_1_1_1_1_1_1 =
            tmp18.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _43__L3_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1;
        }
        noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_43__L3_1_1_1_1_1_1_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _43__L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _44__L7_1_1_1_1_1_1_1_1_1 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _44__L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp18.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp18.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = _44__L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= noname_1_1_1_1_1_1_1_1_1 - 1) & (noname_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[noname_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp18.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp29);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp18);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG364_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp19.pig_nom_0 = tmp18.pig_nom_0;
  _45__L408_1_1_1_1_1_1_1_1_1 = BG364_header_B0_Balises426.n_pig -
    BG364_header_B0_Balises426.n_pig;
  if (0 <= _45__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _45__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _45__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG364_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG364_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp29);
    if (BGxxx_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L408_1_1_1_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L408_1_1_1_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      noname_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _46__L407_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          noname_1_1_1_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          noname_1_1_1_1_1_2_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        }
        _L407_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (noname_1_1_1_1_1_2_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = noname_1_1_1_1_1_2_1_1_1 + 1;
      }
      tmp39 = _L5_3_1_1_1 + (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = tmp39 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp35;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = tmp39;
      if ((0 <= _L407_1_1_1_1_1_2_1_1_1 - 1) & (_L407_1_1_1_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L407_1_1_1_1_1_2_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp18.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp28);
  }
  tmp17.pig_nom_0 = BG364_header_B0_Balises426.n_pig;
  _L3_1_1_1_1_1_1_1_1_1 = BG364_header_B1_Balises426.n_pig - tmp17.pig_nom_0;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp17.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp17.TrainPos) &
    (tmp40 - tmp41 <= tmp17.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG364_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGxxx_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGxxx_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGxxx_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp17.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp17.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L7_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      if (BGxxx_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L7_1_1_1_1_1_1_1_1_1 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = _L7_1_1_1_1_1_1_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp17.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp17.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = _L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp17.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp29);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp17);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG363_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp18.pig_nom_0 = tmp17.pig_nom_0;
  _L408_1_1_1_1_1_1_1_1_1 = BG363_header_B0_Balises426.n_pig -
    BG363_header_B0_Balises426.n_pig;
  if (0 <= _L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG363_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG363_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        noname_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        noname_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = noname_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _44__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _44__L7_1_1_1_1_1_1_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _44__L7_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1;
        }
        _43__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_44__L7_1_1_1_1_1_1_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      _45__L408_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _45__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp39;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _45__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _43__L3_1_1_1_1_1_1_1_1_1 - 1) & (_43__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_43__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp17.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp17);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp28);
  }
  tmp16.pig_nom_0 = BG363_header_B0_Balises426.n_pig;
  tmp35 = BG363_header_B1_Balises426.n_pig - tmp16.pig_nom_0;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (tmp16.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp16.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp16.TrainPos) &
    (tmp40 - tmp41 <= tmp16.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp16);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG363_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      noname_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L408_1_1_1_1_1_2_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp16.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          noname_1_1_1_1_1_2_1_1_1 =
            tmp16.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          noname_1_1_1_1_1_2_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        }
        _L407_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (noname_1_1_1_1_1_2_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = noname_1_1_1_1_1_2_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = _46__L407_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L3_1_1_1_1_1_1_1_1_1 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L3_1_1_1_1_1_1_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp16.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp16.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = _L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L407_1_1_1_1_1_2_1_1_1 - 1) & (_L407_1_1_1_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L407_1_1_1_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp16.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp29);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp16);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG362_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp17.pig_nom_0 = tmp16.pig_nom_0;
  _L7_1_1_1_1_1_1_1_1_1 = BG362_header_B1_Balises426.n_pig -
    BG362_header_B1_Balises426.n_pig;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG362_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG362_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L7_1_1_2_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L7_1_1_2_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L7_1_1_2_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L408_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = _L408_1_1_1_1_1_1_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp39;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp16.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp16);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp28);
  }
  tmp15.pig_nom_0 = BG362_header_B1_Balises426.n_pig;
  _L407_1_1_1_1_1_1_1_1_1 = BG362_header_B0_Balises426.n_pig - tmp15.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp15.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp15.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp15.TrainPos) & (tmp40 - tmp41 <=
      tmp15.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp15);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG362_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _45__L408_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _43__L3_1_1_1_1_1_1_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp15.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _45__L408_1_1_1_1_1_1_1_1_1 =
            tmp15.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _45__L408_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_45__L408_1_1_1_1_1_1_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _45__L408_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        noname_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        noname_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = noname_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      tmp35 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = tmp35 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp15.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp15.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = tmp35;
      if ((0 <= _44__L7_1_1_1_1_1_1_1_1_1 - 1) & (_44__L7_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_44__L7_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp15.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp29);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp15);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG361_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp16.pig_nom_0 = tmp15.pig_nom_0;
  _L3_1_1_1_1_1_1_1_1_1 = BG361_header_B1_Balises426.n_pig -
    BG361_header_B1_Balises426.n_pig;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG361_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    if (BG361_P137_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BG361_P137_Packets426.NID_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[1] = BG361_P137_Packets426.Q_DIR;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[2] = BG361_P137_Packets426.L_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[3] = BG361_P137_Packets426.Q_SRSTOP;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG361_P137_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket137_TM - 1;
      IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG361_P137_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG361_P137_Packets426.NID_PACKET == 137) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 137 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG361_P137_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          BG361_P137_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
            BG361_P137_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_2_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        _L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_2_1_1_2_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 496;
        _L5_1_1_1_1_1_1_1_1++) {
        _49__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_496(
        &_L383_1_1_2_1_1_2_1_1_1[4],
        &_49__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp37 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp37;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L407_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG361_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp32.valid = BGXXX_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L408_1_1_1_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = _L408_1_1_1_1_1_2_1_1_1;
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L5_3_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L5_3_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L5_3_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        }
        _L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L5_3_1_1_1 == 0) {
        _L408_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 + 1;
      }
      tmp39 = _L408_1_1_1_1_1_1_1_1_1 + (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = tmp39 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L408_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L408_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp26, &tmp32);
      tmp26.startAddress = _L408_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = tmp39;
      if ((0 <= _L7_1_1_1_1_1_1_1_1_1 - 1) & (_L7_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L7_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp15.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp15);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp28);
  }
  tmp14.pig_nom_0 = BG361_header_B1_Balises426.n_pig;
  tmp38 = BG361_header_B0_Balises426.n_pig - tmp14.pig_nom_0;
  if (0 <= tmp38) {
    tmp36 = (kcg_real) tmp38;
  }
  else {
    tmp36 = (kcg_real) - tmp38;
  }
  if (tmp14.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp14.TrainPos) & (tmp40 - tmp41 <=
      tmp14.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG361_P137_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG361_P137_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG361_P137_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG361_P137_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG361_P137_Packets426.Q_SRSTOP;
      tmp26.valid = BG361_P137_Packets426.valid;
      tmp26.startAddress = 0;
      tmp26.endAddress = DIM_MaxElementsPacket137_TM - 1;
      IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG361_P137_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG361_P137_Packets426.NID_PACKET == 137) {
        tmp26.nid_packet = 137 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG361_P137_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp26.nid_packet = ERROR_nid_packet_TM;
      }
      if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG361_P137_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG361_P137_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L408_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _43__L3_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1;
        tmp34 = tmp14.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _L408_1_1_1_1_1_1_1_1_1 =
            tmp14.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        }
        _L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_L408_1_1_1_1_1_1_1_1_1 == 0) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1 + 1;
      }
      _L407_1_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 +
        (tmp26.endAddress - tmp26.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 496;
        _L5_1_1_1_1_1_1_1_1++) {
        _49__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_496(
        &_48__L383_1_1_1_1_1_1_1_1_1[4],
        &_49__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _L407_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _46__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _46__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp14.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L408_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp14.packets.PacketHeaders);
      tmp26.startAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _L407_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L7_1_1_1_1_1_1_1_1_1 - 1) & (_L7_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L7_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp14.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG361_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp32.valid = BGXXX_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        noname_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L3_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L3_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        }
        _45__L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L3_1_1_1_1_1_1_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp32.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L5_3_1_1_1 = tmp37 + (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L5_3_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp39;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_2_1_1_1,
        &tmp32);
      _L204_1_1_1_1_1_2_1_1_1.startAddress = tmp37;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = _L5_3_1_1_1;
      if ((0 <= _45__L408_1_1_1_1_1_1_1_1_1 - 1) &
        (_45__L408_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_45__L408_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_2_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp29);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp14);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG360_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp15.pig_nom_0 = tmp14.pig_nom_0;
  _L407_1_1_1_1_1_2_1_1_1 = BG360_header_B0_Balises426.n_pig -
    BG360_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (BG360_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG360_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp26.valid = BGXXX_P255_Packets426.valid;
      tmp26.startAddress = 0;
      tmp26.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp26.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp26.nid_packet = ERROR_nid_packet_TM;
      }
      tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        noname_1_1_1_1_1_2_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        tmp38 = 0;
      }
      else {
        tmp38 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_2_1_1_2_1_1_1 = tmp38 + (tmp26.endAddress - tmp26.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp38)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp38) & (_L5_1_1_1_1_1_1_1_1 -
              tmp38 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp38];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L5_3_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_1_1_1_1,
        &tmp26);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = tmp38;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp14.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp14);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp28);
  }
  tmp13.pig_nom_0 = BG360_header_B0_Balises426.n_pig;
  tmp37 = BG360_header_B1_Balises426.n_pig - tmp13.pig_nom_0;
  if (0 <= tmp37) {
    tmp36 = (kcg_real) tmp37;
  }
  else {
    tmp36 = (kcg_real) - tmp37;
  }
  if (tmp13.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp13.TrainPos) & (tmp40 - tmp41 <=
      tmp13.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG360_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp35 = _L7_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp13.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L7_1_1_1_1_1_1_1_1_1 =
            tmp13.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L7_1_1_1_1_1_1_1_1_1 = tmp35;
        }
        _L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L7_1_1_1_1_1_1_1_1_1 == 0) {
        _L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp39 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp39 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = tmp39;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp13.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp13.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = _L407_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L3_1_1_1_1_1_1_1_1_1 - 1) & (_L3_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp13.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp29);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp13);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG359_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp14.pig_nom_0 = tmp13.pig_nom_0;
  _43__L3_1_1_1_1_1_1_1_1_1 = BG359_header_B0_Balises426.n_pig -
    BG359_header_B0_Balises426.n_pig;
  if (0 <= _43__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _43__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _43__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG359_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG359_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L408_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _44__L7_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L408_1_1_1_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_1_1_1_2_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        }
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L408_1_1_1_1_1_2_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_1_1_1_2_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_1_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _L407_1_1_1_1_1_2_1_1_1;
      if ((0 <= _46__L407_1_1_1_1_1_1_1_1_1 - 1) &
        (_46__L407_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_46__L407_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp13.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp13);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp28);
  }
  tmp12.pig_nom_0 = BG359_header_B0_Balises426.n_pig;
  noname_1_1_1_1_1_2_1_1_1 = BG359_header_B1_Balises426.n_pig - tmp12.pig_nom_0;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (tmp12.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp12.TrainPos) &
    (tmp40 - tmp41 <= tmp12.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG359_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp12.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp12.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L7_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        tmp39 = 0;
      }
      else {
        tmp39 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      tmp37 = tmp39 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = tmp37 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp39)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp39) & (_L5_1_1_1_1_1_1_1_1 -
              tmp39 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp39];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp12.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp35;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp12.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp39;
      tmp32.endAddress = tmp37;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp12.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp29);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp12);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG358_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp13.pig_nom_0 = tmp12.pig_nom_0;
  _L3_1_1_1_1_1_1_1_1_1 = BG358_header_B1_Balises426.n_pig -
    BG358_header_B1_Balises426.n_pig;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG358_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG358_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L408_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L408_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      noname_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          noname_1_1_1_1_1_1_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          noname_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1;
        }
        _L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (noname_1_1_1_1_1_1_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = noname_1_1_1_1_1_1_1_1_1 + 1;
      }
      _43__L3_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _43__L3_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _43__L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L407_1_1_1_1_1_1_1_1_1 - 1) & (_L407_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L407_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp12.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp12);
    tmp11.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp28);
  }
  tmp11.pig_nom_0 = BG358_header_B1_Balises426.n_pig;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG358_header_B0_Balises426.n_pig -
    tmp11.pig_nom_0;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp11.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp11.TrainPos) &
    (tmp40 - tmp41 <= tmp11.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG358_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L407_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _46__L407_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp11.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L407_1_1_1_1_1_2_1_1_1 =
            tmp11.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_1_1_1_2_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        }
        _L408_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_1_1_1_2_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _L407_1_1_1_1_1_2_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      noname_1_1_1_1_1_2_1_1_1 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          noname_1_1_1_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp11.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp39;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp11.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = noname_1_1_1_1_1_2_1_1_1;
      if ((0 <= _L408_1_1_1_1_1_2_1_1_1 - 1) & (_L408_1_1_1_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L408_1_1_1_1_1_2_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp11.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp29);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp11);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG357_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp12.pig_nom_0 = tmp11.pig_nom_0;
  tmp35 = BG357_header_B1_Balises426.n_pig - BG357_header_B1_Balises426.n_pig;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (BG357_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG357_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L7_1_1_2_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L7_1_1_2_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L7_1_1_2_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_2_1_1_2_1_1_1 = _L407_1_1_2_1_1_2_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_2_1_1_2_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        }
        _L408_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_2_1_1_2_1_1_1 == 0) {
        _L5_3_1_1_1 = 0;
      }
      else {
        _L5_3_1_1_1 = _L407_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L3_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_2_1_1_2_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = _L3_1_1_1_1_1_1_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L5_3_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1) & (_L5_1_1_1_1_1_1_1_1 -
              _L5_3_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 - _L5_3_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _L5_3_1_1_1;
      tmp26.endAddress = _L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L408_1_1_2_1_1_2_1_1_1 - 1) & (_L408_1_1_2_1_1_2_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_2_1_1_2_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp11.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp11);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp28);
  }
  tmp10.pig_nom_0 = BG357_header_B1_Balises426.n_pig;
  _L7_1_1_1_1_1_1_1_1_1 = BG357_header_B0_Balises426.n_pig - tmp10.pig_nom_0;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp10.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp10.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp10.TrainPos) & (tmp40 - tmp41 <=
      tmp10.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp10);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG357_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _43__L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        tmp31 = tmp10.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _43__L3_1_1_1_1_1_1_1_1_1 =
            tmp10.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _43__L3_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1;
        }
        noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_43__L3_1_1_1_1_1_1_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _43__L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L408_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.nid_packet = _L408_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _44__L7_1_1_1_1_1_1_1_1_1 = tmp37 + (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _44__L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp10.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp39;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp10.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp32,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp32.startAddress = tmp37;
      tmp32.endAddress = _44__L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= noname_1_1_1_1_1_1_1_1_1 - 1) & (noname_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[noname_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp10.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp29);
    tmp11.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp10);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG356_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp11.pig_nom_0 = tmp10.pig_nom_0;
  _45__L408_1_1_1_1_1_1_1_1_1 = BG356_header_B1_Balises426.n_pig -
    BG356_header_B1_Balises426.n_pig;
  if (0 <= _45__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _45__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _45__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG356_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    if (BG356_P041_Packets426.valid) {
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[0] =
        BG356_P041_Packets426.NID_PACKET;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[1] =
        BG356_P041_Packets426.Q_DIR;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[2] =
        BG356_P041_Packets426.L_PACKET;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[3] =
        BG356_P041_Packets426.Q_SCALE;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[4] =
        BG356_P041_Packets426.D_LEVELTR;
      (&tmp9[0])[0].M_LEVELTR = BG356_P041_Packets426.M_LEVELTR;
      (&tmp9[0])[0].NID_NTC = BG356_P041_Packets426.NID_NTC;
      (&tmp9[0])[0].L_ACKLEVELTR = BG356_P041_Packets426.L_ACKLEVELTR;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG356_P041_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = 5 + 1 + 3 +
        BG356_P041_Packets426.N_ITER * 3 - 1;
      IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG356_P041_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG356_P041_Packets426.NID_PACKET == 41) {
        noname_1_1_1_1_1_2_1_1_1 = 41 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG356_P041_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        noname_1_1_1_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = noname_1_1_1_1_1_2_1_1_1;
      if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          BG356_P041_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
            BG356_P041_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_2_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        _L7_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L7_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_2_1_1_2_1_1_1 = _L7_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      _L376_1_1_1_1_1_1_1_1_1[0] = BG356_P041_Packets426.N_ITER;
      kcg_copy_P041_trackide_sectionlist_T_TM(
        &tmp9[1],
        (array__463512 *) &BG356_P041_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp9[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp9[_L5_1_1_1_1_1_1_1_1].NID_NTC;
        _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][2] =
          tmp9[_L5_1_1_1_1_1_1_1_1].L_ACKLEVELTR;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 395;
        _L5_1_1_1_1_1_1_1_1++) {
        _86__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_L383_1_1_2_1_1_2_1_1_1[5],
        &_L376_1_1_1_1_1_1_1_1_1);
      kcg_copy_P041_sections_array_flat_T_TM(
        &tmp8,
        (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 3) & (_L5_1_1_1_1_1_1_1_1 / 3 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 3) & (_L5_1_1_1_1_1_1_1_1 % 3 < 3))) {
          tmp8[_L5_1_1_1_1_1_1_1_1] =
            _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            3][_L5_1_1_1_1_1_1_1_1 % 3];
        }
        else {
          tmp8[_L5_1_1_1_1_1_1_1_1] = 0;
        }
      }
      kcg_copy_P041_sections_array_flat_T_TM(
        &_L383_1_1_2_1_1_2_1_1_1[6],
        &tmp8);
      kcg_copy_array_int_395(
        &_L383_1_1_2_1_1_2_1_1_1[105],
        &_86__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L7_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L7_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L7_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L7_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp37 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp37;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L7_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp28.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG356_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp32.valid = BGXXX_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L408_1_1_1_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = _L408_1_1_1_1_1_2_1_1_1;
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L5_3_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _L5_3_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L5_3_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_L5_3_1_1_1 == 0) {
        _L3_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L3_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1 + 1;
      }
      tmp38 = _L3_1_1_1_1_1_1_1_1_1 + (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = tmp38 >=
          _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L3_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L3_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L3_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L3_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp26, &tmp32);
      tmp26.startAddress = _L3_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = tmp38;
      if ((0 <= tmp35 - 1) & (tmp35 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[tmp35 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp10.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp10);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp28);
  }
  tmp7.pig_nom_0 = BG356_header_B1_Balises426.n_pig;
  tmp39 = BG356_header_B0_Balises426.n_pig - tmp7.pig_nom_0;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (tmp7.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp7.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp7.TrainPos) & (tmp40 - tmp41 <=
      tmp7.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG356_P041_Packets426.valid) {
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[0] =
        BG356_P041_Packets426.NID_PACKET;
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[1] =
        BG356_P041_Packets426.Q_DIR;
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[2] =
        BG356_P041_Packets426.L_PACKET;
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[3] =
        BG356_P041_Packets426.Q_SCALE;
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[4] =
        BG356_P041_Packets426.D_LEVELTR;
      (&tmp9[0])[0].M_LEVELTR = BG356_P041_Packets426.M_LEVELTR;
      (&tmp9[0])[0].NID_NTC = BG356_P041_Packets426.NID_NTC;
      (&tmp9[0])[0].L_ACKLEVELTR = BG356_P041_Packets426.L_ACKLEVELTR;
      tmp26.valid = BG356_P041_Packets426.valid;
      tmp26.startAddress = 0;
      tmp26.endAddress = 5 + 1 + 3 + BG356_P041_Packets426.N_ITER * 3 - 1;
      IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG356_P041_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG356_P041_Packets426.NID_PACKET == 41) {
        _43__L3_1_1_1_1_1_1_1_1_1 = 41 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG356_P041_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _43__L3_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp26.nid_packet = _43__L3_1_1_1_1_1_1_1_1_1;
      if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG356_P041_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG356_P041_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        noname_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        tmp34 = tmp7.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _L3_1_1_1_1_1_1_1_1_1 =
            tmp7.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L3_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        }
        tmp35 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_L3_1_1_1_1_1_1_1_1_1 == 0) {
        _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _46__L407_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      _L7_1_1_1_1_1_1_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 + (tmp26.endAddress -
          tmp26.startAddress);
      _L376_1_1_1_1_1_1_1_1_1[0] = BG356_P041_Packets426.N_ITER;
      kcg_copy_P041_trackide_sectionlist_T_TM(
        &tmp9[1],
        (array__463512 *) &BG356_P041_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp9[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp9[_L5_1_1_1_1_1_1_1_1].NID_NTC;
        _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][2] =
          tmp9[_L5_1_1_1_1_1_1_1_1].L_ACKLEVELTR;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 395;
        _L5_1_1_1_1_1_1_1_1++) {
        _86__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_48__L383_1_1_1_1_1_1_1_1_1[5],
        &_L376_1_1_1_1_1_1_1_1_1);
      kcg_copy_P041_sections_array_flat_T_TM(
        &tmp8,
        (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 3) & (_L5_1_1_1_1_1_1_1_1 / 3 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 3) & (_L5_1_1_1_1_1_1_1_1 % 3 < 3))) {
          tmp8[_L5_1_1_1_1_1_1_1_1] =
            _87__L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            3][_L5_1_1_1_1_1_1_1_1 % 3];
        }
        else {
          tmp8[_L5_1_1_1_1_1_1_1_1] = 0;
        }
      }
      kcg_copy_P041_sections_array_flat_T_TM(
        &_48__L383_1_1_1_1_1_1_1_1_1[6],
        &tmp8);
      kcg_copy_array_int_395(
        &_48__L383_1_1_1_1_1_1_1_1_1[105],
        &_86__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _46__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _46__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _46__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp7.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L408_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp7.packets.PacketHeaders);
      tmp26.startAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= tmp35 - 1) & (tmp35 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[tmp35 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp7.packets);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp7);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG356_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp32.valid = BGXXX_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _45__L408_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L407_1_1_1_1_1_1_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _45__L408_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _45__L408_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1;
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_45__L408_1_1_1_1_1_1_1_1_1 == 0) {
        tmp37 = 0;
      }
      else {
        tmp37 = _45__L408_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L408_1_1_1_1_1_1_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = _L408_1_1_1_1_1_1_1_1_1;
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L5_3_1_1_1 = tmp37 + (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L5_3_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= tmp37)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - tmp37) & (_L5_1_1_1_1_1_1_1_1 -
              tmp37 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 - tmp37];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        tmp38 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = tmp38;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_2_1_1_1,
        &tmp32);
      _L204_1_1_1_1_1_2_1_1_1.startAddress = tmp37;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = _L5_3_1_1_1;
      if ((0 <= _44__L7_1_1_1_1_1_1_1_1_1 - 1) & (_44__L7_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_44__L7_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_2_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp29);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp7);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG355_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp10.pig_nom_0 = tmp7.pig_nom_0;
  _L407_1_1_1_1_1_2_1_1_1 = BG355_header_B0_Balises426.n_pig -
    BG355_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (BG355_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    if (BG355_P042_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG355_P042_Packets426.NID_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG355_P042_Packets426.Q_DIR;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG355_P042_Packets426.L_PACKET;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG355_P042_Packets426.Q_RBC;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[4] = BG355_P042_Packets426.NID_C;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[5] = BG355_P042_Packets426.NID_RBC;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[6] = BG355_P042_Packets426.NID_RADIO;
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[7] =
        BG355_P042_Packets426.Q_SLEEPSESSION;
      tmp32.valid = BG355_P042_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket042_TM - 1;
      IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG355_P042_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG355_P042_Packets426.NID_PACKET == 42) {
        tmp32.nid_packet = 42 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG355_P042_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG355_P042_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG355_P042_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp39 = _46__L407_1_1_1_1_1_1_1_1_1;
        tmp30 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp30) {
          _46__L407_1_1_1_1_1_1_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _46__L407_1_1_1_1_1_1_1_1_1 = tmp39;
        }
        _45__L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
      if (_46__L407_1_1_1_1_1_1_1_1_1 == 0) {
        _L407_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_2_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 + 1;
      }
      _L408_1_1_1_1_1_2_1_1_1 = _L407_1_1_1_1_1_2_1_1_1 + (tmp32.endAddress -
          tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_48__L383_1_1_1_1_1_1_1_1_1[8],
        &_L209_1_1_1_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L96_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_L96_1_1_1_1_1_1 & (_L5_1_1_1_1_1_1_1_1 >=
            _L407_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_2_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_2_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _85__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_L96_1_1_1_1_1_1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _85__L407_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      tmp32.startAddress = _L407_1_1_1_1_1_2_1_1_1;
      tmp32.endAddress = _L408_1_1_1_1_1_2_1_1_1;
      if ((0 <= _45__L408_1_1_1_1_1_1_1_1_1 - 1) &
        (_45__L408_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_45__L408_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp28.packets);
    }
    if (BG355_P046_Packets426.valid) {
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[0] =
        BG355_P046_Packets426.NID_PACKET;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[1] =
        BG355_P046_Packets426.Q_DIR;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[2] =
        BG355_P046_Packets426.L_PACKET;
      (&tmp6[0])[0].M_LEVELTR = BG355_P046_Packets426.M_LEVELTR;
      (&tmp6[0])[0].NID_NTC = BG355_P046_Packets426.NID_NTC;
      tmp26.valid = BG355_P046_Packets426.valid;
      tmp26.startAddress = 0;
      tmp26.endAddress = 3 + 1 + 2 + BG355_P046_Packets426.N_ITER * 2 - 1;
      tmp31 = BG355_P046_Packets426.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
      if (BG355_P046_Packets426.NID_PACKET == 46) {
        tmp26.nid_packet = 46 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG355_P046_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp26.nid_packet = ERROR_nid_packet_TM;
      }
      if (tmp31) {
        tmp26.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        tmp34 = BG355_P046_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (tmp34) {
          tmp26.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          tmp33 = BG355_P046_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (tmp33) {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp26.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      tmp38 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L408_1_1_2_1_1_2_1_1_1 = tmp38;
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          tmp38 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          tmp38 = _L408_1_1_2_1_1_2_1_1_1;
        }
        tmp37 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
      if (tmp38 == 0) {
        _L3_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L3_1_1_1_1_1_1_1_1_1 = tmp38 + 1;
      }
      tmp35 = _L3_1_1_1_1_1_1_1_1_1 + (tmp26.endAddress - tmp26.startAddress);
      _L376_1_1_1_1_1_1_1_1_1[0] = BG355_P046_Packets426.N_ITER;
      kcg_copy_P046_trackide_sectionlist_T_TM(
        &tmp6[1],
        (array__463546 *) &BG355_P046_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp6[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp6[_L5_1_1_1_1_1_1_1_1].NID_NTC;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 430;
        _L5_1_1_1_1_1_1_1_1++) {
        _84__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_L383_1_1_2_1_1_2_1_1_1[3],
        &_L376_1_1_1_1_1_1_1_1_1);
      kcg_copy_P046_sections_array_flat_T_TM(
        &tmp5,
        (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 2) & (_L5_1_1_1_1_1_1_1_1 / 2 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 2) & (_L5_1_1_1_1_1_1_1_1 % 2 < 2))) {
          _L7_1_1_2_1_1_2_1_1_1 = _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            2][_L5_1_1_1_1_1_1_1_1 % 2];
        }
        else {
          _L7_1_1_2_1_1_2_1_1_1 = 0;
        }
        if ((0 <= _L5_1_1_1_1_1_1_1_1) & (_L5_1_1_1_1_1_1_1_1 < 66)) {
          tmp5[_L5_1_1_1_1_1_1_1_1] = _L7_1_1_2_1_1_2_1_1_1;
        }
      }
      kcg_copy_P046_sections_array_flat_T_TM(
        &_L383_1_1_2_1_1_2_1_1_1[4],
        &tmp5);
      kcg_copy_array_int_430(
        &_L383_1_1_2_1_1_2_1_1_1[70],
        &_84__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = tmp35 >= _L5_1_1_1_1_1_1_1_1;
        if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 & (_L5_1_1_1_1_1_1_1_1 >=
            _L3_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L3_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L3_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L3_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      tmp26.startAddress = _L3_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = tmp35;
      if ((0 <= tmp37 - 1) & (tmp37 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[tmp37 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG355_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        noname_1_1_1_1_1_2_1_1_1 = _L407_1_1_1_1_1_1_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          tmp27.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _L407_1_1_1_1_1_1_1_1_1 =
            tmp27.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        }
        _L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_L407_1_1_1_1_1_1_1_1_1 == 0) {
        _43__L3_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _43__L3_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 + 1;
      }
      noname_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
          noname_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _43__L3_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _43__L3_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _43__L3_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _43__L3_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp27.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp27.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_1_1_1_1,
        &_L204_1_1_1_1_1_2_1_1_1);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _43__L3_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = noname_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L408_1_1_1_1_1_1_1_1_1 - 1) & (_L408_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L408_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3_2_1_1_2_1_1_1, &tmp27);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp7.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp7);
    tmp4.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp28);
  }
  tmp4.pig_nom_0 = BG355_header_B0_Balises426.n_pig;
  _L5_3_1_1_1 = BG355_header_B1_Balises426.n_pig - tmp4.pig_nom_0;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (tmp4.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp4.TrainPos) & (tmp40 - tmp41 <=
      tmp4.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG355_P042_Packets426.valid) {
      (&_L383_1_1_2_1_1_2_1_1_1[0])[0] = BG355_P042_Packets426.NID_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[1] = BG355_P042_Packets426.Q_DIR;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[2] = BG355_P042_Packets426.L_PACKET;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[3] = BG355_P042_Packets426.Q_RBC;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[4] = BG355_P042_Packets426.NID_C;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[5] = BG355_P042_Packets426.NID_RBC;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[6] = BG355_P042_Packets426.NID_RADIO;
      (&_L383_1_1_2_1_1_2_1_1_1[0])[7] = BG355_P042_Packets426.Q_SLEEPSESSION;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG355_P042_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket042_TM - 1;
      IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG355_P042_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG355_P042_Packets426.NID_PACKET == 42) {
        _L408_1_1_1_1_1_1_1_1_1 = 42 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG355_P042_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L408_1_1_1_1_1_1_1_1_1 = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_1_1_1_1.nid_packet = _L408_1_1_1_1_1_1_1_1_1;
      if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          BG355_P042_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
            BG355_P042_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L7_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          tmp4.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            tmp4.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = _L7_1_1_1_1_1_1_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        _85__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _85__L407_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _L407_1_1_2_1_1_2_1_1_1 = _85__L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_L383_1_1_2_1_1_2_1_1_1[8],
        &_L209_1_1_2_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 & (_L5_1_1_1_1_1_1_1_1 >=
            _85__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _85__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _85__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _85__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp4.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L5_3_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &tmp4.packets.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _85__L407_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &tmp4.packets);
    }
    if (BG355_P046_Packets426.valid) {
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[0] =
        BG355_P046_Packets426.NID_PACKET;
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[1] =
        BG355_P046_Packets426.Q_DIR;
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[2] =
        BG355_P046_Packets426.L_PACKET;
      (&tmp6[0])[0].M_LEVELTR = BG355_P046_Packets426.M_LEVELTR;
      (&tmp6[0])[0].NID_NTC = BG355_P046_Packets426.NID_NTC;
      tmp32.valid = BG355_P046_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = 3 + 1 + 2 + BG355_P046_Packets426.N_ITER * 2 - 1;
      noname_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1;
        tmp34 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          noname_1_1_1_1_1_1_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          noname_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        }
        _L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (noname_1_1_1_1_1_1_1_1_1 == 0) {
        _44__L7_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _44__L7_1_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_1_1_1_1 + 1;
      }
      IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG355_P046_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG355_P046_Packets426.NID_PACKET == 46) {
        tmp32.nid_packet = 46 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG355_P046_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG355_P046_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG355_P046_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _43__L3_1_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1 +
        (tmp32.endAddress - tmp32.startAddress);
      _L376_1_1_1_1_1_1_1_1_1[0] = BG355_P046_Packets426.N_ITER;
      kcg_copy_P046_trackide_sectionlist_T_TM(
        &tmp6[1],
        (array__463546 *) &BG355_P046_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp6[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp6[_L5_1_1_1_1_1_1_1_1].NID_NTC;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 430;
        _L5_1_1_1_1_1_1_1_1++) {
        _84__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_L383_1_1_1_1_1_1_1_1_1[3],
        &_L376_1_1_1_1_1_1_1_1_1);
      kcg_copy_P046_sections_array_flat_T_TM(
        &tmp5,
        (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 2) & (_L5_1_1_1_1_1_1_1_1 / 2 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 2) & (_L5_1_1_1_1_1_1_1_1 % 2 < 2))) {
          tmp39 = _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            2][_L5_1_1_1_1_1_1_1_1 % 2];
        }
        else {
          tmp39 = 0;
        }
        if ((0 <= _L5_1_1_1_1_1_1_1_1) & (_L5_1_1_1_1_1_1_1_1 < 66)) {
          tmp5[_L5_1_1_1_1_1_1_1_1] = tmp39;
        }
      }
      kcg_copy_P046_sections_array_flat_T_TM(
        &_L383_1_1_1_1_1_1_1_1_1[4],
        &tmp5);
      kcg_copy_array_int_430(
        &_L383_1_1_1_1_1_1_1_1_1[70],
        &_84__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _43__L3_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _44__L7_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _44__L7_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _44__L7_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _44__L7_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _45__L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      tmp32.startAddress = _44__L7_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _43__L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L407_1_1_1_1_1_1_1_1_1 - 1) & (_L407_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_L407_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG355_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _L408_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp38 = _L408_1_1_1_1_1_2_1_1_1;
        tmp31 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _L408_1_1_1_1_1_2_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_1_1_1_2_1_1_1 = tmp38;
        }
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_L408_1_1_1_1_1_2_1_1_1 == 0) {
        noname_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        noname_1_1_1_1_1_2_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _L407_1_1_1_1_1_2_1_1_1 = noname_1_1_1_1_1_2_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L407_1_1_1_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= noname_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - noname_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - noname_1_1_1_1_1_2_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              noname_1_1_1_1_1_2_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_L204_1_1_1_1_1_2_1_1_1);
      tmp26.startAddress = noname_1_1_1_1_1_2_1_1_1;
      tmp26.endAddress = _L407_1_1_1_1_1_2_1_1_1;
      if ((0 <= _46__L407_1_1_1_1_1_1_1_1_1 - 1) &
        (_46__L407_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_46__L407_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp29);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp4);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG351_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp7.pig_nom_0 = tmp4.pig_nom_0;
  _L5_3_1_1_1 = BG351_header_B0_Balises426.n_pig -
    BG351_header_B0_Balises426.n_pig;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG351_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG351_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      tmp32.valid = BGXXX_P255_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        tmp38 = 255 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp38 = ERROR_nid_packet_TM;
      }
      tmp32.nid_packet = tmp38;
      tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
      tmp35 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp37 = tmp35;
        tmp31 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          tmp35 = tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          tmp35 = tmp37;
        }
        tmp39 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (tmp35 == 0) {
        _L7_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _L7_1_1_1_1_1_1_1_1_1 = tmp35 + 1;
      }
      _L3_1_1_1_1_1_1_1_1_1 = _L7_1_1_1_1_1_1_1_1_1 + (tmp32.endAddress -
          tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _L3_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _L7_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L7_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L7_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L7_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp26, &tmp32);
      tmp26.startAddress = _L7_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _L3_1_1_1_1_1_1_1_1_1;
      if ((0 <= tmp39 - 1) & (tmp39 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[tmp39 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &tmp28.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp4.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp4);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp28);
  }
  tmp3.pig_nom_0 = BG351_header_B0_Balises426.n_pig;
  _L407_1_1_1_1_1_1_1_1_1 = BG351_header_B1_Balises426.n_pig - tmp3.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp3.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp3.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp3.TrainPos) &
    (tmp40 - tmp41 <= tmp3.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp3);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG351_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_48__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _L204_1_1_1_1_1_2_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _45__L408_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _43__L3_1_1_1_1_1_1_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1;
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 =
          tmp3.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          _45__L408_1_1_1_1_1_1_1_1_1 =
            tmp3.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _45__L408_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
      if (_45__L408_1_1_1_1_1_1_1_1_1 == 0) {
        _L408_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        _L408_1_1_1_1_1_2_1_1_1 = _45__L408_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _46__L407_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_48__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _46__L407_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _L408_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L408_1_1_1_1_1_2_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L408_1_1_1_1_1_2_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp3.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L407_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp3.packets.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &_L204_1_1_1_1_1_1_1_1_1,
        &_L204_1_1_1_1_1_2_1_1_1);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L408_1_1_1_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _46__L407_1_1_1_1_1_1_1_1_1;
      if ((0 <= _44__L7_1_1_1_1_1_1_1_1_1 - 1) & (_44__L7_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_44__L7_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &tmp3.packets);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp29.packets,
      &_L7_1_1_1_1_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp29);
    tmp4.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp3);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG354_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp4.pig_nom_0 = tmp3.pig_nom_0;
  noname_1_1_1_1_1_2_1_1_1 = BG354_header_B0_Balises426.n_pig -
    BG354_header_B0_Balises426.n_pig;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (BG354_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    if (BG354_P042_Packets426.valid) {
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG354_P042_Packets426.NID_PACKET;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG354_P042_Packets426.Q_DIR;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG354_P042_Packets426.L_PACKET;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG354_P042_Packets426.Q_RBC;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[4] = BG354_P042_Packets426.NID_C;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[5] = BG354_P042_Packets426.NID_RBC;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[6] = BG354_P042_Packets426.NID_RADIO;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[7] =
        BG354_P042_Packets426.Q_SLEEPSESSION;
      tmp2.valid = BG354_P042_Packets426.valid;
      tmp2.startAddress = 0;
      tmp2.endAddress = DIM_MaxElementsPacket042_TM - 1;
      _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG354_P042_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P042_Packets426.NID_PACKET == 42) {
        tmp2.nid_packet = 42 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P042_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp2.nid_packet = ERROR_nid_packet_TM;
      }
      if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp2.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG354_P042_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp2.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG354_P042_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp2.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp2.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _75__L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_1_1_1_1_1_1_1 = _75__L3_1_1_1_1_1_1_1_1_1;
        else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _75__L3_1_1_1_1_1_1_1_1_1 =
            tmp28.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _75__L3_1_1_1_1_1_1_1_1_1 = _L3_1_1_1_1_1_1_1_1_1;
        }
        _69_noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_75__L3_1_1_1_1_1_1_1_1_1 == 0) {
        _77__L408_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _77__L408_1_1_1_1_1_1_1_1_1 = _75__L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      _76__L7_1_1_1_1_1_1_1_1_1 = _77__L408_1_1_1_1_1_1_1_1_1 +
        (tmp2.endAddress - tmp2.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_80__L383_1_1_1_1_1_1_1_1_1[8],
        &_L209_1_1_1_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp34 = _76__L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp34 & (_L5_1_1_1_1_1_1_1_1 >= _77__L408_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _77__L408_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _77__L408_1_1_1_1_1_1_1_1_1 < 500)) {
            _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _80__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _77__L408_1_1_1_1_1_1_1_1_1];
          }
          else {
            _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp28.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _78__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _78__L407_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_74__L7_1_1_1_1_1_1_1.PacketData,
        &_79__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_74__L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp28.packets.PacketHeaders);
      tmp2.startAddress = _77__L408_1_1_1_1_1_1_1_1_1;
      tmp2.endAddress = _76__L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= _69_noname_1_1_1_1_1_1_1_1_1 - 1) &
        (_69_noname_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_74__L7_1_1_1_1_1_1_1.PacketHeaders[_69_noname_1_1_1_1_1_1_1_1_1 -
          1],
          &tmp2);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_74__L7_1_1_1_1_1_1_1,
        &tmp28.packets);
    }
    if (BG354_P046_N_Packets426.valid) {
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[0] =
        BG354_P046_N_Packets426.NID_PACKET;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[1] =
        BG354_P046_N_Packets426.Q_DIR;
      (&(&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0])[2] =
        BG354_P046_N_Packets426.L_PACKET;
      (&tmp1[0])[0].M_LEVELTR = BG354_P046_N_Packets426.M_LEVELTR;
      (&tmp1[0])[0].NID_NTC = BG354_P046_N_Packets426.NID_NTC;
      _L204_1_1_1_1_1_2_1_1_1.valid = BG354_P046_N_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = 3 + 1 + 2 +
        BG354_P046_N_Packets426.N_ITER * 2 - 1;
      _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
        BG354_P046_N_Packets426.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P046_N_Packets426.NID_PACKET == 46) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 46 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P046_N_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
        _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG354_P046_N_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG354_P046_N_Packets426.Q_DIR ==
            INT_Q_DIR_both_TM_conversions;
          if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
            _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L407_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp39 = _L407_1_1_1_1_1_1_1_1_1;
        tmp33 =
          _74__L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp33) {
          _L407_1_1_1_1_1_1_1_1_1 =
            _74__L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L407_1_1_1_1_1_1_1_1_1 = tmp39;
        }
        _L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
      if (_L407_1_1_1_1_1_1_1_1_1 == 0) {
        _43__L3_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _43__L3_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_1_1_1_1 + 1;
      }
      noname_1_1_1_1_1_1_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      _L376_1_1_1_1_1_1_1_1_1[0] = BG354_P046_N_Packets426.N_ITER;
      kcg_copy_P046_trackide_sectionlist_T_TM(
        &tmp1[1],
        (array__463546 *) &BG354_P046_N_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp1[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp1[_L5_1_1_1_1_1_1_1_1].NID_NTC;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 430;
        _L5_1_1_1_1_1_1_1_1++) {
        _84__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_L383_1_1_2_1_1_2_1_1_1[3],
        &_L376_1_1_1_1_1_1_1_1_1);
      kcg_copy_P046_sections_array_flat_T_TM(
        &tmp,
        (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 2) & (_L5_1_1_1_1_1_1_1_1 / 2 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 2) & (_L5_1_1_1_1_1_1_1_1 % 2 < 2))) {
          tmp38 = _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            2][_L5_1_1_1_1_1_1_1_1 % 2];
        }
        else {
          tmp38 = 0;
        }
        if ((0 <= _L5_1_1_1_1_1_1_1_1) & (_L5_1_1_1_1_1_1_1_1 < 66)) {
          tmp[_L5_1_1_1_1_1_1_1_1] = tmp38;
        }
      }
      kcg_copy_P046_sections_array_flat_T_TM(&_L383_1_1_2_1_1_2_1_1_1[4], &tmp);
      kcg_copy_array_int_430(
        &_L383_1_1_2_1_1_2_1_1_1[70],
        &_84__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp31 = noname_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp31 & (_L5_1_1_1_1_1_1_1_1 >= _43__L3_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _43__L3_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _43__L3_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _43__L3_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _74__L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _44__L7_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_74__L7_1_1_1_1_1_1_1.PacketHeaders);
      _L204_1_1_1_1_1_2_1_1_1.startAddress = _43__L3_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = noname_1_1_1_1_1_1_1_1_1;
      if ((0 <= _L408_1_1_1_1_1_1_1_1_1 - 1) & (_L408_1_1_1_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_L408_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_2_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &tmp27,
        &_74__L7_1_1_1_1_1_1_1);
    }
    if (BG354_P046_R_Packets426.valid) {
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[0] =
        BG354_P046_R_Packets426.NID_PACKET;
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[1] =
        BG354_P046_R_Packets426.Q_DIR;
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[2] =
        BG354_P046_R_Packets426.L_PACKET;
      (&tmp6[0])[0].M_LEVELTR = BG354_P046_R_Packets426.M_LEVELTR;
      (&tmp6[0])[0].NID_NTC = BG354_P046_R_Packets426.NID_NTC;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG354_P046_R_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = 3 + 1 + 2 +
        BG354_P046_R_Packets426.N_ITER * 2 - 1;
      _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
        BG354_P046_R_Packets426.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P046_R_Packets426.NID_PACKET == 46) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 46 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P046_R_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 =
          BG354_P046_R_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 =
            BG354_P046_R_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _46__L407_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L5_3_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1;
        tmp30 = tmp27.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp30) {
          _46__L407_1_1_1_1_1_1_1_1_1 =
            tmp27.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _46__L407_1_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        }
        _45__L408_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
      if (_46__L407_1_1_1_1_1_1_1_1_1 == 0) {
        _L407_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        _L407_1_1_1_1_1_2_1_1_1 = _46__L407_1_1_1_1_1_1_1_1_1 + 1;
      }
      _L408_1_1_1_1_1_2_1_1_1 = _L407_1_1_1_1_1_2_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      _L376_1_1_2_1_1_1_1_1_1[0] = BG354_P046_R_Packets426.N_ITER;
      kcg_copy_P046_trackide_sectionlist_T_TM(
        &tmp6[1],
        (array__463546 *) &BG354_P046_R_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _L74_1_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp6[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _L74_1_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp6[_L5_1_1_1_1_1_1_1_1].NID_NTC;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 430;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_L383_1_1_1_1_1_1_1_1_1[3],
        &_L376_1_1_2_1_1_1_1_1_1);
      kcg_copy_P046_sections_array_flat_T_TM(
        &tmp5,
        (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 2) & (_L5_1_1_1_1_1_1_1_1 / 2 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 2) & (_L5_1_1_1_1_1_1_1_1 % 2 < 2))) {
          _85__L407_1_1_1_1_1_1_1_1_1 =
            _L74_1_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            2][_L5_1_1_1_1_1_1_1_1 % 2];
        }
        else {
          _85__L407_1_1_1_1_1_1_1_1_1 = 0;
        }
        if ((0 <= _L5_1_1_1_1_1_1_1_1) & (_L5_1_1_1_1_1_1_1_1 < 66)) {
          tmp5[_L5_1_1_1_1_1_1_1_1] = _85__L407_1_1_1_1_1_1_1_1_1;
        }
      }
      kcg_copy_P046_sections_array_flat_T_TM(
        &_L383_1_1_1_1_1_1_1_1_1[4],
        &tmp5);
      kcg_copy_array_int_430(
        &_L383_1_1_1_1_1_1_1_1_1[70],
        &_L209_1_1_2_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L96_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_L96_1_1_1_1_1_1 & (_L5_1_1_1_1_1_1_1_1 >=
            _L407_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _L407_1_1_1_1_1_2_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _L407_1_1_1_1_1_2_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            tmp27.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        noname_1_1_1_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_L96_1_1_1_1_1_1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = noname_1_1_1_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &tmp27.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _L407_1_1_1_1_1_2_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L408_1_1_1_1_1_2_1_1_1;
      if ((0 <= _45__L408_1_1_1_1_1_1_1_1_1 - 1) &
        (_45__L408_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_45__L408_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7_1_1_1_1_1_1_1, &tmp27);
    }
    if (BG354_P003_Packets426.valid) {
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0] =
        BG354_P003_Packets426.NID_PACKET;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[1] = BG354_P003_Packets426.Q_DIR;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[2] =
        BG354_P003_Packets426.L_PACKET;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[3] =
        BG354_P003_Packets426.Q_SCALE;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[4] =
        BG354_P003_Packets426.D_VALIDNV;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[5] = BG354_P003_Packets426.N_ITER;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[6] =
        BG354_P003_Packets426.V_NVSHUNT;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[7] =
        BG354_P003_Packets426.V_NVSTFF;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[8] =
        BG354_P003_Packets426.V_NVONSIGHT;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[9] =
        BG354_P003_Packets426.V_NVUNFIT;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[10] =
        BG354_P003_Packets426.V_NVREL;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[11] =
        BG354_P003_Packets426.D_NVROLL;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[12] =
        BG354_P003_Packets426.Q_NVSRBKTRG;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[13] =
        BG354_P003_Packets426.Q_NVEMRRLS;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[14] =
        BG354_P003_Packets426.V_NVALLOWOVTRP;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[15] =
        BG354_P003_Packets426.V_NVSUPOVTRP;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[16] =
        BG354_P003_Packets426.D_NVOVTRP;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[17] =
        BG354_P003_Packets426.T_NVOVTRP;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[18] =
        BG354_P003_Packets426.D_NVPOTRP;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[19] =
        BG354_P003_Packets426.M_NVCONTACT;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[20] =
        BG354_P003_Packets426.T_NVCONTACT;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[21] =
        BG354_P003_Packets426.M_NVDERUN;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[22] =
        BG354_P003_Packets426.D_NVSTFF;
      (&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[23] =
        BG354_P003_Packets426.Q_NVDRIVER_ADHES;
      tmp32.valid = BG354_P003_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = 6 + 17 + BG354_P003_Packets426.N_ITER * 1 - 1;
      _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG354_P003_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P003_Packets426.NID_PACKET == 3) {
        tmp32.nid_packet = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P003_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG354_P003_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG354_P003_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _55__L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L408_1_1_2_1_1_2_1_1_1 = _55__L3_1_1_1_1_1_1_1_1_1;
        _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          _55__L3_1_1_1_1_1_1_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _55__L3_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        }
        noname_1_1_2_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_55__L3_1_1_1_1_1_1_1_1_1 == 0) {
        _57__L408_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _57__L408_1_1_1_1_1_1_1_1_1 = _55__L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      _56__L7_1_1_1_1_1_1_1_1_1 = _57__L408_1_1_1_1_1_1_1_1_1 +
        (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 444;
        _L5_1_1_1_1_1_1_1_1++) {
        _60__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
        &_48__L383_1_1_1_1_1_1_1_1_1[24],
        (array_int_32 *) &BG354_P003_Packets426.SECTIONS);
      kcg_copy_array_int_444(
        &_48__L383_1_1_1_1_1_1_1_1_1[56],
        &_60__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = _56__L7_1_1_1_1_1_1_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 & (_L5_1_1_1_1_1_1_1_1 >=
            _57__L408_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _57__L408_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _57__L408_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _57__L408_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _58__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _58__L407_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_1_1_1_1_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_1_1_1_1_1_1_1.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      tmp32.startAddress = _57__L408_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _56__L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= noname_1_1_2_1_1_1_1_1_1 - 1) & (noname_1_1_2_1_1_1_1_1_1 - 1 <
          30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_1_1_1_1_1_1_1.PacketHeaders[noname_1_1_2_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_1_1_1_1_1_1_1,
        &_L7_1_1_1_1_1_1_1);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG354_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp29);
    if (BGXXX_P255_Packets426.valid) {
      (&_70__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _71__L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _71__L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _71__L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _L7_1_1_2_1_1_2_1_1_1 = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L7_1_1_2_1_1_2_1_1_1 = ERROR_nid_packet_TM;
      }
      _71__L204_1_1_1_1_1_1_1_1_1.nid_packet = _L7_1_1_2_1_1_2_1_1_1;
      _71__L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _64__L3_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L3_1_1_2_1_1_2_1_1_1 = _64__L3_1_1_1_1_1_1_1_1_1;
        IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 =
          _L3_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          _64__L3_1_1_1_1_1_1_1_1_1 =
            _L3_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _64__L3_1_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        }
        _59_noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
          break;
        }
      }
      if (_64__L3_1_1_1_1_1_1_1_1_1 == 0) {
        _66__L408_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _66__L408_1_1_1_1_1_1_1_1_1 = _64__L3_1_1_1_1_1_1_1_1_1 + 1;
      }
      _65__L7_1_1_1_1_1_1_1_1_1 = _66__L408_1_1_1_1_1_1_1_1_1 +
        (_71__L204_1_1_1_1_1_1_1_1_1.endAddress -
          _71__L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_70__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
          _65__L7_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _66__L408_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _66__L408_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _66__L408_1_1_1_1_1_1_1_1_1 < 500)) {
            _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _70__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _66__L408_1_1_1_1_1_1_1_1_1];
          }
          else {
            _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _67__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _67__L407_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_68__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &_L3_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_71__L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _66__L408_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _65__L7_1_1_1_1_1_1_1_1_1;
      if ((0 <= _59_noname_1_1_1_1_1_1_1_1_1 - 1) &
        (_59_noname_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_59_noname_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &_L3_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp3.packets,
      &_L3_2_1_1_2_1_1_1);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp3);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp28);
  }
  _L17_1_2_1_1_1.pig_nom_0 = BG354_header_B0_Balises426.n_pig;
  _L5_3_1_1_1 = BG354_header_B1_Balises426.n_pig - _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > _L17_1_2_1_1_1.TrainPos) & (tmp40 -
      tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    if (BG354_P042_Packets426.valid) {
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[0] = BG354_P042_Packets426.NID_PACKET;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[1] = BG354_P042_Packets426.Q_DIR;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[2] = BG354_P042_Packets426.L_PACKET;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[3] = BG354_P042_Packets426.Q_RBC;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[4] = BG354_P042_Packets426.NID_C;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[5] = BG354_P042_Packets426.NID_RBC;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[6] = BG354_P042_Packets426.NID_RADIO;
      (&_80__L383_1_1_1_1_1_1_1_1_1[0])[7] =
        BG354_P042_Packets426.Q_SLEEPSESSION;
      tmp2.valid = BG354_P042_Packets426.valid;
      tmp2.startAddress = 0;
      tmp2.endAddress = DIM_MaxElementsPacket042_TM - 1;
      _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG354_P042_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P042_Packets426.NID_PACKET == 42) {
        tmp2.nid_packet = 42 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P042_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp2.nid_packet = ERROR_nid_packet_TM;
      }
      if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp2.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG354_P042_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp2.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG354_P042_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp2.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp2.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _76__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _44__L7_1_1_1_1_1_1_1_1_1 = _76__L7_1_1_1_1_1_1_1_1_1;
        else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
          _L17_1_2_1_1_1.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          _76__L7_1_1_1_1_1_1_1_1_1 =
            _L17_1_2_1_1_1.packets.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _76__L7_1_1_1_1_1_1_1_1_1 = _44__L7_1_1_1_1_1_1_1_1_1;
        }
        _75__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_76__L7_1_1_1_1_1_1_1_1_1 == 0) {
        _78__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _78__L407_1_1_1_1_1_1_1_1_1 = _76__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      _77__L408_1_1_1_1_1_1_1_1_1 = _78__L407_1_1_1_1_1_1_1_1_1 +
        (tmp2.endAddress - tmp2.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 492;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_492(
        &_80__L383_1_1_1_1_1_1_1_1_1[8],
        &_L209_1_1_2_1_1_2_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _77__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 &
          (_L5_1_1_1_1_1_1_1_1 >= _78__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _78__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _78__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _80__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _78__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L17_1_2_1_1_1.packets.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L5_3_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L5_3_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _79__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_74__L7_1_1_1_1_1_1_1.PacketData,
        &_79__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_74__L7_1_1_1_1_1_1_1.PacketHeaders,
        &_L17_1_2_1_1_1.packets.PacketHeaders);
      tmp2.startAddress = _78__L407_1_1_1_1_1_1_1_1_1;
      tmp2.endAddress = _77__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _75__L3_1_1_1_1_1_1_1_1_1 - 1) & (_75__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_74__L7_1_1_1_1_1_1_1.PacketHeaders[_75__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp2);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_74__L7_1_1_1_1_1_1_1,
        &_L17_1_2_1_1_1.packets);
    }
    if (BG354_P046_N_Packets426.valid) {
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[0] =
        BG354_P046_N_Packets426.NID_PACKET;
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[1] =
        BG354_P046_N_Packets426.Q_DIR;
      (&(&(&_L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[2] =
        BG354_P046_N_Packets426.L_PACKET;
      (&tmp1[0])[0].M_LEVELTR = BG354_P046_N_Packets426.M_LEVELTR;
      (&tmp1[0])[0].NID_NTC = BG354_P046_N_Packets426.NID_NTC;
      _L204_1_1_1_1_1_2_1_1_1.valid = BG354_P046_N_Packets426.valid;
      _L204_1_1_1_1_1_2_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = 3 + 1 + 2 +
        BG354_P046_N_Packets426.N_ITER * 2 - 1;
      _L408_1_1_1_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _43__L3_1_1_1_1_1_1_1_1_1 = _L408_1_1_1_1_1_2_1_1_1;
        _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _74__L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L408_1_1_1_1_1_2_1_1_1 =
            _74__L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_1_1_1_2_1_1_1 = _43__L3_1_1_1_1_1_1_1_1_1;
        }
        _46__L407_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L408_1_1_1_1_1_2_1_1_1 == 0) {
        noname_1_1_1_1_1_2_1_1_1 = 0;
      }
      else {
        noname_1_1_1_1_1_2_1_1_1 = _L408_1_1_1_1_1_2_1_1_1 + 1;
      }
      _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 =
        BG354_P046_N_Packets426.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P046_N_Packets426.NID_PACKET == 46) {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = 46 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P046_N_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_2_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
        _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
          BG354_P046_N_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = BG354_P046_N_Packets426.Q_DIR ==
            INT_Q_DIR_both_TM_conversions;
          if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
            _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_2_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L407_1_1_1_1_1_2_1_1_1 = noname_1_1_1_1_1_2_1_1_1 +
        (_L204_1_1_1_1_1_2_1_1_1.endAddress -
          _L204_1_1_1_1_1_2_1_1_1.startAddress);
      _L376_1_1_1_1_1_1_1_1_1[0] = BG354_P046_N_Packets426.N_ITER;
      kcg_copy_P046_trackide_sectionlist_T_TM(
        &tmp1[1],
        (array__463546 *) &BG354_P046_N_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp1[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp1[_L5_1_1_1_1_1_1_1_1].NID_NTC;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 430;
        _L5_1_1_1_1_1_1_1_1++) {
        _84__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_L383_1_1_1_1_1_1_1_1_1[3],
        &_L376_1_1_1_1_1_1_1_1_1);
      kcg_copy_P046_sections_array_flat_T_TM(
        &tmp,
        (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 2) & (_L5_1_1_1_1_1_1_1_1 / 2 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 2) & (_L5_1_1_1_1_1_1_1_1 % 2 < 2))) {
          _L407_1_1_1_1_1_1_1_1_1 =
            _L74_1_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            2][_L5_1_1_1_1_1_1_1_1 % 2];
        }
        else {
          _L407_1_1_1_1_1_1_1_1_1 = 0;
        }
        if ((0 <= _L5_1_1_1_1_1_1_1_1) & (_L5_1_1_1_1_1_1_1_1 < 66)) {
          tmp[_L5_1_1_1_1_1_1_1_1] = _L407_1_1_1_1_1_1_1_1_1;
        }
      }
      kcg_copy_P046_sections_array_flat_T_TM(&_L383_1_1_1_1_1_1_1_1_1[4], &tmp);
      kcg_copy_array_int_430(
        &_L383_1_1_1_1_1_1_1_1_1[70],
        &_84__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = _L407_1_1_1_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 & (_L5_1_1_1_1_1_1_1_1 >=
            noname_1_1_1_1_1_2_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - noname_1_1_1_1_1_2_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - noname_1_1_1_1_1_2_1_1_1 < 500)) {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              noname_1_1_1_1_1_2_1_1_1];
          }
          else {
            _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _74__L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _L3_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _L3_1_1_2_1_1_2_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1.PacketHeaders,
        &_74__L7_1_1_1_1_1_1_1.PacketHeaders);
      _L204_1_1_1_1_1_2_1_1_1.startAddress = noname_1_1_1_1_1_2_1_1_1;
      _L204_1_1_1_1_1_2_1_1_1.endAddress = _L407_1_1_1_1_1_2_1_1_1;
      if ((0 <= _46__L407_1_1_1_1_1_1_1_1_1 - 1) &
        (_46__L407_1_1_1_1_1_1_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L7_1_1_1_1_1_1_1.PacketHeaders[_46__L407_1_1_1_1_1_1_1_1_1 - 1],
          &_L204_1_1_1_1_1_2_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L7_1_1_1_1_1_1_1,
        &_74__L7_1_1_1_1_1_1_1);
    }
    if (BG354_P046_R_Packets426.valid) {
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[0] =
        BG354_P046_R_Packets426.NID_PACKET;
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[1] =
        BG354_P046_R_Packets426.Q_DIR;
      (&(&(&_48__L383_1_1_1_1_1_1_1_1_1[0])[0])[0])[2] =
        BG354_P046_R_Packets426.L_PACKET;
      (&tmp6[0])[0].M_LEVELTR = BG354_P046_R_Packets426.M_LEVELTR;
      (&tmp6[0])[0].NID_NTC = BG354_P046_R_Packets426.NID_NTC;
      _L204_1_1_1_1_1_1_1_1_1.valid = BG354_P046_R_Packets426.valid;
      _L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = 3 + 1 + 2 +
        BG354_P046_R_Packets426.N_ITER * 2 - 1;
      _L408_1_1_2_1_1_2_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        _L408_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1;
        _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          _L408_1_1_2_1_1_2_1_1_1 =
            _L7_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _L408_1_1_2_1_1_2_1_1_1 = _L408_1_1_1_1_1_1_1_1_1;
        }
        _L7_1_1_2_1_1_2_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
      if (_L408_1_1_2_1_1_2_1_1_1 == 0) {
        _85__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _85__L407_1_1_1_1_1_1_1_1_1 = _L408_1_1_2_1_1_2_1_1_1 + 1;
      }
      _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 =
        BG354_P046_R_Packets426.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P046_R_Packets426.NID_PACKET == 46) {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = 46 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P046_R_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
        _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 =
          BG354_P046_R_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
          _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 =
            BG354_P046_R_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            _L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _L407_1_1_2_1_1_2_1_1_1 = _85__L407_1_1_1_1_1_1_1_1_1 +
        (_L204_1_1_1_1_1_1_1_1_1.endAddress -
          _L204_1_1_1_1_1_1_1_1_1.startAddress);
      _L376_1_1_2_1_1_1_1_1_1[0] = BG354_P046_R_Packets426.N_ITER;
      kcg_copy_P046_trackide_sectionlist_T_TM(
        &tmp6[1],
        (array__463546 *) &BG354_P046_R_Packets426.SECTIONS);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 33;
        _L5_1_1_1_1_1_1_1_1++) {
        _L74_1_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][0] =
          tmp6[_L5_1_1_1_1_1_1_1_1].M_LEVELTR;
        _L74_1_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1][1] =
          tmp6[_L5_1_1_1_1_1_1_1_1].NID_NTC;
      }
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 430;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_1(
        &_48__L383_1_1_1_1_1_1_1_1_1[3],
        &_L376_1_1_2_1_1_1_1_1_1);
      kcg_copy_P046_sections_array_flat_T_TM(
        &tmp5,
        (P046_sections_array_flat_T_TM *) &DEFAULT_P046_sections_array_flat_TM);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 99;
        _L5_1_1_1_1_1_1_1_1++) {
        if ((0 <= _L5_1_1_1_1_1_1_1_1 / 2) & (_L5_1_1_1_1_1_1_1_1 / 2 < 33) &
          ((0 <= _L5_1_1_1_1_1_1_1_1 % 2) & (_L5_1_1_1_1_1_1_1_1 % 2 < 2))) {
          _L3_1_1_1_1_1_1_1_1_1 = _L74_1_1_1_2_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 /
            2][_L5_1_1_1_1_1_1_1_1 % 2];
        }
        else {
          _L3_1_1_1_1_1_1_1_1_1 = 0;
        }
        if ((0 <= _L5_1_1_1_1_1_1_1_1) & (_L5_1_1_1_1_1_1_1_1 < 66)) {
          tmp5[_L5_1_1_1_1_1_1_1_1] = _L3_1_1_1_1_1_1_1_1_1;
        }
      }
      kcg_copy_P046_sections_array_flat_T_TM(
        &_48__L383_1_1_1_1_1_1_1_1_1[4],
        &tmp5);
      kcg_copy_array_int_430(
        &_48__L383_1_1_1_1_1_1_1_1_1[70],
        &_L209_1_1_2_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = _L407_1_1_2_1_1_2_1_1_1 >=
          _L5_1_1_1_1_1_1_1_1;
        if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 & (_L5_1_1_1_1_1_1_1_1 >=
            _85__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _85__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _85__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _48__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _85__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L7_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        noname_1_1_2_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = noname_1_1_2_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _47__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketData,
        &_47__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1.PacketHeaders,
        &_L7_1_1_1_1_1_1_1.PacketHeaders);
      _L204_1_1_1_1_1_1_1_1_1.startAddress = _85__L407_1_1_1_1_1_1_1_1_1;
      _L204_1_1_1_1_1_1_1_1_1.endAddress = _L407_1_1_2_1_1_2_1_1_1;
      if ((0 <= _L7_1_1_2_1_1_2_1_1_1 - 1) & (_L7_1_1_2_1_1_2_1_1_1 - 1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_2_1_1_2_1_1_1.PacketHeaders[_L7_1_1_2_1_1_2_1_1_1 - 1],
          &_L204_1_1_1_1_1_1_1_1_1);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_2_1_1_2_1_1_1,
        &_L7_1_1_1_1_1_1_1);
    }
    if (BG354_P003_Packets426.valid) {
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[0] = BG354_P003_Packets426.NID_PACKET;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[1] = BG354_P003_Packets426.Q_DIR;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[2] = BG354_P003_Packets426.L_PACKET;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[3] = BG354_P003_Packets426.Q_SCALE;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[4] = BG354_P003_Packets426.D_VALIDNV;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[5] = BG354_P003_Packets426.N_ITER;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[6] = BG354_P003_Packets426.V_NVSHUNT;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[7] = BG354_P003_Packets426.V_NVSTFF;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[8] =
        BG354_P003_Packets426.V_NVONSIGHT;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[9] = BG354_P003_Packets426.V_NVUNFIT;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[10] = BG354_P003_Packets426.V_NVREL;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[11] = BG354_P003_Packets426.D_NVROLL;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[12] =
        BG354_P003_Packets426.Q_NVSRBKTRG;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[13] =
        BG354_P003_Packets426.Q_NVEMRRLS;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[14] =
        BG354_P003_Packets426.V_NVALLOWOVTRP;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[15] =
        BG354_P003_Packets426.V_NVSUPOVTRP;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[16] = BG354_P003_Packets426.D_NVOVTRP;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[17] = BG354_P003_Packets426.T_NVOVTRP;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[18] = BG354_P003_Packets426.D_NVPOTRP;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[19] =
        BG354_P003_Packets426.M_NVCONTACT;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[20] =
        BG354_P003_Packets426.T_NVCONTACT;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[21] = BG354_P003_Packets426.M_NVDERUN;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[22] = BG354_P003_Packets426.D_NVSTFF;
      (&(&_L383_1_1_2_1_1_2_1_1_1[0])[0])[23] =
        BG354_P003_Packets426.Q_NVDRIVER_ADHES;
      tmp32.valid = BG354_P003_Packets426.valid;
      tmp32.startAddress = 0;
      tmp32.endAddress = 6 + 17 + BG354_P003_Packets426.N_ITER * 1 - 1;
      _56__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp35 = _56__L7_1_1_1_1_1_1_1_1_1;
        tmp34 =
          _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp34) {
          _56__L7_1_1_1_1_1_1_1_1_1 =
            _L3_2_1_1_2_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _56__L7_1_1_1_1_1_1_1_1_1 = tmp35;
        }
        _55__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp34) {
          break;
        }
      }
      if (_56__L7_1_1_1_1_1_1_1_1_1 == 0) {
        _58__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _58__L407_1_1_1_1_1_1_1_1_1 = _56__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = BG354_P003_Packets426.Q_DIR ==
        INT_Q_DIR_nomiinal_TM_conversions;
      if (BG354_P003_Packets426.NID_PACKET == 3) {
        tmp32.nid_packet = 3 * DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_1_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          BG354_P003_Packets426.Q_DIR *
          DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        tmp32.nid_packet = ERROR_nid_packet_TM;
      }
      if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
        tmp32.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
      }
      else {
        _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
          BG354_P003_Packets426.Q_DIR == INT_Q_DIR_reverse_TM_conversions;
        if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
          tmp32.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
        }
        else {
          _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 =
            BG354_P003_Packets426.Q_DIR == INT_Q_DIR_both_TM_conversions;
          if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
          else {
            tmp32.q_dir = ENUM_Q_DIR_both_TM_conversions;
          }
        }
      }
      _57__L408_1_1_1_1_1_1_1_1_1 = _58__L407_1_1_1_1_1_1_1_1_1 +
        (tmp32.endAddress - tmp32.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 444;
        _L5_1_1_1_1_1_1_1_1++) {
        _60__L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
        &_L383_1_1_2_1_1_2_1_1_1[24],
        (array_int_32 *) &BG354_P003_Packets426.SECTIONS);
      kcg_copy_array_int_444(
        &_L383_1_1_2_1_1_2_1_1_1[56],
        &_60__L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp33 = _57__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp33 & (_L5_1_1_1_1_1_1_1_1 >= _58__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _58__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _58__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _L383_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _58__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_2_1_1_2_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _59_noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp33) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _59_noname_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _L406_1_1_2_1_1_2_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &_L3_1_1_1_1_1_1_1.PacketData,
        &_L406_1_1_2_1_1_2_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &_L3_1_1_1_1_1_1_1.PacketHeaders,
        &_L3_2_1_1_2_1_1_1.PacketHeaders);
      tmp32.startAddress = _58__L407_1_1_1_1_1_1_1_1_1;
      tmp32.endAddress = _57__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _55__L3_1_1_1_1_1_1_1_1_1 - 1) & (_55__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &_L3_1_1_1_1_1_1_1.PacketHeaders[_55__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp32);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &_L3_1_1_1_1_1_1_1,
        &_L3_2_1_1_2_1_1_1);
    }
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG354_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    if (BGXXX_P255_Packets426.valid) {
      (&_70__L383_1_1_1_1_1_1_1_1_1[0])[0] = BGXXX_P255_Packets426.NID_PACKET;
      _71__L204_1_1_1_1_1_1_1_1_1.valid = BGXXX_P255_Packets426.valid;
      _71__L204_1_1_1_1_1_1_1_1_1.startAddress = 0;
      _71__L204_1_1_1_1_1_1_1_1_1.endAddress = DIM_MaxElementsPacket255_TM - 1;
      _65__L7_1_1_1_1_1_1_1_1_1 = 0;
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 30;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp38 = _65__L7_1_1_1_1_1_1_1_1_1;
        tmp31 =
          _L3_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].nid_packet !=
          DEFAULT_Headers_TM[_L5_1_1_1_1_1_1_1_1].nid_packet;
        if (tmp31) {
          _65__L7_1_1_1_1_1_1_1_1_1 =
            _L3_1_1_1_1_1_1_1.PacketHeaders[_L5_1_1_1_1_1_1_1_1].endAddress;
        }
        else {
          _65__L7_1_1_1_1_1_1_1_1_1 = tmp38;
        }
        _64__L3_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp31) {
          break;
        }
      }
      if (_65__L7_1_1_1_1_1_1_1_1_1 == 0) {
        _67__L407_1_1_1_1_1_1_1_1_1 = 0;
      }
      else {
        _67__L407_1_1_1_1_1_1_1_1_1 = _65__L7_1_1_1_1_1_1_1_1_1 + 1;
      }
      if (BGXXX_P255_Packets426.NID_PACKET == 255) {
        _71__L204_1_1_1_1_1_1_1_1_1.nid_packet = 255 *
          DIM_offset_metadata_nid_packet_TM_lib_internal +
          INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
          INT_Q_DIR_both_TM * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
          DIM_offset_metadata_id_TM_lib_internal;
      }
      else {
        _71__L204_1_1_1_1_1_1_1_1_1.nid_packet = ERROR_nid_packet_TM;
      }
      _71__L204_1_1_1_1_1_1_1_1_1.q_dir = ENUM_Q_DIR_both_TM_conversions;
      _66__L408_1_1_1_1_1_1_1_1_1 = _67__L407_1_1_1_1_1_1_1_1_1 +
        (_71__L204_1_1_1_1_1_1_1_1_1.endAddress -
          _71__L204_1_1_1_1_1_1_1_1_1.startAddress);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 499;
        _L5_1_1_1_1_1_1_1_1++) {
        _L209_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
      kcg_copy_array_int_499(
        &_70__L383_1_1_1_1_1_1_1_1_1[1],
        &_L209_1_1_1_1_1_1_1_1_1);
      for (
        _L5_1_1_1_1_1_1_1_1 = 0;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        tmp30 = _66__L408_1_1_1_1_1_1_1_1_1 >= _L5_1_1_1_1_1_1_1_1;
        if (tmp30 & (_L5_1_1_1_1_1_1_1_1 >= _67__L407_1_1_1_1_1_1_1_1_1)) {
          if ((0 <= _L5_1_1_1_1_1_1_1_1 - _67__L407_1_1_1_1_1_1_1_1_1) &
            (_L5_1_1_1_1_1_1_1_1 - _67__L407_1_1_1_1_1_1_1_1_1 < 500)) {
            _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
              _70__L383_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1 -
              _67__L407_1_1_1_1_1_1_1_1_1];
          }
          else {
            _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
          }
        }
        else {
          _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] =
            _L3_1_1_1_1_1_1_1.PacketData[_L5_1_1_1_1_1_1_1_1];
        }
        _69_noname_1_1_1_1_1_1_1_1_1 = _L5_1_1_1_1_1_1_1_1 + 1;
        if (!tmp30) {
          break;
        }
      }
#ifdef KCG_MAPW_CPY
      
      for (
        _L5_1_1_1_1_1_1_1_1 = _69_noname_1_1_1_1_1_1_1_1_1;
        _L5_1_1_1_1_1_1_1_1 < 500;
        _L5_1_1_1_1_1_1_1_1++) {
        _68__L406_1_1_1_1_1_1_1_1_1[_L5_1_1_1_1_1_1_1_1] = 0;
      }
#endif /* KCG_MAPW_CPY */
      
      kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
        &tmp27.PacketData,
        &_68__L406_1_1_1_1_1_1_1_1_1);
      kcg_copy_Metadata_T_Common_Types_Pkg(
        &tmp27.PacketHeaders,
        &_L3_1_1_1_1_1_1_1.PacketHeaders);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &tmp26,
        &_71__L204_1_1_1_1_1_1_1_1_1);
      tmp26.startAddress = _67__L407_1_1_1_1_1_1_1_1_1;
      tmp26.endAddress = _66__L408_1_1_1_1_1_1_1_1_1;
      if ((0 <= _64__L3_1_1_1_1_1_1_1_1_1 - 1) & (_64__L3_1_1_1_1_1_1_1_1_1 -
          1 < 30)) {
        kcg_copy_MetadataElement_T_Common_Types_Pkg(
          &tmp27.PacketHeaders[_64__L3_1_1_1_1_1_1_1_1_1 - 1],
          &tmp26);
      }
    }
    else {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp27, &_L3_1_1_1_1_1_1_1);
    }
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp29.packets, &tmp27);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp29);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &_L17_1_2_1_1_1);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG373_Balises426.Pos;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp3.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  if (_L21_1_1_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &_L21_1_1_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &_L21_1_1_1_1_1.packets);
  }
  else if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else if (tmp23.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp23.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp23.packets);
  }
  else if (tmp22.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp22.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp22.packets);
  }
  else if (tmp21.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp21.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp21.packets);
  }
  else if (tmp20.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp20.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp20.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else if (tmp18.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp18.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp18.packets);
  }
  else if (tmp17.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp17.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp17.packets);
  }
  else if (tmp16.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp16.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp16.packets);
  }
  else if (tmp15.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp15.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp15.packets);
  }
  else if (tmp14.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp14.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp14.packets);
  }
  else if (tmp13.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp13.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp13.packets);
  }
  else if (tmp12.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp12.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp12.packets);
  }
  else if (tmp11.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp11.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp11.packets);
  }
  else if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else if (tmp7.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp7.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp7.packets);
  }
  else if (tmp4.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp4.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp4.packets);
  }
  else if (tmp3.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp3.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp3.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L88_2_1_1.BG_Message,
      &_L16_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp4.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp4.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp4.engineering_BG_location = BG376_Balises426.Pos;
  tmp4.pig_nom_0 = 0;
  tmp4.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp13.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp13.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp13.engineering_BG_location = BG377_Balises426.Pos;
  tmp13.pig_nom_0 = 0;
  tmp13.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp18.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp18.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp18.engineering_BG_location = BG371_Balises426.Pos;
  tmp18.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp18.pig_nom_0 = 0;
  tmp18.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp23.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp23.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp23.engineering_BG_location = BG372_Balises426.Pos;
  tmp23.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp23.pig_nom_0 = 0;
  tmp23.balise_passed = kcg_false;
  tmp28.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L5_3_1_1_1 = BG373_header_B1_Balises426.n_pig -
    BG373_header_B1_Balises426.n_pig;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG373_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG373_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp29);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp28);
  }
  _L17_1_2_1_1_1.pig_nom_0 = BG373_header_B1_Balises426.n_pig;
  tmp37 = BG373_header_B0_Balises426.n_pig - _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= tmp37) {
    tmp36 = (kcg_real) tmp37;
  }
  else {
    tmp36 = (kcg_real) - tmp37;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <=
      _L17_1_2_1_1_1.TrainPos);
  if (tmp30) {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L21_1_1_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG373_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L17_1_2_1_1_1);
  }
  tmp24.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L17_1_2_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L17_1_2_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L17_1_2_1_1_1.engineering_BG_location = BG375_Balises426.Pos;
  _L17_1_2_1_1_1.pig_nom_0 = 0;
  _L17_1_2_1_1_1.balise_passed = kcg_false;
  tmp38 = BG372_header_B1_Balises426.n_pig - BG372_header_B1_Balises426.n_pig;
  if (0 <= tmp38) {
    tmp36 = (kcg_real) tmp38;
  }
  else {
    tmp36 = (kcg_real) - tmp38;
  }
  if (BG372_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp31 = (tmp40 + tmp41 > tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (tmp31) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG372_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp22);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp23);
  }
  tmp21.pig_nom_0 = BG372_header_B1_Balises426.n_pig;
  tmp39 = BG372_header_B0_Balises426.n_pig - tmp21.pig_nom_0;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (tmp21.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp33 = (tmp40 + tmp41 > tmp21.TrainPos) & (tmp40 - tmp41 <= tmp21.TrainPos);
  if (tmp33) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG372_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp20);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp21);
  }
  tmp19.pig_nom_0 = tmp21.pig_nom_0;
  tmp35 = BG371_header_B0_Balises426.n_pig - BG371_header_B0_Balises426.n_pig;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (BG371_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp34 = (tmp40 + tmp41 > tmp18.TrainPos) & (tmp40 - tmp41 <= tmp18.TrainPos);
  if (tmp34) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG371_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp17);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp18);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp18.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp18.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp18.engineering_BG_location = BG374_Balises426.Pos;
  tmp18.pig_nom_0 = 0;
  tmp18.balise_passed = kcg_false;
  tmp16.pig_nom_0 = BG371_header_B0_Balises426.n_pig;
  _L3_1_1_1_1_1_1_1_1_1 = BG371_header_B1_Balises426.n_pig - tmp16.pig_nom_0;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp16.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp16.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp16.TrainPos) &
    (tmp40 - tmp41 <= tmp16.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp16);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp15.header,
      (BaliseTelegramHeader_int_T_TM *) &BG371_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp15);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp16);
  }
  tmp14.pig_nom_0 = tmp16.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else if (tmp14.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp14.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp14.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp19.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp19.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp19.engineering_BG_location = BG388_Balises426.Pos;
  tmp19.pig_nom_0 = 0;
  tmp19.balise_passed = kcg_false;
  tmp18.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L17_1_2_1_1_1.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp4.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp13.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L7_1_1_1_1_1_1_1_1_1 = BG377_header_B1_Balises426.n_pig -
    BG377_header_B1_Balises426.n_pig;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG377_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp13.TrainPos) & (tmp40 - tmp41 <= tmp13.TrainPos);
  if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG377_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp12);
    tmp11.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp13);
  }
  tmp11.pig_nom_0 = BG377_header_B1_Balises426.n_pig;
  _L408_1_1_1_1_1_1_1_1_1 = BG377_header_B0_Balises426.n_pig - tmp11.pig_nom_0;
  if (0 <= _L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp11.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp11.TrainPos) &
    (tmp40 - tmp41 <= tmp11.TrainPos);
  if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp10.header,
      (BaliseTelegramHeader_int_T_TM *) &BG377_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp10);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp11);
  }
  tmp7.pig_nom_0 = tmp11.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG387_Balises426.Pos;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  _L407_1_1_1_1_1_1_1_1_1 = BG376_header_B1_Balises426.n_pig -
    BG376_header_B1_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG376_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp4.TrainPos) & (tmp40 - tmp41 <= tmp4.TrainPos);
  if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG376_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp3);
    tmp28.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp4);
  }
  tmp28.pig_nom_0 = BG376_header_B1_Balises426.n_pig;
  noname_1_1_1_1_1_1_1_1_1 = BG376_header_B0_Balises426.n_pig - tmp28.pig_nom_0;
  if (0 <= noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp28.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp28.TrainPos) & (tmp40 - tmp41 <= tmp28.TrainPos);
  if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG376_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp29);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp28);
  }
  _L21_1_1_1_1_1.pig_nom_0 = tmp28.pig_nom_0;
  _43__L3_1_1_1_1_1_1_1_1_1 = BG375_header_B1_Balises426.n_pig -
    BG375_header_B1_Balises426.n_pig;
  if (0 <= _43__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _43__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _43__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG375_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp23.header,
      (BaliseTelegramHeader_int_T_TM *) &BG375_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp23);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &_L17_1_2_1_1_1);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp23.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp23.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp23.engineering_BG_location = BG386_Balises426.Pos;
  tmp23.pig_nom_0 = 0;
  tmp23.balise_passed = kcg_false;
  tmp22.pig_nom_0 = BG375_header_B1_Balises426.n_pig;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG375_header_B0_Balises426.n_pig -
    tmp22.pig_nom_0;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp22.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp22.TrainPos) & (tmp40 - tmp41 <= tmp22.TrainPos);
  if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG375_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp20);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp22);
  }
  tmp21.pig_nom_0 = tmp22.pig_nom_0;
  _45__L408_1_1_1_1_1_1_1_1_1 = BG374_header_B0_Balises426.n_pig -
    BG374_header_B0_Balises426.n_pig;
  if (0 <= _45__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _45__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _45__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG374_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = (tmp40 + tmp41 > tmp18.TrainPos) &
    (tmp40 - tmp41 <= tmp18.TrainPos);
  if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG374_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp17);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp18);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp17.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp17.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp17.engineering_BG_location = BG385_Balises426.Pos;
  tmp17.pig_nom_0 = 0;
  tmp17.balise_passed = kcg_false;
  tmp15.pig_nom_0 = BG374_header_B0_Balises426.n_pig;
  _46__L407_1_1_1_1_1_1_1_1_1 = BG374_header_B1_Balises426.n_pig -
    tmp15.pig_nom_0;
  if (0 <= _46__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _46__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _46__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp15.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp15.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp15.TrainPos) &
    (tmp40 - tmp41 <= tmp15.TrainPos);
  if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp15);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG374_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp16);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp15);
  }
  tmp24.pig_nom_0 = tmp15.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  if (tmp7.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp7.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp7.packets);
  }
  else if (_L21_1_1_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &_L21_1_1_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &_L21_1_1_1_1_1.packets);
  }
  else if (tmp21.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp21.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp21.packets);
  }
  else if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L88_2_1_1.BG_Message,
      &_L16_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp21.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp21.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp21.engineering_BG_location = BG384_Balises426.Pos;
  tmp21.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp21.pig_nom_0 = 0;
  tmp21.balise_passed = kcg_false;
  tmp17.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp23.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp19.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L408_1_1_1_1_1_2_1_1_1 = BG388_header_B1_Balises426.n_pig -
    BG388_header_B1_Balises426.n_pig;
  if (0 <= _L408_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_2_1_1_1;
  }
  if (BG388_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp19.TrainPos) & (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp14.header,
      (BaliseTelegramHeader_int_T_TM *) &BG388_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp14);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp19);
  }
  tmp13.pig_nom_0 = BG388_header_B1_Balises426.n_pig;
  _L407_1_1_1_1_1_2_1_1_1 = BG388_header_B0_Balises426.n_pig - tmp13.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (tmp13.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp13.TrainPos) &
    (tmp40 - tmp41 <= tmp13.TrainPos);
  if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG388_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp12);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp13);
  }
  tmp10.pig_nom_0 = tmp13.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp13.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp13.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp13.engineering_BG_location = BG383_Balises426.Pos;
  tmp13.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp13.pig_nom_0 = 0;
  tmp13.balise_passed = kcg_false;
  noname_1_1_1_1_1_2_1_1_1 = BG387_header_B1_Balises426.n_pig -
    BG387_header_B1_Balises426.n_pig;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (BG387_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp4.header,
      (BaliseTelegramHeader_int_T_TM *) &BG387_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp4);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp11);
  }
  tmp3.pig_nom_0 = BG387_header_B1_Balises426.n_pig;
  _L3_1_1_2_1_1_2_1_1_1 = BG387_header_B0_Balises426.n_pig - tmp3.pig_nom_0;
  if (0 <= _L3_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_2_1_1_2_1_1_1;
  }
  if (tmp3.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp3.engineering_BG_location * DIM_scale_eng_location_TM;
  _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp3.TrainPos) &
    (tmp40 - tmp41 <= tmp3.TrainPos);
  if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp3);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG387_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp29);
    tmp28.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp3);
  }
  tmp28.pig_nom_0 = tmp3.pig_nom_0;
  _L7_1_1_2_1_1_2_1_1_1 = BG386_header_B1_Balises426.n_pig -
    BG386_header_B1_Balises426.n_pig;
  if (0 <= _L7_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_2_1_1_2_1_1_1;
  }
  if (BG386_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG386_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &_L17_1_2_1_1_1);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp23);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp23.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp23.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp23.engineering_BG_location = BG382_Balises426.Pos;
  tmp23.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp23.pig_nom_0 = 0;
  tmp23.balise_passed = kcg_false;
  tmp20.pig_nom_0 = BG386_header_B1_Balises426.n_pig;
  _L408_1_1_2_1_1_2_1_1_1 = BG386_header_B0_Balises426.n_pig - tmp20.pig_nom_0;
  if (0 <= _L408_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_2_1_1_2_1_1_1;
  }
  if (tmp20.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp20.TrainPos) & (tmp40 - tmp41 <= tmp20.TrainPos);
  if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG386_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp22);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp20);
  }
  tmp18.pig_nom_0 = tmp20.pig_nom_0;
  _L407_1_1_2_1_1_2_1_1_1 = BG385_header_B0_Balises426.n_pig -
    BG385_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_2_1_1_2_1_1_1;
  }
  if (BG385_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp17.TrainPos) & (tmp40 - tmp41 <= tmp17.TrainPos);
  if (_72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG385_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp16);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp17);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp16.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp16.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp16.engineering_BG_location = BG381_Balises426.Pos;
  tmp16.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp16.pig_nom_0 = 0;
  tmp16.balise_passed = kcg_false;
  tmp15.pig_nom_0 = BG385_header_B0_Balises426.n_pig;
  _85__L407_1_1_1_1_1_1_1_1_1 = BG385_header_B1_Balises426.n_pig -
    tmp15.pig_nom_0;
  if (0 <= _85__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _85__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _85__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp15.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp15.engineering_BG_location * DIM_scale_eng_location_TM;
  _73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp15.TrainPos) & (tmp40 - tmp41 <= tmp15.TrainPos);
  if (_73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp15);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L21_1_1_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG385_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp15);
  }
  tmp24.pig_nom_0 = tmp15.pig_nom_0;
  noname_1_1_2_1_1_1_1_1_1 = BG384_header_B0_Balises426.n_pig -
    BG384_header_B0_Balises426.n_pig;
  if (0 <= noname_1_1_2_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_2_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_2_1_1_1_1_1_1;
  }
  if (BG384_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp21.TrainPos) &
    (tmp40 - tmp41 <= tmp21.TrainPos);
  if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp7.header,
      (BaliseTelegramHeader_int_T_TM *) &BG384_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp7);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp21);
  }
  tmp19.pig_nom_0 = BG384_header_B0_Balises426.n_pig;
  _55__L3_1_1_1_1_1_1_1_1_1 = BG384_header_B1_Balises426.n_pig -
    tmp19.pig_nom_0;
  if (0 <= _55__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _55__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _55__L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp19.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp19.TrainPos) & (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp14.header,
      (BaliseTelegramHeader_int_T_TM *) &BG384_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp14);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp19);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp14.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp14.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp14.engineering_BG_location = BG380_Balises426.Pos;
  tmp14.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp14.pig_nom_0 = 0;
  tmp14.balise_passed = kcg_false;
  tmp12.pig_nom_0 = tmp19.pig_nom_0;
  _56__L7_1_1_1_1_1_1_1_1_1 = BG383_header_B1_Balises426.n_pig -
    BG383_header_B1_Balises426.n_pig;
  if (0 <= _56__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _56__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _56__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG383_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp13.TrainPos) & (tmp40 - tmp41 <= tmp13.TrainPos);
  if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG383_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp11);
    tmp4.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp13);
  }
  tmp4.pig_nom_0 = BG383_header_B1_Balises426.n_pig;
  _57__L408_1_1_1_1_1_1_1_1_1 = BG383_header_B0_Balises426.n_pig -
    tmp4.pig_nom_0;
  if (0 <= _57__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _57__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _57__L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp4.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp4.TrainPos) & (tmp40 - tmp41 <=
      tmp4.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG383_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp29);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp4);
  }
  tmp3.pig_nom_0 = tmp4.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp4.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp4.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp4.engineering_BG_location = BG379_Balises426.Pos;
  tmp4.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp4.pig_nom_0 = 0;
  tmp4.balise_passed = kcg_false;
  _58__L407_1_1_1_1_1_1_1_1_1 = BG382_header_B1_Balises426.n_pig -
    BG382_header_B1_Balises426.n_pig;
  if (0 <= _58__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _58__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _58__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG382_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (tmp30) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG382_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &_L17_1_2_1_1_1);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp23);
  }
  tmp22.pig_nom_0 = BG382_header_B1_Balises426.n_pig;
  _59_noname_1_1_1_1_1_1_1_1_1 = BG382_header_B0_Balises426.n_pig -
    tmp22.pig_nom_0;
  if (0 <= _59_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _59_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _59_noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp22.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp31 = (tmp40 + tmp41 > tmp22.TrainPos) & (tmp40 - tmp41 <= tmp22.TrainPos);
  if (tmp31) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG382_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp20);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp22);
  }
  tmp17.pig_nom_0 = tmp22.pig_nom_0;
  _64__L3_1_1_1_1_1_1_1_1_1 = BG381_header_B1_Balises426.n_pig -
    BG381_header_B1_Balises426.n_pig;
  if (0 <= _64__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _64__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _64__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG381_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp16.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp33 = (tmp40 + tmp41 > tmp16.TrainPos) & (tmp40 - tmp41 <= tmp16.TrainPos);
  if (tmp33) {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp16);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L21_1_1_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG381_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &_L21_1_1_1_1_1);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp16);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L21_1_1_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L21_1_1_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L21_1_1_1_1_1.engineering_BG_location = BG378_Balises426.Pos;
  _L21_1_1_1_1_1.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L21_1_1_1_1_1.pig_nom_0 = 0;
  _L21_1_1_1_1_1.balise_passed = kcg_false;
  tmp15.pig_nom_0 = BG381_header_B1_Balises426.n_pig;
  _65__L7_1_1_1_1_1_1_1_1_1 = BG381_header_B0_Balises426.n_pig -
    tmp15.pig_nom_0;
  if (0 <= _65__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _65__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _65__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp15.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp15.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp34 = (tmp40 + tmp41 > tmp15.TrainPos) & (tmp40 - tmp41 <= tmp15.TrainPos);
  if (tmp34) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp15);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp21.header,
      (BaliseTelegramHeader_int_T_TM *) &BG381_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp21);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp15);
  }
  tmp7.pig_nom_0 = tmp15.pig_nom_0;
  _66__L408_1_1_1_1_1_1_1_1_1 = BG380_header_B1_Balises426.n_pig -
    BG380_header_B1_Balises426.n_pig;
  if (0 <= _66__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _66__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _66__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG380_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp14.TrainPos) &
    (tmp40 - tmp41 <= tmp14.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp19.header,
      (BaliseTelegramHeader_int_T_TM *) &BG380_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp19);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp14);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp14.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp14.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp14.engineering_BG_location = BG396_Balises426.Pos;
  tmp14.pig_nom_0 = 0;
  tmp14.balise_passed = kcg_false;
  tmp13.pig_nom_0 = BG380_header_B1_Balises426.n_pig;
  _67__L407_1_1_1_1_1_1_1_1_1 = BG380_header_B0_Balises426.n_pig -
    tmp13.pig_nom_0;
  if (0 <= _67__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _67__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _67__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp13.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp13.TrainPos) & (tmp40 - tmp41 <= tmp13.TrainPos);
  if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG380_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp11);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp13);
  }
  tmp29.pig_nom_0 = tmp13.pig_nom_0;
  _69_noname_1_1_1_1_1_1_1_1_1 = BG379_header_B0_Balises426.n_pig -
    BG379_header_B0_Balises426.n_pig;
  if (0 <= _69_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _69_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _69_noname_1_1_1_1_1_1_1_1_1;
  }
  if (BG379_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp4.TrainPos) &
    (tmp40 - tmp41 <= tmp4.TrainPos);
  if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp23.header,
      (BaliseTelegramHeader_int_T_TM *) &BG379_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp23);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp4);
  }
  _L17_1_2_1_1_1.pig_nom_0 = BG379_header_B0_Balises426.n_pig;
  _75__L3_1_1_1_1_1_1_1_1_1 = BG379_header_B1_Balises426.n_pig -
    _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= _75__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _75__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _75__L3_1_1_1_1_1_1_1_1_1;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG379_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp20);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &_L17_1_2_1_1_1);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp20.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp20.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp20.engineering_BG_location = BG395_Balises426.Pos;
  tmp20.pig_nom_0 = 0;
  tmp20.balise_passed = kcg_false;
  tmp22.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  _76__L7_1_1_1_1_1_1_1_1_1 = BG378_header_B0_Balises426.n_pig -
    BG378_header_B0_Balises426.n_pig;
  if (0 <= _76__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _76__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _76__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG378_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L21_1_1_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L21_1_1_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L21_1_1_1_1_1.TrainPos);
  if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &_L21_1_1_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG378_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp16);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &_L21_1_1_1_1_1);
  }
  tmp21.pig_nom_0 = BG378_header_B0_Balises426.n_pig;
  _77__L408_1_1_1_1_1_1_1_1_1 = BG378_header_B1_Balises426.n_pig -
    tmp21.pig_nom_0;
  if (0 <= _77__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _77__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _77__L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp21.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp21.TrainPos) &
    (tmp40 - tmp41 <= tmp21.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp15.header,
      (BaliseTelegramHeader_int_T_TM *) &BG378_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp15);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp21);
  }
  tmp19.pig_nom_0 = tmp21.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp21.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp21.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp21.engineering_BG_location = BG394_Balises426.Pos;
  tmp21.pig_nom_0 = 0;
  tmp21.balise_passed = kcg_false;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else if (tmp28.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp28.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp28.packets);
  }
  else if (tmp18.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp18.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp18.packets);
  }
  else if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else if (tmp12.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp12.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp12.packets);
  }
  else if (tmp3.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp3.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp3.packets);
  }
  else if (tmp17.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp17.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp17.packets);
  }
  else if (tmp7.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp7.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp7.packets);
  }
  else if (tmp29.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp29.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp29.packets);
  }
  else if (tmp22.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp22.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp22.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp7.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp7.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp7.engineering_BG_location = BG392_Balises426.Pos;
  tmp7.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp7.pig_nom_0 = 0;
  tmp7.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp19.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp19.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp19.engineering_BG_location = BG393_Balises426.Pos;
  tmp19.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp19.pig_nom_0 = 0;
  tmp19.balise_passed = kcg_false;
  tmp21.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp20.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp14.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _78__L407_1_1_1_1_1_1_1_1_1 = BG396_header_B1_Balises426.n_pig -
    BG396_header_B1_Balises426.n_pig;
  if (0 <= _78__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _78__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _78__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG396_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG396_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp11);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp14);
  }
  tmp13.pig_nom_0 = BG396_header_B1_Balises426.n_pig;
  _L5_1_1_1_1_1_1_1_1 = BG396_header_B0_Balises426.n_pig - tmp13.pig_nom_0;
  if (0 <= _L5_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L5_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_1_1_1_1_1_1_1_1;
  }
  if (tmp13.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = (tmp40 + tmp41 > tmp13.TrainPos) &
    (tmp40 - tmp41 <= tmp13.TrainPos);
  if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp23.header,
      (BaliseTelegramHeader_int_T_TM *) &BG396_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp23);
    tmp4.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp13);
  }
  tmp4.pig_nom_0 = tmp13.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp13.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp13.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp13.engineering_BG_location = BG391_Balises426.Pos;
  tmp13.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp13.pig_nom_0 = 0;
  tmp13.balise_passed = kcg_false;
  _L5_3_1_1_1 = BG395_header_B0_Balises426.n_pig -
    BG395_header_B0_Balises426.n_pig;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG395_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp20.TrainPos) &
    (tmp40 - tmp41 <= tmp20.TrainPos);
  if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG395_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &_L17_1_2_1_1_1);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp20);
  }
  _L21_1_1_1_1_1.pig_nom_0 = BG395_header_B0_Balises426.n_pig;
  tmp37 = BG395_header_B1_Balises426.n_pig - _L21_1_1_1_1_1.pig_nom_0;
  if (0 <= tmp37) {
    tmp36 = (kcg_real) tmp37;
  }
  else {
    tmp36 = (kcg_real) - tmp37;
  }
  if (_L21_1_1_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L21_1_1_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L21_1_1_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L21_1_1_1_1_1.TrainPos);
  if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &_L21_1_1_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG395_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp16);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &_L21_1_1_1_1_1);
  }
  tmp15.pig_nom_0 = _L21_1_1_1_1_1.pig_nom_0;
  tmp38 = BG394_header_B1_Balises426.n_pig - BG394_header_B1_Balises426.n_pig;
  if (0 <= tmp38) {
    tmp36 = (kcg_real) tmp38;
  }
  else {
    tmp36 = (kcg_real) - tmp38;
  }
  if (BG394_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp21.TrainPos) &
    (tmp40 - tmp41 <= tmp21.TrainPos);
  if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG394_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp21);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG390_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp29.pig_nom_0 = BG394_header_B1_Balises426.n_pig;
  tmp39 = BG394_header_B0_Balises426.n_pig - tmp29.pig_nom_0;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (tmp29.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp29.engineering_BG_location * DIM_scale_eng_location_TM;
  _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp29.TrainPos) & (tmp40 - tmp41 <= tmp29.TrainPos);
  if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG394_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp24);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp29);
  }
  tmp22.pig_nom_0 = tmp29.pig_nom_0;
  tmp35 = BG393_header_B1_Balises426.n_pig - BG393_header_B1_Balises426.n_pig;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (BG393_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp19.TrainPos) &
    (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp18.header,
      (BaliseTelegramHeader_int_T_TM *) &BG393_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp19);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp18.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp18.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp18.engineering_BG_location = BG389_Balises426.Pos;
  tmp18.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp18.pig_nom_0 = 0;
  tmp18.balise_passed = kcg_false;
  tmp17.pig_nom_0 = BG393_header_B1_Balises426.n_pig;
  _L3_1_1_1_1_1_1_1_1_1 = BG393_header_B0_Balises426.n_pig - tmp17.pig_nom_0;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp17.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp17.TrainPos) & (tmp40 - tmp41 <= tmp17.TrainPos);
  if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG393_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp12);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp17);
  }
  tmp10.pig_nom_0 = tmp17.pig_nom_0;
  _L7_1_1_1_1_1_1_1_1_1 = BG392_header_B0_Balises426.n_pig -
    BG392_header_B0_Balises426.n_pig;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG392_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp7.engineering_BG_location * DIM_scale_eng_location_TM;
  _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp7.TrainPos) & (tmp40 - tmp41 <= tmp7.TrainPos);
  if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp7);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG392_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp3);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp7);
  }
  tmp14.pig_nom_0 = BG392_header_B0_Balises426.n_pig;
  _L408_1_1_1_1_1_1_1_1_1 = BG392_header_B1_Balises426.n_pig - tmp14.pig_nom_0;
  if (0 <= _L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp14.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (_72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG392_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp11);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp14);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG409_Balises426.Pos;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  tmp23.pig_nom_0 = tmp14.pig_nom_0;
  _L407_1_1_1_1_1_1_1_1_1 = BG391_header_B1_Balises426.n_pig -
    BG391_header_B1_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG391_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  _73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp13.TrainPos) & (tmp40 - tmp41 <= tmp13.TrainPos);
  if (_73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG391_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp20);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp13);
  }
  _L17_1_2_1_1_1.pig_nom_0 = BG391_header_B1_Balises426.n_pig;
  noname_1_1_1_1_1_1_1_1_1 = BG391_header_B0_Balises426.n_pig -
    _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_1_1_1_1;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG391_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp16);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &_L17_1_2_1_1_1);
  }
  _L21_1_1_1_1_1.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L17_1_2_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L17_1_2_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L17_1_2_1_1_1.engineering_BG_location = BG408_Balises426.Pos;
  _L17_1_2_1_1_1.pig_nom_0 = 0;
  _L17_1_2_1_1_1.balise_passed = kcg_false;
  _43__L3_1_1_1_1_1_1_1_1_1 = BG390_header_B1_Balises426.n_pig -
    BG390_header_B1_Balises426.n_pig;
  if (0 <= _43__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _43__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _43__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG390_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp28.TrainPos) & (tmp40 - tmp41 <= tmp28.TrainPos);
  if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp21.header,
      (BaliseTelegramHeader_int_T_TM *) &BG390_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp21);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp28);
  }
  tmp24.pig_nom_0 = BG390_header_B1_Balises426.n_pig;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG390_header_B0_Balises426.n_pig -
    tmp24.pig_nom_0;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp24.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp24.engineering_BG_location * DIM_scale_eng_location_TM;
  _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp24.TrainPos) & (tmp40 - tmp41 <= tmp24.TrainPos);
  if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp24);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG390_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp29);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp24);
  }
  tmp19.pig_nom_0 = tmp24.pig_nom_0;
  _45__L408_1_1_1_1_1_1_1_1_1 = BG389_header_B1_Balises426.n_pig -
    BG389_header_B1_Balises426.n_pig;
  if (0 <= _45__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _45__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _45__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG389_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp18.TrainPos) & (tmp40 - tmp41 <=
      tmp18.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG389_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp12);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp18.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp18.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp18.engineering_BG_location = BG407_Balises426.Pos;
  tmp18.pig_nom_0 = 0;
  tmp18.balise_passed = kcg_false;
  tmp17.pig_nom_0 = BG389_header_B1_Balises426.n_pig;
  _46__L407_1_1_1_1_1_1_1_1_1 = BG389_header_B0_Balises426.n_pig -
    tmp17.pig_nom_0;
  if (0 <= _46__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _46__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _46__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp17.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > tmp17.TrainPos) & (tmp40 - tmp41 <= tmp17.TrainPos);
  if (tmp30) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp7.header,
      (BaliseTelegramHeader_int_T_TM *) &BG389_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp7);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp17);
  }
  tmp3.pig_nom_0 = tmp17.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  if (tmp4.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp4.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp4.packets);
  }
  else if (tmp15.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp15.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp15.packets);
  }
  else if (tmp22.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp22.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp22.packets);
  }
  else if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else if (tmp23.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp23.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp23.packets);
  }
  else if (_L21_1_1_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &_L21_1_1_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &_L21_1_1_1_1_1.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else if (tmp3.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp3.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp3.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L88_2_1_1.BG_Message,
      &_L16_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp4.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp4.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp4.engineering_BG_location = BG405_Balises426.Pos;
  tmp4.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp4.pig_nom_0 = 0;
  tmp4.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp23.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp23.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp23.engineering_BG_location = BG406_Balises426.Pos;
  tmp23.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp23.pig_nom_0 = 0;
  tmp23.balise_passed = kcg_false;
  tmp18.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L17_1_2_1_1_1.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L408_1_1_1_1_1_2_1_1_1 = BG409_header_B0_Balises426.n_pig -
    BG409_header_B0_Balises426.n_pig;
  if (0 <= _L408_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_2_1_1_1;
  }
  if (BG409_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp31 = (tmp40 + tmp41 > tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (tmp31) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp14.header,
      (BaliseTelegramHeader_int_T_TM *) &BG409_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp14);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp11);
  }
  tmp20.pig_nom_0 = BG409_header_B0_Balises426.n_pig;
  _L407_1_1_1_1_1_2_1_1_1 = BG409_header_B1_Balises426.n_pig - tmp20.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (tmp20.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp33 = (tmp40 + tmp41 > tmp20.TrainPos) & (tmp40 - tmp41 <= tmp20.TrainPos);
  if (tmp33) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG409_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp13);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp20);
  }
  tmp16.pig_nom_0 = tmp20.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp20.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp20.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp20.engineering_BG_location = BG404_Balises426.Pos;
  tmp20.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp20.pig_nom_0 = 0;
  tmp20.balise_passed = kcg_false;
  noname_1_1_1_1_1_2_1_1_1 = BG408_header_B1_Balises426.n_pig -
    BG408_header_B1_Balises426.n_pig;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (BG408_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp34 = (tmp40 + tmp41 > _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <=
      _L17_1_2_1_1_1.TrainPos);
  if (tmp34) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG408_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp28);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &_L17_1_2_1_1_1);
  }
  tmp21.pig_nom_0 = BG408_header_B1_Balises426.n_pig;
  _L3_1_1_2_1_1_2_1_1_1 = BG408_header_B0_Balises426.n_pig - tmp21.pig_nom_0;
  if (0 <= _L3_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_2_1_1_2_1_1_1;
  }
  if (tmp21.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp21.TrainPos) &
    (tmp40 - tmp41 <= tmp21.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG408_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp21);
  }
  tmp24.pig_nom_0 = tmp21.pig_nom_0;
  _L7_1_1_2_1_1_2_1_1_1 = BG407_header_B0_Balises426.n_pig -
    BG407_header_B0_Balises426.n_pig;
  if (0 <= _L7_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_2_1_1_2_1_1_1;
  }
  if (BG407_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp18.TrainPos) & (tmp40 - tmp41 <= tmp18.TrainPos);
  if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG407_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp12);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp18);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp18.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp18.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp18.engineering_BG_location = BG403_Balises426.Pos;
  tmp18.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp18.pig_nom_0 = 0;
  tmp18.balise_passed = kcg_false;
  tmp7.pig_nom_0 = BG407_header_B0_Balises426.n_pig;
  _L408_1_1_2_1_1_2_1_1_1 = BG407_header_B1_Balises426.n_pig - tmp7.pig_nom_0;
  if (0 <= _L408_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_2_1_1_2_1_1_1;
  }
  if (tmp7.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp7.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp7.TrainPos) &
    (tmp40 - tmp41 <= tmp7.TrainPos);
  if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp7);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG407_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp17);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp7);
  }
  _L21_1_1_1_1_1.pig_nom_0 = tmp7.pig_nom_0;
  _L407_1_1_2_1_1_2_1_1_1 = BG406_header_B0_Balises426.n_pig -
    BG406_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_2_1_1_2_1_1_1;
  }
  if (BG406_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG406_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp22);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp23);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp22.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp22.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp22.engineering_BG_location = BG402_Balises426.Pos;
  tmp22.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp22.pig_nom_0 = 0;
  tmp22.balise_passed = kcg_false;
  tmp19.pig_nom_0 = BG406_header_B0_Balises426.n_pig;
  _85__L407_1_1_1_1_1_1_1_1_1 = BG406_header_B1_Balises426.n_pig -
    tmp19.pig_nom_0;
  if (0 <= _85__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _85__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _85__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp19.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp19.TrainPos) & (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp15.header,
      (BaliseTelegramHeader_int_T_TM *) &BG406_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp15);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp19);
  }
  tmp10.pig_nom_0 = tmp19.pig_nom_0;
  noname_1_1_2_1_1_1_1_1_1 = BG405_header_B1_Balises426.n_pig -
    BG405_header_B1_Balises426.n_pig;
  if (0 <= noname_1_1_2_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_2_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_2_1_1_1_1_1_1;
  }
  if (BG405_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp4.TrainPos) &
    (tmp40 - tmp41 <= tmp4.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG405_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp3);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp4);
  }
  tmp14.pig_nom_0 = BG405_header_B1_Balises426.n_pig;
  _55__L3_1_1_1_1_1_1_1_1_1 = BG405_header_B0_Balises426.n_pig -
    tmp14.pig_nom_0;
  if (0 <= _55__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _55__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _55__L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp14.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG405_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp11);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp14);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG401_Balises426.Pos;
  tmp11.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  tmp13.pig_nom_0 = tmp14.pig_nom_0;
  _56__L7_1_1_1_1_1_1_1_1_1 = BG404_header_B0_Balises426.n_pig -
    BG404_header_B0_Balises426.n_pig;
  if (0 <= _56__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _56__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _56__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG404_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = (tmp40 + tmp41 > tmp20.TrainPos) &
    (tmp40 - tmp41 <= tmp20.TrainPos);
  if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG404_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp28);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp20);
  }
  _L17_1_2_1_1_1.pig_nom_0 = BG404_header_B0_Balises426.n_pig;
  _57__L408_1_1_1_1_1_1_1_1_1 = BG404_header_B1_Balises426.n_pig -
    _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= _57__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _57__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _57__L408_1_1_1_1_1_1_1_1_1;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG404_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp29);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &_L17_1_2_1_1_1);
  }
  tmp21.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L17_1_2_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L17_1_2_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L17_1_2_1_1_1.engineering_BG_location = BG400_Balises426.Pos;
  _L17_1_2_1_1_1.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L17_1_2_1_1_1.pig_nom_0 = 0;
  _L17_1_2_1_1_1.balise_passed = kcg_false;
  _58__L407_1_1_1_1_1_1_1_1_1 = BG403_header_B0_Balises426.n_pig -
    BG403_header_B0_Balises426.n_pig;
  if (0 <= _58__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _58__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _58__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG403_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp18.TrainPos) & (tmp40 - tmp41 <= tmp18.TrainPos);
  if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG403_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp12);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
  }
  tmp17.pig_nom_0 = BG403_header_B0_Balises426.n_pig;
  _59_noname_1_1_1_1_1_1_1_1_1 = BG403_header_B1_Balises426.n_pig -
    tmp17.pig_nom_0;
  if (0 <= _59_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _59_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _59_noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp17.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp17.TrainPos) &
    (tmp40 - tmp41 <= tmp17.TrainPos);
  if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp7.header,
      (BaliseTelegramHeader_int_T_TM *) &BG403_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp7);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp17);
  }
  tmp23.pig_nom_0 = tmp17.pig_nom_0;
  _64__L3_1_1_1_1_1_1_1_1_1 = BG402_header_B1_Balises426.n_pig -
    BG402_header_B1_Balises426.n_pig;
  if (0 <= _64__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _64__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _64__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG402_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp22.TrainPos) & (tmp40 - tmp41 <= tmp22.TrainPos);
  if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp15.header,
      (BaliseTelegramHeader_int_T_TM *) &BG402_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp15);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp22);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp22.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp22.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp22.engineering_BG_location = BG399_Balises426.Pos;
  tmp22.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp22.pig_nom_0 = 0;
  tmp22.balise_passed = kcg_false;
  tmp19.pig_nom_0 = BG402_header_B1_Balises426.n_pig;
  _65__L7_1_1_1_1_1_1_1_1_1 = BG402_header_B0_Balises426.n_pig -
    tmp19.pig_nom_0;
  if (0 <= _65__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _65__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _65__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp19.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp19.TrainPos) &
    (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp4.header,
      (BaliseTelegramHeader_int_T_TM *) &BG402_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp4);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp19);
  }
  tmp3.pig_nom_0 = tmp19.pig_nom_0;
  _66__L408_1_1_1_1_1_1_1_1_1 = BG401_header_B0_Balises426.n_pig -
    BG401_header_B0_Balises426.n_pig;
  if (0 <= _66__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _66__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _66__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG401_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp14.header,
      (BaliseTelegramHeader_int_T_TM *) &BG401_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp14);
    tmp28.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp11);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG398_Balises426.Pos;
  tmp11.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  tmp28.pig_nom_0 = BG401_header_B0_Balises426.n_pig;
  _67__L407_1_1_1_1_1_1_1_1_1 = BG401_header_B1_Balises426.n_pig -
    tmp28.pig_nom_0;
  if (0 <= _67__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _67__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _67__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp28.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp28.TrainPos) & (tmp40 - tmp41 <= tmp28.TrainPos);
  if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG401_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp20);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
  }
  tmp29.pig_nom_0 = tmp28.pig_nom_0;
  _69_noname_1_1_1_1_1_1_1_1_1 = BG400_header_B0_Balises426.n_pig -
    BG400_header_B0_Balises426.n_pig;
  if (0 <= _69_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _69_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _69_noname_1_1_1_1_1_1_1_1_1;
  }
  if (BG400_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (_72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp18.header,
      (BaliseTelegramHeader_int_T_TM *) &BG400_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp18);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &_L17_1_2_1_1_1);
  }
  tmp12.pig_nom_0 = BG400_header_B0_Balises426.n_pig;
  _75__L3_1_1_1_1_1_1_1_1_1 = BG400_header_B1_Balises426.n_pig -
    tmp12.pig_nom_0;
  if (0 <= _75__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _75__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _75__L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp12.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  _73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp12.TrainPos) & (tmp40 - tmp41 <= tmp12.TrainPos);
  if (_73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp7.header,
      (BaliseTelegramHeader_int_T_TM *) &BG400_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp7);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp12);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp7.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp7.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp7.engineering_BG_location = BG397_Balises426.Pos;
  tmp7.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp7.pig_nom_0 = 0;
  tmp7.balise_passed = kcg_false;
  tmp17.pig_nom_0 = tmp12.pig_nom_0;
  _76__L7_1_1_1_1_1_1_1_1_1 = BG399_header_B1_Balises426.n_pig -
    BG399_header_B1_Balises426.n_pig;
  if (0 <= _76__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _76__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _76__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG399_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp22.TrainPos) &
    (tmp40 - tmp41 <= tmp22.TrainPos);
  if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp15.header,
      (BaliseTelegramHeader_int_T_TM *) &BG399_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp15);
    tmp4.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp22);
  }
  tmp4.pig_nom_0 = BG399_header_B1_Balises426.n_pig;
  _77__L408_1_1_1_1_1_1_1_1_1 = BG399_header_B0_Balises426.n_pig -
    tmp4.pig_nom_0;
  if (0 <= _77__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _77__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _77__L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp4.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp4.TrainPos) & (tmp40 - tmp41 <= tmp4.TrainPos);
  if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp19.header,
      (BaliseTelegramHeader_int_T_TM *) &BG399_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp19);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp4);
  }
  tmp14.pig_nom_0 = tmp4.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp4.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp4.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp4.engineering_BG_location = BG419_Balises426.Pos;
  tmp4.pig_nom_0 = 0;
  tmp4.balise_passed = kcg_false;
  _78__L407_1_1_1_1_1_1_1_1_1 = BG398_header_B0_Balises426.n_pig -
    BG398_header_B0_Balises426.n_pig;
  if (0 <= _78__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _78__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _78__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG398_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG398_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp20);
    tmp28.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp11);
  }
  tmp28.pig_nom_0 = BG398_header_B0_Balises426.n_pig;
  _L5_1_1_1_1_1_1_1_1 = BG398_header_B1_Balises426.n_pig - tmp28.pig_nom_0;
  if (0 <= _L5_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L5_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_1_1_1_1_1_1_1_1;
  }
  if (tmp28.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) & (tmp40 - tmp41 <=
      tmp28.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp18.header,
      (BaliseTelegramHeader_int_T_TM *) &BG398_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp18);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp28);
  }
  _L17_1_2_1_1_1.pig_nom_0 = tmp28.pig_nom_0;
  _L5_3_1_1_1 = BG397_header_B0_Balises426.n_pig -
    BG397_header_B0_Balises426.n_pig;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG397_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp7.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > tmp7.TrainPos) & (tmp40 - tmp41 <= tmp7.TrainPos);
  if (tmp30) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp7);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG397_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp12);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp7);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp12.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp12.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp12.engineering_BG_location = BG418_Balises426.Pos;
  tmp12.pig_nom_0 = 0;
  tmp12.balise_passed = kcg_false;
  tmp22.pig_nom_0 = BG397_header_B0_Balises426.n_pig;
  tmp37 = BG397_header_B1_Balises426.n_pig - tmp22.pig_nom_0;
  if (0 <= tmp37) {
    tmp36 = (kcg_real) tmp37;
  }
  else {
    tmp36 = (kcg_real) - tmp37;
  }
  if (tmp22.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp31 = (tmp40 + tmp41 > tmp22.TrainPos) & (tmp40 - tmp41 <= tmp22.TrainPos);
  if (tmp31) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp15.header,
      (BaliseTelegramHeader_int_T_TM *) &BG397_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp15);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp22);
  }
  tmp19.pig_nom_0 = tmp22.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (tmp16.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp16.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp16.packets);
  }
  else if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else if (_L21_1_1_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &_L21_1_1_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &_L21_1_1_1_1_1.packets);
  }
  else if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else if (tmp13.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp13.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp13.packets);
  }
  else if (tmp21.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp21.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp21.packets);
  }
  else if (tmp23.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp23.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp23.packets);
  }
  else if (tmp3.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp3.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp3.packets);
  }
  else if (tmp29.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp29.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp29.packets);
  }
  else if (tmp17.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp17.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp17.packets);
  }
  else if (tmp14.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp14.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp14.packets);
  }
  else if (_L17_1_2_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &_L17_1_2_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &_L17_1_2_1_1_1.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp3.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp3.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp3.engineering_BG_location = BG415_Balises426.Pos;
  tmp3.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp3.pig_nom_0 = 0;
  tmp3.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp17.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp17.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp17.engineering_BG_location = BG416_Balises426.Pos;
  tmp17.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp17.pig_nom_0 = 0;
  tmp17.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L21_1_1_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L21_1_1_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L21_1_1_1_1_1.engineering_BG_location = BG417_Balises426.Pos;
  _L21_1_1_1_1_1.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L21_1_1_1_1_1.pig_nom_0 = 0;
  _L21_1_1_1_1_1.balise_passed = kcg_false;
  tmp12.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp4.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp38 = BG419_header_B1_Balises426.n_pig - BG419_header_B1_Balises426.n_pig;
  if (0 <= tmp38) {
    tmp36 = (kcg_real) tmp38;
  }
  else {
    tmp36 = (kcg_real) - tmp38;
  }
  if (BG419_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp33 = (tmp40 + tmp41 > tmp4.TrainPos) & (tmp40 - tmp41 <= tmp4.TrainPos);
  if (tmp33) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG419_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp20);
    tmp11.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp4);
  }
  tmp11.pig_nom_0 = BG419_header_B1_Balises426.n_pig;
  tmp39 = BG419_header_B0_Balises426.n_pig - tmp11.pig_nom_0;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (tmp11.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp34 = (tmp40 + tmp41 > tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (tmp34) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp18.header,
      (BaliseTelegramHeader_int_T_TM *) &BG419_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp18);
    tmp28.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp11);
  }
  tmp28.pig_nom_0 = tmp11.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG414_Balises426.Pos;
  tmp11.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  tmp35 = BG418_header_B0_Balises426.n_pig - BG418_header_B0_Balises426.n_pig;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (BG418_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp12.TrainPos) &
    (tmp40 - tmp41 <= tmp12.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp7.header,
      (BaliseTelegramHeader_int_T_TM *) &BG418_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp7);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp12);
  }
  tmp15.pig_nom_0 = BG418_header_B0_Balises426.n_pig;
  _L3_1_1_1_1_1_1_1_1_1 = BG418_header_B1_Balises426.n_pig - tmp15.pig_nom_0;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp15.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp15.engineering_BG_location * DIM_scale_eng_location_TM;
  _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp15.TrainPos) & (tmp40 - tmp41 <= tmp15.TrainPos);
  if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp15);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG418_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp22);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp15);
  }
  tmp29.pig_nom_0 = tmp15.pig_nom_0;
  _L7_1_1_1_1_1_1_1_1_1 = BG417_header_B1_Balises426.n_pig -
    BG417_header_B1_Balises426.n_pig;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG417_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L21_1_1_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 >
      _L21_1_1_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L21_1_1_1_1_1.TrainPos);
  if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG417_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp24);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &_L21_1_1_1_1_1);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L21_1_1_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L21_1_1_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L21_1_1_1_1_1.engineering_BG_location = BG413_Balises426.Pos;
  _L21_1_1_1_1_1.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L21_1_1_1_1_1.pig_nom_0 = 0;
  _L21_1_1_1_1_1.balise_passed = kcg_false;
  tmp23.pig_nom_0 = BG417_header_B1_Balises426.n_pig;
  _L408_1_1_1_1_1_1_1_1_1 = BG417_header_B0_Balises426.n_pig - tmp23.pig_nom_0;
  if (0 <= _L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp23.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp21.header,
      (BaliseTelegramHeader_int_T_TM *) &BG417_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp21);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp23);
  }
  tmp19.pig_nom_0 = tmp23.pig_nom_0;
  _L407_1_1_1_1_1_1_1_1_1 = BG416_header_B1_Balises426.n_pig -
    BG416_header_B1_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG416_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp17.TrainPos) & (tmp40 - tmp41 <= tmp17.TrainPos);
  if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG416_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp16);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp17);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp16.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp16.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp16.engineering_BG_location = BG412_Balises426.Pos;
  tmp16.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp16.pig_nom_0 = 0;
  tmp16.balise_passed = kcg_false;
  tmp14.pig_nom_0 = BG416_header_B1_Balises426.n_pig;
  noname_1_1_1_1_1_1_1_1_1 = BG416_header_B0_Balises426.n_pig - tmp14.pig_nom_0;
  if (0 <= noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp14.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp14.TrainPos) &
    (tmp40 - tmp41 <= tmp14.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG416_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp13);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp14);
  }
  tmp10.pig_nom_0 = tmp14.pig_nom_0;
  _43__L3_1_1_1_1_1_1_1_1_1 = BG415_header_B0_Balises426.n_pig -
    BG415_header_B0_Balises426.n_pig;
  if (0 <= _43__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _43__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _43__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG415_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp3.engineering_BG_location * DIM_scale_eng_location_TM;
  _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp3.TrainPos) & (tmp40 - tmp41 <= tmp3.TrainPos);
  if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp3);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG415_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &_L17_1_2_1_1_1);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp3);
  }
  tmp20.pig_nom_0 = BG415_header_B0_Balises426.n_pig;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG415_header_B1_Balises426.n_pig -
    tmp20.pig_nom_0;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp20.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = (tmp40 + tmp41 > tmp20.TrainPos) &
    (tmp40 - tmp41 <= tmp20.TrainPos);
  if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp4.header,
      (BaliseTelegramHeader_int_T_TM *) &BG415_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp4);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp20);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp4.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp4.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp4.engineering_BG_location = BG411_Balises426.Pos;
  tmp4.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp4.pig_nom_0 = 0;
  tmp4.balise_passed = kcg_false;
  tmp18.pig_nom_0 = tmp20.pig_nom_0;
  _45__L408_1_1_1_1_1_1_1_1_1 = BG414_header_B0_Balises426.n_pig -
    BG414_header_B0_Balises426.n_pig;
  if (0 <= _45__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _45__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _45__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG414_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp11.TrainPos) &
    (tmp40 - tmp41 <= tmp11.TrainPos);
  if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG414_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp12);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp11);
  }
  tmp7.pig_nom_0 = BG414_header_B0_Balises426.n_pig;
  _46__L407_1_1_1_1_1_1_1_1_1 = BG414_header_B1_Balises426.n_pig -
    tmp7.pig_nom_0;
  if (0 <= _46__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _46__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _46__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp7.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp7.engineering_BG_location * DIM_scale_eng_location_TM;
  _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp7.TrainPos) & (tmp40 - tmp41 <= tmp7.TrainPos);
  if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp7);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG414_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp22);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp7);
  }
  tmp15.pig_nom_0 = tmp7.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp7.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp7.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp7.engineering_BG_location = BG476_Balises426.Pos;
  tmp7.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp7.pig_nom_0 = 0;
  tmp7.balise_passed = kcg_false;
  _L408_1_1_1_1_1_2_1_1_1 = BG413_header_B0_Balises426.n_pig -
    BG413_header_B0_Balises426.n_pig;
  if (0 <= _L408_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_2_1_1_1;
  }
  if (BG413_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L21_1_1_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L21_1_1_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L21_1_1_1_1_1.TrainPos);
  if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG413_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp24);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &_L21_1_1_1_1_1);
  }
  tmp21.pig_nom_0 = BG413_header_B0_Balises426.n_pig;
  _L407_1_1_1_1_1_2_1_1_1 = BG413_header_B1_Balises426.n_pig - tmp21.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (tmp21.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp21.TrainPos) & (tmp40 - tmp41 <= tmp21.TrainPos);
  if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp23.header,
      (BaliseTelegramHeader_int_T_TM *) &BG413_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp23);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp21);
  }
  tmp17.pig_nom_0 = tmp21.pig_nom_0;
  noname_1_1_1_1_1_2_1_1_1 = BG412_header_B1_Balises426.n_pig -
    BG412_header_B1_Balises426.n_pig;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (BG412_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp16.engineering_BG_location * DIM_scale_eng_location_TM;
  _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp16.TrainPos) &
    (tmp40 - tmp41 <= tmp16.TrainPos);
  if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp16);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG412_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp13);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp16);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp16.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp16.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp16.engineering_BG_location = BG410_Balises426.Pos;
  tmp16.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp16.pig_nom_0 = 0;
  tmp16.balise_passed = kcg_false;
  tmp14.pig_nom_0 = BG412_header_B1_Balises426.n_pig;
  _L3_1_1_2_1_1_2_1_1_1 = BG412_header_B0_Balises426.n_pig - tmp14.pig_nom_0;
  if (0 <= _L3_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_2_1_1_2_1_1_1;
  }
  if (tmp14.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG412_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp3);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp14);
  }
  _L17_1_2_1_1_1.pig_nom_0 = tmp14.pig_nom_0;
  _L7_1_1_2_1_1_2_1_1_1 = BG411_header_B1_Balises426.n_pig -
    BG411_header_B1_Balises426.n_pig;
  if (0 <= _L7_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_2_1_1_2_1_1_1;
  }
  if (BG411_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp4.TrainPos) & (tmp40 - tmp41 <= tmp4.TrainPos);
  if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp20.header,
      (BaliseTelegramHeader_int_T_TM *) &BG411_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp20);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp4);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp4.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp4.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp4.engineering_BG_location = BG423_Balises426.Pos;
  tmp4.pig_nom_0 = 0;
  tmp4.balise_passed = kcg_false;
  tmp12.pig_nom_0 = BG411_header_B1_Balises426.n_pig;
  _L408_1_1_2_1_1_2_1_1_1 = BG411_header_B0_Balises426.n_pig - tmp12.pig_nom_0;
  if (0 <= _L408_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_2_1_1_2_1_1_1;
  }
  if (tmp12.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp12.TrainPos) & (tmp40 - tmp41 <= tmp12.TrainPos);
  if (_72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG411_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp11);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp12);
  }
  tmp22.pig_nom_0 = tmp12.pig_nom_0;
  _L407_1_1_2_1_1_2_1_1_1 = BG476_header_B0_Balises426.n_pig -
    BG476_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_2_1_1_2_1_1_1;
  }
  if (BG476_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp7.engineering_BG_location * DIM_scale_eng_location_TM;
  _73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp7.TrainPos) & (tmp40 - tmp41 <= tmp7.TrainPos);
  if (_73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp7);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L21_1_1_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG476_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L21_1_1_1_1_1);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp7);
  }
  tmp24.pig_nom_0 = BG476_header_B0_Balises426.n_pig;
  _85__L407_1_1_1_1_1_1_1_1_1 = BG476_header_B1_Balises426.n_pig -
    tmp24.pig_nom_0;
  if (0 <= _85__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _85__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _85__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp24.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp24.engineering_BG_location * DIM_scale_eng_location_TM;
  _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp24.TrainPos) &
    (tmp40 - tmp41 <= tmp24.TrainPos);
  if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp24);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp23.header,
      (BaliseTelegramHeader_int_T_TM *) &BG476_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp23);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp24);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp23.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp23.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp23.engineering_BG_location = BG422_Balises426.Pos;
  tmp23.pig_nom_0 = 0;
  tmp23.balise_passed = kcg_false;
  tmp21.pig_nom_0 = tmp24.pig_nom_0;
  noname_1_1_2_1_1_1_1_1_1 = BG410_header_B0_Balises426.n_pig -
    BG410_header_B0_Balises426.n_pig;
  if (0 <= noname_1_1_2_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_2_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_2_1_1_1_1_1_1;
  }
  if (BG410_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp16.engineering_BG_location * DIM_scale_eng_location_TM;
  _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp16.TrainPos) & (tmp40 - tmp41 <= tmp16.TrainPos);
  if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp16);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG410_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp13);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp16);
  }
  tmp3.pig_nom_0 = BG410_header_B0_Balises426.n_pig;
  _55__L3_1_1_1_1_1_1_1_1_1 = BG410_header_B1_Balises426.n_pig - tmp3.pig_nom_0;
  if (0 <= _55__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _55__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _55__L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp3.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp3.engineering_BG_location * DIM_scale_eng_location_TM;
  _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp3.TrainPos) & (tmp40 - tmp41 <= tmp3.TrainPos);
  if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp3);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp14.header,
      (BaliseTelegramHeader_int_T_TM *) &BG410_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp14);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp3);
  }
  tmp20.pig_nom_0 = tmp3.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp3.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp3.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp3.engineering_BG_location = BG421_Balises426.Pos;
  tmp3.pig_nom_0 = 0;
  tmp3.balise_passed = kcg_false;
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  if (tmp28.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp28.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp28.packets);
  }
  else if (tmp29.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp29.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp29.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else if (tmp18.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp18.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp18.packets);
  }
  else if (tmp15.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp15.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp15.packets);
  }
  else if (tmp17.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp17.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp17.packets);
  }
  else if (_L17_1_2_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &_L17_1_2_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &_L17_1_2_1_1_1.packets);
  }
  else if (tmp22.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp22.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp22.packets);
  }
  else if (tmp21.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp21.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp21.packets);
  }
  else if (tmp20.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp20.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp20.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L88_2_1_1.BG_Message,
      &_L16_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp10.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp10.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp10.engineering_BG_location = BG437_Balises426.Pos;
  tmp10.pig_nom_0 = 0;
  tmp10.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp20.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp20.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp20.engineering_BG_location = BG420_Balises426.Pos;
  tmp20.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp20.pig_nom_0 = 0;
  tmp20.balise_passed = kcg_false;
  tmp3.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp23.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp4.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _56__L7_1_1_1_1_1_1_1_1_1 = BG423_header_B1_Balises426.n_pig -
    BG423_header_B1_Balises426.n_pig;
  if (0 <= _56__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _56__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _56__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG423_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp4.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp4.TrainPos) & (tmp40 - tmp41 <=
      tmp4.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp4);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG423_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp11);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp4);
  }
  tmp12.pig_nom_0 = BG423_header_B1_Balises426.n_pig;
  _57__L408_1_1_1_1_1_1_1_1_1 = BG423_header_B0_Balises426.n_pig -
    tmp12.pig_nom_0;
  if (0 <= _57__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _57__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _57__L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp12.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > tmp12.TrainPos) & (tmp40 - tmp41 <= tmp12.TrainPos);
  if (tmp30) {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L21_1_1_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG423_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &_L21_1_1_1_1_1);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp12);
  }
  tmp7.pig_nom_0 = tmp12.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp12.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp12.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp12.engineering_BG_location = BG436_Balises426.Pos;
  tmp12.pig_nom_0 = 0;
  tmp12.balise_passed = kcg_false;
  _58__L407_1_1_1_1_1_1_1_1_1 = BG422_header_B0_Balises426.n_pig -
    BG422_header_B0_Balises426.n_pig;
  if (0 <= _58__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _58__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _58__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG422_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp31 = (tmp40 + tmp41 > tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (tmp31) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG422_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp24);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp23);
  }
  tmp16.pig_nom_0 = BG422_header_B0_Balises426.n_pig;
  _59_noname_1_1_1_1_1_1_1_1_1 = BG422_header_B1_Balises426.n_pig -
    tmp16.pig_nom_0;
  if (0 <= _59_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _59_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _59_noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp16.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp16.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp33 = (tmp40 + tmp41 > tmp16.TrainPos) & (tmp40 - tmp41 <= tmp16.TrainPos);
  if (tmp33) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp16);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG422_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp13);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp16);
  }
  tmp14.pig_nom_0 = tmp16.pig_nom_0;
  _64__L3_1_1_1_1_1_1_1_1_1 = BG421_header_B1_Balises426.n_pig -
    BG421_header_B1_Balises426.n_pig;
  if (0 <= _64__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _64__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _64__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG421_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp3.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp34 = (tmp40 + tmp41 > tmp3.TrainPos) & (tmp40 - tmp41 <= tmp3.TrainPos);
  if (tmp34) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp28, &tmp3);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp28.header,
      (BaliseTelegramHeader_int_T_TM *) &BG421_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp3);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG435_Balises426.Pos;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp29.pig_nom_0 = BG421_header_B1_Balises426.n_pig;
  _65__L7_1_1_1_1_1_1_1_1_1 = BG421_header_B0_Balises426.n_pig -
    tmp29.pig_nom_0;
  if (0 <= _65__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _65__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _65__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp29.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp29.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp29.TrainPos) &
    (tmp40 - tmp41 <= tmp29.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp29);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG421_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp22);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp29);
  }
  tmp21.pig_nom_0 = tmp29.pig_nom_0;
  _66__L408_1_1_1_1_1_1_1_1_1 = BG420_header_B0_Balises426.n_pig -
    BG420_header_B0_Balises426.n_pig;
  if (0 <= _66__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _66__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _66__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG420_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp20.engineering_BG_location * DIM_scale_eng_location_TM;
  _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp20.TrainPos) & (tmp40 - tmp41 <= tmp20.TrainPos);
  if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp20);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp19.header,
      (BaliseTelegramHeader_int_T_TM *) &BG420_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp19);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp20);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp19.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp19.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp19.engineering_BG_location = BG434_Balises426.Pos;
  tmp19.pig_nom_0 = 0;
  tmp19.balise_passed = kcg_false;
  tmp18.pig_nom_0 = BG420_header_B0_Balises426.n_pig;
  _67__L407_1_1_1_1_1_1_1_1_1 = BG420_header_B1_Balises426.n_pig -
    tmp18.pig_nom_0;
  if (0 <= _67__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _67__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _67__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp18.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp18.TrainPos) &
    (tmp40 - tmp41 <= tmp18.TrainPos);
  if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG420_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp17);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp18);
  }
  tmp15.pig_nom_0 = tmp18.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (tmp7.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp7.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp7.packets);
  }
  else if (tmp14.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp14.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp14.packets);
  }
  else if (tmp21.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp21.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp21.packets);
  }
  else if (tmp15.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp15.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp15.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp14.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp14.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp14.engineering_BG_location = BG433_Balises426.Pos;
  tmp14.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp14.pig_nom_0 = 0;
  tmp14.balise_passed = kcg_false;
  tmp19.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp12.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp10.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _69_noname_1_1_1_1_1_1_1_1_1 = BG437_header_B1_Balises426.n_pig -
    BG437_header_B1_Balises426.n_pig;
  if (0 <= _69_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _69_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _69_noname_1_1_1_1_1_1_1_1_1;
  }
  if (BG437_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp10.engineering_BG_location * DIM_scale_eng_location_TM;
  _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp10.TrainPos) & (tmp40 - tmp41 <= tmp10.TrainPos);
  if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp10);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG437_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &_L17_1_2_1_1_1);
    tmp11.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp10);
  }
  tmp11.pig_nom_0 = BG437_header_B1_Balises426.n_pig;
  _75__L3_1_1_1_1_1_1_1_1_1 = BG437_header_B0_Balises426.n_pig -
    tmp11.pig_nom_0;
  if (0 <= _75__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _75__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _75__L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp11.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp4.header,
      (BaliseTelegramHeader_int_T_TM *) &BG437_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp4);
    _L21_1_1_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L21_1_1_1_1_1, &tmp11);
  }
  _L21_1_1_1_1_1.pig_nom_0 = tmp11.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG432_Balises426.Pos;
  tmp11.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  _76__L7_1_1_1_1_1_1_1_1_1 = BG436_header_B1_Balises426.n_pig -
    BG436_header_B1_Balises426.n_pig;
  if (0 <= _76__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _76__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _76__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG436_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp12.TrainPos) &
    (tmp40 - tmp41 <= tmp12.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG436_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp24);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp12);
  }
  tmp23.pig_nom_0 = BG436_header_B1_Balises426.n_pig;
  _77__L408_1_1_1_1_1_1_1_1_1 = BG436_header_B0_Balises426.n_pig -
    tmp23.pig_nom_0;
  if (0 <= _77__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _77__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _77__L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp23.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp23.TrainPos) & (tmp40 - tmp41 <= tmp23.TrainPos);
  if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG436_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp13);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp23);
  }
  tmp16.pig_nom_0 = tmp23.pig_nom_0;
  _78__L407_1_1_1_1_1_1_1_1_1 = BG435_header_B0_Balises426.n_pig -
    BG435_header_B0_Balises426.n_pig;
  if (0 <= _78__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _78__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _78__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG435_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = (tmp40 + tmp41 > tmp28.TrainPos) &
    (tmp40 - tmp41 <= tmp28.TrainPos);
  if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG435_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp3);
    tmp22.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp28);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp28.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp28.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp28.engineering_BG_location = BG431_Balises426.Pos;
  tmp28.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp28.pig_nom_0 = 0;
  tmp28.balise_passed = kcg_false;
  tmp22.pig_nom_0 = BG435_header_B0_Balises426.n_pig;
  _L5_1_1_1_1_1_1_1_1 = BG435_header_B1_Balises426.n_pig - tmp22.pig_nom_0;
  if (0 <= _L5_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L5_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_1_1_1_1_1_1_1_1;
  }
  if (tmp22.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp22.TrainPos) &
    (tmp40 - tmp41 <= tmp22.TrainPos);
  if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG435_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp29);
    tmp20.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp20, &tmp22);
  }
  tmp20.pig_nom_0 = tmp22.pig_nom_0;
  _L5_3_1_1_1 = BG434_header_B0_Balises426.n_pig -
    BG434_header_B0_Balises426.n_pig;
  if (0 <= _L5_3_1_1_1) {
    tmp36 = (kcg_real) _L5_3_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L5_3_1_1_1;
  }
  if (BG434_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp19.TrainPos) & (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG434_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp17);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp19);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp17.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp17.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp17.engineering_BG_location = BG430_Balises426.Pos;
  tmp17.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp17.pig_nom_0 = 0;
  tmp17.balise_passed = kcg_false;
  tmp18.pig_nom_0 = BG434_header_B0_Balises426.n_pig;
  tmp37 = BG434_header_B1_Balises426.n_pig - tmp18.pig_nom_0;
  if (0 <= tmp37) {
    tmp36 = (kcg_real) tmp37;
  }
  else {
    tmp36 = (kcg_real) - tmp37;
  }
  if (tmp18.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp18.TrainPos) &
    (tmp40 - tmp41 <= tmp18.TrainPos);
  if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp21.header,
      (BaliseTelegramHeader_int_T_TM *) &BG434_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp21);
    tmp15.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp15, &tmp18);
  }
  tmp15.pig_nom_0 = tmp18.pig_nom_0;
  tmp38 = BG433_header_B1_Balises426.n_pig - BG433_header_B1_Balises426.n_pig;
  if (0 <= tmp38) {
    tmp36 = (kcg_real) tmp38;
  }
  else {
    tmp36 = (kcg_real) - tmp38;
  }
  if (BG433_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp7.header,
      (BaliseTelegramHeader_int_T_TM *) &BG433_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp7);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp14);
  }
  tmp10.pig_nom_0 = BG433_header_B1_Balises426.n_pig;
  tmp39 = BG433_header_B0_Balises426.n_pig - tmp10.pig_nom_0;
  if (0 <= tmp39) {
    tmp36 = (kcg_real) tmp39;
  }
  else {
    tmp36 = (kcg_real) - tmp39;
  }
  if (tmp10.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp10.engineering_BG_location * DIM_scale_eng_location_TM;
  _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp10.TrainPos) &
    (tmp40 - tmp41 <= tmp10.TrainPos);
  if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp10);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG433_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &_L17_1_2_1_1_1);
    tmp4.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp4, &tmp10);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L17_1_2_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L17_1_2_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L17_1_2_1_1_1.engineering_BG_location = BG477_Balises426.Pos;
  _L17_1_2_1_1_1.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L17_1_2_1_1_1.pig_nom_0 = 0;
  _L17_1_2_1_1_1.balise_passed = kcg_false;
  tmp4.pig_nom_0 = tmp10.pig_nom_0;
  tmp35 = BG432_header_B1_Balises426.n_pig - BG432_header_B1_Balises426.n_pig;
  if (0 <= tmp35) {
    tmp36 = (kcg_real) tmp35;
  }
  else {
    tmp36 = (kcg_real) - tmp35;
  }
  if (BG432_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp11.TrainPos) & (tmp40 - tmp41 <= tmp11.TrainPos);
  if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG432_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp24);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp11);
  }
  tmp12.pig_nom_0 = BG432_header_B1_Balises426.n_pig;
  _L3_1_1_1_1_1_1_1_1_1 = BG432_header_B0_Balises426.n_pig - tmp12.pig_nom_0;
  if (0 <= _L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp12.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp12.TrainPos) & (tmp40 - tmp41 <= tmp12.TrainPos);
  if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG432_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp13);
    tmp23.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp23, &tmp12);
  }
  tmp23.pig_nom_0 = tmp12.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp12.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp12.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp12.engineering_BG_location = BG429_Balises426.Pos;
  tmp12.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp12.pig_nom_0 = 0;
  tmp12.balise_passed = kcg_false;
  _L7_1_1_1_1_1_1_1_1_1 = BG431_header_B0_Balises426.n_pig -
    BG431_header_B0_Balises426.n_pig;
  if (0 <= _L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG431_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp28.engineering_BG_location * DIM_scale_eng_location_TM;
  _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp28.TrainPos) & (tmp40 - tmp41 <= tmp28.TrainPos);
  if (_72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp28);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG431_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp3);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp28);
  }
  tmp29.pig_nom_0 = BG431_header_B0_Balises426.n_pig;
  _L408_1_1_1_1_1_1_1_1_1 = BG431_header_B1_Balises426.n_pig - tmp29.pig_nom_0;
  if (0 <= _L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_1_1_1_1;
  }
  if (tmp29.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp29.engineering_BG_location * DIM_scale_eng_location_TM;
  _73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp29.TrainPos) & (tmp40 - tmp41 <= tmp29.TrainPos);
  if (_73_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp29);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG431_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp22);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp29);
  }
  tmp19.pig_nom_0 = tmp29.pig_nom_0;
  _L407_1_1_1_1_1_1_1_1_1 = BG430_header_B0_Balises426.n_pig -
    BG430_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG430_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  _81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp17.TrainPos) &
    (tmp40 - tmp41 <= tmp17.TrainPos);
  if (_81_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp21.header,
      (BaliseTelegramHeader_int_T_TM *) &BG430_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp21);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp17);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp21.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp21.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp21.engineering_BG_location = BG428_Balises426.Pos;
  tmp21.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp21.pig_nom_0 = 0;
  tmp21.balise_passed = kcg_false;
  tmp18.pig_nom_0 = BG430_header_B0_Balises426.n_pig;
  noname_1_1_1_1_1_1_1_1_1 = BG430_header_B1_Balises426.n_pig - tmp18.pig_nom_0;
  if (0 <= noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp18.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp18.engineering_BG_location * DIM_scale_eng_location_TM;
  _82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp18.TrainPos) & (tmp40 - tmp41 <= tmp18.TrainPos);
  if (_82_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp18);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp14.header,
      (BaliseTelegramHeader_int_T_TM *) &BG430_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp14);
    tmp7.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp7, &tmp18);
  }
  tmp7.pig_nom_0 = tmp18.pig_nom_0;
  _43__L3_1_1_1_1_1_1_1_1_1 = BG477_header_B0_Balises426.n_pig -
    BG477_header_B0_Balises426.n_pig;
  if (0 <= _43__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _43__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _43__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG477_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (_83_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp10.header,
      (BaliseTelegramHeader_int_T_TM *) &BG477_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp10);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L17_1_2_1_1_1);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &_L17_1_2_1_1_1.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &_L17_1_2_1_1_1.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  _L17_1_2_1_1_1.engineering_BG_location = BG427_Balises426.Pos;
  _L17_1_2_1_1_1.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _L17_1_2_1_1_1.pig_nom_0 = 0;
  _L17_1_2_1_1_1.balise_passed = kcg_false;
  tmp24.pig_nom_0 = BG477_header_B0_Balises426.n_pig;
  _44__L7_1_1_1_1_1_1_1_1_1 = BG477_header_B1_Balises426.n_pig -
    tmp24.pig_nom_0;
  if (0 <= _44__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _44__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _44__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp24.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp24.engineering_BG_location * DIM_scale_eng_location_TM;
  _L96_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp24.TrainPos) & (tmp40 - tmp41 <=
      tmp24.TrainPos);
  if (_L96_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp24);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG477_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp11);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp24);
  }
  tmp13.pig_nom_0 = tmp24.pig_nom_0;
  _45__L408_1_1_1_1_1_1_1_1_1 = BG429_header_B1_Balises426.n_pig -
    BG429_header_B1_Balises426.n_pig;
  if (0 <= _45__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _45__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _45__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG429_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp12.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp30 = (tmp40 + tmp41 > tmp12.TrainPos) & (tmp40 - tmp41 <= tmp12.TrainPos);
  if (tmp30) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp12);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG429_header_B1_Balises426);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp12);
  }
  tmp3.pig_nom_0 = BG429_header_B1_Balises426.n_pig;
  _46__L407_1_1_1_1_1_1_1_1_1 = BG429_header_B0_Balises426.n_pig -
    tmp3.pig_nom_0;
  if (0 <= _46__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _46__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _46__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp3.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp3.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp31 = (tmp40 + tmp41 > tmp3.TrainPos) & (tmp40 - tmp41 <= tmp3.TrainPos);
  if (tmp31) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp22, &tmp3);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp22.header,
      (BaliseTelegramHeader_int_T_TM *) &BG429_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp22);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp3);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp22.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp22.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp22.engineering_BG_location = BG426_Balises426.Pos;
  tmp22.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp22.pig_nom_0 = 0;
  tmp22.balise_passed = kcg_false;
  tmp29.pig_nom_0 = tmp3.pig_nom_0;
  _L408_1_1_1_1_1_2_1_1_1 = BG428_header_B0_Balises426.n_pig -
    BG428_header_B0_Balises426.n_pig;
  if (0 <= _L408_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_1_1_1_2_1_1_1;
  }
  if (BG428_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp33 = (tmp40 + tmp41 > tmp21.TrainPos) & (tmp40 - tmp41 <= tmp21.TrainPos);
  if (tmp33) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG428_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp17);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp21);
  }
  tmp14.pig_nom_0 = BG428_header_B0_Balises426.n_pig;
  _L407_1_1_1_1_1_2_1_1_1 = BG428_header_B1_Balises426.n_pig - tmp14.pig_nom_0;
  if (0 <= _L407_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_1_1_1_2_1_1_1;
  }
  if (tmp14.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  tmp34 = (tmp40 + tmp41 > tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (tmp34) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp18.header,
      (BaliseTelegramHeader_int_T_TM *) &BG428_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp18);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp14);
  }
  tmp10.pig_nom_0 = tmp14.pig_nom_0;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp14.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp14.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp14.engineering_BG_location = BG425_Balises426.Pos;
  tmp14.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp14.pig_nom_0 = 0;
  tmp14.balise_passed = kcg_false;
  noname_1_1_1_1_1_2_1_1_1 = BG427_header_B1_Balises426.n_pig -
    BG427_header_B1_Balises426.n_pig;
  if (0 <= noname_1_1_1_1_1_2_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_1_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_1_1_1_2_1_1_1;
  }
  if (BG427_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG427_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp11);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L17_1_2_1_1_1);
  }
  tmp24.pig_nom_0 = BG427_header_B1_Balises426.n_pig;
  _L3_1_1_2_1_1_2_1_1_1 = BG427_header_B0_Balises426.n_pig - tmp24.pig_nom_0;
  if (0 <= _L3_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L3_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L3_1_1_2_1_1_2_1_1_1;
  }
  if (tmp24.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp24.engineering_BG_location * DIM_scale_eng_location_TM;
  _42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp24.TrainPos) & (tmp40 - tmp41 <= tmp24.TrainPos);
  if (_42_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp24);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp12.header,
      (BaliseTelegramHeader_int_T_TM *) &BG427_header_B0_Balises426);
    tmp12.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp12, &tmp24);
  }
  tmp12.pig_nom_0 = tmp24.pig_nom_0;
  _L7_1_1_2_1_1_2_1_1_1 = BG426_header_B1_Balises426.n_pig -
    BG426_header_B1_Balises426.n_pig;
  if (0 <= _L7_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L7_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L7_1_1_2_1_1_2_1_1_1;
  }
  if (BG426_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp22.TrainPos) &
    (tmp40 - tmp41 <= tmp22.TrainPos);
  if (IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG426_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp3);
    tmp21.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp22);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp22.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp22.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp22.engineering_BG_location = BG424_Balises426.Pos;
  tmp22.TrainPos = _L16_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp22.pig_nom_0 = 0;
  tmp22.balise_passed = kcg_false;
  tmp21.pig_nom_0 = BG426_header_B1_Balises426.n_pig;
  _L408_1_1_2_1_1_2_1_1_1 = BG426_header_B0_Balises426.n_pig - tmp21.pig_nom_0;
  if (0 <= _L408_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L408_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L408_1_1_2_1_1_2_1_1_1;
  }
  if (tmp21.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  _50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp21.TrainPos) & (tmp40 - tmp41 <= tmp21.TrainPos);
  if (_50_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp17.header,
      (BaliseTelegramHeader_int_T_TM *) &BG426_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp17);
    tmp18.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp18, &tmp21);
  }
  tmp18.pig_nom_0 = tmp21.pig_nom_0;
  _L407_1_1_2_1_1_2_1_1_1 = BG425_header_B0_Balises426.n_pig -
    BG425_header_B0_Balises426.n_pig;
  if (0 <= _L407_1_1_2_1_1_2_1_1_1) {
    tmp36 = (kcg_real) _L407_1_1_2_1_1_2_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _L407_1_1_2_1_1_2_1_1_1;
  }
  if (BG425_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp14.engineering_BG_location * DIM_scale_eng_location_TM;
  _51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp14.TrainPos) & (tmp40 - tmp41 <= tmp14.TrainPos);
  if (_51_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp11, &tmp14);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp11.header,
      (BaliseTelegramHeader_int_T_TM *) &BG425_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp11);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp14);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp11.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp11.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp11.engineering_BG_location = BG441_Balises426.Pos;
  tmp11.pig_nom_0 = 0;
  tmp11.balise_passed = kcg_false;
  _L17_1_2_1_1_1.pig_nom_0 = BG425_header_B0_Balises426.n_pig;
  _85__L407_1_1_1_1_1_1_1_1_1 = BG425_header_B1_Balises426.n_pig -
    _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= _85__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _85__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _85__L407_1_1_1_1_1_1_1_1_1;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG425_header_B1_Balises426);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &_L17_1_2_1_1_1);
  }
  tmp24.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  noname_1_1_2_1_1_1_1_1_1 = BG424_header_B0_Balises426.n_pig -
    BG424_header_B0_Balises426.n_pig;
  if (0 <= noname_1_1_2_1_1_1_1_1_1) {
    tmp36 = (kcg_real) noname_1_1_2_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - noname_1_1_2_1_1_1_1_1_1;
  }
  if (BG424_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp22.engineering_BG_location * DIM_scale_eng_location_TM;
  _52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp22.TrainPos) & (tmp40 - tmp41 <= tmp22.TrainPos);
  if (_52_else_clock_1_1_1_1_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &tmp22);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG424_header_B0_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp3);
    tmp17.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp17, &tmp22);
  }
  tmp17.pig_nom_0 = BG424_header_B0_Balises426.n_pig;
  _55__L3_1_1_1_1_1_1_1_1_1 = BG424_header_B1_Balises426.n_pig -
    tmp17.pig_nom_0;
  if (0 <= _55__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _55__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _55__L3_1_1_1_1_1_1_1_1_1;
  }
  if (tmp17.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp17.engineering_BG_location * DIM_scale_eng_location_TM;
  IfBlock1_clock_1_1_1_2_1_1_2_1_1_1 = (tmp40 + tmp41 > tmp17.TrainPos) &
    (tmp40 - tmp41 <= tmp17.TrainPos);
  if (IfBlock1_clock_1_1_1_2_1_1_2_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp21, &tmp17);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp21.header,
      (BaliseTelegramHeader_int_T_TM *) &BG424_header_B1_Balises426);
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp21);
    tmp14.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp14, &tmp17);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp21.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp21.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp21.engineering_BG_location = BG440_Balises426.Pos;
  tmp21.pig_nom_0 = 0;
  tmp21.balise_passed = kcg_false;
  tmp14.pig_nom_0 = tmp17.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L88_2_1_1, &_L16_2_1_1);
  if (_L21_1_1_1_1_1.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &_L21_1_1_1_1_1.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &_L21_1_1_1_1_1.packets);
  }
  else if (tmp16.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp16.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp16.packets);
  }
  else if (tmp20.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp20.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp20.packets);
  }
  else if (tmp15.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp15.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp15.packets);
  }
  else if (tmp4.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp4.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp4.packets);
  }
  else if (tmp23.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp23.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp23.packets);
  }
  else if (tmp19.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp19.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp19.packets);
  }
  else if (tmp7.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp7.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp7.packets);
  }
  else if (tmp13.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp13.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp13.packets);
  }
  else if (tmp29.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp29.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp29.packets);
  }
  else if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else if (tmp12.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp12.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp12.packets);
  }
  else if (tmp18.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp18.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp18.packets);
  }
  else if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else if (tmp14.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L88_2_1_1.BG_Message.Header,
      &tmp14.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L88_2_1_1.BG_Message.Messages,
      &tmp14.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L88_2_1_1.BG_Message,
      &_L16_2_1_1.BG_Message);
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp15.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp15.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp15.engineering_BG_location = BG438_Balises426.Pos;
  tmp15.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp15.pig_nom_0 = 0;
  tmp15.balise_passed = kcg_false;
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &tmp23.header,
    (BaliseTelegramHeader_int_T_TM *) &DEFAULT_TM_BaliseHeaderInt_TM);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &tmp23.packets,
    (CompressedPackets_T_Common_Types_Pkg *) &DEFAULT_Packets_TM);
  tmp23.engineering_BG_location = BG439_Balises426.Pos;
  tmp23.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp23.pig_nom_0 = 0;
  tmp23.balise_passed = kcg_false;
  tmp21.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  tmp11.TrainPos = _L88_2_1_1.TrainPosRaw.TrainPosCalibrated;
  _56__L7_1_1_1_1_1_1_1_1_1 = BG441_header_B1_Balises426.n_pig -
    BG441_header_B1_Balises426.n_pig;
  if (0 <= _56__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _56__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _56__L7_1_1_1_1_1_1_1_1_1;
  }
  if (BG441_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp11.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp11.TrainPos) &
    (tmp40 - tmp41 <= tmp11.TrainPos);
  if (else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp11);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L17_1_2_1_1_1.header,
      (BaliseTelegramHeader_int_T_TM *) &BG441_header_B1_Balises426);
    _L17_1_2_1_1_1.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&_L17_1_2_1_1_1, &tmp11);
  }
  _L17_1_2_1_1_1.pig_nom_0 = BG441_header_B1_Balises426.n_pig;
  _57__L408_1_1_1_1_1_1_1_1_1 = BG441_header_B0_Balises426.n_pig -
    _L17_1_2_1_1_1.pig_nom_0;
  if (0 <= _57__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _57__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _57__L408_1_1_1_1_1_1_1_1_1;
  }
  if (_L17_1_2_1_1_1.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      _L17_1_2_1_1_1.engineering_BG_location * DIM_scale_eng_location_TM;
  _53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      _L17_1_2_1_1_1.TrainPos) & (tmp40 - tmp41 <= _L17_1_2_1_1_1.TrainPos);
  if (_53_else_clock_1_1_1_2_1_1_2_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &_L17_1_2_1_1_1);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp3.header,
      (BaliseTelegramHeader_int_T_TM *) &BG441_header_B0_Balises426);
    tmp3.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp3, &_L17_1_2_1_1_1);
  }
  tmp3.pig_nom_0 = _L17_1_2_1_1_1.pig_nom_0;
  _58__L407_1_1_1_1_1_1_1_1_1 = BG440_header_B0_Balises426.n_pig -
    BG440_header_B0_Balises426.n_pig;
  if (0 <= _58__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _58__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _58__L407_1_1_1_1_1_1_1_1_1;
  }
  if (BG440_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp21.engineering_BG_location * DIM_scale_eng_location_TM;
  else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 > tmp21.TrainPos) &
    (tmp40 - tmp41 <= tmp21.TrainPos);
  if (else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp21);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp29.header,
      (BaliseTelegramHeader_int_T_TM *) &BG440_header_B0_Balises426);
    tmp29.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp29, &tmp21);
  }
  tmp29.pig_nom_0 = BG440_header_B0_Balises426.n_pig;
  _59_noname_1_1_1_1_1_1_1_1_1 = BG440_header_B1_Balises426.n_pig -
    tmp29.pig_nom_0;
  if (0 <= _59_noname_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _59_noname_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _59_noname_1_1_1_1_1_1_1_1_1;
  }
  if (tmp29.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp29.engineering_BG_location * DIM_scale_eng_location_TM;
  _54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp29.TrainPos) & (tmp40 - tmp41 <= tmp29.TrainPos);
  if (_54_else_clock_1_1_1_2_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp24.header,
      (BaliseTelegramHeader_int_T_TM *) &BG440_header_B1_Balises426);
    tmp24.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp24, &tmp29);
  }
  tmp24.pig_nom_0 = tmp29.pig_nom_0;
  _64__L3_1_1_1_1_1_1_1_1_1 = BG439_header_B1_Balises426.n_pig -
    BG439_header_B1_Balises426.n_pig;
  if (0 <= _64__L3_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _64__L3_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _64__L3_1_1_1_1_1_1_1_1_1;
  }
  if (BG439_header_B1_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp23.engineering_BG_location * DIM_scale_eng_location_TM;
  _61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1 = (tmp40 + tmp41 > tmp23.TrainPos) &
    (tmp40 - tmp41 <= tmp23.TrainPos);
  if (_61_IfBlock1_clock_1_1_1_1_1_1_1_1_1_1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp23);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp19.header,
      (BaliseTelegramHeader_int_T_TM *) &BG439_header_B1_Balises426);
    tmp19.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp19, &tmp23);
  }
  tmp19.pig_nom_0 = BG439_header_B1_Balises426.n_pig;
  _65__L7_1_1_1_1_1_1_1_1_1 = BG439_header_B0_Balises426.n_pig -
    tmp19.pig_nom_0;
  if (0 <= _65__L7_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _65__L7_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _65__L7_1_1_1_1_1_1_1_1_1;
  }
  if (tmp19.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp19.engineering_BG_location * DIM_scale_eng_location_TM;
  _62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp19.TrainPos) & (tmp40 - tmp41 <= tmp19.TrainPos);
  if (_62_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp19);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp16.header,
      (BaliseTelegramHeader_int_T_TM *) &BG439_header_B0_Balises426);
    tmp16.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp16, &tmp19);
  }
  tmp16.pig_nom_0 = tmp19.pig_nom_0;
  _66__L408_1_1_1_1_1_1_1_1_1 = BG438_header_B0_Balises426.n_pig -
    BG438_header_B0_Balises426.n_pig;
  if (0 <= _66__L408_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _66__L408_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _66__L408_1_1_1_1_1_1_1_1_1;
  }
  if (BG438_header_B0_Balises426.n_pig == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp15.engineering_BG_location * DIM_scale_eng_location_TM;
  _63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp15.TrainPos) & (tmp40 - tmp41 <= tmp15.TrainPos);
  if (_63_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp15);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp13.header,
      (BaliseTelegramHeader_int_T_TM *) &BG438_header_B0_Balises426);
    tmp13.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp13, &tmp15);
  }
  tmp13.pig_nom_0 = BG438_header_B0_Balises426.n_pig;
  _67__L407_1_1_1_1_1_1_1_1_1 = BG438_header_B1_Balises426.n_pig -
    tmp13.pig_nom_0;
  if (0 <= _67__L407_1_1_1_1_1_1_1_1_1) {
    tmp36 = (kcg_real) _67__L407_1_1_1_1_1_1_1_1_1;
  }
  else {
    tmp36 = (kcg_real) - _67__L407_1_1_1_1_1_1_1_1_1;
  }
  if (tmp13.pig_nom_0 == 0) {
    tmp25 = 1.0;
  }
  else {
    tmp25 = _L5_1_1_1_1_1_1_1;
  }
  tmp40 = tmp36 * (tmp25 * Distance_Balises_in_BG_InfraLib) + (kcg_real)
      tmp13.engineering_BG_location * DIM_scale_eng_location_TM;
  _72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1 = (tmp40 + tmp41 >
      tmp13.TrainPos) & (tmp40 - tmp41 <= tmp13.TrainPos);
  if (_72_else_clock_1_1_1_1_1_1_1_1_1_1_IfBlock1) {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp13);
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &tmp10.header,
      (BaliseTelegramHeader_int_T_TM *) &BG438_header_B1_Balises426);
    tmp10.balise_passed = kcg_true;
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&tmp10, &tmp13);
  }
  tmp10.pig_nom_0 = tmp13.pig_nom_0;
  kcg_copy_TrackSectionData_T_InfraLib(&_L16_2_1_1, &_L88_2_1_1);
  if (tmp3.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp3.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp3.packets);
  }
  else if (tmp24.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp24.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp24.packets);
  }
  else if (tmp16.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp16.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp16.packets);
  }
  else if (tmp10.balise_passed) {
    kcg_copy_BaliseTelegramHeader_int_T_TM(
      &_L16_2_1_1.BG_Message.Header,
      &tmp10.header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L16_2_1_1.BG_Message.Messages,
      &tmp10.packets);
  }
  else {
    kcg_copy_CompressedBaliseMessage_TM(
      &_L16_2_1_1.BG_Message,
      &_L88_2_1_1.BG_Message);
  }
  kcg_copy_CompressedBaliseMessage_TM(&BG_data, &_L16_2_1_1.BG_Message);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriveAllBalisesRaspberry_Internal_Tests.c
** Generation date: 2015-08-20T18:26:06
*************************************************************$ */

