# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/imade/Bureau/PLT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/imade/Bureau/PLT/build

# Include any dependencies generated for this target.
include test/client/CMakeFiles/test_client_dummy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/client/CMakeFiles/test_client_dummy.dir/compiler_depend.make

# Include the progress variables for this target.
include test/client/CMakeFiles/test_client_dummy.dir/progress.make

# Include the compile flags for this target's objects.
include test/client/CMakeFiles/test_client_dummy.dir/flags.make

test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o: test/client/CMakeFiles/test_client_dummy.dir/flags.make
test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o: ../test/client/test_client_dummy.cpp
test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o: test/client/CMakeFiles/test_client_dummy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imade/Bureau/PLT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o"
	cd /home/imade/Bureau/PLT/build/test/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o -MF CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o.d -o CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o -c /home/imade/Bureau/PLT/test/client/test_client_dummy.cpp

test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.i"
	cd /home/imade/Bureau/PLT/build/test/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imade/Bureau/PLT/test/client/test_client_dummy.cpp > CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.i

test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.s"
	cd /home/imade/Bureau/PLT/build/test/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imade/Bureau/PLT/test/client/test_client_dummy.cpp -o CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.s

# Object files for target test_client_dummy
test_client_dummy_OBJECTS = \
"CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o"

# External object files for target test_client_dummy
test_client_dummy_EXTERNAL_OBJECTS =

test/client/test_client_dummy: test/client/CMakeFiles/test_client_dummy.dir/test_client_dummy.cpp.o
test/client/test_client_dummy: test/client/CMakeFiles/test_client_dummy.dir/build.make
test/client/test_client_dummy: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so.1.74.0
test/client/test_client_dummy: src/shared/libshared_static.a
test/client/test_client_dummy: src/client/libclient_static.a
test/client/test_client_dummy: src/shared/libshared_static.a
test/client/test_client_dummy: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
test/client/test_client_dummy: /usr/lib/x86_64-linux-gnu/libsfml-network.so.2.5.1
test/client/test_client_dummy: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
test/client/test_client_dummy: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
test/client/test_client_dummy: test/client/CMakeFiles/test_client_dummy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/imade/Bureau/PLT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_client_dummy"
	cd /home/imade/Bureau/PLT/build/test/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_client_dummy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/client/CMakeFiles/test_client_dummy.dir/build: test/client/test_client_dummy
.PHONY : test/client/CMakeFiles/test_client_dummy.dir/build

test/client/CMakeFiles/test_client_dummy.dir/clean:
	cd /home/imade/Bureau/PLT/build/test/client && $(CMAKE_COMMAND) -P CMakeFiles/test_client_dummy.dir/cmake_clean.cmake
.PHONY : test/client/CMakeFiles/test_client_dummy.dir/clean

test/client/CMakeFiles/test_client_dummy.dir/depend:
	cd /home/imade/Bureau/PLT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/imade/Bureau/PLT /home/imade/Bureau/PLT/test/client /home/imade/Bureau/PLT/build /home/imade/Bureau/PLT/build/test/client /home/imade/Bureau/PLT/build/test/client/CMakeFiles/test_client_dummy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/client/CMakeFiles/test_client_dummy.dir/depend

