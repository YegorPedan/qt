# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/edamameo/testQT/calc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/calc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calc.dir/flags.make

CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o: calc_autogen/mocs_compilation.cpp
CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o -MF CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o -c /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/calc_autogen/mocs_compilation.cpp

CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/calc_autogen/mocs_compilation.cpp > CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.i

CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/calc_autogen/mocs_compilation.cpp -o CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.s

CMakeFiles/calc.dir/main.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/main.cpp.o: /Users/edamameo/testQT/calc/main.cpp
CMakeFiles/calc.dir/main.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calc.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/main.cpp.o -MF CMakeFiles/calc.dir/main.cpp.o.d -o CMakeFiles/calc.dir/main.cpp.o -c /Users/edamameo/testQT/calc/main.cpp

CMakeFiles/calc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/edamameo/testQT/calc/main.cpp > CMakeFiles/calc.dir/main.cpp.i

CMakeFiles/calc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/edamameo/testQT/calc/main.cpp -o CMakeFiles/calc.dir/main.cpp.s

CMakeFiles/calc.dir/mainwindow.cpp.o: CMakeFiles/calc.dir/flags.make
CMakeFiles/calc.dir/mainwindow.cpp.o: /Users/edamameo/testQT/calc/mainwindow.cpp
CMakeFiles/calc.dir/mainwindow.cpp.o: CMakeFiles/calc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calc.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calc.dir/mainwindow.cpp.o -MF CMakeFiles/calc.dir/mainwindow.cpp.o.d -o CMakeFiles/calc.dir/mainwindow.cpp.o -c /Users/edamameo/testQT/calc/mainwindow.cpp

CMakeFiles/calc.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/edamameo/testQT/calc/mainwindow.cpp > CMakeFiles/calc.dir/mainwindow.cpp.i

CMakeFiles/calc.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/edamameo/testQT/calc/mainwindow.cpp -o CMakeFiles/calc.dir/mainwindow.cpp.s

# Object files for target calc
calc_OBJECTS = \
"CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calc.dir/main.cpp.o" \
"CMakeFiles/calc.dir/mainwindow.cpp.o"

# External object files for target calc
calc_EXTERNAL_OBJECTS =

calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/calc_autogen/mocs_compilation.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/main.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/mainwindow.cpp.o
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/build.make
calc.app/Contents/MacOS/calc: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
calc.app/Contents/MacOS/calc: /usr/local/lib/QtGui.framework/Versions/A/QtGui
calc.app/Contents/MacOS/calc: /usr/local/lib/QtCore.framework/Versions/A/QtCore
calc.app/Contents/MacOS/calc: CMakeFiles/calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable calc.app/Contents/MacOS/calc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calc.dir/build: calc.app/Contents/MacOS/calc
.PHONY : CMakeFiles/calc.dir/build

CMakeFiles/calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calc.dir/clean

CMakeFiles/calc.dir/depend:
	cd /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/edamameo/testQT/calc /Users/edamameo/testQT/calc /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/edamameo/testQT/build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles/calc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calc.dir/depend

