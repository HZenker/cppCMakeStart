//ancor.cpp

#include "include/ancor.hpp"
#include <iostream>
#include <thread>

using namespace std;

ancor::ancor() : m_bRun(false)
{
    std::cout << "ancor construction" << std::endl;
}

ancor::~ancor() {
    //if (m_thProducer.joinable())
    //    m_thProducer.join();
    std::cout << "ancor destruction" << std::endl;
}

int ancor::add(const int a,const int b) noexcept
{
    return (a + b);
}