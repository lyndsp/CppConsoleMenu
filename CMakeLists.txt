cmake_minimum_required(VERSION 3.23)
project(CppConsoleMenu)

set(CMAKE_CXX_STANDARD 23)

set(SOURCE_FILES main.cpp)
add_executable(CppConsoleMenu ${SOURCE_FILES})

include_directories(Domain)
add_subdirectory(Domain)

target_link_libraries(CppConsoleMenu Domain)

add_subdirectory(Google_tests)