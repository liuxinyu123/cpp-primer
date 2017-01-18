#include <iostream>
#include <list>
#include <string>
#include <functional>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::list;
using std::sort;
//using namespace std::placeholders;

bool IsShorter (const string &s1 , const string &s2);

int main (int argc, char *argv[])
{
	list<string> strList;
	strList.push_back ("excuse");
	strList.push_back ("me");
	strList.push_back ("what");
	strList.push_back ("are");
	strList.push_back ("you");
	strList.push_back ("doing");

	for (const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	sort (strList.begin (), strList.end (), IsShorter);
	//std::for_each (strList.begin (), strList.end (), [] (const string &s)
					//{ cout << s << " "; });
}

bool IsShorter (const string &s1 , const string &s2)
{
	return s1.size () < s2.size ();
}
