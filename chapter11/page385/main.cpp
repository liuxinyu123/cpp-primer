#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count;
	string s;

	while (cin >> s)
	{
		auto res = word_count.insert ({s, 1});
		
		if (!res.second)
			++res.first -> second;
	}

	for (const auto &elem : word_count)
		cout << elem.first << " : " << elem.second << endl;

	return 0;
}
