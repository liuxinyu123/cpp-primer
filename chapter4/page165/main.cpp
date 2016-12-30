#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc,char *argv[])
{
	vector<int> iVec;

	int value = 0;
	while(cin >> value)
		iVec.push_back(value);

	auto b = iVec.begin();
	while(b != iVec.end() && *b >= 0)
		++b;

	if(b == iVec.end())
		cout << "The vector is full of positive numbers! " << endl;
	else
		cout << "The first negitive number in the vector is : " << *b << endl;

	return 0;
}
