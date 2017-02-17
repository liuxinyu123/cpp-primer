#include <iostream>
#include "strblob.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	StrBlob sb1 ({"hello", "world", "what", "are", "you", "doing"});
	cout << sb1.Size () << endl;
	cout << sb1 << endl;

	return 0;
}
