#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count = { {"world", 54} }; 
	
	auto it = word_count.begin ();
	cout << it -> first << " " << it -> second << endl;

	//it -> first = "hello";
	++ it -> second;

	cout << it -> first << " " << it -> second << endl;
	return 0;
	
}
