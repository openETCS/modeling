# Common utility procedures for handling radio messages
#
# History:
# - 24.08.15, J. Kastner: initial version

source "[file dirname [info script]]/util.tcl"

namespace eval ::msg {
  # path to the input used for setMsgXXX commands;
  # must be of type ReceivedMessage_T
  variable in ""

  # path to the output used for radio checkMsgXXX commands;
  # must be of type Radio_TrainTrack_Message_T
  variable rout ""

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
    eval util::assign "$in.Radio_Common_Header." $args  
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

}


