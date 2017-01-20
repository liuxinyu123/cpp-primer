#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::string;
using std::find;

int main (int argc, char *argv[])
{
	string line = "hello,world";

	auto comma = find (line.begin (), line.end (), ',');
	auto comma1 = find (line.rbegin (), line.rend (), ',');

	cout << "The first word is " << string (line.begin (), comma) << endl;
	cout << "The last word is " << string (comma1.base (), line.end ()) << endl;

	return 0;
}
