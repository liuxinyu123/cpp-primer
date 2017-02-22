#include <iostream>
#include <functional>

template <typename T>
inline int Compare (const T &v1, const T &v2)
{
	if (std::less<T> () (v1, v2))
		return -1;
	if (std::less<T> () (v2, v1))
		return 1;
	return 0;
}

int main (int argc, char *argv[])
{
	std::cout << Compare (1, 4) << std::endl;
	std::cout << Compare ("hello", "hellz") << std::endl;
	std::cout << Compare ("ok", "ok") << std::endl;

	return 0;
}
