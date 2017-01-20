#include <iostream>
#include <map>
#include <set>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, size_t> word_count;
	set<string> exclude = {"an", "a", "the"};
	map<string, string> authors = {{"Joyce", "James"}, {"Austen", "Jane"}, {"Dickens", "Charles"} };

	for (const auto & elem : word_count)
		cout << elem.first << " " << elem.second << endl;

	for (const auto &elem : exclude)
		cout << elem << endl;
	for (const auto & elem : authors)
		cout << elem.first << " " << elem.second << endl;


	return 0;
}
