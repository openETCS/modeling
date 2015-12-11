

proc Checking_Directory {} {

	set PARENT_DIR [pwd]
	catch {file exists $PARENT_DIR/modeling} fid


	if {$fid==1} {
		puts "Directory is okay\n"
		puts "Working\n"
		set MODEL_ROOT "modeling"
		set srcAndBinary_ROOT "srcAndBinary"
		return [list "$PARENT_DIR/$MODEL_ROOT"]
	} else {
		puts "Something is wrong with the directory\n"
		exit
	}
}


set List_directories [Checking_Directory]

set 1_Modelling_ROOT [lindex $List_directories 0]

#settings for scade interface
set SCADE "SCADE"
set CODE "-code"

set PATH_TO_ETP_testbench $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Testbench_Integration.etp



set ROOT "-root"
set ROOT_NAME_testbench "Testbench_EnvSim::ROOT_Scripted"



set CONF "-conf"
set CONF_NAME_testbench "Simulation_EnvSim"





#parameters for passing the necessary folders and executables
set PATH_TO_DMI $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone/standalone

#PATH_TO_testbench
set PATH_TO_folderZIP $1_Modelling_ROOT/tools/Zipping_DMI_testbench_EnvSim

#elements of EnvSim
set PATH_TO_EnvSim_directories $1_Modelling_ROOT/test/EnvSim/libenvsim/dist/win32
set PATH_TO_EnvSim_simctrl $1_Modelling_ROOT/test/EnvSim/tools/tcl/simctrl
set PATH_TO_LIB $1_Modelling_ROOT/test/EnvSim/tools/tcl/lib
set MK_DIR_ENVSIM $PATH_TO_folderZIP/EnvSim
set MK_DIR_TOOLS $MK_DIR_ENVSIM/tools
set MK_DIR_TCL $MK_DIR_TOOLS/tcl
set MK_DIR_LIB $MK_DIR_TCL/lib
set MK_DIR_SIMCTRL $MK_DIR_TCL/simctrl
set MK_DIR_LIBENVSIM $MK_DIR_ENVSIM/libenvsim
set MK_DIR_DIST $MK_DIR_LIBENVSIM/dist
set MK_DIR_WIN32 $MK_DIR_DIST/win32



#setup make
set MAKE "make SCADESRCDIR=../Simulation_EnvSim/ ROOTNODE=ROOT_Scripted -j 8"
set SCADEDIRERSA "SCADESRCDIR="
set PATH_TO_SCADE_ENVSIM "../Simulation_EnvSim/"
set ROOTNODE "ROOTNODE="
set ROOTNAME "ROOT_Scripted"
set OPTION "-j 8"
set PATH_TO_MAKE_PLACE $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/build


#path to testbench.exe
set PATH_TO_testbench_EXE $1_Modelling_ROOT/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/build/testbench.exe
