
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#project (Test)
#SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-pthread")
#add_executable(cppCMakeStart cpp_main_CM.cpp ancor.cpp)
add_executable(cpp_main_CM cpp_main_CM.cpp ancor.cpp concur.cpp)

#target_include_directories(cppCMakeStart PUBLIC OS_help)
target_include_directories(cpp_main_CM PUBLIC OS_help)

#target_link_libraries(cppCMakeStart PRIVATE src)
target_link_libraries(cpp_main_CM PRIVATE OS_help)

