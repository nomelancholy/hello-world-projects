# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppPrjs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppPrjs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppPrjs.dir/flags.make

CMakeFiles/CppPrjs.dir/Person/Person.obj: CMakeFiles/CppPrjs.dir/flags.make
CMakeFiles/CppPrjs.dir/Person/Person.obj: CMakeFiles/CppPrjs.dir/includes_CXX.rsp
CMakeFiles/CppPrjs.dir/Person/Person.obj: ../Person/Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppPrjs.dir/Person/Person.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppPrjs.dir\Person\Person.obj -c C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\Person\Person.cpp

CMakeFiles/CppPrjs.dir/Person/Person.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppPrjs.dir/Person/Person.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\Person\Person.cpp > CMakeFiles\CppPrjs.dir\Person\Person.i

CMakeFiles/CppPrjs.dir/Person/Person.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppPrjs.dir/Person/Person.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\Person\Person.cpp -o CMakeFiles\CppPrjs.dir\Person\Person.s

CMakeFiles/CppPrjs.dir/Person/PersonMain.obj: CMakeFiles/CppPrjs.dir/flags.make
CMakeFiles/CppPrjs.dir/Person/PersonMain.obj: CMakeFiles/CppPrjs.dir/includes_CXX.rsp
CMakeFiles/CppPrjs.dir/Person/PersonMain.obj: ../Person/PersonMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CppPrjs.dir/Person/PersonMain.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppPrjs.dir\Person\PersonMain.obj -c C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\Person\PersonMain.cpp

CMakeFiles/CppPrjs.dir/Person/PersonMain.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppPrjs.dir/Person/PersonMain.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\Person\PersonMain.cpp > CMakeFiles\CppPrjs.dir\Person\PersonMain.i

CMakeFiles/CppPrjs.dir/Person/PersonMain.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppPrjs.dir/Person/PersonMain.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\Person\PersonMain.cpp -o CMakeFiles\CppPrjs.dir\Person\PersonMain.s

# Object files for target CppPrjs
CppPrjs_OBJECTS = \
"CMakeFiles/CppPrjs.dir/Person/Person.obj" \
"CMakeFiles/CppPrjs.dir/Person/PersonMain.obj"

# External object files for target CppPrjs
CppPrjs_EXTERNAL_OBJECTS =

CppPrjs.exe: CMakeFiles/CppPrjs.dir/Person/Person.obj
CppPrjs.exe: CMakeFiles/CppPrjs.dir/Person/PersonMain.obj
CppPrjs.exe: CMakeFiles/CppPrjs.dir/build.make
CppPrjs.exe: CMakeFiles/CppPrjs.dir/linklibs.rsp
CppPrjs.exe: CMakeFiles/CppPrjs.dir/objects1.rsp
CppPrjs.exe: CMakeFiles/CppPrjs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CppPrjs.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CppPrjs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppPrjs.dir/build: CppPrjs.exe

.PHONY : CMakeFiles/CppPrjs.dir/build

CMakeFiles/CppPrjs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CppPrjs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CppPrjs.dir/clean

CMakeFiles/CppPrjs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug C:\dev\workspace\hello-world-projects\univ-lecture-c++\CppPrjs\cmake-build-debug\CMakeFiles\CppPrjs.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppPrjs.dir/depend

