#' Wrap a prefixed operator as well as imported constants/operators

set cmstring {$Id: ListMTCUnits.tcl 2110 2014-04-18 16:12:37Z henry $}
set cmversion ""
regexp {.*\.tcl ([^ ]*) .*} $cmstring dummy cmversion

set tool "DePrefixRoot"
set banner "$tool (rev $::cmversion)"

source "CgMappingApiVisit.tcl"
source "ToolBox.tcl"

#' suffix for 'wrapping' imported operator
set importSuffix "imp"

set constants [list]
set operators [list]
set roots [list]
array set types [list]

#' get imported constants
rename VisitConstant VisitorVisitConstant
proc VisitConstant { constant ref } {
    if { [Get $constant "imported"] } {
	lappend "::constants" $constant
	RecordType $constant
    }
    #' nothing interesting to visit
    #' VisitorVisitConstant $constant $ref
}

#' get imported operators
rename VisitNoExpNode VisitorVisitNoExpNode
proc VisitNoExpNode { operator ref } {
    if { [Get $operator "imported"] } {
	lappend "::operators" $operator
	foreach role [list "input" "output"] {
	    MapRole $operator $role [list "RecordType"]
	}
    }
    #' nothing interesting to visit
    #' VisitorVisitNoExpNode $operator $ref
}

#' get level-1 operators: real roots
rename VisitNodeInstance VisitorVisitNodeInstance
proc VisitNodeInstance { instance ref } {
    if { $::mode == "roots" } {
	set operator [GetRole $instance "operator"]
	lappend "::roots" $operator
	#' stop the visit here
	#' VisitorVisitNoExpNode $operator $ref
    }
}

#' utility to record all the types used by imported objects
proc RecordType { typedObject } {
    set type [GetRole $typedObject "targetType"]
    switch [Class $type] {
	"Alias" - "Enumeration" - "Imported" - "Array" - "Structure" {
	    #' any value
	    set ::types($type) 1
	}
	default {
	}
    }
    return 1
}

proc CollectOptions { option } {
    set name [Get $option "name"]
    if { $name == "globals_prefix" } {
	#' compatibility KCG 6.1.3/6.1.4
	set name "global_prefix"
    }
    set value [Get $option "value"]
    set ::options($name) $value
    return 1
}

proc FlushTypeMacros { f title prefix types } {
    set attributes [list "targetName" "targetCopyFct" "targetCompFct"] 
    set length [string length $prefix]
    set end [expr { $length - 1 }]
    puts $f "/* ${title} */"
    set found 0
    foreach type $types {
	set name [Get $type "targetName"]
	if { [string range $name 0 $end] != $prefix } {
	    #' this type does not use prefix, th emacros are useless
	    continue
	}
	puts $f "#define [string range $name $length end]\t${name}"
	set baseName [string range $name $length end]
	set subType $type
	while { $subType != "" && [Class $subType] == "Alias" } {
	    set subType [GetRole $type "type"]
	}
	if { $subType != "" && ([Class $subType] == "Array" || [Class $subType] == "Structure") } {
	    set copyFct [Get $subType "targetCopyFct"]
	    if { $copyFct != "" } {
		#' define new macros iff 
		puts $f "#define kcg_copy_${baseName} ${prefix}kcg_copy_${baseName}"
		puts $f "#define kcg_comp_${baseName} ${prefix}kcg_comp_${baseName}"
	    }
	}
	set found 1
    }
    if { !$found } {
	puts $f "/* none */"
    }
    puts $f ""
}

proc FlushMacros { f title prefix attributes objects } {
    set length [string length $prefix]
    set end [expr { $length - 1 }]
    puts $f "/* ${title} */"
    set found 0
    foreach object $objects {
	foreach attribute $attributes {
	    if { ![catch { set name [Get $object $attribute] }] } {
		#' add a macro if the object does not use pragma name
		if { $name != "" && [string range $name 0 $end] == $prefix } {
		    puts $f "#define [string range $name $length end]\t${name}"
		    set found 1
		}
	    }
	}
	if { [Class $object] == "NoExpNode" } {
	    #' imported operator
	    set type [GetRole $object "outCtxType"]
	    if { $type != "" } {
		#' add a macro for the context
		set name [Get $type "targetName"]
		#' add a macro if the type does not use pragma name
		if { $name != "" && [string range $name 0 $end] == $prefix } {
		    puts $f "#define [string range $name $length end]\t${name}"
		}
	    }
	}
    }
    if { !$found } {
	puts $f "/* none */"
    }
    puts $f ""
}

proc Unprefix { name prefix } {
    set length [string length $prefix]
    return [string range $name $length end]
}

