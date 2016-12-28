#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str("Hello,World!");

	const char *s = str.c_str();
	constexpr int sz = 20;
	char ss[sz] = {'\0'};	
	strcpy(ss,s);
	for(const char *p = s; *p != '\0'; ++p)
		cout << *p << " " ;
	cout << endl;
	
	str += "How are you?";
	for(const char *p = ss; *p != '\0'; ++p)
		cout << *p << " " ;
	cout << endl;

	return 0;
}
