#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main(int argc, char *argv[])
{
	forward_list<int> iforList;
	for(int i = 0; i < 9; ++i)
		iforList.insert_after(iforList.before_begin(),i);
	iforList.insert_after(iforList.begin(),10,2);

	for(const auto &elem : iforList)
		cout << elem << " ";
	cout << endl;

	auto prev = iforList.before_begin();
	auto curr = iforList.begin();

	while(curr != iforList.end())
	{
		if(*curr % 2)
			curr = iforList.erase_after(prev);
		else
		{
			prev = curr;
			++curr;
		}
	}

	for(const auto &elem : iforList)
		cout << elem << " ";
	cout << endl;

	return 0;

	
}
