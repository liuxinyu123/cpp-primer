#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

char& GetChar(string &str, string::size_type idx);

int main()
{
	string str("hello");
	cout << str << endl;
	GetChar(str,0) = 'H';
	cout << str << endl;

	return 0;
}

char& GetChar(string &str, string::size_type idx)
{
	return str[idx];
}
