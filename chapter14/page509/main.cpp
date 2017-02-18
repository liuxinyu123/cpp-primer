#include <iostream>
#include <functional>
#include <string>

int main (int argc, char *argv[])
{
	std::plus<int> intPlus;
	std::negate<int> intNegate;
	std::plus<std::string> strPlus;
	//std::negate<std::string> strNegate;

	std::cout << intPlus (12, 32) << std::endl;
	std::cout << intNegate (intPlus (1, 2)) << std::endl;
	std::cout << strPlus ("hello", "world") << std::endl;
	//std::cout << strNegate ("hello") << std::endl;
	return 0;
}
