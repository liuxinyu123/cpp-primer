#include <iostream>
#include "hasptr.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	HasPtr hp1 ("hello", 4);
	HasPtr hp2 ("world", 6);

	cout << hp1.GetString () << " " << hp1.GetInt () << endl;
	cout << hp2.GetString () << " " << hp2.GetInt () << endl;

	using std::swap;
	swap (hp1, hp2);
	cout << hp1.GetString () << " " << hp1.GetInt () << endl;
	cout << hp2.GetString () << " " << hp2.GetInt () << endl;

	hp2 = hp1;
	cout << hp1.GetString () << " " << hp1.GetInt () << endl;
	cout << hp2.GetString () << " " << hp2.GetInt () << endl;

	return 0;

}
