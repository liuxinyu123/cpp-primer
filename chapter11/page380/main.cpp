#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
	pair<string,size_t> p1 ("hello", 3);
	pair<string, string> p2 = { "hello", "world"};
	//pair<string, vector<int> > line = make_pair ("hello", );
	pair<int, int> p4 = make_pair (4, 3);
	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;
	//cout << p3.first << " " << p1.second[0] << endl;
	cout << p4.first << " " << p4.second << endl;
	
	return 0;
}
