#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc,char *argv[])
{
	string str;
	int cnt = 0;
	while(cin >> str)
	{
		if(str[0] != '_')
			continue;
		++cnt;
	}

	cout << "The number of string with _ is " << cnt << endl;

	return 0;
}
