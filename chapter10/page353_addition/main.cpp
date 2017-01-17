#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
	vector<int> iVec;

	iVec.push_back (-23);	
	iVec.push_back (-3);	
	iVec.push_back (-24);	
	iVec.push_back (3);	
	iVec.push_back (-43);	
	iVec.push_back (-52);	
	iVec.push_back (233);
	
	vector<int> iVec2 (iVec);
	for (const int elem : iVec)
		cout << elem << " ";
	cout << endl;

	transform (iVec.begin (), iVec.end (), iVec.begin (), [] (int i) 
					{ return i < 0 ? -i : i;});
		
	for (const int elem : iVec)
		cout << elem << " ";
	cout << endl;

	transform (iVec2.begin (), iVec2.end (), iVec2.begin (), [] (int i) -> int 
					{ if (i < 0) return -i; else return i; });

	for (const int elem : iVec2)
		cout << elem << " ";
	cout << endl;

	return 0;
}
