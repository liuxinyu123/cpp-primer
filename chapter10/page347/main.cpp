#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main (int argc, char *argv[])
{
	auto f = [] {return 2;};
	cout << f() << endl;

	vector<int> iVec;
	iVec.push_back (23);
	iVec.push_back (41);
	iVec.push_back (1);
	iVec.push_back (-23);
	iVec.push_back (45);

	sort (iVec.begin (), iVec.end (), [] (const int a, const int b) { return a > b;});
	
	for (const int a : iVec) 
		cout << a << " ";
	cout << endl;	

	return 0;
}
