#include <iostream>

class AbsInt
{

public:
		int operator() (int i)
		{
			return (i < 0) ? -i : i;
		}
};

int main (int argc, char *argv[])
{
	int i = -23;
	int j = 21;
	
	AbsInt AI;
	std::cout << AI (i) << " " << AI (j) << std::endl;

	return 0;
}

