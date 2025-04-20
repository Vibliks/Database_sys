cmake_minimum_required(VERSION 3.30)
project(Database_sys)

set(CMAKE_CXX_STANDARD 20)

# Fetch external dependencies
include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        11.1.4
)

FetchContent_MakeAvailable(fmt)

# Optional: Add include directories if needed
include_directories(${CMAKE_SOURCE_DIR}/scr)


add_executable(Database_sys
        scr/main.cpp
        scr/Csv_main.cpp
        scr/Header.cpp
)


target_link_libraries(Database_sys PRIVATE fmt::fmt)
