#include "MySingleton.h"
#include <iostream>
MySingleton::MySingleton()
{
	std::cout << __func__ << " constructor called\n";
}
void MySingleton::Log(std::string const& log)
{
	std::cout << "Log::MySingleton :" << log <<"!\n";
}
