# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/sid/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/sid/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sid/ros2_ws/src/bocbot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sid/ros2_ws/build/bocbot

# Utility rule file for bocbot_uninstall.

# Include any custom commands dependencies for this target.
include CMakeFiles/bocbot_uninstall.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bocbot_uninstall.dir/progress.make

CMakeFiles/bocbot_uninstall:
	/home/sid/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -P /home/sid/ros2_ws/build/bocbot/ament_cmake_uninstall_target/ament_cmake_uninstall_target.cmake

bocbot_uninstall: CMakeFiles/bocbot_uninstall
bocbot_uninstall: CMakeFiles/bocbot_uninstall.dir/build.make
.PHONY : bocbot_uninstall

# Rule to build all files generated by this target.
CMakeFiles/bocbot_uninstall.dir/build: bocbot_uninstall
.PHONY : CMakeFiles/bocbot_uninstall.dir/build

CMakeFiles/bocbot_uninstall.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bocbot_uninstall.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bocbot_uninstall.dir/clean

CMakeFiles/bocbot_uninstall.dir/depend:
	cd /home/sid/ros2_ws/build/bocbot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sid/ros2_ws/src/bocbot /home/sid/ros2_ws/src/bocbot /home/sid/ros2_ws/build/bocbot /home/sid/ros2_ws/build/bocbot /home/sid/ros2_ws/build/bocbot/CMakeFiles/bocbot_uninstall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bocbot_uninstall.dir/depend
