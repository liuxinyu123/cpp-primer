#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main (int argc, char *argv[])
{
	vector<string> words;
	words.push_back ("hello");
	words.push_back ("world");
	words.push_back ("what");
	words.push_back ("are");
	words.push_back ("you");
	words.push_back ("doing");

	std::sort (words.begin (), words.end (), [] (const string &str1, 
							const string &str2) { return str1.size () < str2.size (); });
	
	for (const auto &elem : words)
		cout << elem << " ";
	cout << endl;
	
	int sz = 5;
	auto pos = std::find_if (words.begin (), words.end (),
				   	[sz] (const string &str) { return str.size () >= sz;});	
	auto count = words.end () - pos;

	cout << count << " words of length " << sz << " or longer" << endl;

	std::for_each (pos, words.end (), [] (const string &str) { cout << str << " ";});
	cout << endl;

	return 0;
}