proc Main { filename targetDir confName } {
    global importSuffix

    if { [file pathtype $targetDir] == "relative" } {
	set targetDir [file join [pwd] $targetDir]
    }

    output "$::banner\n"

    #' mapping API initialization
    CgMap init_kcg $confName
    if { [catch { set app [lindex $::cgmap 0] }] } {
	output "error accessing the KCG trace file\n"
	return 1
    }
    set model [GetRole $app "model"]

    #' run the visit on the model to get the imported objects
    set ::mode "imported"
    Visit [list] $model
    #' run the visit on the root to get the root operators
    set ::mode "roots"
    MapRole $model "root" [list "Visit" [list]]

    #' directories for files
    MapRole $model "option" "CollectOptions"
    set kcgTargetDir $::options(target_dir)
    file mkdir $kcgTargetDir
    file mkdir $targetDir
    set prefix $::options(global_prefix)
    set prefixEnd [string length $prefix]
    #' KCG adds "_" to the prefix!
    append prefix "_"

    #' Generate the macro file
    set pathname [file join $kcgTargetDir $filename]
    if { [catch { set f [open $pathname "w"] } msg] } {
	output "$pathname: $msg\n"
	return 1
    }
    output "Generating $pathname\n"
    puts $f "/* $::banner - [clock format [clock seconds] -format {%Y/%m/%d %H:%M:%S}] */"
    set protect [string toupper [join [split [file tail $pathname] "."] "_"]]
    set protect "_${protect}_"
    puts $f "#ifndef ${protect}"
    puts $f "#define ${protect}"
    puts $f ""
    puts $f "#ifdef SUB_PROJECT"
    puts $f ""
    FlushTypeMacros $f "types" $prefix [array names "::types"]
    FlushMacros $f "imported constants" $prefix [list "targetName"] $::constants
    FlushMacros $f "imported operators" $prefix [list "targetCycleFct" "targetInitFct" "targetInitializationFct"] $::operators
    puts $f "#endif\t/* SUB_PROJECT */"
    puts $f ""
    puts $f "#endif\t/* ${protect} */"
    puts $f "/* end of file */"
    close $f

    #' Generate intermediate header files for imported nodes
    foreach operator $::operators {
	set cycleFct [Get $operator "targetCycleFct"]
	set rootName [Unprefix $cycleFct $prefix]
	if { [string range $cycleFct 0 $prefixEnd] != $prefix} {
	    #' might have a pragma name, header files are identical
	    continue
	}
	set type [GetRole $operator "outCtxType"]
	if { $type == "" } {
	    #' not a node, continue (functions declared in kcg_functions.h)
	    continue
	}
	set header [Get $operator "headerFile"]
	set pathname [file join $kcgTargetDir $header]
	if { [catch { set f [open $pathname "w"] } msg] } {
	    output "$pathname: $msg\n"
	    return 1
	}
	output "Generating $pathname\n"
	puts $f "/* $::banner - [clock format [clock seconds] -format {%Y/%m/%d %H:%M:%S}] */"
	set protect [string toupper [join [split [file tail $pathname] "."] "_"]]
	set protect "_${protect}_"
	puts $f "#ifndef ${protect}"
	puts $f "#define ${protect}"
	puts $f ""
	puts $f "#ifndef SUB_PROJECT"
	puts $f "#define SUB_PROJECT"
	puts $f "#undef _PREFIXMACROS_H_"
	puts $f "#include \"PrefixMacros.h\""
	puts $f "#endif	/* SUB_PROJECT */"
	puts $f "#include \"${rootName}.h\""
	puts $f ""
	puts $f "#endif\t/* ${protect} */"
	puts $f "/* end of file */"
	close $f
    }

    foreach operator $::roots {
	set cycleFct [Get $operator "targetCycleFct"]
	set rootName [Unprefix $cycleFct $prefix]
	set impCycleFct "${rootName}_${importSuffix}"
	set pathname [file join $targetDir "${impCycleFct}.h"]
	if { [catch { set f [open $pathname "w"] } msg] } {
	    output "$pathname: $msg\n"
	    return 1
	}
	output "Generating $pathname\n"
	puts $f "/* $::banner - [clock format [clock seconds] -format {%Y/%m/%d %H:%M:%S}] */"
	set protect [string toupper [join [split [file tail $pathname] "."] "_"]]
	set protect "_${protect}_"
	puts $f "#ifndef ${protect}"
	puts $f "#define ${protect}"
	puts $f ""
	#' real definition of the operator
	set relDir [ToolBox::GetRelativePath $kcgTargetDir [file join $targetDir "dummy"]]
	puts $f "#include \"${relDir}/${cycleFct}.h\""
	#' {{ TODO get real names from first project
	#'    for now, just guessed...
	#' alias for state context
	set stateType [Get [GetRole $operator "outCtxType"] "targetName"]
	puts $f "#define outC_${rootName}_${importSuffix} $stateType"
	#' alias for init/initialization functions
	foreach attribute [list "Init" "Initialization"] suffix [list "_reset" "_init"] {
	    set fct [Get $operator "target${attribute}Fct"]
	    if { $fct != "" } {
		puts $f "#define ${rootName}_${importSuffix}${suffix} ${fct}"
	    }
	}
	#' alias for cycle function, including casts
	#' assume this is an operator, no input threshold
	#' (input threshold lead to additional structures not suitable for macros)
	set inputs [list]
	MapRole $operator "input" [list "ToolBox::CollectMapProc" "inputs"]
	set sep ""
	puts -nonewline $f "#define ${rootName}_${importSuffix}("
	foreach input $inputs {
	    set name [Get $input "targetName"]
	    puts -nonewline $f "${sep}${name}"
	    set sep ","
	}
	puts -nonewline $f "${sep}outC) \\\n"
	puts -nonewline $f "\t${cycleFct}("
	set sep ""
	foreach input $inputs {
	    puts -nonewline $f "${sep}"
	    set type [GetRole $input "targetType"]
	    if { [Class $type] != "Predefined" } {
		if { [ToolBox::IsScalar $type] } {
		    set star ""
		} else {
		    set star "*"
		}
		set name [Get $type "targetName"]
		puts -nonewline $f "(${name}${star}) "
	    }
	    set name [Get $input "targetName"]
	    puts -nonewline $f "${name}"
	    set sep ","
	}
	puts $f "${sep}outC)"
	#' }}
	puts $f ""
	puts $f "#endif\t/* ${protect} */"
	puts $f "/* end of file */"
	close $f
    }

    output "Done.\n"

    #' no error
    return 0
}
