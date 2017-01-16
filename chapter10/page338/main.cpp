#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::accumulate;
using std::string;

int main(int argc, char *argv[])
{
	vector<int> iVec;

	for(int i = 0; i < 11; ++i)
		iVec.push_back(i);

	cout << "The sum of iVec is : " << accumulate(iVec.cbegin(), iVec.cend(), 0) << endl;
	
	vector<string> strVec;
	strVec.push_back("hello");
	strVec.push_back("world");
	strVec.push_back("what");
	strVec.push_back("are");
	strVec.push_back("doing");

	cout << "The sum of strVec is : " << accumulate(strVec.cbegin(), strVec.cend(), string(""));


	return 0;
}
