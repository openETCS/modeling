# Common utility procedures for setting/checking of radio messages
#
# History:
# - 24.08.15, J. Kastner: initial version
# - 25.08.15, J. Kastner: add addPkt and addPkt21
# - 26.08.15, J. Kastner: add addPkt15
# - 27.08.15, J. Kastner: correct actual packet length in addPkt15, addPkt21
# - 01.09.15, J. Kastner: add addPkt41
# - 03.09.15, J. Kastner: change addPkt signature; add addPkt27v1

source "[file dirname [info script]]/util.tcl"

namespace eval ::msg {
  ################################# CONSTANTS #################################
  variable DIM_MaxRMessages 30
  variable DIM_N_ITER 32
  variable DIM_MaxElementsPacket003v1 231
  variable DIM_MaxElementsPacket015 [expr $DIM_N_ITER * 4 + 15 + 1 + 6]
  variable DIM_MaxElementsPacket021 [expr ($DIM_N_ITER+1) * 3 + 4 + 1]
  variable DIM_MaxElementsPacket041 [expr ($DIM_N_ITER+1) * 3 + 6]
  variable DIM_MaxElementsPacket027v1_body 6
  variable DIM_MaxElementsPacket027v1_sections [expr $DIM_N_ITER * 2 + 4]


  ############################### INTERNAL VARS ###############################
  # path to the input used for setMsgXXX commands;
  # must be of type ReceivedMessage_T
  variable in ""

  # path to the output used for radio checkMsgXXX commands;
  # must be of type Radio_TrainTrack_Message_T
  variable rout ""

  variable nextPktPos 0
  variable nextPktStart 0

  # Sets the SCADE path prefix to be used for all subsequent setMsgXXX commands
  proc input {path} {
    variable in
    set in $path
  }

  # Sets the SCADE path prefix to be used for all subsequent checkMsgXXX commands (only for radio messages)
  proc radioOut {path} {
    variable rout
    set rout $path
  }


  ################################## MESSAGES ##################################
  # clears the message on the currently set message input
  proc setMsgNone {} {
    variable in
    SSM::set "$in.source" msrc_undefined
    SSM::set "$in.valid" false
    resetPkts
  }


  # Assigns a radio message with the specified header values to the currently active input
  #
  # Params:
  #   vars: list of radio header variable values; every entry must have the format name=value)
  proc setRadioMsg args {
    variable in
    resetPkts
    SSM::set "$in.source" msrc_Euroradio
    SSM::set "$in.valid" true
    set lst [list]
    foreach val $args {
      set t [split $val =]
      set k [lindex $t 0]
      switch $k {
        q_dir   { set v [qdirEnum [lindex $t 1]] }
        q_scale { set v [qscaleEnum [lindex $t 1]] }
        default { set v [lindex $t 1] }
      }
      SSM::set "$in.Radio_Common_Header.$k" $v
    }

    #eval util::assign "$in.Radio_Common_Header." $args  
  }

  proc setMsg3 args {
    variable in
    eval msg::setRadioMsg nid_message=3 $args
    #msg::setPacketHeader "$in.packets.PacketHeaders\[0\]" true 21 0 1
  }

  proc setMsg15 args {
    eval msg::setRadioMsg nid_message=15 $args
  }  

  proc setMsg16 args {
    eval msg::setRadioMsg nid_message=16 $args
  }  

  proc setMsg18 args {
    eval msg::setRadioMsg nid_message=18 $args
  }


  proc checkMsg147 {{present false} {t_train 0} {nid_em 0} {q_emergencystop 0}} {
    variable rout
    set h "$rout.header"
    SSM::check "$rout.present" $present
    SSM::check "$h.xNID_EM" $nid_em
    switch $q_emergencystop {
      0  {set qes Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA}
      1  {set qes Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA}
      2  {set qes Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted}
      3  {set qes Q_EMERGENCYSTOP_Emergency_stop}
    }
    SSM::check "$h.xQ_EMERGENCYSTOP" $qes
  }

  
  ################################## PACKETS ##################################
  proc addPkt {packetId args} {
    variable in
    variable nextPktPos
    variable nextPktStart

    set len [llength $args]
    set end [expr $nextPktStart + $len -1 ]
    set addr $nextPktStart

    set hdr "$in.packets.PacketHeaders\[$nextPktPos\]"
    msg::setPacketHeader "$hdr" true $packetId $nextPktStart $end
    foreach d $args {
      SSM::set "$in.packets.PacketData\[$addr\]" $d
      incr addr
    }
    incr nextPktPos
    set nextPktStart $addr
  }

  proc resetPkts {} {
    variable in
    variable DIM_MaxRMessages
    variable nextPktPos 
    variable nextPktStart

    set nextPktPos 0
    set nextPktStart 0
    for {set i 0} {$i < $DIM_MaxRMessages} {incr i} {
      msg::setPacketHeader "$in.packets.PacketHeaders\[$i\]"
    }
  }

