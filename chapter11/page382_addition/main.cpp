#include <iostream>
#include <set>

using namespace std;

int main (int argc, char *argv[])
{
	set<int> iSet = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto it = iSet.begin ();

	//if (it != iSet.end ())
		//*it = 23;
	cout << *it << endl;

	return 0;
}
