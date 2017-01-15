#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string s = "hello world";
	auto p1 = s.find('o', 6);
	cout << p1 << endl;

	string s1 = "world";
	const char *cp = "world";

	//auto p2 = s.find(cp, 6);
	auto p2 = s.find(s1, 6);
	cout << p2 << endl;

	const char *cp1 = "worldddd";
	auto p3 = s.find(cp, 2, 5);
	cout << p3 << endl;

	return 0;
}
