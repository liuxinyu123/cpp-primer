#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string s("C++ Primer");
	string s1 = s;

	s.insert(s.size(), " 5th Ed");
	cout << s << endl;

	s1.append(" 5th Ed");
	cout << s << endl;

	s.erase(11, 3);
	s.insert(11, "4th");
	cout << s << endl;

	s1.replace(11, 3, "4th");
	cout << s1 << endl;


	return 0;
}
