#include <iostream>
#include <string>
#include <map>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count;

	word_count.insert ({"hello", 3});
	word_count.insert (make_pair ("world" , 2));
	word_count.insert (pair<string, int> ("what", 5));
	word_count.insert (map<string, int>::value_type ("are" , 5));

	for (const auto & elem : word_count)
		cout << elem.first << " : " << elem.second << endl;

	return 0;
}
