#include <list>
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::count;

int main (int argc, char *argv[])
{
	list<int> iList;
	iList.push_back(34);
	iList.push_back(34);
	iList.push_back(3);
	iList.push_back(31);
	iList.push_back(3);
	iList.push_back(31);
	iList.push_back(23);
	iList.push_back(2);

	for (const auto &elem : iList)
	{
		cout << elem << " occour " << count(iList.begin(), iList.end(), elem) << endl;
	}

	return 0;
}
