#initialization of variables
set basedir "[file dirname [info script]]"
source "$basedir/lib/init_values.tcl"
#package require function 1.0

proc Removing_Files {DEL} {
	catch {file exists $DEL} fid
	if {$fid==1} {
		puts "Removing directory: $DEL\n"
		file delete -force -- $DEL
	} else {
		puts "Directory $DEL not present\n"
	}

}
proc Build_Source_Files {SCADE CODE PATH_TO_ETP ROOT ROOT_NAME CONF CONF_NAME} {
	puts "Generating SCADE code for $CONF_NAME\n"
	exec $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
}

proc Copying_Files {PATH_TO_TEMPLATE_C PATH_TO_TEMPLATE_H PATH_TO} {
	puts "copying templates to: $PATH_TO\n"
	file copy -force -- $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO
}

proc delete_DC_and_DH_files {DEL_DC DEL_DH} {
	file delete -- $DEL_DC
	file delete -- $DEL_DH
}

proc rename_DC_and_DH_files {RENAME_ProbeEVC_EnvSim_DH ProbeEVC_EnvSim_H RENAME_ProbeSDM_EnvSim_DH ProbeSDM_EnvSim_H RENAME_ProbeEVC_EnvSim_DC ProbeEVC_EnvSim_C RENAME_ProbeSDM_EnvSim_DC ProbeSDM_EnvSim_C} {
	puts "renaming of $RENAME_ProbeEVC_EnvSim_DH $RENAME_ProbeSDM_EnvSim_DH $RENAME_ProbeEVC_EnvSim_DC $RENAME_ProbeSDM_EnvSim_DC\n"
	file rename -force -- $RENAME_ProbeEVC_EnvSim_DH $ProbeEVC_EnvSim_H
	file rename -force -- $RENAME_ProbeSDM_EnvSim_DH $ProbeSDM_EnvSim_H
	file rename -force -- $RENAME_ProbeEVC_EnvSim_DC $ProbeEVC_EnvSim_C
	file rename -force -- $RENAME_ProbeSDM_EnvSim_DC $ProbeSDM_EnvSim_C
}

proc checking_and_copying_files {setSearch BUILD_DIR_libraries BUILD_DIR_Char_to_Int_C BUILD_DIR_Int_to_Char_C BUILD_DIR_kcg_assign_C BUILD_DIR_kcg_conv_H PATH_TO} {
	if {$setSearch=="KCG_GreenField"} {
		if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
			puts stderr "Could not copy files for KCG_GreenField\n$fid"
			puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
			exit 1
			}
		}
	if {$setSearch=="ERSA_EVC_Testrunner"} {
		if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
			 puts stderr "Could not copy files for ERSA_EVC_Testrunner\n$fid"
			 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
			 exit 1
			 }
		}
	if {$setSearch=="KCG-Releases"} {
			if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
				 puts stderr "Could not copy files for KCG-Releases\n$fid"
				 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
				 exit 1
				 }
			}
	if {$setSearch=="Trackside"} {
			if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
				 puts stderr "Could not copy files for Trackside\n$fid"
				 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
				 exit 1
				 }
			}
	if {$setSearch=="Trainside"} {
			if { [catch {file copy -force -- $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO} fid] } {
				 puts stderr "Could not copy files for Trainside\n$fid"
				 puts stderr "You should probably delete the following files: libraries, Char_to_Int.c, Int_to_Char.c, kcg_assign.h, kcg_conv.h \n"
				 exit 1
				 }
			}
}

proc Delete_and_Create_Folder {DEL_DIR MKDIR setSearch} {
	if {$setSearch=="KCG_ERSA"} {
		puts "deletion and creation of folders for KCG_ERSA\n"
		file delete -force -- $DEL_DIR
		file mkdir $MKDIR
		}
	if {$setSearch=="KCG_GreenField"} {
		puts "deletion and creation of folders for KCG_GreenField\n"
		file delete -force -- $DEL_DIR
		file mkdir $MKDIR
		}
	if {$setSearch=="KCG_Releases"} {
		puts "deletion and creation of folders for KCG_Releases\n"
		file delete -force -- $DEL_DIR
		file mkdir $MKDIR
		}
		}

