#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[])
{
	list<int> iList {23, 14, 4324, 123, 12, 1234, 23, 22, 23, 54, 33};
	
	cout << "The iList is: " << endl;
	for (const auto &elem : iList)
		cout << elem << " ";
	cout << endl;

	replace (iList.begin(), iList.end(), 23, 0);

	cout << "After replace,the iList is: " << endl;
	for (const auto &elem : iList)
		cout << elem << " ";
	cout << endl;

	vector<int> iVec;
	replace_copy (iList.begin(), iList.end (), back_inserter(iVec), 23, 0);

	cout << "The iVec is : " << endl;
	for (const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;


	return 0;
}
