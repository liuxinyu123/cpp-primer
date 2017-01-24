#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	multimap<string, string> authors;
	authors.insert ({"hello", "world"});
	authors.insert (make_pair<string, string> ("hello", "word"));
	authors.insert (pair<string, string> ("what", "are"));
	authors.insert (pair<string, string> ("what", "do"));
	authors.insert (map<string, string>::value_type ("how", "are"));
	authors.insert (map<string, string>::value_type ("how", "do"));

	for (const auto &elem : authors)
		cout << elem.first << " : " << elem.second << endl;

	string s = "how";
	for (auto b = authors.lower_bound (s), e = authors.upper_bound (s); b != e; ++b)
		cout << b -> first << " : " << b -> second << endl;

	return 0;
}
