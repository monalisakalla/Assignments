# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/monalisa/Assignments

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/monalisa/Assignments/build

# Include any dependencies generated for this target.
include CMakeFiles/Inheritance_uniforinitialization.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Inheritance_uniforinitialization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Inheritance_uniforinitialization.dir/flags.make

CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o: CMakeFiles/Inheritance_uniforinitialization.dir/flags.make
CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o: ../Inheritance_uniforinitialization/src/inheritance_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monalisa/Assignments/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o -c /home/monalisa/Assignments/Inheritance_uniforinitialization/src/inheritance_example.cpp

CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/monalisa/Assignments/Inheritance_uniforinitialization/src/inheritance_example.cpp > CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.i

CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/monalisa/Assignments/Inheritance_uniforinitialization/src/inheritance_example.cpp -o CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.s

CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.requires:

.PHONY : CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.requires

CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.provides: CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.requires
	$(MAKE) -f CMakeFiles/Inheritance_uniforinitialization.dir/build.make CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.provides.build
.PHONY : CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.provides

CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.provides.build: CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o


# Object files for target Inheritance_uniforinitialization
Inheritance_uniforinitialization_OBJECTS = \
"CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o"

# External object files for target Inheritance_uniforinitialization
Inheritance_uniforinitialization_EXTERNAL_OBJECTS =

bin/Inheritance_uniforinitialization: CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o
bin/Inheritance_uniforinitialization: CMakeFiles/Inheritance_uniforinitialization.dir/build.make
bin/Inheritance_uniforinitialization: CMakeFiles/Inheritance_uniforinitialization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/monalisa/Assignments/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/Inheritance_uniforinitialization"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Inheritance_uniforinitialization.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Inheritance_uniforinitialization.dir/build: bin/Inheritance_uniforinitialization

.PHONY : CMakeFiles/Inheritance_uniforinitialization.dir/build

CMakeFiles/Inheritance_uniforinitialization.dir/requires: CMakeFiles/Inheritance_uniforinitialization.dir/Inheritance_uniforinitialization/src/inheritance_example.cpp.o.requires

.PHONY : CMakeFiles/Inheritance_uniforinitialization.dir/requires

CMakeFiles/Inheritance_uniforinitialization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Inheritance_uniforinitialization.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Inheritance_uniforinitialization.dir/clean

CMakeFiles/Inheritance_uniforinitialization.dir/depend:
	cd /home/monalisa/Assignments/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/monalisa/Assignments /home/monalisa/Assignments /home/monalisa/Assignments/build /home/monalisa/Assignments/build /home/monalisa/Assignments/build/CMakeFiles/Inheritance_uniforinitialization.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Inheritance_uniforinitialization.dir/depend
