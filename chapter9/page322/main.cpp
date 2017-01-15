#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string s ("Hello World");

	string s1 = s.substr(0, 5);
	string s2 = s.substr(6);
	string s3 = s.substr(6, 20);
	//string s4 = s.substr(23);//out-of_range
	string s5 = s.substr();

	cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << s5 << endl;

	return 0;
}