proc Gathering_and_Copying {PATH_TO MKDIR} {
	set gathering_all_files [
	    concat [
		glob -directory $PATH_TO *]]
	foreach copy_element $gathering_all_files {
	    file copy -force -- $copy_element $MKDIR
	}
}

proc Testing_SCADE_PATH {} {
	if {![catch {exec scade -version}] || [lindex $::errorCode 0] eq "NONE"} {
	    puts  "'scade' is in PATH available"
	} else {
		puts stderr "You should add SCADE to your PATH variable"
		exit 1
	}
}

proc Select_Code_Generator {CONF_NAME CONF_NAME_EVC CONF_NAME_Releases CONF_NAME_Trackside CONF_NAME_Trainside} {
	puts "Selection of code generation\n"
	puts "The following projects can be build:\n"
	puts "$CONF_NAME $CONF_NAME_EVC $CONF_NAME_Releases $CONF_NAME_Trackside $CONF_NAME_Trainside"
	puts "How many projects would you like to build?\n";
	puts -nonewline "Please enter a number:\n"
  flush stdout
  set numberProjects [gets stdin]

	for {set i 0} {$i < $numberProjects} {incr i} {
    puts -nonewline "Please enter the projectname for $i\n"
		flush stdout
		lappend flatList [gets stdin]
}
return $flatList
}

proc make_clean {} {
	if { [catch {exec make.exe distclean} fid] } {
   puts "Done cleaning\n"
 }
}

proc MOVING_PARTS_EnvSim {PATH_TO MK_DIR} {
	Removing_Files $MK_DIR
	puts "Creating folder $MK_DIR\n"
	file mkdir $MK_DIR
	Gathering_and_Copying $PATH_TO $MK_DIR
}


proc Starting_make {} {
	if { [catch {exec make.exe SCADESRCDIR=../Simulation_EnvSim/ ROOTNODE=ROOT_Scripted -j 8} fid] } {
   puts "Done building\n"
 }
}

proc Starting_Code_Generator {List_of_CONF_NAMEs} {
	set Path_to_Code [pwd]
	source "$Path_to_Code/modeling/tools/lib/CONF_NAME_values.tcl"

	for {set i 0} {$i < [llength $List_of_CONF_NAMEs]} {incr i} {
		if {[lindex $List_of_CONF_NAMEs $i]==$CONF_NAME} {
			Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
		} elseif {[lindex $List_of_CONF_NAMEs $i]==$CONF_NAME_EVC} {
			Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_EVC;
		} elseif {[lindex $List_of_CONF_NAMEs $i]==$CONF_NAME_Releases} {
			Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_Releases;
		} elseif {[lindex $List_of_CONF_NAMEs $i]==$CONF_NAME_Trackside} {
			Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trackside $CONF $CONF_NAME_Trackside
		} elseif {[lindex $List_of_CONF_NAMEs $i]==$CONF_NAME_Trainside} {
			Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trainside $CONF $CONF_NAME_Trainside
		} else {
			puts "Some of your CONF_NAMEs is wrong, so the Code Generator for '[lindex $List_of_CONF_NAMEs $i]' will not start\n"
		}
}
}

