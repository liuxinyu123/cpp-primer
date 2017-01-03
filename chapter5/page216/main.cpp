#include <iostream>

int main()
{
	std::cout << __DATE__ << " " << __TIME__ << " " << __FILE__ << 
			" " << __LINE__ << " " << __func__ << std::endl;

	return 0;
}
