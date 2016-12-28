#include <iostream>
#include <vector>

using std::vector;

int main()
{
	vector<int> iVec;
	
	for(int i = 0; i < 100; i += 2)
		iVec.push_back(i);
	
	for(auto i : iVec)	
		std::cout << i << " ";
		
	std::cout << std::endl;

	auto b = iVec.cbegin(), e = iVec.cend();
	auto mid = b + (e - b) / 2;
	int sought = 21;

	while(mid != e && *mid != sought)
	{
		if(sought < *mid)
			e = mid;
		else
			b = mid + 1;

		mid = b + (e - b) / 2;
	}

	if(*mid == sought)
	{
		std::cout << "Founded!" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Not Founded!" << std::endl;
		return -1;
	}
}
