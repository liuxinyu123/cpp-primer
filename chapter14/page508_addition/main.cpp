#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class SizeComp 
{

public:
		SizeComp (std::size_t s)
			:sz (s) {}
		bool operator () (const std::string &s)
		{
			return s.size () < sz;
		}
private:
		std::size_t sz;
};

int main (int argc, char *argv[])
{
	vector<string> strVec ({"hello", "world", "what", "are", "you", "doing"});
	size_t sz = 4;
	auto wc = find_if (strVec.begin (), strVec.end (), [sz] (const string &s) 
					{return s.size () < sz;});
	cout << *wc << endl;
	
	auto wc2 = find_if (strVec.begin (), strVec.end (), SizeComp (4));
	cout << *wc2 << endl;

	return 0;
}
