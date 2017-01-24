#include <iostream>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	ifstream in ("word.txt");

	unordered_map<string, int> word_count;
	string line;

	while (getline (in, line))
	{
		istringstream iss (line);
		string word;
		while (iss >> word)
		{
			++word_count[word];
		}
	}

	for (const auto &elem : word_count)
		cout << elem.first << " : " << elem.second << endl;

	return 0;
}
