#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	multimap<string, string> authors;
	authors.insert ({"hello", "world"});
	authors.insert ({"hello", "word"});
	authors.insert (make_pair<string, string> ("what", "are"));
	authors.insert (multimap<string, string>::value_type ("what", "do"));
	authors.insert (pair<string, string> ("how", "are"));
	authors.insert (pair<string, string> ("how", "do"));

	for (const auto &elem : authors)
		cout << elem.first << " " << elem.second << endl;

	string s = "what";
	auto cnt = authors.count (s);
	auto be = authors.find (s);

	while (cnt)
	{
		cout << be -> second << endl;
		++be;
		--cnt;
	}

	return 0;
}
