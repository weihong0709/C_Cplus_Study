# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zte/github/C_Cplus_Study/cplus/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zte/github/C_Cplus_Study/cplus/src/build

# Include any dependencies generated for this target.
include enum/CMakeFiles/enumFunctions.dir/depend.make

# Include the progress variables for this target.
include enum/CMakeFiles/enumFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include enum/CMakeFiles/enumFunctions.dir/flags.make

enum/CMakeFiles/enumFunctions.dir/enum_test.cc.o: enum/CMakeFiles/enumFunctions.dir/flags.make
enum/CMakeFiles/enumFunctions.dir/enum_test.cc.o: ../enum/enum_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zte/github/C_Cplus_Study/cplus/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object enum/CMakeFiles/enumFunctions.dir/enum_test.cc.o"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/enum && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/enumFunctions.dir/enum_test.cc.o -c /Users/zte/github/C_Cplus_Study/cplus/src/enum/enum_test.cc

enum/CMakeFiles/enumFunctions.dir/enum_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/enumFunctions.dir/enum_test.cc.i"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/enum && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zte/github/C_Cplus_Study/cplus/src/enum/enum_test.cc > CMakeFiles/enumFunctions.dir/enum_test.cc.i

enum/CMakeFiles/enumFunctions.dir/enum_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/enumFunctions.dir/enum_test.cc.s"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/enum && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zte/github/C_Cplus_Study/cplus/src/enum/enum_test.cc -o CMakeFiles/enumFunctions.dir/enum_test.cc.s

# Object files for target enumFunctions
enumFunctions_OBJECTS = \
"CMakeFiles/enumFunctions.dir/enum_test.cc.o"

# External object files for target enumFunctions
enumFunctions_EXTERNAL_OBJECTS =

enum/libenumFunctions.a: enum/CMakeFiles/enumFunctions.dir/enum_test.cc.o
enum/libenumFunctions.a: enum/CMakeFiles/enumFunctions.dir/build.make
enum/libenumFunctions.a: enum/CMakeFiles/enumFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zte/github/C_Cplus_Study/cplus/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libenumFunctions.a"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/enum && $(CMAKE_COMMAND) -P CMakeFiles/enumFunctions.dir/cmake_clean_target.cmake
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/enum && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/enumFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
enum/CMakeFiles/enumFunctions.dir/build: enum/libenumFunctions.a

.PHONY : enum/CMakeFiles/enumFunctions.dir/build

enum/CMakeFiles/enumFunctions.dir/clean:
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/enum && $(CMAKE_COMMAND) -P CMakeFiles/enumFunctions.dir/cmake_clean.cmake
.PHONY : enum/CMakeFiles/enumFunctions.dir/clean

enum/CMakeFiles/enumFunctions.dir/depend:
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zte/github/C_Cplus_Study/cplus/src /Users/zte/github/C_Cplus_Study/cplus/src/enum /Users/zte/github/C_Cplus_Study/cplus/src/build /Users/zte/github/C_Cplus_Study/cplus/src/build/enum /Users/zte/github/C_Cplus_Study/cplus/src/build/enum/CMakeFiles/enumFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : enum/CMakeFiles/enumFunctions.dir/depend
