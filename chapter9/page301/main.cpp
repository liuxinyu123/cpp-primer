#include <iostream>
#include <array>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	std::array<int, 10> iArr1;
	std::array<int, 10> iArr2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::array<int, 10> iArr3 = {3};

	for(const auto &elem : iArr1)
		cout << elem << " ";
	cout << endl;

	for(const auto &elem : iArr2)
		cout << elem << " ";
	cout << endl;

	for(const auto &elem : iArr3)
		cout << elem << " ";
	cout << endl;

	std::array<int, iArr2.size()> iArr2_copy(iArr2);

	for(const auto &elem : iArr2_copy)
		cout << elem << " ";
	cout <<endl;

	return 0;
}
