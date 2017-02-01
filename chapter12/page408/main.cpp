#include <iostream>
#include <new>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	int *pi1 = new int;
	int *pi2 = new int ();

	string *ps1 = new string;
	string *ps2 = new string ();

	auto pi3 = new auto (20);
	auto ps3 = new auto ("hello");

	cout << *pi1 << endl;
	cout << *pi2 << endl;
	cout << *pi3 << endl;

	cout << *ps1 << endl;
	cout << *ps2 << endl;
	cout << *ps3 << endl;

	return 0;
}
