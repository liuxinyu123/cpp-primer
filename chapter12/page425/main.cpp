#include <iostream>
#include <new>

typedef int arrT[10];

int main (int argc, char *argv[])
{
	char *cp = new char[0];
	
	std::cout << *cp << std::endl;
	
	int *pia = new arrT;

	for (int *p = pia; p != pia + 10; ++p)
		std::cout << *p << " ";
	std::cout << std::endl;

	delete [] pia;

	return 0;
}
