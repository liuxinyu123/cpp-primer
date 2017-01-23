#include <iostream>
#include <set>

using namespace std;

int main (int argc, char *argv[])
{
	set<int> iSet = {1, 3, 5, 6, 7, 8, 9};

	auto it = iSet.find (9);
	if (it != iSet.end ())
		cout << *it << endl;

	cout << iSet.count (1) << endl;
	cout << iSet.count (0) << endl;

	return 0;
}
