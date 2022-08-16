#
#include "include/ancor.hpp"
#include "OS_help/discoverOS.hpp"
#include <iostream>

using namespace std;
//#ifndef SAY_MY_VERSION

//#endif

int main(int argc, char** argv)
{
	//cout << "programname: " << argv[0] << " ver: " << SAY_MY_VERSION << endl;
	cout << "programname: " << argv[0] << endl;
	if(argc > 1) {
		string sName(argv[1]);
		cout << "first param: "<< sName << std::endl;
	} else {
		cout << "arguemts not supplied" << std::endl;
	}
	//discoverOS *ggg;
	discoverOS *gg1 = new(nothrow) discoverOS;
	gg1->getOS();
	delete gg1;

	std::shared_ptr <ancor> anc(new ancor());
	auto pa = anc.get();										//shared ptr mapped to pa
	auto nn = pa->add(1,2); 
	//std::cout << "calculation at compile time: " << nn << std::endl;
	std::cout << "OK!" << std::endl;
	return EXIT_SUCCESS;
}