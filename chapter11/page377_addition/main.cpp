#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main (int argc, char *argv[])
{
	vector<int> iVec;
	
	for (int i = 0; i < 10; ++i)
	{
		iVec.push_back (i);
		iVec.push_back (i);
	}	

	set<int> iSet (iVec.cbegin (), iVec.cend ());
	multiset<int> miSet (iVec.cbegin (), iVec.cend ());

	cout << iVec.size () << endl;
	cout << iSet.size () << endl;
	cout << miSet.size () << endl;

	return 0;
}
