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

# Utility rule file for generate-header-client.

# Include any custom commands dependencies for this target.
include src/client/CMakeFiles/generate-header-client.dir/compiler_depend.make

# Include the progress variables for this target.
include src/client/CMakeFiles/generate-header-client.dir/progress.make

src/client/CMakeFiles/generate-header-client: generate_header_client.stamp

generate_header_client.stamp: ../src/client.dia
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/imade/Bureau/PLT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../generate_header_client.stamp"
	cd /home/imade/Bureau/PLT/build/src/client && rm -vf /home/imade/Bureau/PLT/src/*/client.h
	cd /home/imade/Bureau/PLT/build/src/client && rm -vf /home/imade/Bureau/PLT/src/*/client/*.h
	cd /home/imade/Bureau/PLT/build/src/client && ../../../bin/dia2code -ns client -d /home/imade/Bureau/PLT/src/client -t cpp /home/imade/Bureau/PLT/src/client/../client.dia
	cd /home/imade/Bureau/PLT/build/src/client && /usr/bin/cmake -E touch /home/imade/Bureau/PLT/build/generate_header_client.stamp

generate-header-client: generate_header_client.stamp
generate-header-client: src/client/CMakeFiles/generate-header-client
generate-header-client: src/client/CMakeFiles/generate-header-client.dir/build.make
.PHONY : generate-header-client

# Rule to build all files generated by this target.
src/client/CMakeFiles/generate-header-client.dir/build: generate-header-client
.PHONY : src/client/CMakeFiles/generate-header-client.dir/build

src/client/CMakeFiles/generate-header-client.dir/clean:
	cd /home/imade/Bureau/PLT/build/src/client && $(CMAKE_COMMAND) -P CMakeFiles/generate-header-client.dir/cmake_clean.cmake
.PHONY : src/client/CMakeFiles/generate-header-client.dir/clean

src/client/CMakeFiles/generate-header-client.dir/depend:
	cd /home/imade/Bureau/PLT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/imade/Bureau/PLT /home/imade/Bureau/PLT/src/client /home/imade/Bureau/PLT/build /home/imade/Bureau/PLT/build/src/client /home/imade/Bureau/PLT/build/src/client/CMakeFiles/generate-header-client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/client/CMakeFiles/generate-header-client.dir/depend
