#
#ifndef DISCOVEROS_HPP_
#define DISCOVEROS_HPP_

#include <cstdlib>
#include <string>

class discoverOS {
    public:
        discoverOS(); 
        ~discoverOS();
    //constexpr 
        std::string getOS(); 
    private:
        std::string m_stype;
};
#endif