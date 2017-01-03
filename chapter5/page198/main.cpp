#include <iostream>
#include <string>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::initializer_list;

void ErrorMsg(initializer_list<string> ls);
void ErrorMsg1(initializer_list<string> ls);

int main(int argc,char *argv[])
{
	initializer_list<string> lstr{"hello", "how", "are", "you"};
	ErrorMsg(lstr);
	ErrorMsg1(lstr);
	ErrorMsg({"what", "are", "you", "doing"});

	return 0;
}

void ErrorMsg(initializer_list<string> ls)
{
	for(auto b = ls.begin(); b != ls.end(); ++b)
		cout << *b << " ";
	cout << endl;
}

void ErrorMsg1(initializer_list<string> ls)
{
	for(const auto &s : ls)
		cout << s << " ";
	cout << endl;
}
