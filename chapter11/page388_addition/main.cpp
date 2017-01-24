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

	auto it1 = iSet.lower_bound (3);
	auto it2 = iSet.upper_bound (8);

	cout << *it1 << " " << *it2 << endl;
	
	return 0;
}
