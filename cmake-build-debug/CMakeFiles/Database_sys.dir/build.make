# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.3.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.3.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Lenovo\Documents\Database_sys

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Database_sys.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Database_sys.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Database_sys.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Database_sys.dir/flags.make

CMakeFiles/Database_sys.dir/main.cpp.obj: CMakeFiles/Database_sys.dir/flags.make
CMakeFiles/Database_sys.dir/main.cpp.obj: CMakeFiles/Database_sys.dir/includes_CXX.rsp
CMakeFiles/Database_sys.dir/main.cpp.obj: C:/Users/Lenovo/Documents/Database_sys/main.cpp
CMakeFiles/Database_sys.dir/main.cpp.obj: CMakeFiles/Database_sys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Database_sys.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Database_sys.dir/main.cpp.obj -MF CMakeFiles\Database_sys.dir\main.cpp.obj.d -o CMakeFiles\Database_sys.dir\main.cpp.obj -c C:\Users\Lenovo\Documents\Database_sys\main.cpp

CMakeFiles/Database_sys.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Database_sys.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Lenovo\Documents\Database_sys\main.cpp > CMakeFiles\Database_sys.dir\main.cpp.i

CMakeFiles/Database_sys.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Database_sys.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Lenovo\Documents\Database_sys\main.cpp -o CMakeFiles\Database_sys.dir\main.cpp.s

CMakeFiles/Database_sys.dir/Csv_main.cpp.obj: CMakeFiles/Database_sys.dir/flags.make
CMakeFiles/Database_sys.dir/Csv_main.cpp.obj: CMakeFiles/Database_sys.dir/includes_CXX.rsp
CMakeFiles/Database_sys.dir/Csv_main.cpp.obj: C:/Users/Lenovo/Documents/Database_sys/Csv_main.cpp
CMakeFiles/Database_sys.dir/Csv_main.cpp.obj: CMakeFiles/Database_sys.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Database_sys.dir/Csv_main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Database_sys.dir/Csv_main.cpp.obj -MF CMakeFiles\Database_sys.dir\Csv_main.cpp.obj.d -o CMakeFiles\Database_sys.dir\Csv_main.cpp.obj -c C:\Users\Lenovo\Documents\Database_sys\Csv_main.cpp

CMakeFiles/Database_sys.dir/Csv_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Database_sys.dir/Csv_main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Lenovo\Documents\Database_sys\Csv_main.cpp > CMakeFiles\Database_sys.dir\Csv_main.cpp.i

CMakeFiles/Database_sys.dir/Csv_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Database_sys.dir/Csv_main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Lenovo\Documents\Database_sys\Csv_main.cpp -o CMakeFiles\Database_sys.dir\Csv_main.cpp.s

# Object files for target Database_sys
Database_sys_OBJECTS = \
"CMakeFiles/Database_sys.dir/main.cpp.obj" \
"CMakeFiles/Database_sys.dir/Csv_main.cpp.obj"

# External object files for target Database_sys
Database_sys_EXTERNAL_OBJECTS =

Database_sys.exe: CMakeFiles/Database_sys.dir/main.cpp.obj
Database_sys.exe: CMakeFiles/Database_sys.dir/Csv_main.cpp.obj
Database_sys.exe: CMakeFiles/Database_sys.dir/build.make
Database_sys.exe: _deps/fmt-build/libfmtd.a
Database_sys.exe: CMakeFiles/Database_sys.dir/linkLibs.rsp
Database_sys.exe: CMakeFiles/Database_sys.dir/objects1.rsp
Database_sys.exe: CMakeFiles/Database_sys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Database_sys.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Database_sys.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Database_sys.dir/build: Database_sys.exe
.PHONY : CMakeFiles/Database_sys.dir/build

CMakeFiles/Database_sys.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Database_sys.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Database_sys.dir/clean

CMakeFiles/Database_sys.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Lenovo\Documents\Database_sys C:\Users\Lenovo\Documents\Database_sys C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug C:\Users\Lenovo\Documents\Database_sys\cmake-build-debug\CMakeFiles\Database_sys.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Database_sys.dir/depend

