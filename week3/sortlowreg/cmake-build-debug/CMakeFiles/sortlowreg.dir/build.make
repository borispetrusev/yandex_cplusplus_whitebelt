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
CMAKE_SOURCE_DIR = /home/boris/CLionProjects/whitebelt/week3/sortlowreg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sortlowreg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sortlowreg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortlowreg.dir/flags.make

CMakeFiles/sortlowreg.dir/main.cpp.o: CMakeFiles/sortlowreg.dir/flags.make
CMakeFiles/sortlowreg.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sortlowreg.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sortlowreg.dir/main.cpp.o -c /home/boris/CLionProjects/whitebelt/week3/sortlowreg/main.cpp

CMakeFiles/sortlowreg.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sortlowreg.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boris/CLionProjects/whitebelt/week3/sortlowreg/main.cpp > CMakeFiles/sortlowreg.dir/main.cpp.i

CMakeFiles/sortlowreg.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sortlowreg.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boris/CLionProjects/whitebelt/week3/sortlowreg/main.cpp -o CMakeFiles/sortlowreg.dir/main.cpp.s

# Object files for target sortlowreg
sortlowreg_OBJECTS = \
"CMakeFiles/sortlowreg.dir/main.cpp.o"

# External object files for target sortlowreg
sortlowreg_EXTERNAL_OBJECTS =

sortlowreg: CMakeFiles/sortlowreg.dir/main.cpp.o
sortlowreg: CMakeFiles/sortlowreg.dir/build.make
sortlowreg: CMakeFiles/sortlowreg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sortlowreg"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sortlowreg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortlowreg.dir/build: sortlowreg

.PHONY : CMakeFiles/sortlowreg.dir/build

CMakeFiles/sortlowreg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sortlowreg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sortlowreg.dir/clean

CMakeFiles/sortlowreg.dir/depend:
	cd /home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boris/CLionProjects/whitebelt/week3/sortlowreg /home/boris/CLionProjects/whitebelt/week3/sortlowreg /home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug /home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug /home/boris/CLionProjects/whitebelt/week3/sortlowreg/cmake-build-debug/CMakeFiles/sortlowreg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sortlowreg.dir/depend

