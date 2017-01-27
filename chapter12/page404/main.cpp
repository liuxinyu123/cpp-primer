#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	vector<string> v1;

	{
		vector<string> v2 = {"hello", "world"};
		v1 = v2;//v1 和 v2 元素相互独立	
	}

	for (const auto &elem : v1)
		cout << elem << " ";
	cout << endl;

	return 0;
}
