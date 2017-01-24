#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main (int argc, char *argv[])
{
	unordered_map<string, int> word_count;
	word_count.insert ({"hello", 4});
	word_count.insert (make_pair<string, int> ("world", 5));
	word_count.insert (unordered_map<string, int>::value_type ("what", 2));
	word_count.insert (pair<string, int> ("are", 5));

	for (const auto &elem : word_count)
		cout << elem.first << " : " << elem.second << endl;
	if (word_count["hello"] >= 1)
		cout << "hello is existed" << endl;
	//if (word_count["hhh"] >= 1)
		//cout << "hhh is existed" << endl;
	if (word_count.find ("hhh") != word_count.end ())
		cout << "hhh is existed" << endl;

	for (const auto &elem : word_count)
		cout << elem.first << " : " << elem.second << endl;

	return 0;
}
