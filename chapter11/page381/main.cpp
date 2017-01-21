#include <iostream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

pair<string, int> Process (vector<string> &v); 

int main (int argc, char *argv[])
{
	vector<string> strVec = {"hello", "world", "what", "are", "you", "doing"};
	
	pair<string, int> p = Process (strVec);
	cout << p.first << " " << p.second << endl;

	return 0;
}

pair<string, int> Process (vector<string> &v)
{
	if (!v.empty ())
		return {v.back (), v.back ().size ()};
	else
		return pair<string, int> ();
}


