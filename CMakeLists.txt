#
cmake_minimum_required(VERSION 3.15.0)
project(cppCMakeStart VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

include_directories(../include)
add_subdirectory(src/OS_help) 
add_subdirectory(src)

#target_compile_definitions(cppCMakeStart PUBLIC SAY_MY_VERSION=1)
target_compile_definitions(cpp_main_CM PUBLIC SAY_MY_VERSION=1)