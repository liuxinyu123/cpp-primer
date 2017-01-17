#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	int val = 23;
	auto f = [val] { return val;};
	auto f2 = [&val] { return val;};
	val = 1;

	auto val2 = f ();
	auto val3 = f2 ();
	cout << val2 << endl;
	cout << val3 << endl;

	return 0;
}
