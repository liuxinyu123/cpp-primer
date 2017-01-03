#include <iostream>

using std::cout;
using std::endl;

long long Factorial(unsigned int value);

int main(int argc, char *argv[])
{
	for(unsigned int i = 0; i < 10; ++i)
		cout << i << "! = " << Factorial(i) << endl;

	return 0;
}

long long Factorial(unsigned int value)
{
	if(value > 1)
		return Factorial(value - 1) * value;
	else
		return 1;
}

