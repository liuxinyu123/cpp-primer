#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::equal;

int main (int argc, char *argv[])
{
	list<int> iList;

	for (int i = 0; i < 10; ++i)
		iList.push_back(i);
	iList.push_front(11);

	vector<int> iVec;
	
	for (int i = 0; i < 10; ++i)
		iVec.push_back(i);

	cout << "The elements in this two contains " << (equal(iList.cbegin(), iList.cend(), iVec.cbegin()) ?
					"is " : "is not ") << "equal" << endl;

	return 0;	
}
