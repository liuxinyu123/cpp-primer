#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string MakePlural(size_t sz, const string &str, const string &end);
string& ShortString(const string &str1, const string &str2);
const string& ShortString1(const string &str1, const string &str2);
int main(int argc, char *argv[])
{
	string s1 = "hello,world";
	string s2("what are you doing");
	size_t cnt = 3;
	string str = MakePlural(cnt, ShortString(s1, s2), "es");
	string str1 = MakePlural(cnt, ShortString1(s1, s2), "es");

	cout << str << endl;
	cout << str1 << endl;

	return 0;
}

string MakePlural(size_t sz, const string &str, const string &end)
{
	return (sz > 1) ? (str + end) : str;
}

string& ShortString(const string &str1, const string &str2)
{
	return (str1.size() < str2.size()) ? const_cast<string&>(str1) : const_cast<string&>(str2);
}

const string& ShortString1(const string &str1, const string &str2)
{
	return (str1.size() < str2.size()) ? str1 : str2;
}