proc Moving_DMI_testbench_EnvSim {} {
	set BASE [pwd]
	source "$BASE/modeling/tools/lib/DMI_testbench_EnvSim.tcl"

	#checking if executable exists
	catch {file exists $PATH_TO_testbench_EXE} fid
	if {$fid==1} {
		puts "Removing old testbench executable and building a fresh one\n"
		cd $PATH_TO_MAKE_PLACE
		make_clean
		puts "Starting SCADE to generate Code for testbench.exe\n"
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP_testbench $ROOT $ROOT_NAME_testbench $CONF $CONF_NAME_testbench
		puts "Starting make to create testbench.exe\n"
		Starting_make
	} else {
		puts "Starting SCADE to generate Code for testbench.exe\n"
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP_testbench $ROOT $ROOT_NAME_testbench $CONF $CONF_NAME_testbench
		puts "Starting make to create testbench.exe\n"
		cd $PATH_TO_MAKE_PLACE
		Starting_make
	}

#checking if folder Zipping_DMI_testbench_EnvSim exists
	catch {file exists $PATH_TO_folderZIP} folder_id
	if { $folder_id==1 } {
   puts "Zipping_DMI_testbench_EnvSim folder is present\n"
	 Removing_Files $PATH_TO_folderZIP
	 puts "Creating folder Zipping_DMI_testbench_EnvSim\n"
	 file mkdir $PATH_TO_folderZIP
 } else {
	 puts "Creating folder Zipping_DMI_testbench_EnvSim\n"
	 file mkdir $PATH_TO_folderZIP
 }

	puts "Coyping DMI.exe into folder $PATH_TO_folderZIP\n"
	Gathering_and_Copying $PATH_TO_DMI $PATH_TO_folderZIP

  puts "Coyping testbench.exe into folder $PATH_TO_folderZIP\n"
	file copy -force -- $PATH_TO_testbench_EXE $PATH_TO_folderZIP

	puts "Coyping all relevant parts of EnvSim to folder $PATH_TO_folderZIP\n"
	MOVING_PARTS_EnvSim $PATH_TO_EnvSim_directories $MK_DIR_WIN32
	MOVING_PARTS_EnvSim $PATH_TO_EnvSim_simctrl $MK_DIR_SIMCTRL
	MOVING_PARTS_EnvSim $PATH_TO_LIB $MK_DIR_LIB

	puts "Done moving DMI.exe, testbench.exe and EnvSim to $PATH_TO_folderZIP\n"
}

#you should run this code in cygwin
#example: wish main.tcl


lappend Code_Generators [Select_Code_Generator $CONF_NAME $CONF_NAME_EVC $CONF_NAME_Releases $CONF_NAME_Trackside $CONF_NAME_Trainside]

set List_Code_Generators [lindex $Code_Generators 0]

#puts [lindex $newValues 0]
Starting_Code_Generator $List_Code_Generators



#checking if SCADE is in PATH
Testing_SCADE_PATH

#First step
#removing directories
Removing_Files $delete_ERSA_EVC_IP_DMI
Removing_Files $delete_KCG_GreenField
Removing_Files $delete_KCG_Releases
Removing_Files $delete_Trackside
Removing_Files $delete_Trainside


#TODO: add option to select each generator separatly
#Select_Code_Generator $CONF_NAME $CONF_NAME_EVC $CONF_NAME_Releases $CONF_NAME_Trackside $CONF_NAME_Trainside

#Second step
#generation of code
#Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
#Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_EVC;
#Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_Releases;
#Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trackside $CONF $CONF_NAME_Trackside
#Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trainside $CONF $CONF_NAME_Trainside

