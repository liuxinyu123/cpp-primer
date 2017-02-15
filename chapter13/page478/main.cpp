#include <iostream>
#include "hasptr.h"

int main (int argc, char *argv[])
{
	HasPtr hp1 ("hello");
	HasPtr hp2;
	hp2 = hp2;
	hp2 = std::move (hp1);

	//hp1.Print ();
	hp2.Print ();

	return 0;
}
