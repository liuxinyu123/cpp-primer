#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::fill;
using std::fill_n;

int main (int argc, char *argv[])
{
	string str = "hello";
	vector<string> strVec(10);

	fill (strVec.begin(), strVec.end(), str);

	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	vector<int> iVec (5);

	fill_n(iVec.begin(), iVec.size(), 1);

	for (const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;	

	return 0;
}
