#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char* argv[])
{
	int v1 = 23;

	auto f = [v1]  () mutable { return ++v1;};

	v1 = 2;
	int v2 = f ();

	cout << v2 << endl;

	return 0;
}
