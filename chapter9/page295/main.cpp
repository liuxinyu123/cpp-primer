#include <list>
#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main()
{
	std::list<int> iList{2,34,32,43,233,43};
	std::list<int>::value_type value = *(iList.cbegin());

	cout << "The list is: " << endl;
	for(const auto &i : iList)
		cout << i << " ";
	cout << endl;
	
	std::list<int>::reference end_element = *(iList.end());
	end_element = 11;
	//std::list<int>::difference_type sz = iList.end() - iList.begin();
	
	cout << "The list is: " << endl;
	for(const auto &i : iList)
		cout << i << " ";
	cout << endl;
	cout << "The first element is:" << value << endl;
	//cout << "The list's length is: " << sz << endl;

	return 0;

}
