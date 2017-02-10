#include <iostream>
#include <string>
#include <new>

using namespace std;

int main (int argc, char *argv[])
{
	const int n = 100;
	
	string *const p = new string [n];
	string *q = p;
	string s;

	while (cin >> s && q != p + n)
		*q++ = s;

	const size_t sz = q - p;

	cout << sz << endl;

	delete [] p;

	return 0;
}
