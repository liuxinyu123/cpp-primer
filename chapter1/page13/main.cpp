#include <iostream>

int main()
{
	int sum = 0, v = 0;

	while(std::cin >> v)
		sum += v;

	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}
