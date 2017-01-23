#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count;

	word_count["hello"] = 2;

	for (const auto &elem : word_count)
		cout << elem.first << " : " << elem.second << endl;

	cout << word_count.at ("hello") << endl;

	return 0;
}
