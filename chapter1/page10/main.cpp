#include <iostream>

int main()
{
	int sum = 0, v = 1;

	while(v <= 10)
	{
		sum += v;
		++v;
	}

	std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;

	return 0;
}
