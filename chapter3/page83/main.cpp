#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string s = "hello,world!!!";
	
	decltype(s.size()) cnt = 0;
	for(auto c : s)
	{
		cout << c << endl;
		if(ispunct(c))
			++cnt;
	}

	cout << cnt << " punctuation characters in " << s << endl;

	for(auto &c : s)
		c = toupper(c);
	
	cout << s << endl;

	return 0;
		
}
