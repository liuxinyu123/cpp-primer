#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::back_inserter;
using std::fill_n;
using std::copy;
using std::begin;
using std::end;

int main (int argc, char *argv[])
{
	vector<int> iVec;
	auto it = back_inserter(iVec);

	fill_n(it, 10, 1);

	for (const auto &elem : iVec)
		cout << elem << " ";
	cout << endl;

	int a1[] = {23, 534, 2523, 54, 25, 23, 22,35};
	int a2[sizeof(a1) / sizeof (*a1)];

	copy(begin(a1), end(a1), begin(a2));

	for (auto it = begin (a2); it != end (a2); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;

}
