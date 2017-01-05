#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::ends;

int main(int argc, char *argv[])
{
	cout << std::unitbuf;
	cout << "Hi!" << endl;
	cout << "Hi!" << ends;
	cout << "Hi!" << flush;
	cout << std::nounitbuf;

	return 0;
}
