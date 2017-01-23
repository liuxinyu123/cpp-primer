#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count;
	word_count.insert ({"hello", 2});
	word_count.insert (make_pair ("world", 5));
	word_count.insert (map<string, int> :: value_type ("what", 5));
	word_count.insert (pair<string, int> ("are", 23));

	for (const auto &elem : word_count)
		cout << elem.first << " : " << elem.second << endl;

	string remove_word = "hello";
	if (word_count.erase (remove_word))
		cout << "ok: " << remove_word << " removed \n";
	else
		cout << "opps: " << remove_word << " not found\n";

	for_each (word_count.begin (), word_count.end (), [] (const pair<string, int> p)
					{ cout << p.first << " : " << p.second << endl; });
	
	return 0;
}
