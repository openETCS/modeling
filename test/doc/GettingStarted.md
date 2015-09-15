## Getting Started: Batch Tests

This is a short introduction on how to execute the SCADE test scenarios provided in [test/src](test/src/).
There are two modes of operation:
* Batch execution using the command line tool `stest`; this option also supports test report generation.
* Interactive simulation in SCADE.

### Batch Mode (command line)
##### Prerequisites
* A [Cygwin](https://cygwin.com/install.html) installation with Perl support (usually included in the default Cygwin installation).
* Please ensure, that the SCADE executables are in the `PATH` of your Cygwin shell; you may need to add a line like
```bash
export PATH="$PATH:/cygdrive/c/Program\ Files/Esterel\ Technologies/SCADE\ R16.2.1/SCADE/bin/"
```
to your `~/.bashrc`.
* Tasks that don't require a SCADE installation may also be run in other shell environments with Perl support (Linux, OS X).

##### Running a single test script
1. Open a Cygwin shell
2. Change to the `$ROOT/test/` directory (replace `$ROOT` with the root path of your local repository copy)
3. Run `tools/stest -c PATH/TO/SCRIPT.sss`
The `-c` flag tells the test runner to build (compile) the Simulation DLL for the SCADE node under test (you may
omit this flag if the node has been built already).

##### Running the entire test suite and generate an HTML report
To run all tests located in and below a specific directory, run `stest` from within this directory without specifying a test script. Add the command line option `-r` to generate a single HTML report for all executed test scenarios.

**Example:**
To execute the entire test suite, change to `$ROOT/test/` and run `tools/stest -c -r`. After the test run has completed, you will find the results in `TestReport.html`. To view the details for a specific test, click on the corresponding entry in the "Result" column of the results table.


### Interactive Mode (SCADE Simulator)
It is also possible to use the test scenarios interactively with the SCADE Simulator. ~~However, **for this to work, you must start SCADE in the directory where the test script is located**! The easiest way to so is to open a terminal, change to the directory in which the test script is located, and run `SCADE.exe`.~~ 
