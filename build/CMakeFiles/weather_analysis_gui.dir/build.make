# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/dev/Projects/weather-analysis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev/Projects/weather-analysis/build

# Include any dependencies generated for this target.
include CMakeFiles/weather_analysis_gui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/weather_analysis_gui.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/weather_analysis_gui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/weather_analysis_gui.dir/flags.make

weather_analysis_gui_autogen/timestamp: /usr/lib/qt5/bin/moc
weather_analysis_gui_autogen/timestamp: /usr/lib/qt5/bin/uic
weather_analysis_gui_autogen/timestamp: CMakeFiles/weather_analysis_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target weather_analysis_gui"
	/usr/bin/cmake -E cmake_autogen /home/dev/Projects/weather-analysis/build/CMakeFiles/weather_analysis_gui_autogen.dir/AutogenInfo.json ""
	/usr/bin/cmake -E touch /home/dev/Projects/weather-analysis/build/weather_analysis_gui_autogen/timestamp

CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o: CMakeFiles/weather_analysis_gui.dir/flags.make
CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o: weather_analysis_gui_autogen/mocs_compilation.cpp
CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o: CMakeFiles/weather_analysis_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o -MF CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o -c /home/dev/Projects/weather-analysis/build/weather_analysis_gui_autogen/mocs_compilation.cpp

CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/build/weather_analysis_gui_autogen/mocs_compilation.cpp > CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.i

CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/build/weather_analysis_gui_autogen/mocs_compilation.cpp -o CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.s

CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o: CMakeFiles/weather_analysis_gui.dir/flags.make
CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o: /home/dev/Projects/weather-analysis/src/main_gui.cpp
CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o: CMakeFiles/weather_analysis_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o -MF CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o.d -o CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o -c /home/dev/Projects/weather-analysis/src/main_gui.cpp

CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/main_gui.cpp > CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.i

CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/main_gui.cpp -o CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.s

CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o: CMakeFiles/weather_analysis_gui.dir/flags.make
CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o: /home/dev/Projects/weather-analysis/src/MainWindow.cpp
CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o: CMakeFiles/weather_analysis_gui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o -MF CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o.d -o CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o -c /home/dev/Projects/weather-analysis/src/MainWindow.cpp

CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/MainWindow.cpp > CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.i

CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/MainWindow.cpp -o CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.s

# Object files for target weather_analysis_gui
weather_analysis_gui_OBJECTS = \
"CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o" \
"CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o"

# External object files for target weather_analysis_gui
weather_analysis_gui_EXTERNAL_OBJECTS =

weather_analysis_gui: CMakeFiles/weather_analysis_gui.dir/weather_analysis_gui_autogen/mocs_compilation.cpp.o
weather_analysis_gui: CMakeFiles/weather_analysis_gui.dir/src/main_gui.cpp.o
weather_analysis_gui: CMakeFiles/weather_analysis_gui.dir/src/MainWindow.cpp.o
weather_analysis_gui: CMakeFiles/weather_analysis_gui.dir/build.make
weather_analysis_gui: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.13
weather_analysis_gui: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13
weather_analysis_gui: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
weather_analysis_gui: CMakeFiles/weather_analysis_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable weather_analysis_gui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/weather_analysis_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/weather_analysis_gui.dir/build: weather_analysis_gui
.PHONY : CMakeFiles/weather_analysis_gui.dir/build

CMakeFiles/weather_analysis_gui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/weather_analysis_gui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/weather_analysis_gui.dir/clean

CMakeFiles/weather_analysis_gui.dir/depend: weather_analysis_gui_autogen/timestamp
	cd /home/dev/Projects/weather-analysis/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev/Projects/weather-analysis /home/dev/Projects/weather-analysis /home/dev/Projects/weather-analysis/build /home/dev/Projects/weather-analysis/build /home/dev/Projects/weather-analysis/build/CMakeFiles/weather_analysis_gui.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/weather_analysis_gui.dir/depend

