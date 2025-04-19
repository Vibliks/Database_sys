cmake_minimum_required(VERSION 3.30)
project(Database_sys)

set(CMAKE_CXX_STANDARD 20)

# Enable fetching dependencies from Git
include(FetchContent)

# Fetch fmt library from GitHub
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        11.1.4  # You can change this to any other tag or branch
)

FetchContent_MakeAvailable(fmt)

# Define the main executable
add_executable(Database_sys main.cpp
        Csv_main.cpp)

# Link fmt library to your project
target_link_libraries(Database_sys PRIVATE fmt::fmt)