  proc addPkt3v1 {args} {
    variable DIM_MaxElementsPacket003v1
    # list with all packet15 data elements
    set elems [util::lrepeat $DIM_MaxElementsPacket003v1 0]
    lset elems 0 3
    set lastSec 0
    foreach arg $args {
      set t [split $arg =]
      set k [lindex $t 0]
      set v [lindex $t 1] 
      switch -glob $k {
        q_dir            { lset elems 1 $v }
        q_scale          { lset elems 3 $v }
        d_validnv        { lset elems 4 $v }
        n_iter           { lset elems 5 $v }
        v_nvshunt        { lset elems 6 $v } 
        v_nvstff         { lset elems 7 $v }
        v_nvonsight      { lset elems 8 $v }
        v_nvunfit        { lset elems 9 $v }
        v_nvrel          { lset elems 10 $v }
        v_nvroll         { lset elems 11 $v }
        q_nvsrbktrg      { lset elems 12 $v }
        q_nvemrrls       { lset elems 13 $v }
        v_nvallowovtrp   { lset elems 14 $v }
        v_nvsupovtrp     { lset elems 15 $v }
        d_nvovtrp        { lset elems 16 $v }
        t_nvovtrp        { lset elems 17 $v }
        d_nvpotrp        { lset elems 18 $v }
        m_nvcontact      { lset elems 19 $v }
        t_nvcontact      { lset elems 20 $v }
        m_nvderun        { lset elems 21 $v }
        d_nvstff         { lset elems 22 $v }
        q_nvdriver_adhes { lset elems 23 $v }
        nid_c* { 
          set sectionId [string range $k 5 6]
          if [expr $sectionId > $lastSec] { set lastSec $sectionId }
          set i [expr 23 + ($sectionId - 1)]
          lset elems $i $v
        }
        default { util::error "variable '[lindex $t 0]' not supported by Packet003v1" }
      }
    }

    set elems [lrange $elems 0 [expr 23 + $lastSec]]
    set nid_packet [calcPacketId 3 16]
    #util::log "Packet003v1: $elems"
    eval addPkt $nid_packet $elems
  }


 
  proc addPkt15 {args} {
    variable DIM_MaxElementsPacket015
    # list with all packet15 data elements
    set elems [util::lrepeat $DIM_MaxElementsPacket015 0]
    # the first six elements are: nid_packet, q_dir, l_packet, q_scale, v_loa, t_loa
    lset elems 0 15
    set lastSec 0
    foreach arg $args {
      set t [split $arg =]
      set k [lindex $t 0]
      set v [lindex $t 1] 
      switch -glob $k {
        q_dir                 { lset elems 1 $v }
        q_scale               { lset elems 3 $v }
        v_loa                 { lset elems 4 $v }
        t_loa                 { lset elems 5 $v }
        l_endsection          { lset elems 6 $v }
        q_sectiontimer        { lset elems 7 $v }
        t_sectiontimer        { lset elems 8 $v }
        d_sectiontimerstoploc { lset elems 9 $v }
        q_endtimer            { lset elems 10 $v }
        t_endtimer            { lset elems 11 $v }
        d_endtimerstartloc    { lset elems 12 $v }
        q_dangerpoint         { lset elems 13 $v }
        d_dp                  { lset elems 14 $v }
        v_releasedp           { lset elems 15 $v }
        q_overlap             { lset elems 16 $v }
        d_startol             { lset elems 17 $v }
        t_ol                  { lset elems 18 $v }
        d_ol                  { lset elems 19 $v }
        v_releaseol           { lset elems 20 $v }
        n_iter                { lset elems 21 $v }
        section* { 
          set sectionId [string range $k 7 8]
          if [expr $sectionId > $lastSec] { set lastSec $sectionId }
          set sectionData [split $v ,]
          set i [expr 22 + ($sectionId - 1)*4]
          lset elems $i [lindex $sectionData 0]
          incr i
          lset elems $i [lindex $sectionData 1]
          incr i
          lset elems $i [lindex $sectionData 2]
          incr i
          lset elems $i [lindex $sectionData 2]
        }
        default { util::error "variable '[lindex $t 0]' not supported by Packet15" }
      }
    }

    set elems [lrange $elems 0 [expr 21 + 4*$lastSec]]
    set packetId [calcPacketId 15]
    #util::log "Packet15: $elems"
    eval addPkt $packetId $elems
  }
 

