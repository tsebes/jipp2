# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\politechnika\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\politechnika\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sebiz\CLionProjects\jipp2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug

# Include any dependencies generated for this target.
include matrixApp\CMakeFiles\matrixLib.dir\depend.make
# Include the progress variables for this target.
include matrixApp\CMakeFiles\matrixLib.dir\progress.make

# Include the compile flags for this target's objects.
include matrixApp\CMakeFiles\matrixLib.dir\flags.make

matrixApp\CMakeFiles\matrixLib.dir\src\lib.cpp.obj: matrixApp\CMakeFiles\matrixLib.dir\flags.make
matrixApp\CMakeFiles\matrixLib.dir\src\lib.cpp.obj: ..\matrixApp\src\lib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixApp/CMakeFiles/matrixLib.dir/src/lib.cpp.obj"
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\matrixLib.dir\src\lib.cpp.obj /FdCMakeFiles\matrixLib.dir\matrixLib.pdb /FS -c C:\Users\sebiz\CLionProjects\jipp2\matrixApp\src\lib.cpp
<<
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug

matrixApp\CMakeFiles\matrixLib.dir\src\lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixLib.dir/src/lib.cpp.i"
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\matrixLib.dir\src\lib.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sebiz\CLionProjects\jipp2\matrixApp\src\lib.cpp
<<
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug

matrixApp\CMakeFiles\matrixLib.dir\src\lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixLib.dir/src/lib.cpp.s"
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\matrixLib.dir\src\lib.cpp.s /c C:\Users\sebiz\CLionProjects\jipp2\matrixApp\src\lib.cpp
<<
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug

# Object files for target matrixLib
matrixLib_OBJECTS = \
"CMakeFiles\matrixLib.dir\src\lib.cpp.obj"

# External object files for target matrixLib
matrixLib_EXTERNAL_OBJECTS =

matrixApp\matrixLib.lib: matrixApp\CMakeFiles\matrixLib.dir\src\lib.cpp.obj
matrixApp\matrixLib.lib: matrixApp\CMakeFiles\matrixLib.dir\build.make
matrixApp\matrixLib.lib: matrixApp\CMakeFiles\matrixLib.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library matrixLib.lib"
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp
	$(CMAKE_COMMAND) -P CMakeFiles\matrixLib.dir\cmake_clean_target.cmake
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\lib.exe /nologo /machine:X86 /out:matrixLib.lib @CMakeFiles\matrixLib.dir\objects1.rsp 
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug

# Rule to build all files generated by this target.
matrixApp\CMakeFiles\matrixLib.dir\build: matrixApp\matrixLib.lib
.PHONY : matrixApp\CMakeFiles\matrixLib.dir\build

matrixApp\CMakeFiles\matrixLib.dir\clean:
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp
	$(CMAKE_COMMAND) -P CMakeFiles\matrixLib.dir\cmake_clean.cmake
	cd C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug
.PHONY : matrixApp\CMakeFiles\matrixLib.dir\clean

matrixApp\CMakeFiles\matrixLib.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\sebiz\CLionProjects\jipp2 C:\Users\sebiz\CLionProjects\jipp2\matrixApp C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp C:\Users\sebiz\CLionProjects\jipp2\cmake-build-debug\matrixApp\CMakeFiles\matrixLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : matrixApp\CMakeFiles\matrixLib.dir\depend

