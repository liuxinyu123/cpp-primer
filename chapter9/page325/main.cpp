#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string s("hello world");
	//auto p1 = s.find("he");//大小写敏感
	auto p1 = s.rfind("he");
	cout << p1 << endl;

	string str("23ll23");
	//auto p2 = str.find_first_of(s);
	auto p2 = str.find_last_of(s);
	cout << p2 << endl;

	string str1("hellzza1");
	//auto p3 = str1.find_first_not_of(s);
	auto p3 = str1.find_last_not_of(s);
	cout << p3 << endl;


	return 0;
}
