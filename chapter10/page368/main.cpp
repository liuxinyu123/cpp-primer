#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[])
{
	vector<int> iVec1, iVec2;

	iVec1.push_back (23);
	iVec1.push_back (44);
	iVec1.push_back (23);
	iVec1.push_back (23);
	iVec1.push_back (42);
	iVec1.push_back (2);
	iVec1.push_back (42);

	cout << "iVec1 is : " << endl;
	for_each (iVec1.cbegin (), iVec1.cend (), [] (const int i) 
					{ cout << i << " "; });
	cout << endl;

	sort (iVec1.begin (), iVec1.end ());
	cout << "After sort,iVec1 is : " << endl;
	for_each (iVec1.cbegin (), iVec1.cend (), [] (const int i) 
					{ cout << i << " "; });
	cout << endl;

	return 0;

}
