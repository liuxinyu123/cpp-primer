#include <iostream>
#include <cstring>

template <unsigned int N, unsigned int M>
int Compare (const char (&p1)[N], const char (&p2)[M])
{
	return std::strcmp (p1, p2);
}


int main (int argc, char *argv[])
{
	std::cout << Compare ("hello", "hell") << std::endl;
	std::cout << Compare ("hello", "hellw") << std::endl;
	std::cout << std::strcmp ("hello", "hellw") << std::endl;

	return 0;

}
