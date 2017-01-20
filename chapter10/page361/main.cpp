#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[])
{
	vector<string> strVec;
	strVec.push_back ("hello");
	strVec.push_back ("world");
	strVec.push_back ("what");
	strVec.push_back ("are");
	strVec.push_back ("doing");

	ostream_iterator<string> out (cout, " ");

	for (const auto &elem : strVec)
		//*out++ = elem;
		out  = elem;
	cout << endl;

	copy (strVec.begin (), strVec.end (), out);
	cout << endl;

	return 0;

}
