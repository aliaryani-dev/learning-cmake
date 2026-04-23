# Steps :
# 1. Create Source and CMake file
# 2. mkdir build
# 3. cd build
# 4. cmake ..
# 5. cmake --build .
# 6. ./Executable

cmake_minimum_required (VERSION 3.30)
project (
    LearningCMake
    VERSION 1.0.0
    LANGUAGES C CXX
)

# Declaring a variable
set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)
# Booleans
Option(COMPILE_EXECUTABLE "Whether to compile the executable" ON)

#Setting C++ Standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory (src)
add_subdirectory (config)
if (COMPILE_EXECUTABLE)
    add_subdirectory (app)
else()
    message("Without exe. compiling")
endif()
