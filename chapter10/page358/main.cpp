#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::inserter;
using std::front_inserter;
using std::back_inserter;
using std::copy;

int main (int argc, char *argv[])
{
	list<int> iList;
	list<int> iList1;

	for (int i = -9; i < 0; ++i)
		iList1.push_back (i);

	cout << "The iList1 is : " << endl;
	for (const auto &elem : iList1)
		cout << elem << " ";
	cout << endl;

	cout << "The list is : " << endl;
	for (const auto &elem : iList)
		cout << elem << " ";
	cout << endl;

	copy (iList1.begin (), iList1.end (), front_inserter (iList));
	copy (iList1.cbegin (), iList1.cend (), back_inserter (iList));
	copy (iList1.cbegin (), iList1.cend (), inserter (iList, iList.begin ()));

	cout << "The iList is : " << endl;
	for (const auto &elem : iList)
		cout << elem << " ";
	cout << endl;
	

	return 0;	
}