for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME $CONF $CONF_NAME;
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_EVC;
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP_openETCS_EVC $ROOT $ROOT_NAME_EVC $CONF $CONF_NAME_Releases;
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trackside $CONF $CONF_NAME_Trackside
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		Build_Source_Files $SCADE $CODE $PATH_TO_ETP $ROOT $ROOT_NAME_Trainside $CONF $CONF_NAME_Trainside
	} else {
		puts "Some of your CONF_NAMEs is wrong, building source code is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}




#Third step
#copying of templates RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
#copying files RemoteDMIBus_EnvSim.c RemoteDMIBus_EnvSim.h from PATH_TO_TEMPLATE to PATH_TO_ERSA_EVC_Testrunner
puts "copying templates  RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh\n"
#Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_ERSA_EVC_Testrunner
#Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_KCG_GreenField
#Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_KCG_Releases
#Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_Trackside
#Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_Trainside


for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_ERSA_EVC_Testrunner
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_KCG_GreenField
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_KCG_Releases
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_Trackside
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		Copying_Files $PATH_TO_TEMPLATE_C $PATH_TO_TEMPLATE_H $PATH_TO_Trainside
	} else {
		puts "Some of your CONF_NAMEs is wrong, copying of files is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}








#removing of RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh
puts "removing of RemoteDMIBus_EnvSim.dc RemoteDMIBus_EnvSim.dh\n"
#delete_DC_and_DH_files $DEL_RemoteDMIBus_EnvSim_DC $DEL_RemoteDMIBus_EnvSim_DH
#delete_DC_and_DH_files $KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DC $KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DH
#delete_DC_and_DH_files $KCG_Releases_DEL_RemoteDMIBus_EnvSim_DC $KCG_Releases_DEL_RemoteDMIBus_EnvSim_DH
#delete_DC_and_DH_files $Trainside_DEL_RemoteDMIBus_EnvSim_DC $Trainside_DEL_RemoteDMIBus_EnvSim_DH
#delete_DC_and_DH_files $Trackside_DEL_RemoteDMIBus_EnvSim_DC $Trackside_DEL_RemoteDMIBus_EnvSim_DH

for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		delete_DC_and_DH_files $DEL_RemoteDMIBus_EnvSim_DC $DEL_RemoteDMIBus_EnvSim_DH
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		delete_DC_and_DH_files $KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DC $KCG_GreenField_DEL_RemoteDMIBus_EnvSim_DH
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		delete_DC_and_DH_files $KCG_Releases_DEL_RemoteDMIBus_EnvSim_DC $KCG_Releases_DEL_RemoteDMIBus_EnvSim_DH
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		delete_DC_and_DH_files $Trainside_DEL_RemoteDMIBus_EnvSim_DC $Trainside_DEL_RemoteDMIBus_EnvSim_DH
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		delete_DC_and_DH_files $Trackside_DEL_RemoteDMIBus_EnvSim_DC $Trackside_DEL_RemoteDMIBus_EnvSim_DH
	} else {
		puts "Some of your CONF_NAMEs is wrong, copying of files is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}



#renaming of ProbeEVC_EnvSim.dh ProbeSDM_EnvSim.dh to ProbeEVC_EnvSim.h ProbeSDM_EnvSim.h
#rename_DC_and_DH_files $RENAME_ProbeEVC_EnvSim_DH $ProbeEVC_EnvSim_H $RENAME_ProbeSDM_EnvSim_DH $ProbeSDM_EnvSim_H $RENAME_ProbeEVC_EnvSim_DC $ProbeEVC_EnvSim_C $RENAME_ProbeSDM_EnvSim_DC $ProbeSDM_EnvSim_C
#rename_DC_and_DH_files $KCG_GreenField_RENAME_ProbeEVC_EnvSim_DH $KCG_GreenField_ProbeEVC_EnvSim_H $KCG_GreenField_RENAME_ProbeSDM_EnvSim_DH $KCG_GreenField_ProbeSDM_EnvSim_H $KCG_GreenField_RENAME_ProbeEVC_EnvSim_DC $KCG_GreenField_ProbeEVC_EnvSim_C $KCG_GreenField_RENAME_ProbeSDM_EnvSim_DC $KCG_GreenField_ProbeSDM_EnvSim_C
#rename_DC_and_DH_files $KCG_Releases_RENAME_ProbeEVC_EnvSim_DH $KCG_Releases_ProbeEVC_EnvSim_H $KCG_Releases_RENAME_ProbeSDM_EnvSim_DH $KCG_Releases_ProbeSDM_EnvSim_H $KCG_Releases_RENAME_ProbeEVC_EnvSim_DC $KCG_Releases_ProbeEVC_EnvSim_C $KCG_Releases_RENAME_ProbeSDM_EnvSim_DC $KCG_Releases_ProbeSDM_EnvSim_C
for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		rename_DC_and_DH_files $RENAME_ProbeEVC_EnvSim_DH $ProbeEVC_EnvSim_H $RENAME_ProbeSDM_EnvSim_DH $ProbeSDM_EnvSim_H $RENAME_ProbeEVC_EnvSim_DC $ProbeEVC_EnvSim_C $RENAME_ProbeSDM_EnvSim_DC $ProbeSDM_EnvSim_C
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		rename_DC_and_DH_files $KCG_GreenField_RENAME_ProbeEVC_EnvSim_DH $KCG_GreenField_ProbeEVC_EnvSim_H $KCG_GreenField_RENAME_ProbeSDM_EnvSim_DH $KCG_GreenField_ProbeSDM_EnvSim_H $KCG_GreenField_RENAME_ProbeEVC_EnvSim_DC $KCG_GreenField_ProbeEVC_EnvSim_C $KCG_GreenField_RENAME_ProbeSDM_EnvSim_DC $KCG_GreenField_ProbeSDM_EnvSim_C
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		rename_DC_and_DH_files $KCG_Releases_RENAME_ProbeEVC_EnvSim_DH $KCG_Releases_ProbeEVC_EnvSim_H $KCG_Releases_RENAME_ProbeSDM_EnvSim_DH $KCG_Releases_ProbeSDM_EnvSim_H $KCG_Releases_RENAME_ProbeEVC_EnvSim_DC $KCG_Releases_ProbeEVC_EnvSim_C $KCG_Releases_RENAME_ProbeSDM_EnvSim_DC $KCG_Releases_ProbeSDM_EnvSim_C
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		puts "Renaming process for $CONF_NAME_Trackside has not been implemented yet"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		puts "Renaming process for $CONF_NAME_Trainside has not been implemented yet"
	} else {
		puts "Some of your CONF_NAMEs is wrong, renaming of files is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}
#TODO: here is somewhere a bug
#rename_DC_and_DH_files $Trackside_RENAME_ProbeEVC_EnvSim_DH $Trackside_ProbeEVC_EnvSim_H $Trackside_RENAME_ProbeSDM_EnvSim_DH $Trackside_ProbeSDM_EnvSim_H $Trackside_RENAME_ProbeEVC_EnvSim_DC $Trackside_ProbeEVC_EnvSim_C $Trackside_RENAME_ProbeSDM_EnvSim_DC $Trackside_ProbeSDM_EnvSim_C
#rename_DC_and_DH_files $Trainside_RENAME_ProbeEVC_EnvSim_DH $Trainside_ProbeEVC_EnvSim_H $Trainside_RENAME_ProbeSDM_EnvSim_DH $Trainside_ProbeSDM_EnvSim_H $Trainside_RENAME_ProbeEVC_EnvSim_DC $Trainside_ProbeEVC_EnvSim_C $Trainside_RENAME_ProbeSDM_EnvSim_DC $Trainside_ProbeSDM_EnvSim_C


#checking and copying files
puts "checking and copying files\n"
#checking_and_copying_files "ERSA_EVC_Testrunner" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_ERSA_EVC_Testrunner
#checking_and_copying_files "KCG_GreenField" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_KCG_GreenField
#checking_and_copying_files "KCG-Releases" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_KCG_Releases

for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		checking_and_copying_files "ERSA_EVC_Testrunner" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_ERSA_EVC_Testrunner
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		checking_and_copying_files "KCG_GreenField" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_KCG_GreenField
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		checking_and_copying_files "KCG-Releases" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_KCG_Releases
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		puts "checking and copying files is not possible yet for $CONF_NAME_Trackside, will be implemented later\n"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		puts "checking and copying files is not possible yet for $CONF_NAME_Trainside, will be implemented later\n"
	} else {
		puts "Some of your CONF_NAMEs is wrong, checking and copying of files is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}

#checking_and_copying_files "Trackside" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_Trackside
#checking_and_copying_files "Trainside" $BUILD_DIR_libraries $BUILD_DIR_Char_to_Int_C $BUILD_DIR_Int_to_Char_C $BUILD_DIR_kcg_assign_C $BUILD_DIR_kcg_conv_H $PATH_TO_Trainside


#Deletion and Creation of folders
#puts "delete and create folders\n"
#Delete_and_Create_Folder $DEL_DIR_KCG_ERSA $MKDIR_KCG_ERSA "KCG_ERSA"
#Delete_and_Create_Folder $KCG_GreenField_DEL_DIR_KCG_ERSA $KCG_GreenField_MKDIR_KCG_ERSA "KCG_GreenField"
#Delete_and_Create_Folder $KCG_Releases_DEL_DIR_KCG_ERSA $KCG_Releases_MKDIR_KCG_ERSA "KCG_Releases"

for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		puts "Deletion and creation of folders for $CONF_NAME\n"
		Delete_and_Create_Folder $DEL_DIR_KCG_ERSA $MKDIR_KCG_ERSA "KCG_ERSA"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		puts "Deletion and creation of folders for $CONF_NAME_EVC\n"
		Delete_and_Create_Folder $KCG_GreenField_DEL_DIR_KCG_ERSA $KCG_GreenField_MKDIR_KCG_ERSA "KCG_GreenField"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		puts "Deletion and creation of folders for $CONF_NAME_Releases\n"
		Delete_and_Create_Folder $KCG_Releases_DEL_DIR_KCG_ERSA $KCG_Releases_MKDIR_KCG_ERSA "KCG_Releases"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		puts "Deletion and creation of folders is not possible yet for $CONF_NAME_Trackside, will be implemented later\n"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		puts "Deletion and creation of folders is not possible yet for $CONF_NAME_Trainside, will be implemented later\n"
	} else {
		puts "Some of your CONF_NAMEs is wrong, deletion and creation of folders is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}




#Delete_and_Create_Folder $Trackside_DEL_DIR_KCG_ERSA $Trackside_MKDIR_KCG_ERSA
#Delete_and_Create_Folder $Trainside_DEL_DIR_KCG_ERSA $Trainside_MKDIR_KCG_ERSA


#copy all files from PATH_TO_ERSA_EVC_Testrunner to MKDIR_KCG_ERSA
#gathering all files in PATH_TO_ERSA_EVC_Testrunner
#puts "Gathering all files to $MKDIR_KCG_ERSA\n"
#Gathering_and_Copying $PATH_TO_ERSA_EVC_Testrunner $MKDIR_KCG_ERSA
#puts "Gathering all files to $KCG_GreenField_MKDIR_KCG_ERSA\n"
#Gathering_and_Copying $PATH_TO_KCG_GreenField $KCG_GreenField_MKDIR_KCG_ERSA
#puts "Gathering all files to $KCG_Releases_MKDIR_KCG_ERSA\n"
#Gathering_and_Copying $PATH_TO_KCG_Releases $KCG_Releases_MKDIR_KCG_ERSA

for {set i 0} {$i < [llength $List_Code_Generators]} {incr i} {
	if {[lindex $List_Code_Generators $i]==$CONF_NAME} {
		puts "Gathering all files to $MKDIR_KCG_ERSA\n"
		Gathering_and_Copying $PATH_TO_ERSA_EVC_Testrunner $MKDIR_KCG_ERSA
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_EVC} {
		puts "Gathering all files to $KCG_GreenField_MKDIR_KCG_ERSA\n"
		Gathering_and_Copying $PATH_TO_KCG_GreenField $KCG_GreenField_MKDIR_KCG_ERSA
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Releases} {
		puts "Gathering all files to $KCG_Releases_MKDIR_KCG_ERSA\n"
		Gathering_and_Copying $PATH_TO_KCG_Releases $KCG_Releases_MKDIR_KCG_ERSA
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trackside} {
		puts "Gathering of files is not possible yet for $CONF_NAME_Trackside, will be implemented later\n"
	} elseif {[lindex $List_Code_Generators $i]==$CONF_NAME_Trainside} {
		puts "Gathering of files is not possible yet for $CONF_NAME_Trainside, will be implemented later\n"
	} else {
		puts "Some of your CONF_NAMEs is wrong, deletion and creation of folders is not possible for '[lindex $List_of_CONF_NAMEs $i]'\n"
	}
}




#puts "gathering all files to $Trackside_MKDIR_KCG_ERSA\n"
#Gathering_and_Copying $PATH_TO_Trackside $Trackside_MKDIR_KCG_ERSA
#puts "gathering all files to $Trainside_MKDIR_KCG_ERSA\n"
#Gathering_and_Copying $PATH_TO_Trainside $Trainside_MKDIR_KCG_ERSA

Moving_DMI_testbench_EnvSim

puts "Done\n"



exit 1
