#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
	vector<int> iVec;

	for (int i = 0; i < 9; i = i + 2)
	{
		iVec.push_back (i);
		iVec.push_back (8 - i);
	}

	set<int> set1;
	set1.insert (iVec.begin (), iVec.end ());

	for (const auto & elem : set1)
		cout << elem << " ";
	cout << endl;

	set1.insert ({12, 12, 34, 12, 21, 21});
	for (const auto & elem : set1)
		cout << elem << " ";
	cout << endl;

	return 0;

}
