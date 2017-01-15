#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
	vector<int> iVec;
	iVec.reserve(4);

	cout << "The capacity is : " << iVec.capacity() << " The size is : " << iVec.size() << endl;
	for(int i = 0; i < 24; ++i)
		iVec.push_back(i);

	cout << "The capacity is : " << iVec.capacity() << " The size is : " << iVec.size() << endl;
	iVec.shrink_to_fit();

	cout << "The capacity is : " << iVec.capacity() << " The size is : " << iVec.size() << endl;

	iVec.reserve(50);
	while(iVec.size() != iVec.capacity())
		iVec.push_back(0);
	cout << "The capacity is : " << iVec.capacity() << " The size is : " << iVec.size() << endl;
	
	iVec.push_back(23);
	cout << "The capacity is : " << iVec.capacity() << " The size is : " << iVec.size() << endl;


	return 0;
}
