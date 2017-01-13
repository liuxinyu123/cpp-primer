#include <iostream>
#include <list>
#include <forward_list>
#include <array>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	std::list<int> iList = {23,43,54,342,343,22,12};

	auto val1 = *iList.begin();
	auto val2 = iList.front();

	if(val1 == val2)
		cout << "equal" << endl;
	cout << val1 << " " << val2 << endl;

	auto val3 = iList.back();
	auto val4 = *(--iList.end());
 
	cout << val3 << " " << val4 << endl;
	
	return 0;
}
