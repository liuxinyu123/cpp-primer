#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main (int argc, char *argv[])
{
	std::vector<int> iVec;
	iVec.push_back (23);
	iVec.push_back (3);
	iVec.push_back (31);
	iVec.push_back (-2);
	auto iVec2 = iVec;
	auto iVec3 = iVec;
	for (const auto &elem : iVec)
		std::cout << elem << " ";
	std::cout << std::endl;

	std::sort (iVec.begin (), iVec.end ());
	for (const auto &elem : iVec)
		std::cout << elem << " ";
	std::cout << std::endl;
	
	std::sort (iVec2.begin (), iVec2.end (), [] (int a, int b)
					{return a > b;});

	for (const auto &elem : iVec2)
		std::cout << elem << " ";
	std::cout << std::endl;

	std::sort (iVec3.begin (), iVec3.end (), std::greater<int> ());

	for (const auto &elem : iVec3)
		std::cout << elem << " ";
	std::cout << std::endl;

	return 0;

}
