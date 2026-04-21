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

add_subdirectory (src)
add_subdirectory (app)
