#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool StringCompare(const string &str1, const string &str2);

int main()
{
	bool (*pf)(const string &str1, const string &str2);
	bool (*pf1)(const string &str1, const string &str2);
	pf = StringCompare;//函数名转换为指针
	pf1 = &StringCompare;//取地址是可选的
	if(pf("hello", "happiness"))//调用stringcompare
		cout << "OK" << endl;
	if((*pf1)("hello","happiness"))//等价的调用
		cout << "GOOD" << endl;

	return 0;
}

bool StringCompare(const string &str1, const string &str2)
{
	return (str1.size() < str2.size());
}

