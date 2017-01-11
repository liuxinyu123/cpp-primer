#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <array>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	std::vector<string> strVec;
	std::vector<const char*> strVec2;
	std::array<int, 10> iArr1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::array<int, 10> iArr2 = {3};
	iArr1 = iArr2;
	iArr2 = {42, 423};
	cout << "The size of vector is : " << strVec.size() << " " << strVec2.size() << endl;
	strVec2.assign(10, "hello");
	strVec.assign(strVec2.cbegin(), strVec2.cend());

	for(const auto &elem : strVec)
		cout << elem << " ";
	cout << endl;

	for(const auto &elem : strVec2)
		cout << elem << " ";
	cout << endl;

	std::list<string> strList(1);
	strList.assign(10, "hi");

	std::list<string> strList1;
	strList1.assign(4, "good");
	cout << "The strList is: " << endl;
	for(const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	cout << "The strList1 is: " << endl;
	for(const auto &elem : strList1)
		cout << elem << " ";
	cout << endl;

	swap(strList, strList1);
	cout << "After swap: " << endl;
	cout << "The strList is: " << endl;
	for(const auto &elem : strList)
		cout << elem << " ";
	cout << endl;

	cout << "The strList1 is: " << endl;
	for(const auto &elem : strList1)
		cout << elem << " ";
	cout << endl;
	return 0;
}
