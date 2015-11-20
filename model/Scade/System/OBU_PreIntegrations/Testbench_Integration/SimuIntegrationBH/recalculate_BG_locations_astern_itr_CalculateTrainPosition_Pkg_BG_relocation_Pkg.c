/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr */
void recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBGs_in */ refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BG_in */ positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBGs_out */ refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_out,
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BG_out */ positionedBG_T_TrainPosition_Types_Pck *BG_out)
{
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr */
  static positionedBG_T_TrainPosition_Types_Pck op_call;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr */
  static kcg_bool ck_every;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::BGin_is_refBG */
  static kcg_bool BGin_is_refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::recalculateSubsequentBGs */
  static kcg_bool recalculateSubsequentBGs;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::refBG */
  static positionedBG_T_TrainPosition_Types_Pck refBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::prevLinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::prevUnlinkedBG */
  static positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::relocatedBG */
  static positionedBG_T_TrainPosition_Types_Pck relocatedBG;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::sumOfBestDistances */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L36 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L36;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L71 */
  static positionedBG_T_TrainPosition_Types_Pck _L71;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L69 */
  static kcg_bool _L69;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L67 */
  static kcg_bool _L67;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L64 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L64;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L74 */
  static positionedBG_T_TrainPosition_Types_Pck _L74;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L77 */
  static kcg_bool _L77;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L78 */
  static positionedBG_T_TrainPosition_Types_Pck _L78;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L80 */
  static kcg_bool _L80;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L81 */
  static positionedBG_T_TrainPosition_Types_Pck _L81;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L83 */
  static kcg_bool _L83;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L84 */
  static kcg_bool _L84;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L85 */
  static positionedBG_T_TrainPosition_Types_Pck _L85;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L105 */
  static Q_LINK _L105;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L106 */
  static kcg_bool _L106;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L107 */
  static Q_LINK _L107;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L108 */
  static Q_LINK _L108;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L109 */
  static kcg_bool _L109;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L110 */
  static Q_LINK _L110;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L111 */
  static positionedBG_T_TrainPosition_Types_Pck _L111;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L113 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L113;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L112 */
  static positionedBG_T_TrainPosition_Types_Pck _L112;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L144 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L144;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L143 */
  static positionedBG_T_TrainPosition_Types_Pck _L143;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L142 */
  static positionedBG_T_TrainPosition_Types_Pck _L142;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L141 */
  static Q_LINK _L141;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L140 */
  static kcg_bool _L140;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L139 */
  static Q_LINK _L139;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L138 */
  static Q_LINK _L138;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L137 */
  static kcg_bool _L137;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L136 */
  static Q_LINK _L136;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L121 */
  static positionedBG_T_TrainPosition_Types_Pck _L121;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L120 */
  static kcg_bool _L120;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L119 */
  static kcg_bool _L119;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L117 */
  static positionedBG_T_TrainPosition_Types_Pck _L117;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L116 */
  static kcg_bool _L116;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L115 */
  static positionedBG_T_TrainPosition_Types_Pck _L115;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L114 */
  static kcg_bool _L114;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L147 */
  static positionedBG_T_TrainPosition_Types_Pck _L147;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L148 */
  static positionedBG_T_TrainPosition_Types_Pck _L148;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L149 */
  static positionedBG_T_TrainPosition_Types_Pck _L149;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L150 */
  static positionedBG_T_TrainPosition_Types_Pck _L150;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L152 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L152;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L153 */
  static positionedBG_T_TrainPosition_Types_Pck _L153;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L154 */
  static positionedBG_T_TrainPosition_Types_Pck _L154;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L155 */
  static positionedBG_T_TrainPosition_Types_Pck _L155;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L156 */
  static positionedBG_T_TrainPosition_Types_Pck _L156;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L157 */
  static kcg_bool _L157;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L158 */
  static kcg_bool _L158;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L159 */
  static kcg_bool _L159;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L160 */
  static kcg_bool _L160;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L161 */
  static kcg_bool _L161;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L162 */
  static positionedBG_T_TrainPosition_Types_Pck _L162;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L172 */
  static positionedBG_T_TrainPosition_Types_Pck _L172;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L173 */
  static kcg_bool _L173;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L174 */
  static positionedBG_T_TrainPosition_Types_Pck _L174;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L175 */
  static positionedBG_T_TrainPosition_Types_Pck _L175;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L181 */
  static positionedBG_T_TrainPosition_Types_Pck _L181;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L182 */
  static kcg_bool _L182;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L183 */
  static positionedBG_T_TrainPosition_Types_Pck _L183;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L184 */
  static kcg_bool _L184;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L187 */
  static Q_LINK _L187;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L186 */
  static kcg_bool _L186;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L185 */
  static Q_LINK _L185;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L190 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L190;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L193 */
  static kcg_bool _L193;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L194 */
  static infoFromLinking_T_TrainPosition_Types_Pck _L194;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L195 */
  static kcg_bool _L195;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L196 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L196;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L197 */
  static positionedBG_T_TrainPosition_Types_Pck _L197;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L198 */
  static positionedBG_T_TrainPosition_Types_Pck _L198;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L199 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L199;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L203 */
  static kcg_bool _L203;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L204 */
  static kcg_bool _L204;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L205 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L205;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L206 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L206;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L207 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L207;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L209 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L209;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L208 */
  static positionedBG_T_TrainPosition_Types_Pck _L208;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L210 */
  static kcg_bool _L210;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L213 */
  static kcg_bool _L213;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L214 */
  static passedBG_T_BG_Types_Pkg _L214;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L215 */
  static kcg_bool _L215;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L216 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L216;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L217 */
  static positionedBG_T_TrainPosition_Types_Pck _L217;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L218 */
  static passedBG_T_BG_Types_Pkg _L218;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L220 */
  static kcg_bool _L220;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L219 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L219;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L221 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L221;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L224 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L224;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L223 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L223;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L222 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L222;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L226 */
  static positionedBG_T_TrainPosition_Types_Pck _L226;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L225 */
  static refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _L225;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L229 */
  static Q_LINK _L229;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L228 */
  static Q_LINK _L228;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L227 */
  static kcg_bool _L227;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L230 */
  static positionedBG_T_TrainPosition_Types_Pck _L230;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L231 */
  static kcg_bool _L231;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L232 */
  static kcg_bool _L232;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L233 */
  static kcg_bool _L233;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L235 */
  static kcg_bool _L235;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L234 */
  static passedBG_T_BG_Types_Pkg _L234;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L236 */
  static kcg_bool _L236;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L242 */
  static kcg_bool _L242;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L241 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L241;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L240 */
  static passedBG_T_BG_Types_Pkg _L240;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L243 */
  static OdometryLocations_T_Obu_BasicTypes_Pkg _L243;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L244 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L244;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L245 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L245;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L246 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L246;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L247 */
  static positionedBG_T_TrainPosition_Types_Pck _L247;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L248 */
  static positionedBG_T_TrainPosition_Types_Pck _L248;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L249 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L249;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L250 */
  static trainProperties_T_TrainPosition_Types_Pck _L250;
  /* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern_itr::_L251 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L251;
  
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L152,
    refBGs_in);
  _L158 = _L152.recalculate;
  ck_every = _L158;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L147, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L153, &_L152.prevLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L248, &_L152.refBG);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L64,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L71, &_L64.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L74, BG_in);
  _L67 = /* 1 */
    positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &_L71,
      &_L74);
  BGin_is_refBG = _L67;
  _L182 = BGin_is_refBG;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L207,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L225,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L230, &_L225.prevLinkedBG);
  _L231 = _L230.valid;
  _L232 = !_L231;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L226, &_L225.refBG);
  _L233 = _L226.valid;
  _L228 = _L226.q_link;
  _L229 = Q_LINK_Unlinked;
  _L227 = _L228 == _L229;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L234, &_L226.infoFromPassing);
  _L235 = _L234.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L183, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L240, &_L183.infoFromPassing);
  _L242 = _L240.valid;
  _L184 = _L183.valid;
  _L187 = _L183.q_link;
  _L185 = Q_LINK_Linked;
  _L186 = _L187 == _L185;
  _L213 = _L184 & _L186;
  _L236 = _L232 & _L233 & _L227 & _L235 & _L242 & _L213;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L222,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L223, &_L222.sumOfBestDistances);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L243,
    &_L234.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L241,
    &_L240.BG_Header.bgPosition.odo);
  /* 2 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L243, &_L241, &_L244);
  /* 3 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L223, &_L244, &_L246);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_L209,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L208, &_L209.prevLinkedBG);
  _L210 = _L208.valid;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &_L194,
    &_L208.infoFromLinking);
  _L195 = _L194.valid;
  _L193 = _L213 & _L210 & _L195;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L196, &_L194.d_link);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L223, &_L196, &_L199);
  _L203 = !_L195;
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L214, &_L208.infoFromPassing);
  _L215 = _L214.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L217, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&_L218, &_L217.infoFromPassing);
  _L220 = _L218.valid;
  _L204 = _L213 & _L210 & _L203 & _L215 & _L220;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L216,
    &_L214.BG_Header.bgPosition.odo);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &_L219,
    &_L218.BG_Header.bgPosition.odo);
  /* 1 */ sub_2_odoDistances_BasicLocationFunctions_Pkg(&_L216, &_L219, &_L221);
  /* 2 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L223, &_L221, &_L224);
  /* 15 */ if (_L204) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L205, &_L224);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L205, &_L223);
  }
  /* 14 */ if (_L193) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L190, &_L199);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L190, &_L205);
  }
  /* 17 */ if (_L236) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L245, &_L246);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L245, &_L190);
  }
  /* 16 */ if (_L182) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L206, &_L207);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L206, &_L245);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&sumOfBestDistances, &_L206);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L249, &sumOfBestDistances);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L250, trainProperties);
  /* ck_recalculate_BG_locations_astern_itr */ if (ck_every) {
    /* 1 */
    recalculate_BG_location_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &_L147,
      &_L153,
      &_L248,
      &_L249,
      &_L250,
      &op_call);
  }
  /* 13 */ if (_L67) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L181, &_L74);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L181, &_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&refBG, &_L181);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L162, &refBG);
  _L77 = BGin_is_refBG;
  _L107 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L78, &refBG);
  _L105 = _L78.q_link;
  _L106 = _L107 == _L105;
  _L80 = _L77 & _L106;
  _L83 = !_L106;
  _L84 = _L77 & _L83;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L197,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  _L110 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L247,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* ck_recalculate_BG_locations_astern_itr */ if (ck_every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L150, &op_call);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L150, &_L247);
  }
  /* 9 */ if (_L158) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L154, &_L150);
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
  /* 5 */ if (_L109) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L111, &_L149);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L111, &_L112);
  }
  /* 4 */ if (_L84) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L85, &_L197);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L85, &_L111);
  }
  /* 3 */ if (_L80) {
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
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L198,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
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
  /* 6 */ if (_L140) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L142, &_L148);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L142, &_L143);
  }
  /* 7 */ if (_L120) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L121, &_L198);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L121, &_L142);
  }
  /* 8 */ if (_L116) {
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
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L251, &sumOfBestDistances);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36.refBG, &_L162);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36.prevLinkedBG, &_L155);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L36.prevUnlinkedBG, &_L156);
  _L36.recalculate = _L157;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L36.sumOfBestDistances, &_L251);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    refBGs_out,
    &_L36);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L172, &relocatedBG);
  _L173 = BGin_is_refBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L174, &refBG);
  /* 12 */ if (_L173) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L175, &_L174);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L175, &_L172);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(BG_out, &_L175);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** recalculate_BG_locations_astern_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

