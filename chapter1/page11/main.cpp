#include <iostream>

int main()
{
	int sum = 0;

	for(int i = 0; i <= 10; ++i)
		sum += i;

	std::cout << "Sum of 1 to 10 incursive is: " << sum << std::endl;

	return 0;
}
