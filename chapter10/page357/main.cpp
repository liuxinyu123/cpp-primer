#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace placeholders;

void Biggies (list<string> &l, ostream &os = cout, char c = ' ');
ostream& Print (ostream &os, const string &s, char c = ' ');

int main (int argc, char *argv[])
{
	list<string> strList;
	strList.push_back ("hello");
	strList.push_back ("world");
	strList.push_back ("what");
	strList.push_back ("are");
	strList.push_back ("you");
	strList.push_back ("doing");

	Biggies (strList);
	//for_each (strList.begin (), strList.end (), bind (Biggies, os,))
	ostream &os = cout;
 	for_each (strList.begin (), strList.end (), bind (Print, ref(os), _1, ' '));
	cout << endl;

	return 0;
}

void Biggies (list<string> &l, ostream &os, char c)
{
	
	for_each (l.begin (), l.end (), [&os, c] (const string &s)
					{ os << s << c; });

	os << endl;
}

ostream& Print (ostream &os, const string &s, char c)
{
	return 	os << s << c;
}
