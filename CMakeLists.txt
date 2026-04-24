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

# modules
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
add_git_submodule(external/json)

# modules using fetch content 
#include(FetchContent)
#FetchContent_Declare(
    #nlohmann_json
    #GIT_REPOSITORY https://github.com/nlohmann/json 
    #GIT_TAG v3.11.2
    #    GIT_SHALLOW TRUE
    #)
#FetchContent_MakeAvailable(nlohmann_json)

add_subdirectory (src)
add_subdirectory (config)
if (COMPILE_EXECUTABLE)
    add_subdirectory (app)
else()
    message("Without exe. compiling")
endif()
