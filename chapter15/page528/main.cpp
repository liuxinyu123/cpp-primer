#include <iostream>
#include "quote.h"

int main (int argc, char *argv[])
{
	Quote q1 ("123", 23.3);
	std::cout << q1.NetPrice (2) << std::endl;

	return 0;
}
