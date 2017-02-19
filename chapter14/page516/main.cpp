#include <iostream>
#include <stdexcept>

class SmallInt
{

public:
		SmallInt (int val = 0)
			:i (val)
		{
			if (val < 0 || val > 255)
				throw std::out_of_range ("Invalid");			
		}
		explicit operator int () const
		{
			return i;
		}
private:
		std::size_t i;

};
int main (int argc, char *argv[])
{
	SmallInt si;
	si = 4;

	int a = 2;
	a += static_cast<int> (si);
	
	std::cout << a << std::endl;

	return 0;
}
