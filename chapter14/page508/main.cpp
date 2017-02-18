#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class ShortString
{

public:
		bool operator () (const std::string &s1, const std::string &s2)
		{
			return s1.size () < s2.size ();
		}

};

int main (int argc, char *argv[])
{
	std::vector<std::string> strVec({"hello", "world", "what", "are", "you", "doing"});
	auto strVec2 = strVec;

	for (const auto &elem : strVec)
		std::cout << elem << " ";
	std::cout << std::endl;

	std::stable_sort (strVec.begin (), strVec.end (), [] (const std::string &s1, const std::string& s2)
					{ return s1.size () < s2.size ();});

	for (const auto &elem : strVec)
		std::cout << elem << " ";
	std::cout << std::endl;

	std::stable_sort (strVec2.begin (), strVec2.end (), ShortString ());
	for (const auto &elem : strVec2)
		std::cout << elem << " ";
	std::cout << std::endl;

	return 0;
}

