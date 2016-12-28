#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

int main()
{
	int arr[10] = {23,42,534,232,421,22,44,12,5};

	int *beg = std::begin(arr);
	int *last = std::end(arr);

	for(;beg != last; ++beg)
		cout << *beg << " " ;
	cout << endl;

	return 0;
}
