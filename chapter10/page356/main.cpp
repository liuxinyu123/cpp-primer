#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::sort;
using namespace std::placeholders;

bool IsShorter (const string &s1 , const string &s2);

int main (int argc, char *argv[])
{
	vector<string> strVec;
	strVec.push_back ("excuse");
	strVec.push_back ("me");
	strVec.push_back ("what");
	strVec.push_back ("are");
	strVec.push_back ("you");
	strVec.push_back ("doing");

	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	sort (strVec.begin (), strVec.end (), IsShorter);
	std::for_each (strVec.begin (), strVec.end (), [] (const string &s)
					{ cout << s << " "; });
	cout << endl;

	sort (strVec.begin (), strVec.end (), std::bind (IsShorter, _2, _1));
	std::for_each (strVec.begin (), strVec.end (), [] (const string &s)
					{ cout << s << " "; });
	cout << endl;

	return 0;
}

bool IsShorter (const string &s1 , const string &s2)
{
	return s1.size () < s2.size ();
}
