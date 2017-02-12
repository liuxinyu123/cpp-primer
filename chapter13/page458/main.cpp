#include <iostream>
#include "hasptr.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	HasPtr hp1 ("hello", 2);
	HasPtr hp2 ("world", 5);

	cout << hp1.GetString () << " " << hp2.GetString () << endl;
	cout << hp1.GetInt () << " " << hp2.GetInt () << endl;

	Swap (hp1, hp2);
	cout << hp1.GetString () << " " << hp2.GetString () << endl;
	cout << hp1.GetInt () << " " << hp2.GetInt () << endl;

	return 0;
}
