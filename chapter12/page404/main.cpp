#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	vector<string> v1;

	{
		vector<string> v2 = {"hello", "world"};
		v1 = v2;
	}


	return 0;
}
