#include <iostream>
#include <map>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	map<string, int> word_count = { {"world", 54}, {"hello", 23}, {"what", 21}, {"are", 45},
			{"you", 12}, {"doing", 8}	}; 
	
	auto it = word_count.begin ();
	cout << it -> first << " " << it -> second << endl;

	//it -> first = "hello";
	++ it -> second;
	while (it != word_count.end ())
	{
		cout << it -> first << " " << it -> second << endl;
		++it;	
	}

	return 0;
	
}
