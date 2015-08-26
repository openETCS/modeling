# Common utility procedures for handling radio messages
#
# History:
# - 24.08.15, J. Kastner: initial version
# - 25.08.15, J. Kastner: add addPkt and addPkt21

source "[file dirname [info script]]/util.tcl"

namespace eval ::msg {
  ################################# CONSTANTS #################################
  variable DIM_N_ITER 32
  variable DIM_MaxElementsPacket021 [expr ($DIM_N_ITER+1) * 3 + 4 + 1]


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
  }


  # Assigns a radio message with the specified header values to the currently active input
  #
  # Params:
  #   vars: list of radio header variable values; every entry must have the format name=value)
  proc setRadioMsg args {
    variable in
    SSM::set "$in.source" msrc_Euroradio
    SSM::set "$in.valid" true
    set lst [list]
    foreach val $args {
      set t [split $val =]
      set k [lindex $t 0]
      switch $k {
        q_dir   { set v [qdirEnum [lindex $t 1]] }
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
  proc addPkt {nid_packet args} {
    variable in
    variable nextPktPos
    variable nextPktStart

    set len [llength $args]
    set end [expr $nextPktStart + $len -1 ]
    set addr $nextPktStart

    set hdr "$in.packets.PacketHeaders\[$nextPktPos\]"
    msg::setPacketHeader "$hdr" true $nid_packet $nextPktStart $end
    foreach d $args {
      SSM::set "$in.packets.PacketData\[$addr\]" $d
      incr addr
    }
    incr nextPktPos
    set nextPktStart $addr
  }


  proc addPkt21 {args} {
    variable DIM_MaxElementsPacket021
    # list with all packet21 data elements
    set elems [util::lrepeat $DIM_MaxElementsPacket021 0]
    # the first five elements are: nid_packet, q_dir, ???, q_scale, n_iter
    lset elems 0 21
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

    util::log $elems
    eval addPkt 21 $elems
  }
    
 
  proc setPacketHeader {target {valid false} {nid_packet 0} {startAddress 0} {endAddress 0}} {
    SSM::set "$target.valid" $valid
    SSM::set "$target.nid_packet" [calcPacketId $nid_packet]
    SSM::set "$target.startAddress" $startAddress
    SSM::set "$target.endAddress" $endAddress
  }

  proc calcPacketId {nid_packet {q_dir 0} {m_version 32} {id 0}} {
    expr $nid_packet*1000000 + $q_dir*100000 + $m_version*1000 + $id
  }

  proc qdirEnum {q_dir} {
    switch $q_dir {
      0 {return Q_DIR_Reverse}
      1 {return Q_DIR_Nominal}
      2 {return Q_DIR_Both_directions}
      default {util::error "Invalid value for q_dir: $q_dir"}
    }
  }      
}

