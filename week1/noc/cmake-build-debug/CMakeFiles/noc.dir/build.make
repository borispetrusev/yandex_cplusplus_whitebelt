# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/149/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/149/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boris/CLionProjects/whitebelt/week1/noc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/noc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/noc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/noc.dir/flags.make

CMakeFiles/noc.dir/main.cpp.o: CMakeFiles/noc.dir/flags.make
CMakeFiles/noc.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/noc.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/noc.dir/main.cpp.o -c /home/boris/CLionProjects/whitebelt/week1/noc/main.cpp

CMakeFiles/noc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/noc.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boris/CLionProjects/whitebelt/week1/noc/main.cpp > CMakeFiles/noc.dir/main.cpp.i

CMakeFiles/noc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/noc.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boris/CLionProjects/whitebelt/week1/noc/main.cpp -o CMakeFiles/noc.dir/main.cpp.s

# Object files for target noc
noc_OBJECTS = \
"CMakeFiles/noc.dir/main.cpp.o"

# External object files for target noc
noc_EXTERNAL_OBJECTS =

noc: CMakeFiles/noc.dir/main.cpp.o
noc: CMakeFiles/noc.dir/build.make
noc: CMakeFiles/noc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable noc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/noc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/noc.dir/build: noc

.PHONY : CMakeFiles/noc.dir/build

CMakeFiles/noc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/noc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/noc.dir/clean

CMakeFiles/noc.dir/depend:
	cd /home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boris/CLionProjects/whitebelt/week1/noc /home/boris/CLionProjects/whitebelt/week1/noc /home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug /home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug /home/boris/CLionProjects/whitebelt/week1/noc/cmake-build-debug/CMakeFiles/noc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/noc.dir/depend
