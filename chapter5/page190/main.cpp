#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string::size_type FindChar(const string &str, char c, string::size_type &first);
string::size_type FindChar1(const string &str, char c, string::size_type &occur);

int main()
{
	string s = "hello world,how are you,what are you doing";
	string::size_type firstOccur = 0;
	string::size_type total = 0;
	char ch = 'z';
	cout << "Totle occur times: " << FindChar(s, ch, firstOccur) << "  first occur: "
		   	<< firstOccur << endl;
	cout << "First occur " << FindChar1(s, ch, total) << " Total occur: "
		   	<< total << endl;

	return 0;	
}


string::size_type FindChar(const string &str, char c, string::size_type &first)
{
	bool flag = false;
	int cnt = 0;
	int loc = 0;
	for(auto ch : str)
	{
		if(ch == c)
		{
			if(!flag)
			{
				flag = true;
				first = static_cast<string::size_type>(loc);
			}
			++cnt;
		}
		++loc;
	}

	if(!flag)
		first = static_cast<string::size_type>(str.size());

	return cnt;
}

string::size_type FindChar1(const string &str, char c, string::size_type &occur)
{
	string::size_type first = str.size();
	occur = 0;

	for(decltype(first) i = 0; i < str.size(); ++i)
	{
		if(str[i] == c)
		{
			if(first == str.size())
				first = i;
			++occur;
		}
	}

	return first;
}