  proc addPkt21 {args} {
    variable DIM_MaxElementsPacket021
    # list with all packet21 data elements
    set elems [util::lrepeat $DIM_MaxElementsPacket021 0]
    # the first five elements are: nid_packet, q_dir, l_packet, q_scale, n_iter
    lset elems 0 21
    set lastSec 0
    foreach arg $args {
      set t [split $arg =]
      set k [lindex $t 0]
      set v [lindex $t 1] 
      switch -glob $k {
        q_dir    { lset elems 1 $v }
        q_scale  { lset elems 3 $v }
        n_iter   { lset elems 4 $v }
        section* { 
          set sectionId [string range $k 7 8]
          if [expr $sectionId > $lastSec] { set lastSec $sectionId }
          set sectionData [split $v ,]
          set i [expr 5 + $sectionId*3]
          lset elems $i [lindex $sectionData 0]
          incr i
          lset elems $i [lindex $sectionData 1]
          incr i
          lset elems $i [lindex $sectionData 2]
        }
        default { util::error "variable '[lindex $t 0]' not supported by Packet21" }
      }
    }

    set elems [lrange $elems 0 [expr 4 + 3*($lastSec+1)]]
    set packetId [calcPacketId 21]
    #util::log "Packet21: $elems"
    eval addPkt $packetId $elems
  }
    

  proc addPkt27v1 {args} {
    variable DIM_MaxElementsPacket027v1_body
    variable DIM_MaxElementsPacket027v1_sections
    set body [util::lrepeat $DIM_MaxElementsPacket027v1_body 0]
    lset body 0 27
    lset body 5 [calcPacketId 27 16 0 100]
    set sections ""
    set sid 0
    foreach arg $args {
      set t [split $arg =]
      set k [lindex $t 0]
      set v [lindex $t 1]
      switch -glob $k {
        q_dir      { lset body 1 $v }
        q_scale    { lset body 3 $v }
        n_iter     { lset body 4 $v }
        sections:* {
          set sections [split [lindex [split $arg :] 1] |]
        }
      }
    }

    # write body packet
    set packetId [calcPacketId 27 16 0 0]
    #util::log "Packet27v1: $body"
    eval addPkt $packetId $body 

    # write section packets
    set packetId [calcPacketId 27 16 0 100]
    foreach s $sections {
      set data [util::lrepeat $DIM_MaxElementsPacket027v1_sections 0]
      set n_iter 0
      foreach arg [split $s ,] {
      #util::log $arg
        set t [split $arg =]
        set k [lindex $t 0]
        set v [lindex $t 1]
        switch $k {
          d_static { lset data 0 $v }
          v_static { lset data 1 $v }
          q_static { lset data 2 $v }
          n_iter   { lset data 3 $v; set n_iter $v }
        }
      }
      set data [lrange $data 0 [expr 4 + 2*($n_iter+1)]]
      eval addPkt $packetId $data
      incr packetId
    }
  }


  proc addPkt41 {args} {
    variable DIM_MaxElementsPacket041
    # list with all packet41 data elements
    set elems [util::lrepeat $DIM_MaxElementsPacket041 0]
    # the first six elements are: nid_packet, q_dir, l_packet, q_scale, v_loa, t_loa
    lset elems 0 41
    set lastSec 0
    foreach arg $args {
      set t [split $arg =]
      set k [lindex $t 0]
      set v [lindex $t 1] 
      switch -glob $k {
        q_dir                 { lset elems 1 $v }
        q_scale               { lset elems 3 $v }
        d_leveltr             { lset elems 4 $v }
        n_iter                { lset elems 5 $v }
        leveltr* { 
          set sectionId [string range $k 7 8]
          if [expr $sectionId > $lastSec] { set lastSec $sectionId }
          set sectionData [split $v ,]
          set i [expr 5 + $sectionId*3]
          lset elems $i [lindex $sectionData 0]
          incr i
          lset elems $i [lindex $sectionData 1]
          incr i
          lset elems $i [lindex $sectionData 2]
        }
        default { util::error "variable '[lindex $t 0]' not supported by Packet41" }
      }
    }
 
    set elems [lrange $elems 0 [expr 4 + 3*($lastSec+1)]]
    util::log "Packet41: $elems"
    eval addPkt 41 32 $elems
  }

  proc setPacketHeader {target {valid false} {packetId 0} {startAddress 0} {endAddress 0}} {
    SSM::set "$target.valid" $valid
    SSM::set "$target.nid_packet" $packetId
    SSM::set "$target.startAddress" $startAddress
    SSM::set "$target.endAddress" $endAddress
  }

  proc calcPacketId {nid_packet {m_version 32} {q_dir 0} {id 0}} {
    expr $nid_packet*1000000 + $q_dir*100000 + $m_version*1000 + $id
  }

  # Translates a Q_DIR value (0-2) to the corresponding enum label
  proc qdirEnum {q_dir} {
    switch $q_dir {
      0 {return Q_DIR_Reverse}
      1 {return Q_DIR_Nominal}
      2 {return Q_DIR_Both_directions}
      default {util::error "Invalid value for q_dir: $q_dir"}
    }
  }      

  # Translates a Q_SCALE value (0-2) to the corresponding enum label
  proc qscaleEnum {q_scale} {
    switch $q_scale {
      0 {return Q_SCALE_10_cm_scale} 
      1 {return Q_SCALE_1_m_scale}
      2 {return Q_SCALE_10_m_scale}
    }
  }
}

