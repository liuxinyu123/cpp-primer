#include <iostream>
#include <utility>

int main (int argc, char *argv[])
{
	int &&rr = 43;
	//int &&rr1 = rr;
	int &&rr2 = std::move(rr);

	std::cout << rr << " " << rr2 << std::endl;

	return 0;
}
