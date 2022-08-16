//ancor.hpp

#ifndef ANCOR_HPP_
#define ANCOR_HPP_

#include <iostream>
#include <exception>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>

class ancor : public std::enable_shared_from_this<ancor>
{
    public:
    ancor();
    ~ancor();

    //constexpr 
    int add(const int a,const int b) noexcept;

    private:
    //std::thread     m_thProducer;
    bool            m_bRun;
};

#endif