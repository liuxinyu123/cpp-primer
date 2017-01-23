#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count;

	cout << word_count["hello"] << endl;
	++word_count["hello"];
	cout << word_count["hello"] << endl;
	auto it = word_count.begin ();

	cout << it -> first << " : " << it -> second << endl;

	return 0;
}
