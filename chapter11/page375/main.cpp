#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

int main (int argc, char *argv[])
{
	ifstream ifile ("file.txt");
	string s, line;
	map <string, size_t> word_count;

	while (getline (ifile, line)) 
	{
		istringstream is(line);
		while (is >> s)
		{
			++word_count[s];
		}
				
	}	

	for (const auto &elem : word_count)
	{
		cout << elem.first << " occurs " << elem.second << ((elem.second > 1) ? " times" : " time")
				<< endl;
	}
	cout << endl;

	return 0;
}
