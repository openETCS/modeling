Presetting
============

Fist, download [Cygwin](https://cygwin.com/install.html) and install the package of the perl interpreter, so that you can use it in the Cygwin shall.
Now download perl [here](http://strawberryperl.com/) for the windows command line. Follow the installation wizard to install the interpreter.

Before python can be installed the corresponding compiler needs to be setup. Download the compiler on this [side](http://aka.ms/vcpython27).
Run the installation wizard and follow the instructions.

Second, download the latest [python](https://www.python.org/downloads/windows/) release and follow the installation wizard. Next create a new system variable, e.g. `PYTHON`, and add there the path of the python interpreter (e.g. `C:\Python27\`). Afterwards add this new variable to the system variable `PATH`.
As next step some packages are needed to be installed:
Download the [numpy](http://sourceforge.net/projects/numpy/?source=typ_redirect) package, extract the zip file and then open a terminal and navigate to the extracted folder (e.g. `cd C:\Users\USERNAME\Downloads\numpy-1.10.1\numpy-1.10.1`).
Run the following command in the terminal

`python setup.py install`

to install `numpy`.

Now the `PyGithub` package must be installed. To achieve this, the package must be downloaded [here](https://pypi.python.org/pypi/PyGithub).
To extract the file the 7-Zip software is needed. Download and follow the instructions [here](http://www.7-zip.org/).
After you have extracted the `PyGithub` package, the installation is as follows:

Navigate your terminal to the folder where the extracted `PyGithub` is (e.g. `C:\Users\USERNAME\Downloads\PyGithub-1.25.2`) and run the following command in your terminal:

`python setup.py install`

Getting started with the issue tracker
============
**Creating the test report**


Open a Cygwin shell

Change to the `$ROOT/test/` directory (replace `$ROOT` with the root path of your local repository copy).


Run the command

`tools/generateTestReport -c -r`

to create the test report.
When this command is not working, then you should follow the instructions to setup the [Batch Tests](https://github.com/openETCS/modeling/blob/master/test/doc/GettingStarted.md). You can afterwards return to this ReadMe and retry the command.

**Creating the report.md file**


Now that you have created the `Test_Text.txt` file open the windows command line and type in the following command:

`cd ../tools && python main_issue_tracker.py USERNAME PASSWORD`

to generate the `report.md` file.

Whereby `USERNAME` is your username of your Github account and `PASSWORD` the corresponding password of the account.


Developing this tool further
============

For writing perl and python scripts the [Padre IDE](http://padre.perlide.org/download.html) and the [PyDev plugin](https://www.ics.uci.edu/~pattis/common/handouts/pythoneclipsejava/eclipsepython.html) for eclipse ([Eclipse LUNA](https://eclipse.org/luna/) version) have been used.

Getting started with ERSA extraction tool
============

Open your Cygwin terminal and type the following:

`../test/EnvSim/tools/wishrun.exe ERSA_extraction.tcl`
