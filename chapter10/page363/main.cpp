#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main (int argc, char *argv[])
{
	vector<int> iVec;

	for (int i = 0; i < 10; ++i)
		iVec.push_back (i);

	for (auto it = iVec.rbegin (); it != iVec.rend (); ++it)
		cout << *it << " ";
	cout << endl;

	cout << "After sort,the iVec is : " << endl;
	sort (iVec.begin (), iVec.end ());

	for (const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	cout << "After reverse sort,the iVec is : " << endl;
	sort (iVec.rbegin (), iVec.rend ());

	for (const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;
	return 0;
}
