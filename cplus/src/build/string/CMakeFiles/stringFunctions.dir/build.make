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
include string/CMakeFiles/stringFunctions.dir/depend.make

# Include the progress variables for this target.
include string/CMakeFiles/stringFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include string/CMakeFiles/stringFunctions.dir/flags.make

string/CMakeFiles/stringFunctions.dir/string_test.cc.o: string/CMakeFiles/stringFunctions.dir/flags.make
string/CMakeFiles/stringFunctions.dir/string_test.cc.o: ../string/string_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zte/github/C_Cplus_Study/cplus/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object string/CMakeFiles/stringFunctions.dir/string_test.cc.o"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/string && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stringFunctions.dir/string_test.cc.o -c /Users/zte/github/C_Cplus_Study/cplus/src/string/string_test.cc

string/CMakeFiles/stringFunctions.dir/string_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stringFunctions.dir/string_test.cc.i"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/string && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zte/github/C_Cplus_Study/cplus/src/string/string_test.cc > CMakeFiles/stringFunctions.dir/string_test.cc.i

string/CMakeFiles/stringFunctions.dir/string_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stringFunctions.dir/string_test.cc.s"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/string && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zte/github/C_Cplus_Study/cplus/src/string/string_test.cc -o CMakeFiles/stringFunctions.dir/string_test.cc.s

# Object files for target stringFunctions
stringFunctions_OBJECTS = \
"CMakeFiles/stringFunctions.dir/string_test.cc.o"

# External object files for target stringFunctions
stringFunctions_EXTERNAL_OBJECTS =

string/libstringFunctions.a: string/CMakeFiles/stringFunctions.dir/string_test.cc.o
string/libstringFunctions.a: string/CMakeFiles/stringFunctions.dir/build.make
string/libstringFunctions.a: string/CMakeFiles/stringFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zte/github/C_Cplus_Study/cplus/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstringFunctions.a"
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/string && $(CMAKE_COMMAND) -P CMakeFiles/stringFunctions.dir/cmake_clean_target.cmake
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/string && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stringFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
string/CMakeFiles/stringFunctions.dir/build: string/libstringFunctions.a

.PHONY : string/CMakeFiles/stringFunctions.dir/build

string/CMakeFiles/stringFunctions.dir/clean:
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build/string && $(CMAKE_COMMAND) -P CMakeFiles/stringFunctions.dir/cmake_clean.cmake
.PHONY : string/CMakeFiles/stringFunctions.dir/clean

string/CMakeFiles/stringFunctions.dir/depend:
	cd /Users/zte/github/C_Cplus_Study/cplus/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zte/github/C_Cplus_Study/cplus/src /Users/zte/github/C_Cplus_Study/cplus/src/string /Users/zte/github/C_Cplus_Study/cplus/src/build /Users/zte/github/C_Cplus_Study/cplus/src/build/string /Users/zte/github/C_Cplus_Study/cplus/src/build/string/CMakeFiles/stringFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : string/CMakeFiles/stringFunctions.dir/depend
