#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

map<string, string> BuildMap (ifstream &in_file);
void WordTransform (ifstream &map_file, ifstream &input_file);
const string& Transform (const string &s, const map<string, string> &m);

int main (int argc, char *argv[])
{
	ifstream ifs ("rule.txt");
	ifstream input ("input.txt");
	WordTransform (ifs, input);

	return 0;
}

map<string, string> BuildMap (ifstream &in_file)
{
	map<string, string> trans_map;
	string key;
	string value;

	while (in_file >> key && getline (in_file, value))
	{
		if (value.size () > 1)
			trans_map[key] = value.substr (1);
		else
			throw runtime_error ("no rule for " + key);
	}

	return trans_map;
}

void WordTransform (ifstream &map_file, ifstream &input_file)
{
	auto trans_map = BuildMap (map_file);
	string text;
	while (getline (input_file, text))
	{
		istringstream ss (text);
		string s;

		while (ss >> s)
		{
			cout << Transform (s, trans_map);
			cout << " ";

		}

		cout << endl;
	}
}

const string& Transform (const string &s, const map<string, string> &m)
{
	auto it = m.find (s);

	if (it != m.end ())
		return it -> second;
	else
		return s;
}
