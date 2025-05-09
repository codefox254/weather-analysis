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
include CMakeFiles/weather_analysis.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/weather_analysis.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/weather_analysis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/weather_analysis.dir/flags.make

weather_analysis_autogen/timestamp: /usr/lib/qt5/bin/moc
weather_analysis_autogen/timestamp: /usr/lib/qt5/bin/uic
weather_analysis_autogen/timestamp: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target weather_analysis"
	/usr/bin/cmake -E cmake_autogen /home/dev/Projects/weather-analysis/build/CMakeFiles/weather_analysis_autogen.dir/AutogenInfo.json ""
	/usr/bin/cmake -E touch /home/dev/Projects/weather-analysis/build/weather_analysis_autogen/timestamp

CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o: weather_analysis_autogen/mocs_compilation.cpp
CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o -MF CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o -c /home/dev/Projects/weather-analysis/build/weather_analysis_autogen/mocs_compilation.cpp

CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/build/weather_analysis_autogen/mocs_compilation.cpp > CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.i

CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/build/weather_analysis_autogen/mocs_compilation.cpp -o CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.s

CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o: /home/dev/Projects/weather-analysis/src/main_cli.cpp
CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o -MF CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o.d -o CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o -c /home/dev/Projects/weather-analysis/src/main_cli.cpp

CMakeFiles/weather_analysis.dir/src/main_cli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/src/main_cli.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/main_cli.cpp > CMakeFiles/weather_analysis.dir/src/main_cli.cpp.i

CMakeFiles/weather_analysis.dir/src/main_cli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/src/main_cli.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/main_cli.cpp -o CMakeFiles/weather_analysis.dir/src/main_cli.cpp.s

CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o: /home/dev/Projects/weather-analysis/src/WeatherAPIClient.cpp
CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o -MF CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o.d -o CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o -c /home/dev/Projects/weather-analysis/src/WeatherAPIClient.cpp

CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/WeatherAPIClient.cpp > CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.i

CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/WeatherAPIClient.cpp -o CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.s

CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o: /home/dev/Projects/weather-analysis/src/WeatherRecord.cpp
CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o -MF CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o.d -o CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o -c /home/dev/Projects/weather-analysis/src/WeatherRecord.cpp

CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/WeatherRecord.cpp > CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.i

CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/WeatherRecord.cpp -o CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.s

CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o: /home/dev/Projects/weather-analysis/src/WeatherExporter.cpp
CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o -MF CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o.d -o CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o -c /home/dev/Projects/weather-analysis/src/WeatherExporter.cpp

CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/WeatherExporter.cpp > CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.i

CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/WeatherExporter.cpp -o CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.s

CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o: /home/dev/Projects/weather-analysis/src/WeatherTrendDetection.cpp
CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o -MF CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o.d -o CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o -c /home/dev/Projects/weather-analysis/src/WeatherTrendDetection.cpp

CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/WeatherTrendDetection.cpp > CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.i

CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/WeatherTrendDetection.cpp -o CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.s

CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o: CMakeFiles/weather_analysis.dir/flags.make
CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o: /home/dev/Projects/weather-analysis/src/GraphASCII.cpp
CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o: CMakeFiles/weather_analysis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o -MF CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o.d -o CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o -c /home/dev/Projects/weather-analysis/src/GraphASCII.cpp

CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/weather-analysis/src/GraphASCII.cpp > CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.i

CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/weather-analysis/src/GraphASCII.cpp -o CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.s

# Object files for target weather_analysis
weather_analysis_OBJECTS = \
"CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o" \
"CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o" \
"CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o" \
"CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o" \
"CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o" \
"CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o"

# External object files for target weather_analysis
weather_analysis_EXTERNAL_OBJECTS =

weather_analysis: CMakeFiles/weather_analysis.dir/weather_analysis_autogen/mocs_compilation.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/src/main_cli.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/src/WeatherAPIClient.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/src/WeatherRecord.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/src/WeatherExporter.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/src/WeatherTrendDetection.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/src/GraphASCII.cpp.o
weather_analysis: CMakeFiles/weather_analysis.dir/build.make
weather_analysis: /usr/lib/x86_64-linux-gnu/libcurl.so
weather_analysis: CMakeFiles/weather_analysis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/dev/Projects/weather-analysis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable weather_analysis"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/weather_analysis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/weather_analysis.dir/build: weather_analysis
.PHONY : CMakeFiles/weather_analysis.dir/build

CMakeFiles/weather_analysis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/weather_analysis.dir/cmake_clean.cmake
.PHONY : CMakeFiles/weather_analysis.dir/clean

CMakeFiles/weather_analysis.dir/depend: weather_analysis_autogen/timestamp
	cd /home/dev/Projects/weather-analysis/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev/Projects/weather-analysis /home/dev/Projects/weather-analysis /home/dev/Projects/weather-analysis/build /home/dev/Projects/weather-analysis/build /home/dev/Projects/weather-analysis/build/CMakeFiles/weather_analysis.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/weather_analysis.dir/depend

