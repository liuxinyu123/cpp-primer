#include <iostream>
#include <stdexcept>

class ShortInt
{

public:
		ShortInt (int val = 0)
			:i (val) 
		{
			if (val < 0 || val > 255)
				throw std::out_of_range ("Bad ShortInt value");
		}
		operator int () const
		{
			return i;
		}
private:
		std::size_t i;
};

int main (int argc, char *argv[])
{
	ShortInt si;
	std::cout << si << std::endl;
	
	si = 5;
	std::cout << si << std::endl;

	int a = 2;
	a += si;
	std::cout << a << std::endl;

	si = 3.14;
	std::cout << si << std::endl;

	double b = 2.15;
	b += si;
	std::cout << b << std::endl;

	return 0;
}
