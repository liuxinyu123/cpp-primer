#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	int v1 = 54;

	auto f = [&v1] () mutable {return ++v1;};

	v1 = 1;

	cout << f () << endl;

	return 0;
}
