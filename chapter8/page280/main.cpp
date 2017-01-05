#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;

	if(std::cin.bad())
		std::cout << "bad" << std::endl;
	if(std::cin.fail())
		std::cout << "fail" << std::endl;
	if(std::cin.eof())
		std::cout << "eof" << std::endl;
	if(std::cin.good())
		std::cout << "good" << std::endl;

	auto old_state = std::cin.rdstate();	
	std::cin.clear();
	if(std::cin.bad())
		std::cout << "bad" << std::endl;
	if(std::cin.fail())
		std::cout << "fail" << std::endl;
	if(std::cin.eof())
		std::cout << "eof" << std::endl;
	if(std::cin.good())
		std::cout << "good" << std::endl;

	std::cin.setstate(old_state);
	if(std::cin.bad())
		std::cout << "bad" << std::endl;
	if(std::cin.fail())
		std::cout << "fail" << std::endl;
	if(std::cin.eof())
		std::cout << "eof" << std::endl;
	if(std::cin.good())
		std::cout << "good" << std::endl;
	
	std::cout << std::cin.failbit << std::endl;

	return 0;
}
