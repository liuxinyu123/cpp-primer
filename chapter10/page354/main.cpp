#include <iostream>
#include <string>
#include <functional>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

bool Check_Size (const string &s, size_t sz);

int main (int argc, char *argv[])
{
	vector<string> strVec;
	strVec.push_back ("hello");	
	strVec.push_back ("world");	
	strVec.push_back ("what");	
	strVec.push_back ("are");	
	strVec.push_back ("you");	
	strVec.push_back ("doing");

	auto Check4 = std::bind (Check_Size, std::placeholders::_1, 4);
	
	for (const auto &elem : strVec)
	{
		if (Check4 (elem))
			cout << elem << " ";
	}
	cout << endl;

	return 0;
		
}

bool Check_Size (const string &s, size_t sz)
{
	return s.size () >= sz;	
}
