#include <iostream>
#include <string>

int Compare (const std::string &s1, const std::string &s2)
{
	if (s1 < s2)
		return -1;
	if (s2 < s1)
		return 1;
	return 0;
}

int Compare (int v1, int v2)
{
	if (v1 < v2)
		return -1;
	if (v2 < v1)
		return 1;
	return 0;
}

template <typename T>
int Compare1 (const T &v1, const T &v2)
{
	if (v1 < v2)
		return -1;
	if (v2 < v1)
		return 1;
	return 0;
}

int main (int argc, char *argv[])
{
	std::cout << Compare ("hello", "helle") << std::endl;
	std::cout << Compare (23, 2) << std::endl;
	std::cout << Compare1<std::string> ("hello", "helle") << std::endl;
	std::cout << Compare1<int> (23, 2) << std::endl;

	return 0;
}
