#include <iostream>
#include <new>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	const int *pci = new const int (10);
	const string *pcs = new const string;

	int *pi1 = new int;
	int *pi2 = new (nothrow) int;

	cout << *pci << endl;
	cout << *pcs << endl;

	return 0;
}
