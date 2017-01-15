#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::string;

int main (int argc, char *argv[])
{
	string s = "hello world how are you what are you doing";

	string::size_type pos = 0;
	while ((pos = s.find_first_of ('o',pos)) != string::npos)
	{
		cout << "The pos: " << pos << " The element: " << s[pos] << endl;
		++pos;
	}

	string str = "mississippi";
	auto p1 = str.find("is");
	cout << p1 << endl;

	auto p2 = str.rfind("is");
	cout << p2 << endl;

	return 0;
}

