#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string s = "hello world";
	cout << s << endl;

	s.insert(s.size(), 5, '!');
	cout << s << endl;

	s.erase(s.size() - 5, 50);
	cout << s << endl;

	const char *cp = "what are you doing?";
	s.assign(cp, 4);
	cout << s << endl;
	s.insert(s.size(), cp + 4);
	cout << s << endl;

	string s1 = "how are you?";
	s.insert(0, s1);
	cout << s << endl;
	s.insert(0, s1, 0, s1.size());
	cout << s << endl;

	return 0;
}
