#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main (int argc, char *argv[])
{
	vector<string*> ptrToStrVec;
	string s1 = "hello";
	string s2 = "world";
	string s3 = "no";
	string s4 = "yes";

	ptrToStrVec.push_back (&s1);
	ptrToStrVec.push_back (&s2);
	ptrToStrVec.push_back (&s3);
	ptrToStrVec.push_back (&s4);

	for (const auto &e : ptrToStrVec)
		cout << e << " ";
	cout << endl;

	sort (ptrToStrVec.begin (), ptrToStrVec.end (), [] (string *a, string *b)
					{return a < b;});

	for (const auto &e : ptrToStrVec)
		cout << e << " ";
	cout << endl;
	
	sort (ptrToStrVec.begin (), ptrToStrVec.end (), greater<string*> ());

	for (const auto &e : ptrToStrVec)
		cout << e << " ";
	cout << endl;

	return 0;
}
