#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	const char *cp = "Hello,World!!!"; //空字符结尾
	char noNull[] = {'H', 'i'};	//不是以空字符结尾

	string s1(cp);
	string s2 (noNull, 2);
	string s3 (cp, 6);
	string s4 (cp + 6, 5);
	string s5 (noNull);// 未定义

	cout << s1 << "\n"<< s2 << "\n"<< s3 << "\n"<< s4 << "\n" << s5 << endl;

	string s6 (s1, 6);
	string s7 (s1, 6, 5);
	string s8 (s1, 6, 200);
	//string s9 (s1, 23); // out-of-range

	cout << s6 << "\n" << s7 << "\n" << s8 << endl;

	return 0;


}
