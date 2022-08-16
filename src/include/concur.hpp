#ifndef CONCUR_HPP_
#define CONCUR_HPP_

#include <iostream>
#include <exception>
#include <memory>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>

struct A{};
template<class T>
struct msg : A {
    T           m_val;
    std::string m_ident;
};

class concur {
    public:
        concur();
        ~concur();
    private:

    bool                             m_bBlocking;
    std::vector <std::shared_ptr<A>> msg;   //msg <double>* a3 = new msg <double> (1.234);
                                            //msg.push_back(shared_ptr<A>(a3))
};

#endif //CONCUR_HPP_