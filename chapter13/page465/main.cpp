#include <iostream>
#include <string>
#include "strvec.h"

int main (int argc, char *argv[])
{
	StrVec sv1;
	std::cout << sv1.Size () << sv1.Capacity () << std::endl;

	return 0;	
}
