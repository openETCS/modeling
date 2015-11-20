/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
void recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_in */ refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBGs_out */ refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
  static positionedBG_T_TrainPosition_Types_Pck op_call;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr */
  static kcg_bool ck_every;
  static LocWithInAcc_T_Obu_BasicTypes_Pkg noname;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BGin_is_refBG */
  static kcg_bool BGin_is_refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::recalculateSubsequentBGs */
  static kcg_bool recalculateSubsequentBGs;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refLocation */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg refLocation;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::refBG */
  static positionedBG_T_TrainPosition_Types_Pck refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::prevLinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::prevUnlinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::relocatedBG */
  static positionedBG_T_TrainPosition_Types_Pck relocatedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::BG_loc_inacc */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg BG_loc_inacc;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::sumOfBestDistances */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::d_prevLinkedBG_refBG */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg d_prevLinkedBG_refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L36 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L36;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L59 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L59;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L52 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L52;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L51 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L51;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L61 */
  static kcg_bool _L61;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L71 */
  static positionedBG_T_TrainPosition_Types_Pck _L71;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L67 */
  static kcg_bool _L67;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L64 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L64;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L75 */
  static positionedBG_T_TrainPosition_Types_Pck _L75;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L76 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L76;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L77 */
  static kcg_bool _L77;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L78 */
  static positionedBG_T_TrainPosition_Types_Pck _L78;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L80 */
  static kcg_bool _L80;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L81 */
  static positionedBG_T_TrainPosition_Types_Pck _L81;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L82 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L82;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L83 */
  static kcg_bool _L83;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L84 */
  static kcg_bool _L84;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L85 */
  static positionedBG_T_TrainPosition_Types_Pck _L85;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L86 */
  static positionedBG_T_TrainPosition_Types_Pck _L86;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L87 */
  static kcg_bool _L87;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L88 */
  static passedBG_T_BG_Types_Pkg _L88;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L89 */
  static kcg_bool _L89;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L90 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L90;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L92 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L92;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L93 */
  static passedBG_T_BG_Types_Pkg _L93;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L94 */
  static kcg_bool _L94;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L95 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L95;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L96 */
  static kcg_bool _L96;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L97 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L97;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L98 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L98;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L99 */
  static positionedBG_T_TrainPosition_Types_Pck _L99;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L105 */
  static Q_LINK _L105;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L106 */
  static kcg_bool _L106;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L107 */
  static Q_LINK _L107;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L108 */
  static Q_LINK _L108;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L109 */
  static kcg_bool _L109;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L110 */
  static Q_LINK _L110;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L111 */
  static positionedBG_T_TrainPosition_Types_Pck _L111;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L113 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L113;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L112 */
  static positionedBG_T_TrainPosition_Types_Pck _L112;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L144 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L144;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L143 */
  static positionedBG_T_TrainPosition_Types_Pck _L143;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L142 */
  static positionedBG_T_TrainPosition_Types_Pck _L142;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L141 */
  static Q_LINK _L141;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L140 */
  static kcg_bool _L140;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L139 */
  static Q_LINK _L139;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L138 */
  static Q_LINK _L138;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L137 */
  static kcg_bool _L137;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L136 */
  static Q_LINK _L136;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L134 */
  static positionedBG_T_TrainPosition_Types_Pck _L134;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L133 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L133;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L132 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L132;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L131 */
  static kcg_bool _L131;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L130 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L130;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L129 */
  static kcg_bool _L129;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L128 */
  static passedBG_T_BG_Types_Pkg _L128;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L127 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L127;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L126 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L126;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L125 */
  static kcg_bool _L125;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L124 */
  static passedBG_T_BG_Types_Pkg _L124;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L123 */
  static kcg_bool _L123;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L122 */
  static positionedBG_T_TrainPosition_Types_Pck _L122;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L121 */
  static positionedBG_T_TrainPosition_Types_Pck _L121;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L120 */
  static kcg_bool _L120;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L119 */
  static kcg_bool _L119;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L118 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L118;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L117 */
  static positionedBG_T_TrainPosition_Types_Pck _L117;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L116 */
  static kcg_bool _L116;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L115 */
  static positionedBG_T_TrainPosition_Types_Pck _L115;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L114 */
  static kcg_bool _L114;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L148 */
  static positionedBG_T_TrainPosition_Types_Pck _L148;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L149 */
  static positionedBG_T_TrainPosition_Types_Pck _L149;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L152 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L152;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L154 */
  static positionedBG_T_TrainPosition_Types_Pck _L154;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L155 */
  static positionedBG_T_TrainPosition_Types_Pck _L155;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L156 */
  static positionedBG_T_TrainPosition_Types_Pck _L156;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L157 */
  static kcg_bool _L157;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L158 */
  static kcg_bool _L158;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L159 */
  static kcg_bool _L159;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L160 */
  static kcg_bool _L160;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L161 */
  static kcg_bool _L161;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L162 */
  static positionedBG_T_TrainPosition_Types_Pck _L162;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L163 */
  static positionedBG_T_TrainPosition_Types_Pck _L163;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L164 */
  static kcg_bool _L164;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L165 */
  static kcg_bool _L165;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L167 */
  static positionedBG_T_TrainPosition_Types_Pck _L167;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L168 */
  static positionedBG_T_TrainPosition_Types_Pck _L168;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L169 */
  static kcg_bool _L169;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L172 */
  static positionedBG_T_TrainPosition_Types_Pck _L172;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L173 */
  static kcg_bool _L173;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L174 */
  static positionedBG_T_TrainPosition_Types_Pck _L174;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L175 */
  static positionedBG_T_TrainPosition_Types_Pck _L175;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L62 */
  static positionedBG_T_TrainPosition_Types_Pck _L62;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L74 */
  static positionedBG_T_TrainPosition_Types_Pck _L74;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L147 */
  static positionedBG_T_TrainPosition_Types_Pck _L147;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L188 */
  static positionedBG_T_TrainPosition_Types_Pck _L188;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L197 */
  static trainProperties_T_TrainPosition_Types_Pck _L197;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L216 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L216;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L217 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L217;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L218 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L218;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L219 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L219;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L220 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L220;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L229 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L229;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L230 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L230;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L236 */
  static kcg_bool _L236;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L240 */
  static Q_LINK _L240;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L239 */
  static kcg_bool _L239;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L238 */
  static Q_LINK _L238;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L237 */
  static positionedBG_T_TrainPosition_Types_Pck _L237;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L243 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L243;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L244 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L244;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L253 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L253;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L254 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L254;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L255 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L255;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L256 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L256;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L257 */
  static kcg_bool _L257;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L258 */
  static kcg_bool _L258;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L259 */
  static kcg_bool _L259;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L260 */
  static kcg_bool _L260;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L265 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L265;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L267 */
  static positionedBG_T_TrainPosition_Types_Pck _L267;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L268 */
  static kcg_bool _L268;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L269 */
  static passedBG_T_BG_Types_Pkg _L269;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L270 */
  static kcg_bool _L270;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L271 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L271;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L273 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L273;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L274 */
  static positionedBG_T_TrainPosition_Types_Pck _L274;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L275 */
  static passedBG_T_BG_Types_Pkg _L275;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L276 */
  static kcg_bool _L276;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L277 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L277;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L278 */
  static kcg_bool _L278;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L279 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L279;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L280 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L280;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L281 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L281;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L282 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L282;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L285 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L285;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L286 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L286;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L287 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L287;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L288 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L288;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L289 */
  static positionedBG_T_TrainPosition_Types_Pck _L289;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L290 */
  static positionedBG_T_TrainPosition_Types_Pck _L290;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L291 */
  static positionedBG_T_TrainPosition_Types_Pck _L291;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L292 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L292;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L293 */
  static trainProperties_T_TrainPosition_Types_Pck _L293;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L294 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L294;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L296 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L296;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L297 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L297;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L300 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L300;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L301 */
  static positionedBG_T_TrainPosition_Types_Pck _L301;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L303 */
  static kcg_bool _L303;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L302 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L302;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L304 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L304;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr::_L305 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L305;
  
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L152,
    refBGs_in);
  _L158 = _L152.recalculate;
  ck_every = _L158;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L147, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L290, &_L152.prevLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L291, &_L152.refBG);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L64,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L71, &_L64.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L74, BG_in);
  _L67 = /* 3 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L71,
      &_L74);
  BGin_is_refBG = _L67;
  _L236 = BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L237, BG_in);
  _L259 = _L237.valid;
  _L257 = _L236 & _L259;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L244,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  _L77 = BGin_is_refBG;
  _L107 = Q_LINK_Linked;
  _L164 = _L71.valid;
  _L165 = _L71.infoFromLinking.valid;
  _L169 = _L164 & _L165;
  _L61 = BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L188, BG_in);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L197, trainProperties);
  /* calculateLocalBGInaccuracies */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L188,
    &_L197,
    &_L220);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&BG_loc_inacc, &_L220);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L216, &BG_loc_inacc);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L217,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L62, BG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L59, &_L62.location);
  _L51 = _L59.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L218, &_L217);
  if (kcg_true) {
    _L218.nominal = _L51;
  }
  /* 6 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L216, &_L218, &_L219);
  /* 1 */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &_L219,
    &_L59,
    &_L302,
    &_L303);
  /* 31 */ if (_L303) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L304, &_L302);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L304, &_L59);
  }
  /* 14 */ if (_L61) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L52, &_L304);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L52, &_L59);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&refLocation, &_L52);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L76, &refLocation);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L75, &_L71);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L75.location, &_L76);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L167, &_L75);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_L167.infoFromLinking.expectedLocation,
      &_L76);
  }
  /* 25 */ if (_L169) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L168, &_L167);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L168, &_L75);
  }
  /* 24 */ if (_L67) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L163, &_L168);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L163, &_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&refBG, &_L163);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L78, &refBG);
  _L105 = _L78.q_link;
  _L106 = _L107 == _L105;
  _L83 = !_L106;
  _L84 = _L77 & _L83;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L93, &_L78.infoFromPassing);
  _L94 = _L93.valid;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L82,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L86, &_L82.prevLinkedBG);
  _L87 = _L86.valid;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L88, &_L86.infoFromPassing);
  _L89 = _L88.valid;
  _L96 = _L84 & _L94 & _L87 & _L89;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L95,
    &_L93.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L90,
    &_L88.BG_Header.bgPosition.odo);
  /* 2 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L95, &_L90, &_L92);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L294,
    &_L88.BG_Header.BG_centerDetectionInaccuraccuracies);
  /* 9 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L92, &_L294, &_L297);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L286,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  /* 30 */ if (_L96) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L285, &_L297);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L285, &_L286);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&d_prevLinkedBG_refBG, &_L285);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L287, &d_prevLinkedBG_refBG);
  /* 4 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L244, &_L287, &_L288);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L253,
    &_L237.infoFromLinking);
  _L260 = _L253.valid;
  _L258 = _L259 & _L260;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L254, &_L253.d_link);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L229,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L230, &_L229.sumOfBestDistances);
  /* 7 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L254, &_L230, &_L255);
  _L238 = _L237.q_link;
  _L240 = Q_LINK_Linked;
  _L239 = _L238 == _L240;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L274, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L275, &_L274.infoFromPassing);
  _L276 = _L275.valid;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L273,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L267, &_L273.prevLinkedBG);
  _L268 = _L267.valid;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L269, &_L267.infoFromPassing);
  _L270 = _L269.valid;
  _L278 = _L259 & _L239 & _L276 & _L268 & _L270;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L277,
    &_L275.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L271,
    &_L269.BG_Header.bgPosition.odo);
  /* 4 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L277, &_L271, &_L279);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L282, &_L273.sumOfBestDistances);
  /* 8 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L279, &_L282, &_L280);
  /* 29 */ if (_L278) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L281, &_L280);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L281, &_L282);
  }
  /* 28 */ if (_L258) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L256, &_L255);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L256, &_L281);
  }
  /* 27 */ if (_L257) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L243, &_L288);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L243, &_L256);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&sumOfBestDistances, &_L243);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L305, &sumOfBestDistances);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L293, trainProperties);
  /* ck_recalculate_BG_locations_ahead_itr */ if (ck_every) {
    /* 1 */
    recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L147,
      &_L290,
      &_L291,
      &_L305,
      &_L293,
      &op_call);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L162, &refBG);
  _L80 = _L77 & _L106;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L98, &_L78.location);
  /* 2 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L98, &_L297, &_L97);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L99, &_L86);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L99.location, &_L97);
  }
  _L110 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L301,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* ck_recalculate_BG_locations_ahead_itr */ if (ck_every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L289, &op_call);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L289, &_L301);
  }
  /* 23 */ if (_L158) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L154, &_L289);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L154, &_L147);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&relocatedBG, &_L154);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L149, &relocatedBG);
  _L108 = _L149.q_link;
  _L109 = _L110 == _L108;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L113,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L112, &_L113.prevLinkedBG);
  /* 19 */ if (_L109) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L111, &_L149);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L111, &_L112);
  }
  /* 18 */ if (_L96) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L85, &_L99);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L85, &_L111);
  }
  /* 17 */ if (_L80) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L81, &_L78);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L81, &_L85);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&prevLinkedBG, &_L81);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L155, &prevLinkedBG);
  _L114 = BGin_is_refBG;
  _L138 = Q_LINK_Unlinked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L115, &refBG);
  _L136 = _L115.q_link;
  _L137 = _L138 == _L136;
  _L116 = _L114 & _L137;
  _L119 = !_L137;
  _L120 = _L114 & _L119;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L128, &_L115.infoFromPassing);
  _L129 = _L128.valid;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L118,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L122,
    &_L118.prevUnlinkedBG);
  _L123 = _L122.valid;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L124, &_L122.infoFromPassing);
  _L125 = _L124.valid;
  _L131 = _L120 & _L129 & _L123 & _L125;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L133, &_L115.location);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L130,
    &_L128.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L126,
    &_L124.BG_Header.bgPosition.odo);
  /* 3 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L130, &_L126, &_L127);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L296,
    &_L124.BG_Header.BG_centerDetectionInaccuraccuracies);
  /* 12 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L127, &_L296, &_L300);
  /* 3 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L133, &_L300, &_L132);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L134, &_L122);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L134.location, &_L132);
  }
  _L141 = Q_LINK_Unlinked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L148, &relocatedBG);
  _L139 = _L148.q_link;
  _L140 = _L141 == _L139;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L144,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L143,
    &_L144.prevUnlinkedBG);
  /* 22 */ if (_L140) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L142, &_L148);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L142, &_L143);
  }
  /* 21 */ if (_L131) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L121, &_L134);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L121, &_L142);
  }
  /* 20 */ if (_L116) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L117, &_L115);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L117, &_L121);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&prevUnlinkedBG, &_L117);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L156, &prevUnlinkedBG);
  _L69 = _L64.recalculate;
  _L161 = _L74.valid;
  _L160 = _L69 & _L161;
  _L159 = _L67 | _L160;
  recalculateSubsequentBGs = _L159;
  _L157 = recalculateSubsequentBGs;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L265, &sumOfBestDistances);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36.refBG, &_L162);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36.prevLinkedBG, &_L155);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36.prevUnlinkedBG, &_L156);
  _L36.recalculate = _L157;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L36.sumOfBestDistances, &_L265);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    refBGs_out,
    &_L36);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L172, &relocatedBG);
  _L173 = BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L174, &refBG);
  /* 26 */ if (_L173) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L175, &_L174);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L175, &_L172);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &_L175);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L292, &_L152.sumOfBestDistances);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &_L292);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

