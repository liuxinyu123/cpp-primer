#include <iostream>
#include <list>
#include <vector>
#include <forward_list>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	list<string> strList;
	strList.push_back("hello");
	strList.push_back("world");
	strList.push_back("fuck");
	strList.push_back("good");

	for(const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	strList.pop_back();
	strList.pop_front();
	for(const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	strList.erase(strList.begin());

	for(const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	strList.clear();
	for(const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	vector<int> iVec = {1,2,3,4,5,6,7,8,9,10};
	iVec.erase(iVec.begin() + 3,iVec.end() - 1);

	for(const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	int sz = iVec.size();
	for(int i = 0; i < sz / 2; ++i)
		iVec.erase(iVec.erase(iVec.begin()));
	for(const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	return 0;


	

}
