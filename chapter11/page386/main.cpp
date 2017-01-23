#include <iostream>
#include <string>
#include <map>

using namespace std;

int main (int argc, char *argv[])
{
	multimap<string, string> authors1;
	map<string, string> authors2;
	authors1.insert ({"hello", "world"});
	authors1.insert ({"hello", "word"});

	authors2.insert ({"hello", "world"});
	authors2.insert ({"hello", "word"});

	cout << "authors1 is : " << endl;
	for (const auto &elem : authors1)
		cout << elem.first << " : " << elem.second << endl;

	cout << "authors2 is : " << endl;
	for (const auto &elem : authors2)
		cout << elem.first << " : " << elem.second << endl;

	return 0;
}
