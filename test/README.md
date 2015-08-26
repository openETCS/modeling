## Batch Tests

This directory contains the set of automated test suite for the EVC Scade models. The suite consists of:

* SCADE test scenarios (.sss) located under [src/](src/).
* A command line tool (`stest`) for batch execution of tests in [tools/](tools/).
* A set of Tcl libraries to be used in test scripts, located in [src/lib/](src/lib).

The test scripts can be run either in batch mode on the command line, or interactively in the SCADE UI.
Please read [Getting Started with Tests](doc/GettingStarted.md) if you want to run/write test scripts. 
