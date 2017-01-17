#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void Biggies (vector<string> &words, string::size_type sz, ostream &os = cout, char c = ' ');
void ElimDups (vector<string> &words);

int main (int argc, char *argv[])
{
	vector<string> strVec;
	strVec.push_back ("hello");
	strVec.push_back ("world");
	strVec.push_back ("what");
	strVec.push_back ("are");
	strVec.push_back ("you");
	strVec.push_back ("doing");
	
	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;
	
	ElimDups (strVec);

	for (const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;
	
	Biggies (strVec, 4);

	return 0;
}

void ElimDups (vector<string> &words)
{
	sort (words.begin (), words.end ());
	auto pos = unique (words.begin (), words.end ());
	words.erase (pos, words.end ());
	stable_sort (words.begin (), words.end (), [] (const string &str1, const string &str2)
					{ return str1.size () < str2.size ();});
}

void Biggies (vector<string> &words, string::size_type sz, ostream &os, char c)
{
	auto pos = find_if (words.begin (), words.end (), [sz] (const string &s) 
					{ return s.size () >= sz;});
	auto count = words.end () - pos;
	cout << count << ((count > 1) ? " words" : " word") << " of length " << sz << " or longer" 
			<< endl;

	for_each (pos, words.end (), [&os, c] (const string &s)
					{ os << s << c;});
	cout << endl;
}
