#include <iostream>
#include "strblob.h"
#include "strblobptr.h"

using std::cout;
using std::endl;

int main (int argc, char *argv[])
{
	StrBlob sb1 ({"hello", "world", "what", "are", "you", "doing"});
	cout << sb1.Size () << endl;
	cout << sb1 << endl;

	StrBlobPtr sbp1(sb1);
	cout << sbp1.Deref () << endl;
	sbp1.Incr ();
	cout << sbp1.Deref () << endl;


	return 0;
}
