#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc,char *argv[])
{
	vector<int> iVec;
	for(int i = 0; i < 10; ++i)
		iVec.push_back(i);
	for(auto i : iVec)
		cout << i << " ";
	cout << endl;

	for(auto &i : iVec)
		i *= i;

	for(auto i : iVec)
		cout << i << " ";
	cout << endl;

	return 0;
}
