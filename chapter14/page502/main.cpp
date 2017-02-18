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

	cout << (++sbp1).Deref () << endl;
	cout << sbp1++.Deref () << endl;
	cout << sbp1.Deref () << endl;
	cout << sbp1.operator++ (0).Deref () << endl;
	cout << sbp1.operator++ ().Deref () << endl;
	//cout << sbp1.operator++ ().Deref () << endl;

	StrBlob sb2 = {"how", "are", "you"};
	StrBlobPtr sbp2 (sb2);
	cout << *sbp2 << endl;
	*sbp2 = "ok";
	cout << sbp2 -> size () << endl;
	cout << (*sbp2).size () << endl;

	return 0;
}
