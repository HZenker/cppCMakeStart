set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
    OS_help STATIC
    discoverOS.hpp    
    discoverOS.cpp
    )


target_include_directories(OS_help PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_include_directories(OS_help PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/OS_help")
