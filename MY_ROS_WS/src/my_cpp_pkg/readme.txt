1. we cant execute the cpp program directly so we make changes in "CMakelist"
A. The add_executable command tells CMake to compile the C++ file,
   ament_target_dependencies specifies the dependencies for the executable,
   and install specifies where the compiled executable should be installed.