#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])//删除偶数元素，复制奇数元素
{
	vector<int> iVec;
	for(int i = 0; i < 10; ++i)
		iVec.push_back(i);

	for(const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	auto it = iVec.begin();
	while(it != iVec.end())
	{
		if(*it % 2)
		{
			iVec.insert(it, *it);
			it = it + 2;
		}
		else
			it = iVec.erase(it);
	}

	for(const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	return 0;
}
