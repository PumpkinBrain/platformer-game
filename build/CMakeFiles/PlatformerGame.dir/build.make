# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/yukiko/projects/platformer-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yukiko/projects/platformer-game/build

# Include any dependencies generated for this target.
include CMakeFiles/PlatformerGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PlatformerGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PlatformerGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PlatformerGame.dir/flags.make

CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o: CMakeFiles/PlatformerGame.dir/flags.make
CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o: /home/yukiko/projects/platformer-game/src/main/Vec2.cpp
CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o: CMakeFiles/PlatformerGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yukiko/projects/platformer-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o -MF CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o.d -o CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o -c /home/yukiko/projects/platformer-game/src/main/Vec2.cpp

CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yukiko/projects/platformer-game/src/main/Vec2.cpp > CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.i

CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yukiko/projects/platformer-game/src/main/Vec2.cpp -o CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.s

# Object files for target PlatformerGame
PlatformerGame_OBJECTS = \
"CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o"

# External object files for target PlatformerGame
PlatformerGame_EXTERNAL_OBJECTS =

libPlatformerGame.a: CMakeFiles/PlatformerGame.dir/src/main/Vec2.cpp.o
libPlatformerGame.a: CMakeFiles/PlatformerGame.dir/build.make
libPlatformerGame.a: CMakeFiles/PlatformerGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/yukiko/projects/platformer-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libPlatformerGame.a"
	$(CMAKE_COMMAND) -P CMakeFiles/PlatformerGame.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PlatformerGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PlatformerGame.dir/build: libPlatformerGame.a
.PHONY : CMakeFiles/PlatformerGame.dir/build

CMakeFiles/PlatformerGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PlatformerGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PlatformerGame.dir/clean

CMakeFiles/PlatformerGame.dir/depend:
	cd /home/yukiko/projects/platformer-game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yukiko/projects/platformer-game /home/yukiko/projects/platformer-game /home/yukiko/projects/platformer-game/build /home/yukiko/projects/platformer-game/build /home/yukiko/projects/platformer-game/build/CMakeFiles/PlatformerGame.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/PlatformerGame.dir/depend

