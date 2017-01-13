#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
	vector<int> iVec;

	for(int i = 0; i < 9; ++i)
		iVec.push_back(i);

	for(const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	auto begin = iVec.begin();
	//auto end = iVec.end();
	while(begin != iVec.end())
	{
		++begin;
		begin = iVec.insert(begin, 0);
		++begin;
	}

	for(const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;


	return 0;
}
