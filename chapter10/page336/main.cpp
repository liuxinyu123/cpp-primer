#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::find;
using std::string;
using std::list;
using std::begin;
using std::end;

int main(int argc, char *argv[])
{
	vector<int> iVec;

	for (int i = 0; i < 20; ++i)
		iVec.push_back(i);

	int val = 10;
	auto pos = find(iVec.begin(), iVec.end(), val);

	cout << val << (pos == iVec.end() ? " is not present" : " is present") << endl;
	
	list<string> strList;
	strList.push_back("hello");
	strList.push_back("world");
	strList.push_front("you");
	strList.push_front("love");

	string str = "hello";
	auto pos1 = find(strList.begin(), strList.end(), str);
	cout << str << (pos1 == strList.end() ? " is not present" : " is present") << endl;

	int a = 11;
	int iArr[] = {3,234,23,1,23,43,10};
	auto pos2 = find(begin(iArr), end(iArr), a);
	cout << a << (pos2 == end(iArr) ? " is not present" : " is present") << endl;


	return 0;
}

