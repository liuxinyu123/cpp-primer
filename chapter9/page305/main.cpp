#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <array>
#include <deque>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	list<int> iList;
	for(int i = 0; i < 10; ++i)
	{
		iList.push_back(i);
		iList.push_front(i);
	}

	iList.insert(iList.cend(), 11);
	cout << "The iList is: " << endl;
	for(const auto &elem : iList)
		cout << elem << " " ;
	cout << endl;

	deque<int> iDeq;
	for(int i = 0; i < 5; ++i)
	{
		iDeq.emplace_back(i);
		iDeq.emplace_front(i);
	}
	
	iDeq.emplace(iDeq.cbegin(), -1);	
	iDeq.insert(iDeq.cbegin(), iList.cbegin(), iList.cend());
	iDeq.insert(iDeq.cend(), 10, 0);
	cout << "The iDeq is:" << endl;
	for(const auto &elem : iDeq)
		cout << elem << " ";
	cout << endl;

	list<string> sList;
	vector<string> strVec{"hello", "hi", "ok"};
	sList.insert(sList.end(), strVec.end() - 2, strVec.end());
	deque<string> strDeq;
	strDeq.assign(strVec.cbegin(), strVec.cend());
	strVec.insert(strVec.cbegin(), strDeq.end() - 1, strDeq.end());

	cout << "The elements in sList is : " << endl;
	for(const auto &elem : sList)
		cout << elem << " ";
	cout << endl;

	cout << "The elements in strVec is: " << endl;
	for(const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	return 0;
}
