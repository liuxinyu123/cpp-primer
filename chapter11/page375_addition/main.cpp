#include <iostream>
#include <set>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main (int argc, char *argv[])
{
	ifstream ifile ("file.txt");
	string line, s;

	map<string, size_t> word_count;
	set<string> exclude = {"a", "A", "an", "An", "the", "The", "or", "Or", "and", "And", "but", "But"};

	while (getline (ifile, line))
	{
		istringstream iss (line);
		
		while (iss >> s)
		{
			if (exclude.find (s) == exclude.end ())
				++word_count[s];
		}
	}

	for (const auto &elem : word_count)
		cout << elem.first << " occours " << elem.second << ((elem.second > 1) ? " times" : " time")
				<< endl;

	return 0;
}
