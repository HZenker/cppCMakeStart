#include "discoverOS.hpp"
#include <iostream>

discoverOS::discoverOS() : m_stype("") {

}

discoverOS::~discoverOS() {
    
}

std::string discoverOS::getOS() {
    std::cout << "getOS()" << std::endl;
    #ifdef IS_WINDOWS
        m_stype.c_str = "Windows!";
    #elif IS_LINUX
        m_stype = "Linux!";
    #elif IS_MACOS
    return std::string("macOS!");
    #elif IS_ANDROID
    return std::string("ANDROID!");
    #else
    return std::string("unknown OS!");
    #endif
    return m_stype.c_str();
}